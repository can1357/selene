#pragma once
#include <sdkgen/nt_builtins.hpp>
#include <cfw/tls.hpp>
#include <xstd/bitwise.hpp>
#include "vm.hpp"

namespace su::vdbg
{
	using breakpoint =        cfw::breakpoint;
	using breakpoint_type =   cfw::breakpoint_type;
	using breakpoint_list =   cfw::breakpoint_list;
	using breakpoint_length = cfw::breakpoint_length;

	// Starts virtual debug state.
	//
	FORCE_INLINE void enter( vm_context* vmcs, const breakpoint_list& bp_set, const breakpoint_list& bp_ignore, bool km );
	
	// User and kernel wrappers.
	//
	FORCE_INLINE bool uenter( vm_context* vmcs, nt::trapframe* __restrict tf );
	FORCE_INLINE bool kenter( vm_context* vmcs );
	FORCE_INLINE void uupdate( vm_context* vmcs );
	FORCE_INLINE void kupdate( vm_context* vmcs );

	// Returns a mask of shadow registers hit by the current trapframe.
	// - Also clears them from the DR6.
	//
	inline uint32_t get_vbp_mask( vm_context* vmcs, trapframe* tf ) {
		auto* saved = vmcs->active_dbg_save_area;
		if ( !saved ) [[likely]] {
			return 0;
		}

		ia32::dr6 dr6{ .flags = tf->error_code };
		uint32_t bp_mask = dr6.breakpoint_condition;
		uint32_t vbp_mask = xstd::bit_pext<uint32_t>( bp_mask, 0b1111 & ~saved->mask );
		dr6.breakpoint_condition &= saved->mask;
		tf->error_code = dr6.flags;

		if constexpr ( enable_mtf ) {
			if ( vmcs->mtf ) {
				dr6.single_instruction = false;
			}
		}
		return vbp_mask;
	}

	// Suspends the virtual debug state for an interrupt.
	//
	inline void suspend_for_mode_flip( vm_context* vmcs )
	{
		if ( vmcs->active_dbg_save_area )
			vmcs->exit_callback = [ ]( vm_context* ) { ia32::write_dr7( { .flags = 0 } ); };
	}
};