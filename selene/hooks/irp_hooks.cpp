#include "irp_hooks.hpp"
#include "../hooks/inline_hooks.hpp"
#include "../hooks/patch_manager.hpp"
#include "../utility/thread.hpp"
#include "../clyde/tracker.hpp"
#include <sdk/nt/api.hpp>
#include <sdk/iop/api.hpp>
#include <xstd/robin_hood.hpp>
#include <xstd/spinlock.hpp>

namespace hook::irp
{
	// Global list of hooks and the spinlock protecting it.
	//
	static xstd::shared_xspinlock<DISPATCH_LEVEL> g_irp_hooks_lock;
	static robin_hood::unordered_flat_map<std::pair<uint8_t, uint32_t>, hook_t, xstd::hasher<>> g_irp_hooks;

	// Logging path.
	//
	NO_INLINE void log_ioctl( clyde::tracker::state* tr, io::stack_location_t* sp, bool hooked ) {
		auto* device = sp->device_object;
		if ( !device ) {
			return;
		}

		uint32_t ioctl = sp->parameters.device_io_control.io_control_code;
		if ( tr->skip( hooked, device->driver_object, ioctl, device->device_type ) ) {
			return;
		}
		tr->log( xstd::fmt::wstr( L"\\ioctl%s\\%x", device->driver_object->driver_name.get(), ioctl ), hooked );
	}

	// IofCallDriver hook.
	//
	alignas( 64 ) static hook::record iof_call_driver_hook = {};
	MS_SSE2AVX static int32_t hk_iof_call_driver( nt::device_object_t* device, nt::irp_t* irp ) {
		// Adjust the stack.
		//
		--irp->current_location;
		auto* sp = --irp->tail.overlay.current_stack_location;
		sp->device_object = device;

		// Decide on the identifier.
		//
		std::pair<uint8_t, uint32_t> id{ sp->major_function, 0 };
		switch ( sp->major_function )
		{
			case IRP_MJ_FILE_SYSTEM_CONTROL:
				id.second = sp->parameters.file_system_control.fs_control_code;
				break;
			case IRP_MJ_DEVICE_CONTROL:
				id.second = sp->parameters.device_io_control.io_control_code;
				break;
			default:
				id.second = sp->minor_function;
				break;
		}

		// Find any relevant hooks.
		//
		hook_t hk;
		{
			std::shared_lock _g{ g_irp_hooks_lock };
			auto it = g_irp_hooks.find( id );
			hk = it != g_irp_hooks.end() ? it->second : nullptr;
		}

		// Log if relevant.
		//
		auto thr = ke::get_ethread();
		bool is_target = false;
		if ( id.first == IRP_MJ_DEVICE_CONTROL && irp->requestor_mode == ( char ) nt::mode_t::user_mode ) [[unlikely]] {
			thread::shadow_guard _g{ thread::get_context( thr ) };
			auto* state = clyde::tracker::state::find( thr );
			if ( state ) [[unlikely]] {
				is_target = true;
				log_ioctl( state, sp, hk != nullptr );
			}
		}

		// Forward.
		//
		if ( hk ) [[unlikely]] {
			thread::shadow_guard _g{ thread::get_context( thr ) };
			irp->io_status.status = STATUS_PENDING;
			hk( irp, is_target );
			uint32_t status = irp->io_status.status;
			if ( status != STATUS_PENDING ) [[unlikely]] {
				irp->io_status.status = status;
				io::complete_request( irp, 0 );
				return status;
			}
		}

		// Call the original.
		//
		using fn = int32_t( * )( nt::device_object_t* device, nt::irp_t* irp );
		if ( id.first == IRP_MJ_POWER && uint8_t( uint8_t( id.second ) - 2 ) <= 1u )
			[[clang::musttail]] return fn( &iop::po_handle_irp )( ( nt::device_object_t* ) irp, nullptr );
		[[clang::musttail]] return device->driver_object->major_function[ id.first ]( device, irp );
	}

	// Inserts a hook.
	//
	void set( uint8_t mj, uint32_t ctl_or_min, hook_t f ) {
		std::unique_lock _g{ g_irp_hooks_lock };
		g_irp_hooks[ std::pair{ mj, ctl_or_min } ] = f;
	}

	// Initializes IRP hooks.
	//
	void init() {
		hook::add( &iof_call_driver_hook, &nt::iof_call_driver, hk_iof_call_driver );
	}
};