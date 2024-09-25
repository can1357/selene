#include "plpd.hpp"
#include "mirror.hpp"

namespace su::plpd {
	static constexpr bool mm_debug = is_debug_build() && false;
	static ia32::pt_entry_64 local_pd_template[ 512 ] = {};

	// Emulation.
	//
	void memory::emu_invlpg( any_ptr ptr ) {
		// Redirect to INVPCID version if available.
		//
		if ( host_has_invpcid() ) {
			return emu_invpcid( ia32::invpcid_type::individual, vmm_cr3.pcid, ptr );
		}

		// Clear transient.
		//
		if ( auto pxi = mem::px_index( ptr ); transient_pxes[ pxi ] ) {
			directory.entries[ pxi ].flags = 0;
			transient_pxes[ pxi ] = false;
		}

		// Set pending flush on all.
		//
		set_lff( lflush_guest | lflush_local );
	}
	void memory::emu_invpcid( ia32::invpcid_type ty, uint64_t pcid, any_ptr ptr ) {
		// Handle full flush.
		//
		if ( ty == ia32::invpcid_type::global || ty == ia32::invpcid_type::local ) {
			flush_transient();
			pull_lff( lflush_guest | lflush_iso | lflush_local | lflush_transient );
			return;
		}

		// Swap PCID with a different one.
		//
		uint64_t pcid_a, pcid_b;
		if ( pcid == guest_cr3.pcid ) {
			pcid_a = pcid_local;
			pcid_b = pcid_iso;
		} else if ( pcid == pcid_local ) {
			pcid_a = guest_cr3.pcid;
			pcid_b = pcid_iso;
		} else if ( pcid == pcid_iso ) {
			pcid_a = guest_cr3.pcid;
			pcid_b = pcid_local;
		}

		// Clear transient.
		//
		if ( auto pxi = mem::px_index( ptr ); transient_pxes[ pxi ] ) {
			directory.entries[ pxi ].flags = 0;
			transient_pxes[ pxi ] = false;
			ia32::invpcid( ia32::invpcid_type::context, pcid_local );
		}

		// Handle context & individual.
		//
		switch ( ty ) {
			case ia32::invpcid_type::individual: {
				ia32::invpcid( ia32::invpcid_type::individual, pcid_a, ptr );
				ia32::invpcid( ia32::invpcid_type::individual, pcid_b, ptr );
				break;
			}
			case ia32::invpcid_type::context: {
				ia32::invpcid( ia32::invpcid_type::context, pcid_a );
				ia32::invpcid( ia32::invpcid_type::context, pcid_b );
				break;
			}
			default:
				break;
		}
	}
	
	// Flushes transient pages.
	//
	void memory::flush_transient() {
		if constexpr( mm_debug ) xstd::log( "-> flush_transient()\n" );
		pull_lff( lflush_transient );

		// Enumerate and erase every transient page.
		//
		xstd::bit_enum( transient_pxes, [ & ] ( bitcnt_t j ) {
			directory.entries[ j ].flags = 0;
		} );
		transient_pxes.clear();
		has_transient = false;

		// Flush local TLB.
		//
		set_lff( lflush_local );
	}

	// Lazy mapping.
	//
	bool memory::lazy_map( size_t pxi ) {
		if ( is_shared() ) [[unlikely]]
			return false;
	
		if constexpr ( mm_debug ) xstd::log( "-> lazy_map(%llx)\n", pxi );
		auto sys_entry = pm::px::from_pfn( guest_cr3.address_of_page_directory )->entries[ pxi ];

		// Disallow self-referencing entry.
		//
		if ( pxi == mem::self_ref_index() || sys_entry.page_frame_number == guest_cr3.address_of_page_directory ) {
			return false;
		}

		// Disallow overriding required PXI.
		//
		if ( pxi == mem::px_index( iso_pt_va ) ) {
			sys_entry = iso_pt_va[ mem::px_index( iso_pt_va ) ];
		}
		
		// If mapping system image, use trapped version.
		//
		if ( sys_entry.page_frame_number == iso_pt_va[ kernel_mirror.pxi ].page_frame_number ) {
			sys_entry.page_frame_number = kernel_mirror.pxe.address >> 12;
		}

		// If not hostile:
		//
		bool sticky = false;
		if ( !was_hostile ) {
			// If not valid sticky mapping:
			//
			auto fl = mem::get_pxi_flags( pxi );
			if ( fl & pxf_no_sticky_flags ) {
				// If not valid transient either, fail.
				//
				if ( !( fl & pxf_transient_flags ) ) 
					return false;
			} else {
				sticky = true;
			}
		}

		// Reference the entries.
		//
		auto& vm_entry = directory.entries[ pxi ];
		auto  prev_entry = vm_entry;

		// Borrow the PTE.
		//
		pm::borrow_ptes( &vm_entry, &sys_entry );

		// If changed:
		//
		constexpr uint64_t cmp_mask = ~uint64_t( PT_ENTRY_64_DIRTY_FLAG | 
															  PT_ENTRY_64_ACCESSED_FLAG | 
															  PT_ENTRY_64_IGNORED_1_FLAG | 
															  PT_ENTRY_64_IGNORED_2_FLAG | 
															  PT_ENTRY_64_PROTECTION_KEY_FLAG );
		bool changed = ( prev_entry.flags ^ vm_entry.flags ) & cmp_mask;

		// Set bitmap.
		//
		bool transient_present = !sticky && vm_entry.present;
		has_transient |= transient_present;
		transient_pxes[ pxi ] = transient_present;

		// Flush local TLB if changed.
		//
		if ( changed ) set_lff( lflush_local );
		return changed && transient_present;
	}

	// Policy upgrades.
	//
	void memory::change_policy( policy pol ) {
		ia32::cr3 vmm_prev = vmm_cr3;
		ia32::cr3 vmm_new =  swap( read_guest_cr3(), pol, {} );
		if ( vmm_prev.address_of_page_directory != vmm_new.address_of_page_directory ) {
			ia32::write_cr3( vmm_new );
		}
	}

	// Resets local directory.
	//
	void memory::reset_ld( bool hostile, std::initializer_list<any_ptr> ptr_hints ) {
		// Write the template if changed between hostile/non-hostile.
		//
		if ( hostile != was_hostile || !origin_pfn ) [[unlikely]] {
			memcpy( &directory.entries[ 256 ], &local_pd_template[ hostile ? 0 : 256 ], 256 * 8 );
		}

		// If hostile, map ptr hints.
		//
		if ( hostile ) {
			for ( auto hint : ptr_hints ) {
				auto pxi = mem::px_index( hint );
				if ( !directory.entries[ pxi ].present ) {
					lazy_map( pxi );
				}
			}
		}

		// Flush TLB.
		//
		set_lff( lflush_local );
	}

	// Sets up VM memory.
	//
	void memory::setup_vm( policy pol, std::initializer_list<any_ptr> ptr_hints ) {
		// VM will execute in local directory.
		//
		vm_cr3.flags = 0;
		vm_cr3.address_of_page_directory = xstd::distance( mem::get_phys_base(), &directory ) >> 12;
		if ( use_pcid ) {
			vm_cr3.pcid =          pcid_local;
		}

		// We'll do a local directory reset if first setup or previously or newly hostile directory.
		//
		bool ld_reset = was_hostile || pol == policy::hostile || !origin_pfn;

		// If we have transient pages, reset if we'll do a ld reset, if directory is now mismatching or if there's a pending reset.
		//
		if ( has_transient && ( ld_reset || origin_pfn != guest_cr3.address_of_page_directory || pull_lff( lflush_transient ) ) ) {
			if constexpr ( mm_debug ) xstd::log( "-> flush_transient\n" );
			flush_transient();
		}

		// Reset local directory if needed.
		//
		if ( ld_reset ) {
			if constexpr ( mm_debug ) xstd::log( "-> reset VM-LD\n" );
			reset_ld( pol == policy::hostile, ptr_hints );
		} 

		// Set the new local ID.
		//
		was_hostile = pol == policy::hostile;
		origin_pfn = guest_cr3.address_of_page_directory;
	}

	// Enters, swaps and exits page tables.
	//
	ia32::cr3 memory::swap( ia32::cr3 value, policy pol, std::initializer_list<any_ptr> ptr_hints ) {
		ia32::cr3 vmm = vmm_cr3;

		// Determine if we have to invalidate the local PXE.
		//
		bool invalidated = false;
		if ( !value.preserve_tlb ) {
			invalidated = true;
		} else {
			invalidated = guest_cr3.address_of_page_directory != value.address_of_page_directory;
		}

		// If policy or CR3 actually changes:
		//
		if ( policy( current_policy ) != pol || invalidated ) {
			// Reset the manager and reload VMM cr3.
			//
			enter( value, pol, ptr_hints );
			vmm = vmm_cr3;
		} 
		// Flush transient pages.
		//
		else {
			if ( has_transient ) flush_transient();
			else set_lff( lflush_local );
		}

		// Consume lflush_iso on vmm_cr3.
		if ( vmm.pcid == pcid_iso && pull_lff( lflush_iso ) ) {
			vmm.preserve_tlb =     false; // Flush once.
			vmm_cr3.preserve_tlb = true;
		}
		return vmm;
	}
	void memory::enter( ia32::cr3 value, policy pol, std::initializer_list<any_ptr> ptr_hints ) {
		current_policy =         ( uint32_t ) pol;
		guest_cr3 =              value;
		remote_pm =              pm::px::from_pfn( guest_cr3.address_of_page_directory );
		guest_cr3.preserve_tlb = use_pcid;

		// If shared, take the short path.
		//
		if ( pol == policy::shared ) {
			local_pm = remote_pm;
			vmm_cr3 = guest_cr3;
			vm_cr3 = {};
			return;
		}

		// Setup VM.
		//
		local_pm = &directory;
		setup_vm( pol, ptr_hints );

		// If split, VMM executes in guest pages, otherwise in isolated pages.
		//
		if ( pol == policy::split ) {
			vmm_cr3 = guest_cr3;
		} else {
			vmm_cr3 = iso_pt_cr3;
		}
		if constexpr ( mm_debug ) xstd::log( "-> enter(%d) => [%p, %p, %p]\n", ( int ) pol, guest_cr3.flags, vm_cr3.flags, vmm_cr3.flags );
	}
	FORCE_INLINE void memory::roundtrip() {
		if ( use_pcid ) {
			vmm_cr3.preserve_tlb = true;
		}
		if constexpr ( mm_debug ) xstd::log( "-> roundtrip() => [%p, %p, %p]\n", guest_cr3.flags, vm_cr3.flags, vmm_cr3.flags );
	}
	FORCE_INLINE void memory::exit() {
		bool set_cr3 = is_hostile();

		// Consume lflush_guest on guest_cr3.
		//
		if ( pull_lff( lflush_guest ) ) {
			guest_cr3.preserve_tlb = false;
			set_cr3 = true;
		} else if ( use_pcid ) {
			guest_cr3.preserve_tlb = true;
		}

		if ( set_cr3 ) {
			if constexpr ( mm_debug ) xstd::log( "-> exit() => %p\n", guest_cr3.flags );
			ia32::write_cr3( guest_cr3 );
		}
	}
	FORCE_INLINE ia32::cr3 memory::get_cr3_for_resume( bool gsync ) {
		// If shared, no-op.
		//
		ia32::cr3 result = vm_cr3;
		if ( !result.flags )
			return result;

		// Calculate gflags.
		//
		if ( gsync ) {
			uint8_t g_flags = glb_flush_pending.exchange( 0 );
			uint32_t timestamp = *( uint32_t* ) &ki::tb_flush_time_stamp;
			if ( std::exchange( tlb_flush_timestamp, timestamp ) != timestamp ) {
				g_flags |= gflush_utlb;
			}

			// If any TLB was invalidated, flush local directory.
			//
			if ( g_flags & ( gflush_ktlb | gflush_utlb ) ) [[unlikely]] {
				if ( has_transient ) flush_transient();
				else set_lff( lflush_local );

				// If kTLB was invalidated, flush iso as well.
				//
				if ( g_flags & gflush_ktlb ) {
					set_lff( lflush_iso );
				}
			}
		}

		// If using PCID:
		// 
		if ( use_pcid ) {
			// Consume lflush_local on vm_cr3.
			//
			result.preserve_tlb = !pull_lff( lflush_local );

			// Consume lflush_iso on vmm_cr3 if isolated.
			//
			if ( vmm_cr3.pcid == pcid_iso ) {
				vmm_cr3.preserve_tlb = !pull_lff( lflush_iso );
			}
		}
		if constexpr ( mm_debug ) xstd::log( "-> get_cr3_for_resume(%d) = %p\n", gsync ? 1 : 0, result.flags );
		return result;
	}

	// Initializes the PLPD.
	//
	void init() {
		// Setup PCIDs.
		//
		if ( *( uint8_t* ) &ki::flush_pcid ) {
			pcid_um = 1;
			pcid_km = 2;
		}

		// Create the CR3.
		//
		auto iso_pt_pfn = mem::allocate_physical_resident( 1 );
		iso_pt_va = mem::get_phys_base() + ( iso_pt_pfn << 12 );
		iso_pt_cr3.address_of_page_directory = iso_pt_pfn;
		if ( use_pcid ) {
			iso_pt_cr3.preserve_tlb = true;
			iso_pt_cr3.pcid =         pcid_iso;
		}

		// Initialize the table.
		//
		mem::phys_ptr<uint64_t> source_pt{ ia32::read_cr3().address_of_page_directory << 12 };
		memset( &iso_pt_va[ 0 ],   0,                 256 * 8 );
		memcpy( &iso_pt_va[ 256 ], &source_pt[ 256 ], 256 * 8 );

		// Fixup self-ref index.
		//
		iso_pt_va[ mem::self_ref_index() ].page_frame_number = iso_pt_cr3.address_of_page_directory;

		// Remove session and process mappings.
		//
		for ( size_t i = 256; i != 512; i++ )
			if ( mem::get_pxi_flags( i ) & ( mem::va_session | mem::va_process ) )
				iso_pt_va[ i ].flags = 0;

		// Setup template, low-half is mandatory, upper-half is well-behaved.
		//
		for ( size_t i = 256; i != 512; i++ )
			if ( !( mem::get_pxi_flags( i ) & pxf_no_sticky_flags ) )
				local_pd_template[ i ] = iso_pt_va[ i ];
		local_pd_template[ kernel_mirror.pxi ] =                   iso_pt_va[ kernel_mirror.pxi ];
		local_pd_template[ kernel_mirror.pxi ].page_frame_number = kernel_mirror.pxe.address >> 12;
		
		// This PXE has VMCS and the gates, we need it even if in hostile CR3.
		//
		auto required_pxi = mem::px_index( iso_pt_va );
		local_pd_template[ required_pxi - 256 ] = iso_pt_va[ required_pxi ];
		local_pd_template[ required_pxi ] =       iso_pt_va[ required_pxi ];
	}
};