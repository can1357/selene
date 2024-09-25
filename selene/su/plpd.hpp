#pragma once
#include <xstd/bitmap.hpp>
#include <ia32.hpp>
#include "../utility/page_manager.hpp"
#include "../utility/memory.hpp"

namespace su {
	inline constexpr auto host_has_pcid = [ ] { return ia32::static_cpuid<1, 0, ia32::cpuid_eax_01>.cpuid_feature_information_ecx.process_context_identifiers; };
	inline constexpr auto host_has_invpcid = [ ] { return ia32::static_cpuid<7, 0, ia32::cpuid_eax_07>.ebx.invpcid; };
	
	//
	// Memory configuration.
	//
	static constexpr bool trap_unk_memory =   is_debug_build() && false;
	static constexpr bool trap_pool_memory =  is_debug_build() && false;
	static constexpr bool trap_user_shared =  is_debug_build() && false;
	static constexpr bool trap_image_read =   is_debug_build() && false;
	static constexpr bool trap_pfndb_read =   is_debug_build() && false;
	static constexpr bool trap_transient =    is_debug_build() && false;
	static constexpr bool trap_syspte =       true;
	inline const bool use_pcid = host_has_pcid();  // Use PCID if host has proper support for it.

	// Flags of PXEs that are allowed as transient pages.
	//
	static constexpr uint32_t pxf_transient_flags =
		trap_transient ? 0 : mem::va_session | mem::va_process | mem::va_user;

	// Flags of PXEs that are not allowed in the non-transient part.
	//
	static constexpr uint32_t pxf_no_sticky_flags = 
		pxf_transient_flags
		| mem::va_driver // Handled specially
		| mem::va_self_ref
		| ( !trap_unk_memory ? 0 : ~0u )
		| ( !trap_syspte ? 0 : mem::va_syspte )
		| ( !trap_pool_memory ? 0 : mem::va_pool )
		| ( !trap_user_shared ? 0 : mem::va_ushared )
		| ( !trap_pfndb_read ? 0 : mem::va_pfn_db )
		| ( !trap_transient ? 0 : ( mem::va_session | mem::va_process | mem::va_user ) );
};

// Implements processor-local page directory manager.
//
namespace su::plpd {
	// Fixed PCID values.
	//
	inline uint32_t            pcid_um =    0;
	inline uint32_t            pcid_km =    0;
	inline constexpr uint32_t  pcid_local = 3;
	inline constexpr uint32_t  pcid_iso =   4;

	// Policy types.
	//
	enum class policy : uint8_t /*:2*/ {
		shared,  // VMM=Guest, VM=Guest
		split,   // VMM=Guest, VM=Local
		hostile, // VMM=Iso,   VM=Local
	};

	// Flush flags.
	//
	enum flush_flag : uint16_t {
		gflush_ktlb =      1 << 0,
		gflush_utlb =      1 << 1,
		lflush_transient = 1 << 0, // pending flush_transient
		lflush_local =     1 << 1, // pending TLB flush of local cr3
		lflush_guest =     1 << 2, // pending TLB flush of guest cr3
		lflush_iso =       1 << 3, // pending TLB flush of iso cr3
	};

	// Isolated default page table.
	//
	inline ia32::cr3 iso_pt_cr3 = { .flags = 0 };
	inline ia32::pt_entry_64* iso_pt_va = nullptr;

	// Manager.
	//
	struct alignas( 0x1000 ) memory {
		// Page directory.
		//
		alignas( 0x1000 )       pm::px directory = {};

		// State.
		//
		uint64_t                 origin_pfn : 36 =    0;      // If previously setup, PFN of origin.
		uint64_t                 was_hostile : 1 =    false;  // If previously setup, hostile or not.
		uint64_t                 has_transient : 1 =  false;  // Has transient pages.
		uint64_t                 current_policy : 2 = 0;      // Current policy ID.

		// Transient bitmap.
		//
		xstd::bitmap<512>        transient_pxes = {};

		// Current state and pending flushes.
		//
		uint32_t                 tlb_flush_timestamp = 0;
		uint16_t                 loc_flush_pending = 0;
		std::atomic<uint8_t>     glb_flush_pending = 0;

		// Active CR3 values.
		//
		ia32::cr3                guest_cr3 = {}; // CR3 Guest believes it's executing in.
		ia32::cr3                vm_cr3 = {};    // CR3 Guest in the VM executes in.      (Or 0 if == guest_cr3)
		ia32::cr3                vmm_cr3 = {};   // CR3 VMM executes in [preserve_tlb is significant].
		pm::px*                  local_pm = nullptr;
		pm::px*                  remote_pm = nullptr;

		// Observers.
		//
		ia32::cr3 read_guest_cr3() const {
			auto result = guest_cr3;
			result.preserve_tlb = false;
			return result;
		}
		ia32::cr3 get_vm_cr3() const { return vm_cr3.flags ? vm_cr3 : guest_cr3; }
		ia32::cr3 get_vmm_cr3() const { return vmm_cr3; }
		policy get_policy() const { return policy( current_policy ); }
		bool is_shared() const { return get_policy() == policy::shared; }
		bool is_hostile() const { return get_policy() == policy::hostile; }
		bool is_split() const { return get_policy() == policy::split; }


		// TLB control.
		//
		bool set_lff( uint16_t f ) {
			bool result = !( loc_flush_pending & f );
			loc_flush_pending |= f;
			return result;
		}
		bool pull_lff( uint16_t f ) {
			f &= loc_flush_pending;
			loc_flush_pending ^= f;
			return f != 0;
		}
		void emu_invlpg( any_ptr ptr );
		void emu_invpcid( ia32::invpcid_type ty, uint64_t pcid, any_ptr ptr );

		// Lazy mapping.
		//
		void flush_transient();
		NO_INLINE bool lazy_map( size_t pxi );

		// Create page manager wrappers for each mode.
		// - Virtual page manager => guest_cr3.
		//
		FORCE_INLINE pm::px& vpm() { return *remote_pm; }
		FORCE_INLINE ia32::pt_entry_64& get_vpxe( size_t pxi, bool = false ) { return vpm().entries[ pxi ]; }
		FORCE_INLINE std::pair<ia32::pt_entry_64*, int8_t> vlookup( any_ptr ptr, bool = true ) { return vpm().lookup( ptr ); }
	
		// - Local page manager => vm_cr3 => &directory / guest_cr3.
		//
		FORCE_INLINE pm::px& pm() { return *local_pm; }
		FORCE_INLINE ia32::pt_entry_64& get_pxe( size_t pxi, bool no_lazy = false ) {
			auto& result = pm().entries[ pxi ];
			if ( !no_lazy && !result.present ) [[unlikely]] {
				if ( !is_shared() )
					lazy_map( pxi );
			}
			return result;
		}
		FORCE_INLINE std::pair<ia32::pt_entry_64*, int8_t> lookup( any_ptr ptr, bool no_lazy = true ) {
			if ( !no_lazy ) get_pxe( mem::px_index( ptr ) );
			return pm().lookup( ptr );
		}

		// Signal flushers, coming from another processor.
		//
		void signal_flush_tlb() { glb_flush_pending.fetch_or( gflush_ktlb ); }
		void signal_flush_transient() { glb_flush_pending.fetch_or( gflush_utlb ); }

		// Page table events.
		//
		// - Exit, should be called prior to exiting the VM.
		FORCE_INLINE void exit();
		// - Global&Local sync via cr3 customized for resume/return.
		FORCE_INLINE ia32::cr3 get_cr3_for_resume( bool gsync );
		// - State flipping by roundtrip notify.
		FORCE_INLINE void roundtrip();

		// Enter/Swap.
		//
		void enter( ia32::cr3 value, policy pol, std::initializer_list<any_ptr> ptr_hints = {} );
		ia32::cr3 swap( ia32::cr3 value, policy pol, std::initializer_list<any_ptr> ptr_hints = {} );
		FORCE_INLINE ia32::cr3 swap( ia32::cr3 value, std::initializer_list<any_ptr> ptr_hints = {} ) {
			return swap( value, get_policy(), ptr_hints);
		}

		// Policy upgrades.
		//
		void change_policy( policy pol );
		void upgrade_policy( policy pol ) {
			if ( pol > get_policy() ) [[unlikely]] {
				return change_policy( pol );
			}
		}

		// Resets local directory.
		//
		void reset_ld( bool hostile, std::initializer_list<any_ptr> ptr_hints );

		// Sets up VM memory.
		//
		void setup_vm( policy pol, std::initializer_list<any_ptr> ptr_hints );
	};

	// Initializes the PLPD.
	//
	void init();
};