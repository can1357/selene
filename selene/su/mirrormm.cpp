#include "mirrormm.hpp"
#include "mirror.hpp"
#include "../utility/memory.hpp"
#include "../utility/memory_isolation.hpp"
#include "../hooks/patch_manager.hpp"
#include "../utility/safe_wrappers.hpp"
#include "plpd.hpp"

// Implements a "fake" Mm interface interchangeable with NT API, that can be used to isolate host memory state.
//
namespace su::mmm
{
	/*
	PTE:
		- Should hide su memory (maybe just the NX-ness?)
		- Should hide the NX'ness of shadow region
		- Should hide the pfn swaps

	PFN:
		- Hide su memory


	*/

	// Debug info.
	//
	static void dbg_pte( ia32::pt_entry_64 pte ) {
		std::string result = "[";
		result += pte.accessed ? 'A' : ' ';
		result += pte.dirty ? 'D' : ' ';
		result += pte.large_page ? 'L' : ' ';
		result += pte.write ? 'W' : ' ';
		result += pte.global ? 'G' : ' ';
		result += pte.execute_disable ? ' ' : 'X';
		result += "]";
		if ( pte.present ) {
			result += mem::pa_name( pte.page_frame_number << 12 );
		} else {
			result += "NP";
		}
		xstd::log( "PTE: [%llx] %s\n", ( ( uint64_t ) pte.page_frame_number ) << 12, result.c_str() );
	}
	static void dbg_pte_rd( const ia32::pt_entry_64* pte ) {
		xstd::log( "&PTE: [%llx-%p] %s\n", mem::get_physical_address( pte ), pte, mem::va_name( pte ) );
		dbg_pte( *pte );
	}

	// Iterates the address given as the iterator in page boundaries and invokes the enumerator
	// using the [Iterator, Aux Iterator, Size in Page] tuple. Stops if the enumerator returns true.
	// Returns whether or not the page enumeration was stopped manually.
	//
	template<typename F>
	FORCE_INLINE static auto enum_page_boundaries( any_ptr iterator, any_ptr aux, size_t length, F&& fn )
	{
		using R = decltype( fn( iterator, aux, length ) );

		any_ptr end = iterator + length;
		while ( iterator < end )
		{
			size_t count = std::min( end, xstd::align_up( iterator + 1, 0x1000 ) ) - iterator;
			if constexpr ( xstd::Void<R> )
			{
				fn( iterator, aux, count );
			}
			else
			{
				if ( fn( iterator, aux, count ) )
					return true;
			}
			iterator += count;
			aux += count;
		}
		
		if constexpr ( !xstd::Void<R> )
			return false;
	}

	// Picks a memory manager given access flags and the pointer.
	//
	FORCE_INLINE static pm::px* pick_mm( plpd::memory* mem, any_ptr guest, bool is_write, uint16_t vop_flags ) {
		( void ) is_write;
		if ( !mem ) return nullptr;

		auto pxi = mem::px_index( guest );
		pm::px* px = &mem->pm();
		auto pxe = mem->get_pxe( pxi );
		if ( !( vop_flags & mem::pw_assert_ex ) && pxe.page_frame_number == ( kernel_mirror.pxe.address >> 12 ) ) {
			px = pm::px::from_pfn( plpd::iso_pt_cr3.address_of_page_directory );
		} else if ( !pxe.present ) {
			px = &mem->vpm();
		}
		return px;
	}

	// Primitives for generic use.
	//
	static ia32::pt_entry_64 read_pte( const ia32::pt_entry_64* host_pte )
	{
		//xstd::log( "---- Read PTE -----\n" );
		//dbg_pte_rd( host_pte );
		//xstd::log( "-------------------\n" );

		// Calculate the VA associated.
		//
		auto result = *host_pte;
		auto [va, depth] = mem::rlookup_pte( host_pte );

		// Fix up secrets.
		//
		if ( pte_secret && result.ignored_2 == pte_secret ) {
			result.ignored_2 = 0;
			result.present =   true;
		}

		// Read as is if not at a valid page-level entry.
		//
		if ( !result.present || ( depth && !result.large_page ) )
			return result;

		// Hide if SU memory.
		//
		auto desc = mem::iso::try_resolve( result.page_frame_number );
		if ( desc && mem::iso::is_restricted( desc->type ) ) [[unlikely]] {
			// TODO: How do we log to VMCS from here?
			if constexpr ( !is_production_build() ) {
				xstd::log( "Guest is reading PTEs of private ranges: %s\n", *desc );
			}
			return { .flags = 0 };
		} else if ( mem::get_phys_base() <= va && va <= ( mem::get_phys_base() + ( mem::max_pfn() << 12 ) ) ) {
			// TODO: How do we log to VMCS from here?
			if constexpr ( !is_production_build() ) {
				xstd::log( "Guest is reading PTEs of phys ranges: %p\n", va );
			}
			return { .flags = 0 };
		}

		// If range is shadowed:
		//
		if ( auto pxe = kernel_mirror.get_pxe( mem::px_index( va ) ) )
		{
			auto [vpte, vd] = pxe->lookup( va );
			if ( vpte->present )
			{
				// TODO: How do we log to VMCS from here?
				//if constexpr ( !is_production_build() )
				//	xstd::log( "Guest is reading PTEs of shadow ranges %p.\n", va );

				// Copy the use flags.
				//
				result.dirty = vpte->dirty;
				result.accessed = vpte->accessed;

				// Restore the access rights.
				//
				auto* dets = pte_details( vpte );
				result.write =           dets->was_w;
				result.execute_disable = dets->was_xd;

				// If shadowed, copy the PFN.
				//
				if ( dets->shadowed )
					result.page_frame_number = vpte->page_frame_number;
			}
		}
		
		// Return the result.
		//
		return result;
	}
	static void write_pte( ia32::pt_entry_64* write_at, ia32::pt_entry_64* host_pte, ia32::pt_entry_64 value, plpd::memory* vmem )
	{
		( void ) write_at; ( void ) vmem; ( void ) host_pte;
		//xstd::log( "---- Write PTE -----\n" );
		//dbg_pte_rd( host_pte );
		//dbg_pte( value );
		//xstd::log( "-------------------\n" );
		// TODO:
		*write_at = value;
	}

	static void read_physical_single_page( uint64_t phys_src, any_ptr dst, size_t count, plpd::memory* mem )
	{
		dassert( !( ( ( phys_src + count - 1 ) ^ phys_src ) >> 12 ) );
		( void ) mem;

		auto va = mem::get_virtual_address( phys_src );
		auto px = mem::px_index( va );
		//xstd::log( "read_physical(%llx, %llu) => %p\n", phys_src, count, va );

		// If hooked, redirect to shadow pages.
		//
		if ( px == mem::get_driver_px() ) {
			if ( auto v = hook::lookup_shadow_pfn( phys_src >> 12 ) ) {
				// TODO: How do we log to VMCS from here?
				if constexpr ( !is_production_build() )
					xstd::log( "Guest is reading from shadow ranges.\n" );
				memcpy( dst, mem::phys_ptr<>{ ( *v << 12 ) | ( phys_src & 0xFFF ) }, count );
				return;
			}
		}

		// If in PTE region:
		//
		if ( px == mem::self_ref_index() ) [[unlikely]] {
			for ( auto it = va; it != ( va + count ); ) {
				size_t length = std::min<size_t>( 8, ( va + count ) - it );
				auto pte = read_pte( any_ptr{ it & ~7 } );
				memcpy( dst, any_ptr{ &pte } + ( it & 7 ), length );
				it += length;
			}
			return;
		}

		// If reading private data, log and pretend to be I/O space.
		//
		if ( auto desc = mem::iso::try_resolve( phys_src >> 12 ) ) [[unlikely]] {
			if ( mem::iso::is_restricted( desc->type ) ) {
				// TODO: How do we log to VMCS from here?
				if constexpr( !is_production_build() )
					xstd::log( "Guest is reading from private ranges: %s\n", *desc );
				memset( dst, 0xFF, count );
				return;
			}
		}

		// Finally issue the copy.
		//
		memcpy( dst, mem::phys_ptr<>{ phys_src }, count );
	}
	static void write_physical_single_page( uint64_t phys_dst, any_ptr src, size_t count, plpd::memory* mem )
	{
		dassert( !( ( ( phys_dst + count - 1 ) ^ phys_dst ) >> 12 ) );

		auto va = mem::get_virtual_address( phys_dst );
		auto px = mem::px_index( va );
		//xstd::log( "write_physical(%llx, %llu) => %p\n", phys_dst, count, va );

		// If hooked, write to both pages.
		//
		if ( px == mem::get_driver_px() ) {
			if ( auto v = hook::lookup_pair_pfn( phys_dst >> 12 ) ) {
				// TODO: How do we log to VMCS from here?
				if constexpr ( !is_production_build() )
					xstd::log( "Guest is writing to shadow ranges\n" );
				memcpy( mem::phys_ptr<>{ ( v->first << 12 ) | ( phys_dst & 0xFFF ) }, src, count );
				memcpy( mem::phys_ptr<>{ phys_dst }, src, count );
				return;
			}
		}

		// If writing over the top-level PXE, flush shadow pages.
		//
		if ( mem && ( phys_dst >> 12 ) == mem->guest_cr3.address_of_page_directory ) {
			mem->flush_transient();
		}

		// If in PTE region:
		//
		if ( px == mem::self_ref_index() ) [[unlikely]] {
			auto va2 = mem::get_phys_base() + phys_dst;
			for ( auto it = va; it != ( va + count ); ) {
				size_t length = std::min<size_t>( 8, ( va + count ) - it );
				auto host_pte = any_ptr{ it & ~7 };
				if ( ( it & 7 ) || length != 8 ) {
					// todo: i dont think this is rite
					auto pte = read_pte( host_pte );
					memcpy( any_ptr{ &pte } + ( it & 7 ), src, length );
					write_pte( va2 + ( host_pte - it ), host_pte, pte, mem );
				} else {
					write_pte( va2 + ( host_pte - it ), host_pte, *( const ia32::pt_entry_64* ) src, mem );
				}
				it += length;
			}
			return;
		}

		// If reading private data, log and pretend to be I/O space.
		//
		if ( auto desc = mem::iso::try_resolve( phys_dst >> 12 ) ) [[unlikely]] {
			if ( mem::iso::is_restricted( desc->type ) ) {
				// TODO: How do we log to VMCS from here?
				if constexpr( !is_production_build() )
					xstd::log( "Guest is writing to private ranges: %s\n", *desc );
				return;
			}
		}

		// Finally issue the copy.
		//
		memcpy( mem::phys_ptr<>{ phys_dst }, src, count );
	}

	void read_physical( any_ptr dst, uint64_t phys_src, size_t count, plpd::memory* mem )
	{
		enum_page_boundaries( phys_src, dst, count, [ & ] ( auto dst, auto src, auto n ) FORCE_INLINE { return read_physical_single_page( dst, src, n, mem ); } );
	}
	void write_physical( uint64_t phys_dst, any_ptr src, size_t count, plpd::memory* mem )
	{
		enum_page_boundaries( phys_dst, src, count, [ & ] ( auto dst, auto src, auto n ) FORCE_INLINE { return write_physical_single_page( dst, src, n, mem ); } );
	}

	// Jailed page walking primitives.
	//
	struct jail_walk_v : mem::iwalker<jail_walk_v> {
		struct parameters : mem::walk_parameters {
			plpd::memory* mem;
		};
		static void phys_write( const parameters& param, uint64_t dst_pa, any_ptr src_va, size_t n ) {
			write_physical( dst_pa, src_va, n, param.mem );
		}
		static void phys_read( const parameters& param, any_ptr dst_va, uint64_t src_pa, size_t n ) {
			read_physical( dst_va, src_pa, n, param.mem );
		}
		FORCE_INLINE static bool next_pte( jail_walk_v* s, const parameters& param, mem::pt_level level ) {
			s->ppte = get_pte( s->virtual_address, level );
			return true;
		}
		COLD static bool try_page_in( jail_walk_v*, const parameters&, any_ptr va, mem::walk_status status ) {
			// Create the #PF descriptor.
			//
			ia32::page_fault_exception ex = { .flags = 0 };
			ex.present = status != mem::walk_status::not_present;
			ex.write =   status == mem::walk_status::wp;

			// Lower IRQL to APC_LEVEL, virtual fault.
			//
			ia32::set_irql( APC_LEVEL );
			auto page_in_status = mem::virtual_fault( va, ex );
			ia32::set_irql( IPI_LEVEL );

			// Return true if succesful.
			//
			return page_in_status.success();
		}
	};
	struct jail_walk_p : mem::iwalker<jail_walk_p> {
		struct parameters : mem::walk_parameters {
			// Base of physical memory.
			//
			any_ptr  phys_base = mem::get_phys_base();

			// Parameters.
			//
			plpd::memory* mem;
			ia32::cr3     directory;
		};
		static void phys_write( const parameters& param, uint64_t dst_pa, any_ptr src_va, size_t n ) {
			write_physical( dst_pa, src_va, n, param.mem );
		}
		static void phys_read( const parameters& param, any_ptr dst_va, uint64_t src_pa, size_t n ) {
			read_physical( dst_va, src_pa, n, param.mem );
		}
		FORCE_INLINE static bool next_pte( jail_walk_p* s, const parameters& param, mem::pt_level level ) {
			ia32::pt_entry_64* table;
			if ( level == mem::pxe_level ) {
				table = param.phys_base + ( param.directory.address_of_page_directory << 12 );
			} else {
				table = param.phys_base + ( s->value.page_frame_number << 12 );
			}
			s->ppte = &table[ pt_index( s->virtual_address, level ) ];
			return true;
		}
	};
	ia32::mem::vm_result read_virtual( any_ptr dst, any_ptr guest_src, size_t count, uint16_t vop_flags, plpd::memory* mem ) {
		// Pick memory manager.
		//
		pm::px* px = pick_mm( mem, guest_src, false, vop_flags );
		//xstd::log( "read_virtual2(%p, %p, %x, %x, %p)\n", dst, guest_src, count, uint32_t( vop_flags ), mem );
		//xstd::log( "pm::get_current_px(): %p\n", pm::get_current_px() );
		//xstd::log( "target:               %p (%llx)\n", px, mem::get_pfn( px ) );
		//xstd::log( "cr3.pfn:              %llx\n", ( uint64_t ) ia32::read_cr3().address_of_page_directory );
		//xstd::log( "px[selfref].pfn:      %llx\n", ( uint64_t ) pm::get_current_px()->entries[ mem::self_ref_index() ].page_frame_number );

		// Clear OS paging flag if above APC_LEVEL.
		//
		ia32::scope_irql<IPI_LEVEL, true> irql{};
		if ( vop_flags & mem::pw_os_paging ) {
			if ( !ia32::interrupts_enabled() || irql.prev > APC_LEVEL ) {
				vop_flags ^= mem::pw_os_paging;
			}
		}

		// Decide between virtual and physical read.
		//
		if ( px ) {
			auto cur_px = pm::px::from_pfn( pm::get_current_px()->entries[ mem::self_ref_index() ].page_frame_number );
			if ( cur_px.get() != px ) [[unlikely]] {
				//xstd::log( "using directory %llx\n", ( uint64_t ) xstd::distance( mem::get_phys_base(), px ) >> 12 );
				return mem::vm_read<jail_walk_p>(
					dst, guest_src, count,
					{ .mem = mem, .directory = ia32::cr3{ .address_of_page_directory = ( uint64_t ) xstd::distance( mem::get_phys_base(), px ) >> 12 } },
					vop_flags
				);
			}
		}

		//xstd::log( "using virtual map\n" );
		return mem::vm_read<jail_walk_v>( dst, guest_src, count, { .mem = mem }, vop_flags );
	}
	ia32::mem::vm_result write_virtual( any_ptr guest_dst, any_ptr src, size_t count, uint16_t vop_flags, plpd::memory* mem ) {
		// Pick memory manager.
		//
		pm::px* px = pick_mm( mem, guest_dst, true, vop_flags );
		//xstd::log( "write_virtual2(%p, %p, %x, %x, %p)\n", guest_dst, src, count, uint32_t( vop_flags ), mem );
		//xstd::log( "pm::get_current_px(): %p\n", pm::get_current_px() );
		//xstd::log( "target:               %p (%llx)\n", px, mem::get_pfn( px ) );
		//xstd::log( "cr3.pfn:              %llx\n", ( uint64_t ) ia32::read_cr3().address_of_page_directory );
		//xstd::log( "px[selfref].pfn:      %llx\n", ( uint64_t ) pm::get_current_px()->entries[ mem::self_ref_index() ].page_frame_number );

		// Clear OS paging flag if above APC_LEVEL.
		//
		ia32::scope_irql<IPI_LEVEL, true> irql{};
		if ( vop_flags & mem::pw_os_paging ) {
			if ( !ia32::interrupts_enabled() || irql.prev > APC_LEVEL ) {
				vop_flags ^= mem::pw_os_paging;
			}
		}

		// Decide between virtual and physical read.
		//
		if ( px ) {
			auto cur_px = pm::px::from_pfn( pm::get_current_px()->entries[ mem::self_ref_index() ].page_frame_number );
			if ( cur_px.get() != px ) [[unlikely]] {
				//xstd::log( "using directory %llx\n", ( uint64_t ) xstd::distance( mem::get_phys_base(), px ) >> 12 );
				return mem::vm_write<jail_walk_p>(
					guest_dst, src, count,
					{ .mem = mem, .directory = ia32::cr3{ .address_of_page_directory = ( uint64_t ) xstd::distance( mem::get_phys_base(), px ) >> 12 } },
					vop_flags
				);
			}
		}
		//xstd::log( "using virtual map\n" );
		return mem::vm_write<jail_walk_v>( guest_dst, src, count, { .mem = mem }, vop_flags );
	}
	bool should_handle_va( any_ptr va, size_t count )
	{
		if ( !is_kernel_va( va, true ) )
			return false;
		auto px_min = mem::px_index( va );
		auto px_max = std::max( px_min, mem::px_index( va + count - 1 ) );
		if ( px_min <= mem::self_ref_index() && mem::self_ref_index() <= px_max )
			return true;
		if ( px_min <= mem::get_driver_px() && mem::get_driver_px() <= px_max )
			return true;
		return enum_page_boundaries( va, nullptr, count, [] ( any_ptr va, uint64_t, size_t ) FORCE_INLINE
		{
			auto desc = mem::iso::try_resolve( mem::get_pfn( va ) );
			return desc && mem::iso::is_restricted( desc->type );
		} );
		return false;
	}
	bool should_handle_pa( uint64_t pa, size_t count )
	{
		return enum_page_boundaries( pa, nullptr, count, [] ( uint64_t pa, uint64_t, size_t ) FORCE_INLINE
		{
			auto desc = mem::iso::try_resolve( pa >> 12 );
			if ( desc && mem::iso::is_restricted( desc->type ) )
				return true;
			auto px = mem::px_index( mem::get_virtual_address( pa ) );
			if ( px == mem::self_ref_index() || px == mem::get_driver_px() )
				return true;
			return false;
		} );
	}

	// NT Mdl API.
	//
	nt::mdl_t* __cdecl allocate_mdl( any_ptr va, size_t size, bool secondary_buffer, bool charge_quota, nt::irp_t* irp );
	void __cdecl build_mdl_for_non_paged_pool( nt::mdl_t* mdl );
	void __cdecl probe_and_lock_pages( nt::mdl_t* mdl, nt::mode_t access_mode, nt::lock_operation_t operation );
	int32_t __cdecl protect_mdl_system_address( nt::mdl_t* mdl, uint32_t protect );
	void __cdecl free_mdl( nt::mdl_t* mdl );
	any_ptr __cdecl map_locked_pages_specify_cache( nt::mdl_t* mdl, nt::mode_t access_mode, nt::memory_caching_type_t cache_type, any_ptr address, bool bugcheck_on_failure, uint32_t priority );

	// Misc. NT API.
	//
	MS_SSE2AVX uint64_t __cdecl get_physical_address( any_ptr address )
	{
		// Make the address cannonical.
		//
		address = mem::make_cannonical( address );

		// Lookup the PTE, fail if not present.
		//
		auto [pte, depth] = mem::lookup_pte( address );
		if ( !pte->present )
			return 0;

		// Read the last level PTE as guest and the physical address calculated based on it.
		//
		auto vpte = read_pte( pte );
		if ( !vpte.present )
			return 0;
		return ( address & ( mem::page_size( depth ) - 1 ) ) | ( vpte.page_frame_number << 12 );
	}
	MS_SSE2AVX bool __cdecl is_address_valid( any_ptr address )
	{
		// Fail if not cannonical.
		//
		if ( !mem::is_cannonical( address ) )
			return false;

		// Lookup the PTE, fail if not present.
		//
		auto [pte, _] = mem::lookup_pte( address );
		if ( !pte->present )
			return false;

		// Read the last level PTE as guest and return it's the presence.
		//
		return read_pte( pte ).present;
	}
	MS_SSE2AVX int32_t __cdecl mm_copy_memory( any_ptr dst, uint64_t src, size_t size, uint32_t flags, size_t* psize )
	{
		if ( ( flags != MM_COPY_MEMORY_PHYSICAL && flags != MM_COPY_MEMORY_VIRTUAL ) || ia32::get_irql() > APC_LEVEL )
			return STATUS_INVALID_PARAMETER_4;

		fassert( !should_handle_va( dst, size ) );

		*psize = 0;
		if ( flags == MM_COPY_MEMORY_PHYSICAL ) {
			auto end = std::min( src + size, ( mem::max_valid_pfn() + 1 ) << 12 );
			read_physical( dst, src, end - src );
			*psize = end - src;
		} else {
			*psize = read_virtual( dst, src, size, mem::pw_preset_strict | mem::pw_mark_accessed | mem::pw_os_paging ).fault_address - src;
		}

		if ( *psize != size )
			return STATUS_ACCESS_VIOLATION;
		else
			return STATUS_SUCCESS;
	}
	MS_SSE2AVX int32_t __cdecl mm_copy_virtual_memory( nt::eprocess_t* src, any_ptr src_ptr, nt::eprocess_t* dst, any_ptr dst_ptr, size_t size, nt::mode_t previous_mode, size_t* psize )
	{
		constexpr uint16_t vop_base = mem::pw_preset_strict | mem::pw_mark_accessed | mem::pw_os_paging;
		
		// Forward if reading usermode.
		//
		bool src_handled = should_handle_va( src_ptr, size );
		bool dst_handled = should_handle_va( dst_ptr, size );
		if ( previous_mode != nt::mode_t::kernel_mode || ( !src_handled && !dst_handled ) ) {
			[[clang::musttail]] return ( ( decltype( &mm_copy_virtual_memory ) ) &mm::copy_virtual_memory )( src, src_ptr, dst, dst_ptr, size, previous_mode, psize );
		}
		
		// Allocate the buffer.
		//
		const size_t buffer_size = std::min( size, 0x280ull );
		char* const  buffer = ( char* ) _alloca( buffer_size );

		// For each slice:
		//
		size_t it = 0;
		int32_t status = STATUS_SUCCESS;
		while ( it < size ) {
			size_t step = std::min( size - it, buffer_size );

			// Issue the read.
			//
			size_t okr = 0;
			if ( src_handled ) {
				okr = read_virtual( buffer, src_ptr + it, step, vop_base ).fault_address - ( src_ptr + it );
				if ( okr < step ) status = STATUS_ACCESS_VIOLATION;
				else              okr =    step;
			} else {
				auto st = mm::copy_virtual_memory( &src->pcb, src_ptr + it, &dst->pcb, buffer, step, 0, &okr );
				if ( okr < step ) status = st ? st : STATUS_ACCESS_VIOLATION;
				else              okr =    step;
			}

			// Issue the write.
			//
			size_t okw = 0;
			if ( okr ) {
				if ( dst_handled ) {
					okw = write_virtual( dst_ptr + it, buffer, okr, vop_base | mem::pw_mark_dirty ).fault_address - ( dst_ptr + it );
					if ( okw < okr ) status = status ? status : STATUS_ACCESS_VIOLATION;
					else             okw =    okr;
				} else {
					auto st = mm::copy_virtual_memory( &src->pcb, buffer, &dst->pcb, dst_ptr + it, okr, 0, &okw );
					if ( okw < okr ) status = status ? status : ( st ? st : STATUS_ACCESS_VIOLATION );
					else             okw =    okr;
				}
			}

			// Forward iterator, if not fully read fail.
			//
			it += okw;
			if ( status ) break;
		}
		*psize = it;
		return status;
	}
	void* __cdecl map_io_space_ex( uint64_t physical_address, size_t size, uint32_t protect ) {
		size_t offset =     physical_address & 0xFFF;
		size_t pfn =        physical_address >> 12;
		size_t page_count = ( size + offset + 0xFFF ) >> 12;
		
		auto access = ntpp::mm_protection::from_win( protect );
		if ( !page_count || !access || ( ( access.flags & MM_EXECUTE ) && ( access.flags & 0xFFFFFFF8 ) == MM_NOACCESS && ( access.flags & 7 ) ) ) {
			return nullptr;
		}
		
		uint64_t access_flags = PT_ENTRY_64_PRESENT_FLAG;
		if ( access.modifier == ntpp::mm_modifier::nocache ) {
			access_flags |= PT_ENTRY_64_PAGE_LEVEL_CACHE_DISABLE_FLAG;
		}
		if ( !access.readonly ) {
			access_flags |= PT_ENTRY_64_WRITE_FLAG;
		}
		if ( !access.executable ) {
			access_flags |= PT_ENTRY_64_EXECUTE_DISABLE_FLAG;
		}

		any_ptr va = mem::reserve_system_va( page_count << 12, mi::system_va_type_t::driver_images, true );
		if ( !va ) return nullptr;

		auto* pte = mem::get_pte( va );
		for ( size_t i = 0; i != page_count; i++ ) {
			ia32::pt_entry_64 ptev = { .flags = access_flags };
			ptev.page_frame_number = pfn + i;
			pte[ i ] = ptev;
		}
		mem::ipi_flush_tlb( va, page_count << 12 );
		return va + offset;
	}
	void* __cdecl map_io_space( uint64_t physical_address, size_t size, nt::memory_caching_type_t cache_type ) {
		if ( cache_type >= nt::memory_caching_type_t::maximum_cache_type ) {
			return nullptr;
		}
		uint32_t prot = PAGE_EXECUTE_READWRITE;
		if ( cache_type != nt::memory_caching_type_t::cached ) {
			prot = PAGE_EXECUTE_READWRITE | PAGE_NOCACHE;
			if ( cache_type == nt::memory_caching_type_t::write_combined ) {
				prot = PAGE_EXECUTE_READWRITE | PAGE_WRITECOMBINE;
			}
		}
		return map_io_space_ex( physical_address, size, prot );
	}
	void __cdecl unmap_io_space( any_ptr ptr, size_t size ) {
		if ( mem::is_driver_address( ptr ) ) {
			size += ptr & 0xFFF;
			ptr  = xstd::align_down( ptr, 0x1000 );
			return mem::return_system_va( ptr, size, mi::system_va_type_t::driver_images );
		}
		return mm::unmap_io_space( ptr, size );
	}
}