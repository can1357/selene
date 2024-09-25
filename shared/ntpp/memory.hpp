#pragma once
#include "common.hpp"
#include "sync.hpp"
#include "ob.hpp"
#include <sdk/mm/api.hpp>
#include <sdk/mi/api.hpp>
#include <sdk/nt/ethread_t.hpp>
#include <sdk/nt/eprocess_t.hpp>
#include <sdk/win/sysdbg_triage_dump_t.hpp>
#include <sdk/win/memory_basic_information_t.hpp>
#include <sdk/win/sysdbg_command_t.hpp>
#include <sdk/nt/memory_dump64_t.hpp>
#include <sdk/nt/section_t.hpp>
#include <sdk/nt/control_area_t.hpp>
#include <sdk/nt/section_inherit_t.hpp>
#include <sdk/nt/file_object_t.hpp>
#include <sdk/nt/section_object_pointers_t.hpp>
#include <sdk/nt/mmpfn_t.hpp>
#include <sdk/nt/mmvad_t.hpp>

namespace ntpp
{
#if KERNEL_TARGET
	// Ntoskrnl range.
	//
	inline xstd::numeric_range<any_ptr> ntoskrnl_range{ *( void** ) &ps::ntos_image_base, *( void** ) &ps::ntos_image_end };
	FORCE_INLINE inline win::image_x64_t* get_ntoskrnl() { return sdk::image_base_of( ps::ntos_image_base ); }
#endif

	// User-mode memory API.
	//
	nt::result<void*> allocate_memory( void* address, size_t size, uint32_t protection = PAGE_EXECUTE_READWRITE, uint32_t allocation_type = MEM_COMMIT | MEM_RESERVE, void* process = ob::current_process() );
	nt::result<> deallocate_memory( void* address, size_t size, uint32_t deallocation_type = MEM_RELEASE, void* process = ob::current_process() );
	nt::result<uint32_t> protect_memory( any_ptr& address, size_t& size, uint32_t protection, void* process = ob::current_process() );
	nt::result<> lock_memory( const void* address, size_t size, uint32_t type = LOCK_VM_IN_WSL | LOCK_VM_IN_RAM, void* process = ob::current_process() );
	nt::result<> unlock_memory( const void* address, size_t size, uint32_t type = LOCK_VM_IN_WSL | LOCK_VM_IN_RAM, void* process = ob::current_process() );
	template<typename T = win::memory_basic_information_t>
	inline nt::result<std::unique_ptr<T>> query_memory( const void* address, nt::memory_information_class_t iclass = nt::memory_information_class_t::memory_basic_information, void* process = ob::current_process() )
	{
		scope_mode _p{};
		return impl::query_info_template<T>(
			os::query_virtual_memory,
			[ ] ( auto&&... ) {},
			process, address, iclass
		);
	}
	nt::result<size_t> read_memory( void* handle, void* dst, const void* src, size_t n );
	nt::result<size_t> write_memory( void* handle, void* dst, const void* src, size_t n );

	// User-mode section API.
	//
	struct map_section_args
	{
		void* section_handle;
		void* address = nullptr;
		void* process_handle = ob::current_process();
		uint32_t protection = PAGE_EXECUTE_READWRITE;
		int64_t view_offset = 0;
		size_t view_size = 0;
		nt::section_inherit_t inherit = nt::section_inherit_t::unmap;
		uint32_t allocation_type = 0;
	};
	nt::result<unique_handle> open_section( const nt::unicode_view& name, uint32_t access_mask = MAXIMUM_ALLOWED );
	nt::result<unique_handle> create_section( void* file_handle, uint32_t page_prot, uint32_t alloc_attrib, uint32_t section_access = MAXIMUM_ALLOWED );
	nt::result<> map_section( map_section_args& args );
	inline nt::result<map_section_args> map_section( map_section_args&& args )
	{
		if ( auto res = map_section( args ); !res )
			return { res.status };
		else
			return { std::move( args ) };
	}
	nt::result<> unmap_section( void* base, void* process = ob::current_process() );
	template<typename T>
	inline nt::result<std::unique_ptr<T>> query_section_info( void* section, win::section_information_class_t iclass )
	{
		scope_mode _p{};
		return impl::query_info_template<T>( 
			os::query_section,
			[ ] ( auto&&... ) {},
			section, iclass
		);
	}

	// User-mode triage API.
	//
	nt::result<std::unique_ptr<nt::memory_dump64_t>> create_triage_dump();

#if KERNEL_TARGET
	// Kernel-mode section utilities.
	//
	nt::control_area_t* section_control_area( nt::section_t* scn );
	ref<nt::file_object_t> reference_control_area_file( nt::control_area_t* ctl );

	// VAD protection to Win32 protection and vice versa.
	//
	enum class mm_modifier : uint32_t {
		none         = 0b00,
		nocache      = 0b01,
		guard        = 0b10,
		writecombine = 0b11
	};
	union mm_protection {
		// Protection maps.
		//
		inline static constexpr uint32_t mod_map[] = {
			0, PAGE_NOCACHE, PAGE_GUARD, PAGE_WRITECOMBINE
		};
		inline static constexpr int8_t prot_map_nx[] = {
			0, MM_NOACCESS, MM_READONLY, -1, MM_READWRITE, -1, -1, -1, MM_WRITECOPY, -1, -1, -1, -1, -1, -1, -1
		};
		inline static constexpr int8_t prot_map_x[] = {
			0, MM_EXECUTE, MM_EXECUTE_READ, -1, MM_EXECUTE_READWRITE, -1, -1, -1, MM_EXECUTE_WRITECOPY, -1, -1, -1, -1, -1, -1, -1
		};

		// Fields.
		//
		uint32_t flags = 0;
		struct {
			// If set:     writable [ 0=readonly, 1=writecopy ]
			// If not set, writable [ 0=noaccess, 1=readwrite ]
			uint32_t     readonly   : 1;
			uint32_t     executable : 1;
			uint32_t     writable   : 1;
			mm_modifier  modifier   : 2;
		};

		// Checks validity.
		//
		inline constexpr bool valid() const {
			return flags != MM_INVALID_PROTECTION;
		}
		inline explicit operator bool() const {
			return valid();
		}
	
		// Creates a vad protection mask from a windows one.
		//
		inline constexpr static mm_protection from_win( uint32_t prot ) noexcept {
			if ( prot >= ( PAGE_WRITECOMBINE * 2 ) ) {
				return { .flags = MM_INVALID_PROTECTION };
			}

			uint32_t f1 = prot & 0xF;
			uint32_t f2 = ( prot >> 4 ) & 0xF;
			uint32_t flags;
			if ( f1 == 0 ) {
				if ( f2 == 0 ) {
					return { .flags = MM_INVALID_PROTECTION };
				}
				flags = ( uint32_t ) ( int32_t ) prot_map_x[ f2 ];
			} else {
				if ( f2 != 0 ) {
					return { .flags = MM_INVALID_PROTECTION };
				}
				flags = ( uint32_t ) ( int32_t ) prot_map_nx[ f1 ];
			}
			if ( flags == MM_INVALID_PROTECTION ) {
				return { .flags = MM_INVALID_PROTECTION };
			}

			if ( prot & PAGE_GUARD ) {
				if ( ( flags == MM_NOACCESS ) || ( prot & ( PAGE_NOCACHE | PAGE_WRITECOMBINE ) ) ) {
					return { .flags = MM_INVALID_PROTECTION };
				}
				flags |= MM_GUARD_PAGE;
			}

			if ( prot & PAGE_NOCACHE ) {
				if ( ( flags == MM_NOACCESS ) ||
					  ( prot & PAGE_WRITECOMBINE ) ) {
					return { .flags = MM_INVALID_PROTECTION };
				}
				flags |= MM_NOCACHE;
			}

			if ( prot & PAGE_WRITECOMBINE ) {
				if ( flags == MM_NOACCESS || ( flags & MM_EXECUTE ) ) {
					return { .flags = MM_INVALID_PROTECTION };
				}
				flags |= MM_WRITECOMBINE;
			}
			return { .flags = flags };
		}
		inline constexpr uint32_t to_win() const noexcept {
			uint32_t base = writable ? PAGE_READWRITE : PAGE_NOACCESS;
			if ( readonly )   base <<= 1;
			if ( executable ) base <<= 4;
			if ( base != PAGE_NOACCESS )
				base |= mod_map[ ( uint8_t ) modifier ];
			return base;
		}
	};

	// VAD binary search.
	//
	FORCE_INLINE inline uint64_t vad_base_vpn( nt::mmvad_t* vad ) { return vad->core.starting_vpn | ( uint64_t( vad->core.starting_vpn_high ) << 32 ); }
	FORCE_INLINE inline uint64_t vad_limit_vpn( nt::mmvad_t* vad ) { return vad->core.ending_vpn | ( uint64_t( vad->core.ending_vpn_high ) << 32 ); }
	nt::mmvad_t* find_vad_lower_bound( nt::mmvad_t* it, any_ptr va );
	nt::mmvad_t* find_vad( nt::mmvad_t* it, any_ptr va );

	// VAD enumeration.
	//
	template<typename F>
	FORCE_INLINE static void enum_vads( nt::eprocess_t* prc, F&& enumerator )
	{
		// Lock the address space and recurse.
		//
		shared_lock lock{ &prc->address_creation_lock };
		auto rec = [ & ] ( auto self, nt::mmvad_t* v ) -> void {
			if ( v ) {
				auto l = v->core.vad_node.left;
				self( self, ( nt::mmvad_t* ) l );
				enumerator( v );
				auto r = v->core.vad_node.right;
				self( self, ( nt::mmvad_t* ) r );
			}
		};
		rec( rec, ( nt::mmvad_t* ) prc->vad_root.root );
	}
	template<typename F>
	FORCE_INLINE static bool enum_vads( nt::eprocess_t* prc, any_ptr base, size_t size, F&& enumerator )
	{
		// Page align the base address and the size.
		//
		auto end = xstd::align_down( base + size + 0xFFF, PAGE_SIZE );
		base = xstd::align_down( base, PAGE_SIZE );

		// Lock the address space.
		//
		shared_lock lock{ &prc->address_creation_lock };
		while ( true )
		{
			// Find the VAD, on failure return false.
			//
			auto* vad = find_vad( ( nt::mmvad_t* ) prc->vad_root.root, base );
			if ( !vad ) return false;

			// Invoke the enumerator.
			//
			enumerator( vad );

			// Increment the iterators, if we reached the end return.
			//
			base = ( vad_limit_vpn( vad ) + 1 ) << 12;
			if ( base >= end ) [[likely]]
				return true;
		}
	}
#endif
};