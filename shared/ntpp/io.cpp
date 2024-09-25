#if !__private_binary__ && not defined(NO_NTPP)
#include "io.hpp"
#include "memory.hpp"
#include <sdk/win/file_rename_information_t.hpp>
#include <sdk/rtl/user_process_parameters_t.hpp>

namespace ntpp
{
#if KERNEL_TARGET
	// Shortcut completion routine.
	//
	MS_SSE2AVX static int32_t shortcut_completion_routine( nt::device_object_t*, nt::irp_t* irp, void* olength ) {
		if ( irp->flags & IRP_INPUT_OPERATION ) {
			memcpy( irp->user_buffer, irp->associated_irp.system_buffer, ( size_t ) olength );
		}
		if ( irp->flags & IRP_DEALLOCATE_BUFFER ) {
			free( irp->associated_irp.system_buffer );
		}
		*irp->user_iosb = irp->io_status;
		while ( irp->mdl_address )
			io::free_mdl( std::exchange( irp->mdl_address, irp->mdl_address->next ) );
		if ( auto e = std::exchange( irp->user_event, nullptr ) )
			ke::set_event( e, 0, false );
		io::free_irp( irp );
		return STATUS_MORE_PROCESSING_REQUIRED;
	}

	// Async completion routine.
	//
	MS_SSE2AVX static int32_t async_completion_routine( nt::device_object_t* dev, nt::irp_t* irp, void* _ctx ) {
		auto ctx = ( async_irp* ) _ctx;
		auto* sp = ctx->sp;
		auto prev_cb = sp->completion_routine = ctx->prev_complete;
		auto prev_ctl = sp->control = ctx->prev_control;
		auto prev_ctx = sp->context = ctx->prev_ctx;

		if ( irp->cancel ) {
			ctx->coro_continue.destroy();
		} else {
			ctx->coro_continue();
		}

		if ( prev_cb ) {
			uint32_t mask = SL_INVOKE_ON_SUCCESS;
			if ( irp->cancel ) mask = SL_INVOKE_ON_CANCEL;
			else if ( nt::status{ irp->io_status.status }.is_error() ) mask = SL_INVOKE_ON_ERROR;
			if ( prev_ctl & mask )
				[[clang::musttail]] return prev_cb( dev, irp, prev_ctx );
		}
		return irp->io_status.status;
	}

	// IRP executors.
	//
	nt::status call_driver( nt::irp_t* irp )
	{
		irp->current_location--;
		auto* sp = &irp->tail.overlay.current_stack_location[ -1 ];
		irp->tail.overlay.current_stack_location = sp;

		auto* dev = sp->device_object;
		if ( !dev )
			return irp->user_iosb->status;
		return dev->driver_object->major_function[ sp->major_function ]( dev, irp );
	}
	nt::status call_driver_sync( nt::irp_t* irp )
	{
		nt::kevent_t evt = {};
		initialize_event( &evt, false );
		irp->user_event = &evt;

		auto* iosb = irp->user_iosb;
		auto* thr = irp->tail.overlay.thread;
		bool prev = thr->hard_errors_are_disabled;
		thr->hard_errors_are_disabled = true;
		nt::status result = call_driver( irp );
		if ( result == STATUS_PENDING )
		{
			ke::wait_for_single_object( &evt, nt::kwait_reason_t::executive, ( char ) nt::mode_t::kernel_mode, false, nullptr );
			result = iosb->status;
		}
		thr->hard_errors_are_disabled = prev;
		return result;
	}

	// IRP priority.
	//
	void set_io_priority( nt::irp_t* irp, io::priority_hint_t hint ) {
		irp->flags &= 0xFFF1FFFF;
		irp->flags |= ( 1 + uint32_t( hint ) ) << 0x11;
	}
	io::priority_hint_t get_io_priority( nt::irp_t* irp ) {
		auto result = ( io::priority_hint_t ) ( ( ( irp->flags >> 0x11 ) & 7 ) - 1 );
		if ( result < io::priority_hint_t::io_priority_normal ) {
			if ( auto thr = irp->tail.overlay.thread; thr && thr->io_boost_count ) {
				result = io::priority_hint_t::io_priority_normal;
			}
		}
		return result;
	}
	void set_io_priority( nt::ethread_t* thr, io::priority_hint_t hint ) {
		ps::set_io_priority_thread( thr, hint );
	}
	io::priority_hint_t get_io_priority( nt::ethread_t* thr ) {
		return ps::get_io_priority_thread( thr );
	}

	// IRP builders.
	//
	std::pair<nt::irp_t*, io::stack_location_t*> build_ctl_irp( nt::file_object_t* fo, nt::device_object_t* dev, uint32_t ctl, any_ptr in, size_t ilen, any_ptr out, size_t olen, io::status_block_t* iosb )
	{
		// Allocate the IRP.
		//
		nt::irp_t* irp = iop::allocate_irp_private( dev, dev->stack_size, 0 );
		irp->tail.overlay.original_file_object = fo;
		irp->tail.overlay.thread = ke::get_ethread();
		irp->tail.overlay.auxiliary_buffer = nullptr;
		irp->requestor_mode = 0;
		irp->user_iosb = iosb;
		irp->pending_returned = false;
		irp->cancel = false;
		irp->cancel_routine = nullptr;
		irp->mdl_address = nullptr;
		irp->associated_irp.system_buffer = nullptr;
		irp->user_event = nullptr;

		// Handle the buffers.
		//
		auto* sp = irp->tail.overlay.current_stack_location - 1;
		sp->major_function = IRP_MJ_DEVICE_CONTROL;
		sp->minor_function = IRP_MN_NORMAL;
		sp->file_object = fo;
		sp->device_object = dev;
		sp->parameters.device_io_control.output_buffer_length = olen;
		sp->parameters.device_io_control.input_buffer_length = ilen;
		sp->parameters.device_io_control.io_control_code = ctl;
		switch ( ctl & 3 )
		{
			case METHOD_BUFFERED: 
			{
				if ( ilen || olen ) {
					size_t max = std::max( ilen, olen );
					void* buffer = malloc( max );
					irp->associated_irp.system_buffer = buffer;
					if ( in )
						memcpy( buffer, in, ilen );
					irp->flags = IRP_BUFFERED_IO | IRP_DEALLOCATE_BUFFER;
					irp->user_buffer = out;
					if ( out )
						irp->flags |= IRP_INPUT_OPERATION;
				}
				else {
					irp->flags = 0;
					irp->user_buffer = nullptr;
				}
				break;
			}
			case METHOD_IN_DIRECT:
			case METHOD_OUT_DIRECT:
			{
				if ( in ) {
					irp->associated_irp.system_buffer = ( void* ) in;
					irp->flags = IRP_BUFFERED_IO;
				} else {
					irp->flags = 0;
				}
				if ( out ) {
					io::allocate_mdl( out, olen, false, false, irp );
					mm::build_mdl_for_non_paged_pool( irp->mdl_address );
				}
				break;
			}
			case METHOD_NEITHER:
			{
				irp->user_buffer = out;
				sp->parameters.device_io_control.type3_input_buffer = ( void* ) in;
				break;
			}
		}
		
		// Setup the completion routine.
		//
		set_completion_routine( sp, shortcut_completion_routine, ( void* ) olen );
		return { irp, sp };
	}
	std::pair<nt::irp_t*, io::stack_location_t*> build_fsd_irp( nt::file_object_t* fo, nt::device_object_t* dev, uint32_t mj, any_ptr buffer, size_t length, io::status_block_t* iosb )
	{
		// Setup the IRP.
		//
		nt::irp_t* irp = iop::allocate_irp_private( dev, dev->stack_size, 0 );
		irp->tail.overlay.original_file_object = fo;
		irp->tail.overlay.thread = ke::get_ethread();
		irp->tail.overlay.auxiliary_buffer = nullptr;
		irp->overlay.asynchronous_parameters.user_apc_context = nullptr;
		irp->overlay.asynchronous_parameters.user_apc_routine = nullptr;
		irp->overlay.asynchronous_parameters.issuing_process = nullptr;
		irp->requestor_mode = 0;
		irp->user_iosb = iosb;
		irp->pending_returned = false;
		irp->cancel = false;
		irp->cancel_routine = nullptr;
		irp->flags = IRP_SYNCHRONOUS_API | IRP_NOCACHE/* | IRP_SYNCHRONOUS_PAGING_IO*/; // ( obj->flags & FO_NO_INTERMEDIATE_BUFFERING ) ? IRP_NOCACHE : 0;
		irp->user_event = nullptr;
		irp->mdl_address = nullptr;
		irp->associated_irp.system_buffer = nullptr;
		irp->user_buffer = ( void* ) buffer;

		// Setup the buffers.
		//
		auto* sp = irp->tail.overlay.current_stack_location - 1;
		sp->major_function = mj;
		sp->minor_function = IRP_MN_NORMAL;
		sp->file_object = fo;
		sp->device_object = dev;
		if ( buffer ) {
			irp->associated_irp.system_buffer = ( void* ) buffer;
			io::allocate_mdl( ( void* ) buffer, length, false, false, irp );
			mm::build_mdl_for_non_paged_pool( irp->mdl_address );
		}

		// Setup the completion routine.
		//
		set_completion_routine( sp, shortcut_completion_routine, nullptr );
		return { irp, sp };
	}

	// Completion routine helper.
	//
	void set_completion_routine( io::stack_location_t* sp, io::stack_location_t::pio_completion_routine_t fn,
										  void* ctx, uint32_t control ) 
	{
		sp->completion_routine = fn;
		sp->context = ctx;
		sp->control = control;
	}

	// Device/File Object utils.
	//
	nt::device_object_t* get_base_fs_device( nt::file_object_t* obj )
	{
		auto* vpb = obj->vpb;
		if ( vpb && vpb->device_object )
			return vpb->device_object;
		if ( obj->flags & FO_DIRECT_DEVICE_OPEN )
			return obj->device_object;
		vpb = obj->device_object->vpb;
		if ( vpb && vpb->device_object )
			return vpb->device_object;
		return obj->device_object;
	}
	ref<nt::device_object_t> get_lowest_device( nt::device_object_t* dev )
	{
		unique_lock<spinlock_queue> lock{ LockQueueIoDatabaseLock };
		while ( nt::device_object_t* attached = dev->device_object_extension->attached_to )
			dev = attached;
		return make_safe_reference( dev );
	}
	nt::device_object_t* get_related_device_object( nt::file_object_t* fo, bool no_stack_traverse )
	{
		nt::device_object_t* dev;
		if ( fo->vpb && fo->vpb->device_object )
			dev = fo->vpb->device_object;
		else if ( !( fo->flags & FO_DIRECT_DEVICE_OPEN ) && fo->device_object->vpb && fo->device_object->vpb->device_object )
			dev = fo->device_object->vpb->device_object;
		else
			dev = fo->device_object;
		if ( no_stack_traverse ) return dev;
		while ( dev && dev->attached_device )
			dev = dev->attached_device;
		return dev;
	}

	// Driver unload.
	//
	xstd::result<> test_for_unload( nt::driver_object_t* drv, bool unsafe )
	{
		// If driver does not implement unload, fail.
		//
		if ( !drv->driver_unload )
			return xstd::exception{ "No driver unload."_es };
		if ( !drv->driver_section )
			return xstd::exception{ "No driver section."_es };

		// Acquire the IO database lock.
		//
		unique_lock<spinlock_queue> lock{ LockQueueIoDatabaseLock };

		// If already marked to be unloaded:
		//
		if ( !drv->device_object && ( drv->flags & DRVO_UNLOAD_INVOKED ) )
			return xstd::exception{ "Unload already invoked, no device object."_es };
		if ( !( drv->flags & DRVO_BASE_FILESYSTEM_DRIVER ) && drv->device_object && ( drv->device_object->device_object_extension->extension_flags & DOE_UNLOAD_PENDING ) )
			return xstd::exception{ "Unload pending."_es };

		// If not initialized.
		//
		if ( !( drv->flags & DRVO_INITIALIZED ) ) {
			return xstd::exception{ "Not initialized"_es };
		}

		// Otherwise, go through each device object and mark them as unload-pending,
		// if base filesystem driver, then delay until device objects are deleted.
		//
		bool referenced = ( drv->flags & DRVO_BASE_FILESYSTEM_DRIVER ) && drv->device_object;
		for ( auto it = drv->device_object; it; it = it->next_device )
		{
			it->device_object_extension->extension_flags |= DOE_UNLOAD_PENDING;
			if ( !unsafe && ( it->reference_count || it->attached_device ) )
				referenced = true;
		}

		// If referenced, fail.
		//
		if ( referenced )
			return xstd::exception{ "Device is referenced"_es };
		return std::monostate{};
	}
	xstd::result<> unload_driver( nt::driver_object_t* drv, bool unsafe )
	{
		// Test and mark for unload.
		//
		if ( auto status = test_for_unload( drv, unsafe ); !status )
			return status;
		drv->flags |= DRVO_UNLOAD_INVOKED;

		// Invoke the unload routine.
		//
		call_worker( [ & ] {
			drv->driver_unload( drv );
		} );

		// Post the cleanup notifications, convert to a temporary object.
		//
		iop::cleanup_notifications( drv, drv );
		ob::make_temporary_object( drv );
		ob::dereference_object( drv );
		return std::monostate{};
	}
	
	// Async IRP.
	//
	void async_irp::await_suspend( xstd::coroutine_handle<> h ) {
		prev_complete = sp->completion_routine;
		prev_ctx = sp->context;
		prev_control = sp->control;
		coro_continue = h;
		set_completion_routine( sp, &async_completion_routine, this );
	}

	// Utilities for resolution of device hint.
	//
	static ref<nt::device_object_t> get_base_fs_from_path( nt::unicode_view name ) {
		uint32_t internal_flags = IOP_CREATE_IGNORE_SHARE_ACCESS_CHECK;
		uint32_t options = IO_NO_PARAMETER_CHECKING | IO_IGNORE_SHARE_ACCESS_CHECK;

		nt::object_attributes_t attributes = {};
		attributes.length = sizeof( nt::object_attributes_t );
		attributes.object_name = &name;
		attributes.attributes = OBJ_CASE_INSENSITIVE | OBJ_KERNEL_HANDLE;

		io::status_block_t iosb = {};
		unique_handle r = {};
		iop::create_file(
			&r.handle,
			MAXIMUM_ALLOWED,
			&attributes,
			&iosb,
			nullptr,
			FILE_ATTRIBUTE_NORMAL,
			FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
			FILE_OPEN,
			0,
			nullptr,
			0ull,
			nt::create_file_type_t::none,
			nullptr,
			options,
			internal_flags,
			nullptr
		);

		if ( r ) {
			if ( auto fo = resolve_handle<nt::file_object_t>( r.get() ) ) {
				return ref<nt::device_object_t>{ get_base_fs_device( fo ) };
			}
		}
		return {};
	}
	static ref<nt::device_object_t> get_base_fs_from_devpath( nt::unicode_view name ) {
		uint32_t internal_flags = 0;
		uint32_t options = IO_NO_PARAMETER_CHECKING;

		nt::object_attributes_t attributes = {};
		attributes.length = sizeof( nt::object_attributes_t );
		attributes.object_name = &name;
		attributes.attributes = OBJ_CASE_INSENSITIVE | OBJ_KERNEL_HANDLE;

		io::status_block_t iosb = {};
		unique_handle r = {};
		iop::create_file(
			&r.handle,
			FILE_GENERIC_READ | FILE_GENERIC_WRITE,
			&attributes,
			&iosb,
			nullptr,
			FILE_ATTRIBUTE_DEVICE,
			FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
			FILE_OPEN,
			0,
			nullptr,
			0ull,
			nt::create_file_type_t::none,
			nullptr,
			options,
			internal_flags,
			nullptr
		);

		if ( r ) {
			if ( auto fo = resolve_handle<nt::file_object_t>( r.get() ) ) {
				return ref<nt::device_object_t>{ get_base_fs_device( fo ) };
			}
		}
		return {};
	}

	// Kernel mode file APIs.
	//
	nt::result<std::pair<unique_handle, ref<nt::file_object_t>>> create_kfile( const create_file_args& args )
	{
		auto hnd = create_file( args );
		if ( !hnd ) return hnd.status;
		auto fo = resolve_handle<nt::file_object_t>( hnd->get() );
		if ( !fo ) return nt::status{ STATUS_IO_REPARSE_TAG_NOT_HANDLED };
		return std::pair{ std::move( hnd ).value(), std::move( fo ) };
	}
	nt::result<size_t> file_size( nt::file_object_t* fo )
	{
		scope_mode _p{};

		io::status_block_t iosb = {};
		win::file_standard_info_t file_info;

		nt::result<size_t> result = {};
		auto [irp, sp] = build_fsd_irp( fo, get_related_device_object( fo, fo->flags & FO_SHADY ), IRP_MJ_QUERY_INFORMATION, &file_info, sizeof( file_info ), &iosb );
		if ( !irp )
			return nt::status{ iosb.status };
		sp->parameters.query_file.length = sizeof( file_info );
		sp->parameters.query_file.file_information_class = nt::file_information_class_t::standard_information;
		result.status = call_driver_sync( irp );
		result.result.emplace( ( size_t ) file_info.end_of_file );
		return result;
	}
	nt::result<> flush_file( nt::file_object_t* fo )
	{
		scope_mode _p{};
		io::status_block_t iosb = {};
		auto [irp, sp] = build_fsd_irp( fo, get_related_device_object( fo, fo->flags & FO_SHADY ),IRP_MJ_FLUSH_BUFFERS, nullptr, 0, &iosb );
		if ( !irp )
			return nt::status{ iosb.status };
		return call_driver_sync( irp );
	}
	nt::result<size_t> read_file( nt::file_object_t* fo, void* buffer, size_t length, int64_t offset )
	{
		scope_mode _p{};
		io::status_block_t iosb = {};
		nt::result<size_t> result = {};
		auto [irp, sp] = build_fsd_irp( fo, get_related_device_object( fo, fo->flags & FO_SHADY ),IRP_MJ_READ, buffer, length, &iosb );
		if ( !irp )
			return nt::status{ iosb.status };
		set_io_priority( irp, io::priority_hint_t::io_priority_high );
		sp->parameters.read.key = 0;
		sp->parameters.read.length = length;
		sp->parameters.read.byte_offset = offset;
		sp->parameters.read.flags = 0;
		result.status = call_driver_sync( irp );
		result.result.emplace( std::min( iosb.information, length ) );
		if ( length > iosb.information && result.status.is_success() )
			result.status = STATUS_END_OF_FILE;
		return result;
	}
	nt::result<> write_file( nt::file_object_t* fo, const void* buffer, size_t length, int64_t offset )
	{
		scope_mode _p{};
		io::status_block_t iosb = {};

		if ( size_t( offset ) == std::string::npos ) {
			offset = FILE_WRITE_TO_END_OF_FILE;
		}

		auto [irp, sp] = build_fsd_irp( fo, get_related_device_object( fo, fo->flags & FO_SHADY ),IRP_MJ_WRITE, buffer, length, &iosb );
		if ( !irp )
			return nt::status{ iosb.status };
		set_io_priority( irp, io::priority_hint_t::io_priority_high );
		sp->parameters.write.key = 0;
		sp->parameters.write.length = length;
		sp->parameters.write.byte_offset = offset;
		sp->parameters.write.flags = 0;
		return call_driver_sync( irp );
	}
	nt::result<uint64_t> set_file_info( nt::file_object_t* fo, nt::file_information_class_t iclass, const void* data, size_t len )
	{
		scope_mode _p{};
		io::status_block_t iosb = {};
		auto [irp, sp] = build_fsd_irp( fo, get_related_device_object( fo, fo->flags & FO_SHADY ),IRP_MJ_SET_INFORMATION, data, len, &iosb );
		if ( !irp )
			return nt::status{ iosb.status };
		sp->parameters.set_file.length = len;
		sp->parameters.set_file.file_object = sp->file_object;
		sp->parameters.set_file.file_information_class = iclass;
		return call_driver_sync( irp );
	}
	nt::result<std::unique_ptr<std::byte>> query_info_file_tr( nt::file_object_t* fo, nt::file_information_class_t iclass )
	{
		scope_mode _p{};
		auto* dev = get_related_device_object( fo, fo->flags & FO_SHADY );

		// Query the information.
		//
		return impl::query_info_template<std::byte>(
			[ & ] ( void* ptr, uint32_t len, uint64_t* plen )
			{
				io::status_block_t iosb = {};
				auto [irp, sp] = build_fsd_irp( fo, dev, IRP_MJ_QUERY_INFORMATION, ptr, len, &iosb );
				if ( !irp )
					return iosb.status;
				sp->parameters.query_file.length = len;
				sp->parameters.query_file.file_information_class = iclass;
				int32_t result = call_driver_sync( irp );
				*plen = iosb.information;
				return result;
			},
			[ ] ( auto&&... ) {}
		);
	}
	nt::result<> query_info_directory_tr( nt::file_object_t* fo, xstd::function_view<void( void* )> fn, nt::file_information_class_t iclass )
	{
		scope_mode _p{};
		auto* dev = get_related_device_object( fo, fo->flags & FO_SHADY );

		// Allocate the initial buffer.
		//
		constexpr size_t step_size = 512;
		size_t buffer_length = 2048;
		std::unique_ptr<win::file_both_dir_information_t> buffer{ ( any_ptr ) malloc( buffer_length ) };

		// Loop until we reach the end of the directory.
		//
		for ( bool first = true;; first = false )
		{
			// Loop until the buffer is appropriately sized.
			//
			while ( true )
			{
				io::status_block_t iosb = {};
				auto [irp, sp] = build_fsd_irp( fo, dev, IRP_MJ_DIRECTORY_CONTROL, buffer.get(), buffer_length, &iosb );
				if ( !irp )
					return iosb.status;
				sp->minor_function = IRP_MN_QUERY_DIRECTORY;
				sp->parameters.query_directory.length = buffer_length;
				sp->parameters.query_directory.file_index = 0;
				sp->parameters.query_directory.file_name = nullptr;
				sp->parameters.query_directory.file_information_class = iclass;
				sp->flags = first ? SL_RESTART_SCAN : 0;
				iosb.status = call_driver_sync( irp );

				nt::status status{ iosb.status };
				if ( status != STATUS_BUFFER_OVERFLOW && status != STATUS_BUFFER_TOO_SMALL )
				{
					if ( status.is_error() )
						return status;
					if ( status == STATUS_NO_MORE_FILES || status == STATUS_NO_MORE_ENTRIES )
						return nt::status{ STATUS_SUCCESS };
					if ( iosb.information )
						break;
				}
				buffer_length = buffer_length * 2 + step_size;
				buffer.reset( ( any_ptr ) malloc( buffer_length ) );
			}

			// Callout to the enumerator.
			//
			auto it = buffer.get();
			while( true )
			{
				fn( it );
				if ( !it->next_entry_offset )
					break;
				it = xstd::ptr_at( it, it->next_entry_offset );
			}
		}
		return nt::status{ STATUS_SUCCESS };
	}
	nt::result<size_t> device_io_control( nt::device_object_t* device, uint32_t ioctl_code, const void* input, size_t input_size, void* output, size_t output_size )
	{
		scope_mode _p{};
		io::status_block_t iosb = {};
		nt::result<size_t> result;
		auto [irp, sp] = build_ctl_irp( nullptr, device, ioctl_code, input, input_size, output, output_size, &iosb );
		if ( !irp )
			return nt::status{ iosb.status };
		result.status = call_driver_sync( irp );
		if ( !result.status.is_error() )
			result.result.emplace( iosb.information );
		return result;
	}
	nt::result<> delete_file( nt::file_object_t* fo )
	{
		win::file_disposition_information_ex_t fi = {};
		fi.flags = FILE_DISPOSITION_IGNORE_READONLY_ATTRIBUTE | FILE_DISPOSITION_DELETE | FILE_DISPOSITION_POSIX_SEMANTICS;
		return set_file_info( fo, nt::file_information_class_t::disposition_information_ex, &fi, sizeof( fi ) ).status;
	}

	// Common file APIs.
	//
	nt::result<unique_handle> create_file( const create_file_args& args )
	{
		scope_mode _p{};
		nt::object_attributes_t attributes = {};
		attributes.length = sizeof( nt::object_attributes_t );
		attributes.object_name = ( nt::unicode_view* ) &args.path;
		attributes.attributes = args.object_attributes;
		attributes.root_directory = args.root;

		const uint32_t access_requested = args.async ? args.access : args.access | SYNCHRONIZE;
		const uint32_t create_options = args.create_options | ( args.async ? 0 : FILE_SYNCHRONOUS_IO_NONALERT );
		auto try_create = [ & ] ( nt::device_object_t* dev ) FORCE_INLINE
		{
			uint32_t internal_flags = 0;
			uint32_t options = IO_NO_PARAMETER_CHECKING;

			io::driver_create_context_t ctx = {};
			if ( dev )
			{
				ctx.size = sizeof( ctx );
				ctx.device_object_hint = dev;
				ctx.extra_create_parameter = nullptr;
				ctx.txn_parameters = nullptr;
				ctx.silo_context = ( nt::ejob_t* ) 1;
				internal_flags |= IOP_CREATE_USE_TOP_DEVICE_OBJECT_HINT;
			}
		
			if ( args.ignore_share ) {
				internal_flags |= IOP_CREATE_IGNORE_SHARE_ACCESS_CHECK;
				options |= IO_IGNORE_SHARE_ACCESS_CHECK;
			}
			
			nt::result<unique_handle> r = {};
			r.status = iop::create_file(
				&r.result.emplace().handle,
				access_requested,
				&attributes,
				&args.iosb,
				nullptr,
				args.file_attributes,
				args.share_access,
				args.create_disposition,
				create_options,
				nullptr,
				0ull,
				nt::create_file_type_t::none,
				nullptr,
				options,
				internal_flags,
				dev ? &ctx : nullptr
			);

			if ( r ) {
				if ( auto f = resolve_handle<nt::file_object_t>( r->get() ) ) {
					if ( args.shady ) {
						f->flags |= FO_SHADY;
					}
				} else {
					r->reset();
					r.raise( dev ? STATUS_INVALID_DEVICE_OBJECT_PARAMETER : STATUS_UNSUCCESSFUL );
				}
			}
			return r;
		};

		// If guess device hint is set, try every filesystem device:
		//
		if ( args.guess_device_hint || args.shady )
		{
			nt::result<unique_handle> r;
			std::optional<nt::status> non_mismatch_status;

			auto attempt = [ & ] ( nt::device_object_t* pdev ) FORCE_INLINE -> bool {
				if ( !pdev || pdev->device_type != FILE_DEVICE_DISK_FILE_SYSTEM ) {
					return false;
				}
				assume( pdev != nullptr );
				r = try_create( pdev );
				if ( r.status != STATUS_INVALID_DEVICE_OBJECT_PARAMETER &&
					  r.status != STATUS_INVALID_DEVICE_REQUEST &&
					  r.status != STATUS_INVALID_DEVICE_STATE )
				{
					if ( r.success() ) {
						return true;
					}
					non_mismatch_status = r.status;
				}
				return false;
			};

			// Test common prefixes.
			// - TODO: Device open.
			//
			std::wstring_view name = args.path;
			if ( name.size() >= 7 && name.starts_with( L"\\??\\" ) && ( name.substr( 5 ) ).starts_with( L":\\" ) ) {
				// Device as is.
				{
					auto dev = get_base_fs_from_devpath( name.substr( 0, 6 ) );
					if ( dev && attempt( dev ) ) return r;
				}
				// From path.
				//
				{
					auto dev = get_base_fs_from_path( name.substr( 0, 7 ) );
					if ( dev && attempt( dev ) ) return r;
				}
			} else if ( xstd::istarts_with( name, L"\\SystemRoot" ) ) {
				// Device as is.
				{
					auto dev = get_base_fs_from_devpath( L"\\Device\\BootDevice" );
					if ( dev && attempt( dev ) ) return r;
				}
				// From path.
				//
				{
					auto dev = get_base_fs_from_path( L"\\SystemRoot\\" );
					if ( dev && attempt( dev ) ) return r;
				}
			} else if ( xstd::istarts_with( name, L"\\Device\\HarddiskVolume" ) ) {
				auto np = name.find( '\\', 22 );
				if ( np != std::string::npos ) {
					// Device as is.
					{
						auto dev = get_base_fs_from_devpath( name.substr( 0, np ) );
						if ( dev && attempt( dev ) ) return r;
					}
					// From path.
					//
					{
						auto dev = get_base_fs_from_path( name.substr( 0, np + 1 ) );
						if ( dev && attempt( dev ) ) return r;
					}
				}
			}

			// Destructure one by one.
			//
			size_t it = std::string::npos;
			while ( true ) {
				it = name.find( '\\', it + 1 );
				if ( it == std::string::npos ) break;
				auto dev = get_base_fs_from_path( name.substr( 0, it + 1 ) );
				if ( dev && attempt( dev ) ) return r;
			}

			// If there was a non-mismatch status, restore it and return.
			//
			if ( non_mismatch_status )
				return non_mismatch_status.value();
		}
		if ( args.shady ) return nt::status{ STATUS_UNSUCCESSFUL };

		// Try the default device hint.
		//
		return try_create( args.device_hint );
	}
	nt::result<size_t> file_size( void* handle )
	{
		auto obj = resolve_handle<nt::file_object_t>( handle );
		if ( !obj ) return nt::status{ STATUS_INVALID_HANDLE };
		return file_size( obj.get() );
	}
	nt::result<> flush_file( void* handle )
	{
		auto obj = resolve_handle<nt::file_object_t>( handle );
		if ( !obj ) return nt::status{ STATUS_INVALID_HANDLE };
		return flush_file( obj.get() );
	}
	nt::result<size_t> read_file( void* handle, void* buffer, size_t length, int64_t offset )
	{
		auto obj = resolve_handle<nt::file_object_t>( handle );
		if ( !obj ) return nt::status{ STATUS_INVALID_HANDLE };
		return read_file( obj.get(), buffer, length, offset );
	}
	nt::result<> write_file( void* handle, const void* buffer, size_t length, int64_t offset )
	{
		auto obj = resolve_handle<nt::file_object_t>( handle );
		if ( !obj ) return nt::status{ STATUS_INVALID_HANDLE };
		return write_file( obj.get(), buffer, length, offset );
	}
	nt::result<uint64_t> set_file_info( void* handle, nt::file_information_class_t iclass, const void* data, size_t len )
	{
		auto obj = resolve_handle<nt::file_object_t>( handle );
		if ( !obj ) return nt::status{ STATUS_INVALID_HANDLE };
		return set_file_info( obj.get(), iclass, data, len );
	}
	nt::result<std::unique_ptr<std::byte>> query_info_file_tr( void* handle, nt::file_information_class_t iclass )
	{
		auto obj = resolve_handle<nt::file_object_t>( handle );
		if ( !obj ) return nt::status{ STATUS_INVALID_HANDLE };
		return query_info_file_tr( obj.get(), iclass );
	}
	nt::result<> query_info_directory_tr( void* handle, xstd::function_view<void( void* )> fn, nt::file_information_class_t iclass )
	{
		auto obj = resolve_handle<nt::file_object_t>( handle );
		if ( !obj ) return nt::status{ STATUS_INVALID_HANDLE };
		return query_info_directory_tr( obj.get(), fn, iclass );
	}
	nt::result<size_t> device_io_control( void* device, uint32_t ioctl_code, const void* input, size_t input_size, void* output, size_t output_size )
	{
		auto obj = resolve_handle<nt::file_object_t>( device );
		if ( !obj ) return nt::status{ STATUS_INVALID_HANDLE };
		return device_io_control( get_related_device_object( obj, obj->flags & FO_SHADY ), ioctl_code, input, input_size, output, output_size );
	}
	nt::result<> delete_file( void* handle )
	{
		win::file_disposition_information_ex_t fi = {};
		fi.flags = FILE_DISPOSITION_IGNORE_READONLY_ATTRIBUTE | FILE_DISPOSITION_DELETE | FILE_DISPOSITION_POSIX_SEMANTICS;
		return set_file_info( handle, nt::file_information_class_t::disposition_information_ex, &fi, sizeof( fi ) ).status;
	}

	// Simplified wrappers.
	//
	nt::result<std::vector<uint8_t>> read_file( const nt::unicode_view& name, size_t length, size_t offset, bool shady )
	{
		// Create and resolve the file.
		//
		auto res = create_kfile( { .path = name, .access = GENERIC_READ, .create_disposition = FILE_OPEN, .ignore_share = true, .guess_device_hint = shady, .shady = shady } );
		if ( !res ) return res.status;
		auto& fo = res->second;

		// Do the operation.
		//
		if ( length == std::string::npos ) {
			auto sz = file_size( fo.get() );
			if ( !sz ) return sz.status;
			length = *sz;
			if ( offset > length )
				return nt::status{ STATUS_RANGE_NOT_FOUND };
			length -= offset;
		}
		return read_file( fo.get(), length, offset);
	}
	nt::result<> delete_file( const nt::unicode_view& name )
	{
		if ( auto res = create_kfile( { .path = name, .access = DELETE, .create_disposition = FILE_OPEN, .ignore_share = true } ) ) {
			return delete_file( res->second.get() );
		}

		nt::object_attributes_t attributes = {};
		attributes.length = sizeof( nt::object_attributes_t );
		attributes.object_name = ( nt::unicode_view* ) &name;
		attributes.attributes = OBJ_CASE_INSENSITIVE | default_attributes;
		return ( nt::status ) os::delete_file( &attributes );
	}
	nt::result<> write_file( const nt::unicode_view& name, const void* buffer, size_t length, int64_t offset, std::optional<uint32_t> dispositionv, bool shady )
	{
		uint32_t disposition = dispositionv.value_or( offset ? FILE_OPEN_IF : FILE_OVERWRITE_IF );

		// Create and resolve the file.
		//
		auto res = create_kfile( { .path = name, .access = GENERIC_READ, .create_disposition = disposition, .share_access = FILE_SHARE_READ, .ignore_share = true, .guess_device_hint = shady, .shady = shady } );
		if ( !res ) return res.status;
		auto& fo = res->second;

		// Do the operation.
		//
		return write_file( fo.get(), buffer, length, offset );
	}
	nt::result<> enum_directory( const nt::unicode_view& name, xstd::function_view<void( std::wstring_view, win::file_both_dir_information_t* )> fn, bool shady )
	{
		// Create and resolve the file.
		//
		auto res = create_kfile( { .path = name, .access = GENERIC_READ, .create_disposition = FILE_OPEN, .file_attributes = FILE_DIRECTORY_FILE, .ignore_share = true, .guess_device_hint = shady, .shady = shady } );
		if ( !res ) return res.status;
		auto& fo = res->second;

		// Do the operation.
		//
		return query_info_directory(
			fo.get(),
			[ & ] ( win::file_both_dir_information_t* info ) { fn( std::wstring_view{ info->file_name.data(), info->file_name_length / sizeof( wchar_t ) }, info ); }
		);
	}
#else
	// Common file APIs.
	//
	nt::result<unique_handle> create_file( const create_file_args& args )
	{
		nt::object_attributes_t attributes = {};
		attributes.length = sizeof( nt::object_attributes_t );
		attributes.object_name = ( nt::unicode_view* ) &args.path;
		attributes.attributes = args.object_attributes;
		attributes.root_directory = args.root;

		const uint32_t access_requested = args.async ? args.access : args.access | SYNCHRONIZE;
		const uint32_t create_options = args.create_options | ( args.async ? 0 : FILE_SYNCHRONOUS_IO_NONALERT );

		nt::result<unique_handle> result = {};
		result.status = os::create_file(
			&result.result.emplace().handle,
			access_requested,
			&attributes,
			&args.iosb,
			nullptr,
			args.file_attributes,
			args.share_access,
			args.create_disposition,
			create_options,
			nullptr,
			0ull
		);
		return result;
	}
	nt::result<size_t> file_size( void* handle )
	{
		io::status_block_t iosb = {};
		win::file_standard_info_t file_info;
		nt::result<size_t> result = {};
		result.status = os::query_information_file(
			handle,
			&iosb,
			&file_info,
			sizeof( file_info ),
			nt::file_information_class_t::standard_information
		);
		result.result.emplace( xstd::ref_at<size_t>( &file_info, 8 ) );
		return result;
	}
	nt::result<> flush_file( void* handle )
	{
		io::status_block_t iosb = {};
		return ( nt::status ) os::flush_buffers_file( handle, &iosb );
	}
	nt::result<size_t> read_file( void* handle, void* buffer, size_t length, int64_t offset )
	{
		io::status_block_t iosb = {};
		nt::result<size_t> result;
		result.result.emplace( 0 );
		result.status = os::read_file(
			handle,
			nullptr,
			nullptr,
			nullptr,
			&iosb,
			buffer,
			length,
			&offset,
			nullptr
		);
		result.result.emplace( std::min( iosb.information, length ) );
		if ( length > iosb.information && result.status.is_success() )
			result.status = STATUS_END_OF_FILE;
		return result;
	}
	nt::result<> write_file( void* handle, const void* buffer, size_t length, int64_t offset )
	{
		io::status_block_t iosb = {};

		if ( size_t( offset ) == std::string::npos ) {
			offset = FILE_WRITE_TO_END_OF_FILE;
		}

		return ( nt::status ) os::write_file(
			handle,
			nullptr,
			nullptr,
			nullptr,
			&iosb,
			( void* ) buffer,
			length,
			&offset,
			nullptr
		);
	}
	nt::result<uint64_t> set_file_info( void* handle, nt::file_information_class_t iclass, const void* data, size_t len )
	{
		io::status_block_t iosb;
		iosb.status = ( nt::status ) os::set_information_file( handle, &iosb, ( void* ) data, len, iclass );
		return { iosb.information, iosb.status };
	}
	nt::result<std::unique_ptr<std::byte>> query_info_file_tr( void* handle, nt::file_information_class_t iclass )
	{
		return impl::query_info_template<std::byte>(
			[ & ] ( auto* ptr, auto len, uint64_t* plen )
			{
				io::status_block_t iosb = {};
				int32_t result = os::query_information_file( handle, &iosb, ptr, len, iclass );
				*plen = iosb.information;
				return result;
			},
			[ ] ( auto&&... ) {}
		);
	}
	nt::result<> query_info_directory_tr( void* handle, xstd::function_view<void( void* )> fn, nt::file_information_class_t iclass )
	{
		// Allocate the initial buffer.
		//
		constexpr size_t step_size = 512;
		size_t buffer_length = 2048;
		std::unique_ptr<win::file_both_dir_information_t> buffer{ ( any_ptr ) malloc( buffer_length ) };
		
		// Loop until we reach the end of the directory.
		//
		for ( bool first = true;; first = false )
		{
			// Loop until the buffer is appropriately sized.
			//
			while ( true )
			{
				io::status_block_t iosb = {};
				nt::status status = os::query_directory_file(
					handle,
					nullptr,
					nullptr,
					nullptr,
					&iosb,
					buffer.get(),
					buffer_length,
					iclass,
					false, // Multiple entries.
					nullptr,
					first // Restart if first.
				);

				if ( status != STATUS_BUFFER_OVERFLOW && status != STATUS_BUFFER_TOO_SMALL )
				{
					if ( status.is_error() )
						return status;
					if ( status == STATUS_NO_MORE_FILES || status == STATUS_NO_MORE_ENTRIES )
						return nt::status{ STATUS_SUCCESS };
					if ( iosb.information )
						break;
				}
				buffer_length = buffer_length * 2 + step_size;
				buffer.reset( ( any_ptr ) malloc( buffer_length ) );
			}

			// Callout to the enumerator.
			//
			auto it = buffer.get();
			while( true )
			{
				fn( it );
				if ( !it->next_entry_offset )
					break;
				it = xstd::ptr_at( it, it->next_entry_offset );
			}
		}
		return nt::status{ STATUS_SUCCESS };
	}
	nt::result<size_t> device_io_control( void* device, uint32_t ioctl_code, const void* input, size_t input_size, void* output, size_t output_size )
	{
		io::status_block_t iosb = {};
		nt::result<size_t> result;
		result.status = os::device_io_control_file(
			device,
			nullptr,
			nullptr,
			nullptr,
			&iosb,
			ioctl_code,
			( void* ) input,
			input_size,
			output,
			output_size
		);
		if ( !result.status.is_error() )
			result.result.emplace( iosb.information );
		return result;
	}
	nt::result<> delete_file( void* handle )
	{
		win::file_disposition_information_ex_t fi = {};
		fi.flags = FILE_DISPOSITION_IGNORE_READONLY_ATTRIBUTE | FILE_DISPOSITION_DELETE | FILE_DISPOSITION_POSIX_SEMANTICS;
		return set_file_info( handle, nt::file_information_class_t::disposition_information_ex, &fi, sizeof( fi ) ).status;
	}

	// Simplified wrappers.
	//
	nt::result<std::vector<uint8_t>> read_file( const nt::unicode_view& name, size_t length, size_t offset, bool )
	{
		auto hnd = create_file( { .path = name, .access = GENERIC_READ, .create_disposition = FILE_OPEN } );
		if ( !hnd ) return hnd.status;

		if ( length == std::string::npos ) {
			auto sz = file_size( hnd->get() );
			if ( !sz ) return sz.status;
			length = *sz;
			if ( offset > length )
				return nt::status{ STATUS_RANGE_NOT_FOUND };
			length -= offset;
		}
		return read_file( hnd->get(), length, offset );
	}
	nt::result<> delete_file( const nt::unicode_view& name )
	{
		auto hnd = create_file( { .path = name, .access = DELETE, .create_disposition = FILE_OPEN } );
		if ( hnd ) return delete_file( hnd->get() ).status;

		nt::object_attributes_t attributes = {};
		attributes.length = sizeof( nt::object_attributes_t );
		attributes.object_name = ( nt::unicode_view* ) &name;
		attributes.attributes = OBJ_CASE_INSENSITIVE | default_attributes;
		return ( nt::status ) os::delete_file( &attributes );
	}
	nt::result<> write_file( const nt::unicode_view& name, const void* buffer, size_t length, int64_t offset, std::optional<uint32_t> dispositionv, bool )
	{
		uint32_t disposition = dispositionv.value_or( offset ? FILE_OPEN_IF : FILE_OVERWRITE_IF );
		auto hnd = create_file( { .path = name, .access = GENERIC_WRITE, .create_disposition = disposition, .share_access = FILE_SHARE_READ } );
		if ( !hnd ) return hnd.status;
		return write_file( hnd->get(), buffer, length, offset );
	}
	nt::result<> enum_directory( const nt::unicode_view& name, xstd::function_view<void( std::wstring_view, win::file_both_dir_information_t* )> fn, bool )
	{
		auto hnd = create_file( { .path = name, .access = GENERIC_READ, .create_disposition = FILE_OPEN, .file_attributes = FILE_DIRECTORY_FILE } );
		if ( !hnd ) return hnd.status;
		return ntpp::query_info_directory( 
			hnd->get(),
			[ & ] ( win::file_both_dir_information_t* info ) { fn( std::wstring_view{ info->file_name.data(), info->file_name_length / sizeof( wchar_t ) }, info ); }								   
		);
	}
#endif

	// User-mode driver unload.
	//
	nt::result<> load_driver( const nt::unicode_view& key_path )
	{
		scope_mode _p{};
		return ( nt::status ) os::load_driver( ( nt::unicode_view* ) &key_path );
	}
	nt::result<> unload_driver( const nt::unicode_view& key_path )
	{
		scope_mode _p{};
		return ( nt::status ) os::unload_driver( ( nt::unicode_view* ) &key_path );
	}
};

// CRT requirements.
//
#ifndef NTPP_CRT_NO_IO
#include <mcrt/interface.hpp>
namespace crt
{
	namespace impl
	{
		static void normalize_path( const wchar_t*& io, std::wstring& buf )
		{
			if ( !io || !io[ 0 ] || io[ 0 ] == '\\' )
				return;
			if ( isalpha( io[ 0 ] ) && io[ 1 ] == ':' )
			{
				buf = L"\\??\\";
				buf += io;
				io = buf.data();
			}
			else if ( is_user_mode() )
			{
				buf = L"\\??\\";
				buf += nt::get_peb()->process_parameters->current_directory.dos_path.get();
				buf += io;
				io = buf.data();
			}
		}
	};

	void* open_file( const wchar_t* path, bool write, bool reset )
	{
		std::wstring tmp;
		impl::normalize_path( path, tmp );

		auto result = ntpp::create_file( {
			.path = path,
			.access = uint32_t( write ? GENERIC_WRITE : GENERIC_READ ),
			.create_disposition = uint32_t( reset ? FILE_OVERWRITE_IF : ( write ? FILE_OPEN_IF : FILE_OPEN ) ),
			.share_access = uint32_t( write ? FILE_SHARE_READ | FILE_SHARE_DELETE : FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE ),
			.create_options = FILE_NON_DIRECTORY_FILE
		} );
		if ( result )
			return result->release();
		else
			return nullptr;
	}
	void close_file( void* handle )
	{
		ntpp::close_handle( handle, true );
	}
	size_t size_file( void* handle )
	{
		return ntpp::file_size( handle ).value_or( 0 );
	}
	size_t read_file( void* handle, void* dst, size_t src, size_t n )
	{
		return ntpp::read_file( handle, dst, n, src ).result.value_or( 0 );
	}
	size_t write_file( void* handle, size_t dst, const void* src, size_t n )
	{
		return ntpp::write_file( handle, src, n, dst ) ? n : 0;
	}
	bool rename_file( const wchar_t* src, const wchar_t* dst )
	{
		std::wstring tmp, tmp2;
		impl::normalize_path( src, tmp );
		if ( !dst )
			return ntpp::delete_file( src ).success();

		auto result = ntpp::create_file( {
			.path = src,
			.access = DELETE,
			.create_disposition = FILE_OPEN,
			.share_access = FILE_SHARE_DELETE,
			.create_options = FILE_NON_DIRECTORY_FILE
		} );
		if ( !result )
			return false;

		impl::normalize_path( dst, tmp2 );
		std::wstring_view npath = dst;
		std::vector<uint8_t> itmp( sizeof( win::file_rename_information_t ) + npath.size() + 1 );
		auto* info = ( win::file_rename_information_t* ) itmp.data();
		info->replace_if_exists = true;
		info->root_directory = nullptr;
		info->file_name_length = npath.size();
		std::copy_n( npath.data(), npath.size() + 1, info->file_name.data() );
		return ntpp::set_file_info( result->get(), nt::file_information_class_t::rename_information, itmp.data(), itmp.size() ).success();
	}
};
#endif
#endif