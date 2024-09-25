#pragma once
#include "common.hpp"
#include "sync.hpp"
#include "ob.hpp"
#include <xstd/function_view.hpp>
#include <sdk/io/api.hpp>
#include <sdk/iop/api.hpp>
#include <sdk/io/driver_create_context_t.hpp>
#include <sdk/io/stack_location_t.hpp>
#include <sdk/nt/devobj_extension_t.hpp>
#include <sdk/win/file_standard_info_t.hpp>
#include <sdk/win/file_both_dir_information_t.hpp>
#include <sdk/win/file_completion_information_t.hpp>
#include <sdk/nt/create_file_type_t.hpp>
#include <sdk/nt/file_object_extension_t.hpp>
#include <sdk/win/file_disposition_information_ex_t.hpp>
#include <sdk/nt/irp_t.hpp>

namespace ntpp
{
	constexpr uint32_t FO_SHADY = 0x80000000;
	
	struct create_file_args
	{
		nt::unicode_view path;
		uint32_t access = MAXIMUM_ALLOWED;
		uint32_t create_disposition = FILE_OPEN;
		uint32_t share_access = FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE;
		uint32_t file_attributes = FILE_ATTRIBUTE_NORMAL;
		uint32_t create_options = 0;
		bool async = false;
		nt::device_object_t* device_hint = nullptr;
		bool ignore_share = false;
		bool guess_device_hint = false;
		uint32_t object_attributes = OBJ_CASE_INSENSITIVE | default_attributes;
		mutable io::status_block_t iosb = {};
		void* root = nullptr;
		bool shady = false;
	};

	// Common file APIs.
	//
	nt::result<unique_handle> create_file( const create_file_args& args );
	nt::result<size_t> file_size( void* handle );
	nt::result<> flush_file( void* handle );
	nt::result<size_t> read_file( void* handle, void* buffer, size_t length, int64_t offset = 0 );
	nt::result<> write_file( void* handle, const void* buffer, size_t length, int64_t offset = 0 );
	nt::result<uint64_t> set_file_info( void* handle, nt::file_information_class_t iclass, const void* data, size_t len );
	nt::result<> delete_file( void* handle );
	nt::result<std::unique_ptr<std::byte>> query_info_file_tr( void* handle, nt::file_information_class_t iclass = nt::file_information_class_t::standard_information );
	nt::result<> query_info_directory_tr( void* handle, xstd::function_view<void( void* )> fn, nt::file_information_class_t iclass = nt::file_information_class_t::both_directory_information );
	nt::result<size_t> device_io_control( void* device, uint32_t ioctl_code, const void* input, size_t input_size, void* output, size_t output_size );

#if KERNEL_TARGET
	// IRP executors.
	//
	nt::status call_driver( nt::irp_t* irp );
	nt::status call_driver_sync( nt::irp_t* irp );

	// IRP priority.
	//
	void set_io_priority( nt::irp_t* irp, io::priority_hint_t hint );
	io::priority_hint_t get_io_priority( nt::irp_t* irp );
	void set_io_priority( nt::ethread_t* thr, io::priority_hint_t hint );
	io::priority_hint_t get_io_priority( nt::ethread_t* thr );

	// IRP builders.
	//
	std::pair<nt::irp_t*, io::stack_location_t*> build_fsd_irp( nt::file_object_t* fo, nt::device_object_t* dev, uint32_t mj, any_ptr buffer, size_t length, io::status_block_t* iosb );
	std::pair<nt::irp_t*, io::stack_location_t*> build_ctl_irp( nt::file_object_t* fo, nt::device_object_t* dev, uint32_t ctl, any_ptr in, size_t ilen, any_ptr out, size_t olen, io::status_block_t* iosb );

	// Completion routine helper.
	//
	void set_completion_routine( io::stack_location_t* sp, io::stack_location_t::pio_completion_routine_t fn,
										  void* ctx, uint32_t control = SL_INVOKE_ON_CANCEL | SL_INVOKE_ON_SUCCESS | SL_INVOKE_ON_ERROR );

	// Device/File Object utils.
	//
	ref<nt::device_object_t> get_lowest_device( nt::device_object_t* dev );
	nt::device_object_t* get_base_fs_device( nt::file_object_t* obj );
	nt::device_object_t* get_related_device_object( nt::file_object_t* fo, bool no_stack_traverse = false );

	// Driver unload.
	//
	xstd::result<> unload_driver( nt::driver_object_t* drv, bool unsafe );
	xstd::result<> test_for_unload( nt::driver_object_t* drv, bool unsafe );

	// Async IRP.
	//
	struct TRIVIAL_ABI async_irp {
		nt::irp_t* irp = nullptr;
		io::stack_location_t* sp = nullptr;
		
		// Constructed by an IRP.
		//
		async_irp( nt::irp_t* irp ) : irp( irp ), sp( irp->tail.overlay.current_stack_location ) {}

		// Make it act as nt::irp*.
		//
		nt::irp_t* operator->() const { return irp; }

		// Buffer for the previous completion context.
		//
		io::stack_location_t::pio_completion_routine_t prev_complete = nullptr;
		void*                                          prev_ctx = nullptr;
		uint32_t                                       prev_control = 0;
		xstd::coroutine_handle<>                       coro_continue = {};

		inline bool await_ready() { return false; }
		void await_suspend( xstd::coroutine_handle<> h );
		inline nt::status await_resume() { return { irp->io_status.status }; }
	};

	// Kernel mode file APIs.
	//
	nt::result<std::pair<unique_handle, ref<nt::file_object_t>>> create_kfile( const create_file_args& args );
	nt::result<size_t> file_size( nt::file_object_t* fo );
	nt::result<> flush_file( nt::file_object_t* fo );
	nt::result<size_t> read_file( nt::file_object_t* fo, void* buffer, size_t length, int64_t offset = 0 );
	nt::result<> write_file( nt::file_object_t* fo, const void* buffer, size_t length, int64_t offset = 0 );
	nt::result<uint64_t> set_file_info( nt::file_object_t* fo, nt::file_information_class_t iclass, const void* data, size_t len );
	nt::result<> delete_file( nt::file_object_t* fo );
	nt::result<std::unique_ptr<std::byte>> query_info_file_tr(nt::file_object_t* fo, nt::file_information_class_t iclass = nt::file_information_class_t::standard_information);
	nt::result<> query_info_directory_tr( nt::file_object_t* fo, xstd::function_view<void( void* )> fn, nt::file_information_class_t iclass = nt::file_information_class_t::both_directory_information );
	nt::result<size_t> device_io_control( nt::device_object_t* device, uint32_t ioctl_code, const void* input, size_t input_size, void* output, size_t output_size );
	
#endif
	// Typed wrappers.
	//
	template<typename T = win::file_both_dir_information_t, typename FoOrHnd, typename F>
	inline nt::result<> query_info_directory( FoOrHnd* obj, F&& fn, nt::file_information_class_t iclass = nt::file_information_class_t::both_directory_information ) {
		return query_info_directory_tr( obj, [ & ] ( void* p ) { fn( ( T* ) p ); }, iclass );
	}
	template<typename T = win::file_standard_info_t, typename FoOrHnd>
	nt::result<std::unique_ptr<T>> query_info_file( FoOrHnd* obj, nt::file_information_class_t iclass = nt::file_information_class_t::standard_information ) {
		auto res = query_info_file_tr( obj, iclass );
		if ( !res ) return res.status;
		return std::unique_ptr<T>{ ( T* ) std::move( res ).value().release() };
	}

	// User-mode driver unload.
	//
	nt::result<> load_driver( const nt::unicode_view& key_path );
	nt::result<> unload_driver( const nt::unicode_view& key_path );

	// Simplified wrappers.
	//
	template<typename FoOrHnd>
	inline nt::result<std::vector<uint8_t>> read_file( FoOrHnd* obj, size_t length, int64_t offset = 0 )
	{
		nt::result<std::vector<uint8_t>> result;
		auto& buffer = result.result.emplace();
		buffer.resize( length );
		auto sres = read_file( obj, buffer.data(), length, offset );
		result.status = sres.status;
		buffer.resize( sres.result.value_or( 0 ) );
		return result;
	}
	inline nt::result<unique_handle> open_device( const nt::unicode_view& name )
	{
		return create_file( { .path = name, .access = FILE_GENERIC_READ | FILE_GENERIC_WRITE } );
	}
	nt::result<std::vector<uint8_t>> read_file( const nt::unicode_view& name, size_t length = std::string::npos, size_t offset = 0, bool shady = false );
	nt::result<> delete_file( const nt::unicode_view& name );
	nt::result<> write_file( const nt::unicode_view& name, const void* buffer, size_t length, int64_t offset = 0, std::optional<uint32_t> dispositionv = std::nullopt, bool shady = false );
	nt::result<> enum_directory( const nt::unicode_view& name, xstd::function_view<void( std::wstring_view, win::file_both_dir_information_t* )> fn, bool shady = false );
};