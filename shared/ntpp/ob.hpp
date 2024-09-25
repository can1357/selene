#pragma once
#include "common.hpp"
#include <sdk/ps/api.hpp>
#include <sdk/psp/api.hpp>
#include <sdk/ob/api.hpp>
#include <sdk/se/api.hpp>
#include <sdk/io/api.hpp>
#include <sdk/iop/api.hpp>
#include <sdk/cm/api.hpp>
#include <sdk/cmp/api.hpp>
#include <sdk/obp/api.hpp>
#include <sdk/nt/object_header_t.hpp>
#include <sdk/nt/handle_table_t.hpp>
#include <sdk/nt/handle_table_entry_t.hpp>
#include <sdk/nt/callback_object_t.hpp>
#include <sdk/nt/ksemaphore_t.hpp>
#include <sdk/nt/token_t.hpp>
#include <sdk/nt/section_t.hpp>
#include <sdk/nt/kmutant_t.hpp>
#include <sdk/nt/file_object_t.hpp>
#include <sdk/nt/driver_object_t.hpp>
#include <sdk/nt/device_object_t.hpp>
#include <sdk/cm/key_body_t.hpp>
#include <sdk/mm/session_space_t.hpp>
#include <sdk/nt/object_symbolic_link_t.hpp>
#include <sdk/nt/object_header_name_info_t.hpp>
#include <sdk/nt/object_header_audit_info_t.hpp>
#include <sdk/nt/object_header_creator_info_t.hpp>
#include <sdk/nt/object_header_extended_info_t.hpp>
#include <sdk/nt/object_header_handle_info_t.hpp>
#include <sdk/nt/object_header_quota_info_t.hpp>
#include <sdk/nt/object_header_padding_info_t.hpp>
#include <sdk/nt/object_header_process_info_t.hpp>
#include <sdk/nt/handle_revocation_info_t.hpp>
#include <sdk/win/object_directory_information_t.hpp>

namespace ntpp 
{
	// Globals.
	//
	inline nt::eprocess_t* get_initial_system_process() { return *( nt::eprocess_t** ) &ps::initial_system_process; }
	inline nt::handle_table_t* get_cid_table() { return *( nt::handle_table_t** ) &psp::cid_table; }
	inline nt::handle_table_t* get_kernel_handle_table() { return *( nt::handle_table_t** ) &obp::kernel_handle_table; }

	// Closes the handle.
	//
	nt::result<> close_handle( void* handle, bool nonreg_type = false );

	// Unique handle type.
	//
	struct TRIVIAL_ABI unique_handle
	{
		// Construction by handle / nullptr.
		//
		void* handle = nullptr;
		constexpr unique_handle() = default;
		constexpr unique_handle( void* handle ) : handle( handle ) {}

		// Copy deleted.
		//
		constexpr unique_handle( const unique_handle& ) = delete;
		constexpr unique_handle& operator=( const unique_handle& ) = delete;

		// Implement move.
		//
		constexpr unique_handle( unique_handle&& o ) noexcept : handle( std::exchange( o.handle, nullptr ) ) {}
		constexpr unique_handle& operator=( unique_handle&& o ) noexcept {
			auto h = o.release();
			reset();
			handle = h;
			return *this;
		}

		// Implement release and reset.
		//
		constexpr void* release() { return std::exchange( handle, nullptr ); }
		void reset()
		{
			if ( auto h = release() )
				close_handle( h ).assert();
		}

		// Declare getter.
		//
		constexpr void* get() { return handle; }
		constexpr void* get() const { return handle; }
		constexpr void* operator*() { return handle; }
		constexpr void* operator*() const { return handle; }
		constexpr operator bool() const { return handle != nullptr; }

		// Close handle on destroy.
		//
		~unique_handle() { reset(); }
	};

	// Acquires the registry lock to bypass callbacks.
	//
	struct scope_registry_lock
	{
		FORCE_INLINE scope_registry_lock( bool = true );
		FORCE_INLINE ~scope_registry_lock();
	};

	// Duplicates a handle.
	//
	struct duplicate_handle_args
	{
		void* handle;
		void* src_process = ob::current_process();
		void* dst_process = ob::current_process();
		uint32_t access_mask = MAXIMUM_ALLOWED;
		uint32_t handle_attributes = default_attributes;
	};
	nt::result<unique_handle> duplicate_handle( const duplicate_handle_args& args );

	// Queries object information.
	//
	template<typename T>
	inline nt::result<std::unique_ptr<T>> query_object_info( void* object, nt::object_information_class_t iclass )
	{
		scope_mode _p{};
		return impl::query_info_template<T>( 
			os::query_object,
			[ ] ( auto&&... ) {},
			object, iclass
		);
	}

	// Object directory API.
	//
	inline nt::result<unique_handle> open_object_directory( const nt::unicode_view& name )
	{
		scope_mode _p{};

		nt::object_attributes_t attributes = {};
		attributes.length = sizeof( nt::object_attributes_t );
		attributes.object_name = ( nt::unicode_view* ) &name;
		attributes.attributes = OBJ_CASE_INSENSITIVE | default_attributes;

		nt::result<unique_handle> result;
		result.status = os::open_directory_object(
			&result.result.emplace().handle,
			MAXIMUM_ALLOWED,
			&attributes
		);
		return result;
	}
	template<typename F>
	inline nt::result<> query_object_directory( void* object, F&& fn )
	{
		scope_mode _p{};

		// Allocate the initial buffer.
		//
		size_t buffer_length = ( sizeof( win::object_directory_information_t ) + 64 ) * 32;
		std::unique_ptr<win::object_directory_information_t> buffer{ ( any_ptr ) malloc( buffer_length ) };

		// Loop until we reach the end of the directory.
		//
		uint32_t context;
		for ( bool first = true;; first = false )
		{
			// Loop until the buffer is appropriately sized.
			//
			while( true )
			{
				uint32_t length = 0;
				nt::status status = os::query_directory_object(
					object,
					buffer.get(),
					buffer_length,
					false, // Multiple objects.
					first, // Restart if first.
					&context,
					&length
				);
				if ( !status.is_error() )
					break;
				if ( length <= buffer_length )
					return status;
				buffer_length = length * 2;
				buffer.reset( ( any_ptr ) malloc( buffer_length ) );
			}

			// If empty, break.
			//
			if ( !buffer->name.length )
				break;

			// Callout to the enumerator.
			//
			for ( auto it = buffer.get(); it->name.length; it++ )
				fn( it );
		}
		return nt::status{ STATUS_SUCCESS };
	}
	template<typename F>
	inline nt::result<> query_object_directory( const nt::unicode_view& name, F&& fn )
	{
		auto res = open_object_directory( name );
		if ( !res ) return res.status;
		return query_object_directory( res->get(), std::forward<F>( fn ) );
	}

#if KERNEL_TARGET
	// Object header utilities.
	//
	static constexpr ptrdiff_t object_header_length = 0x30; // sizeof( nt::object_header_t ) - sizeof( nt::object_header_t::body );
	inline nt::object_header_t* get_object_header( any_ptr obj ) { return obj - object_header_length; }
	inline any_ptr skip_object_header( any_ptr hdr ) { return hdr + object_header_length; }

	enum obj_info_flags : uint8_t
	{
		obj_info_creator =    0x1,
		obj_info_name =       0x2,
		obj_info_handle =     0x4,
		obj_info_quota =      0x8,
		obj_info_process =    0x10,
		obj_info_audit =      0x20,
		obj_info_revocation = 0x40,
		obj_info_extended =   0x40,
		obj_info_padding =    0x80,
	};
	namespace impl {
		template<typename T>
		struct ob_decay { using type = T; };
		template<> struct ob_decay<nt::kthread_t>  : ob_decay<nt::ethread_t> {};
		template<> struct ob_decay<nt::kprocess_t> : ob_decay<nt::eprocess_t> {};
		template<typename T> using ob_decay_t = typename ob_decay<std::remove_cvref_t<T>>::type;

		template<typename D>
		static nt::object_type_t* fetch_type_of() {
			if constexpr ( std::is_void_v<D> )
				return nullptr;
			else if constexpr ( std::is_same_v<D, nt::ethread_t> )
				return *( nt::object_type_t** ) &ps::thread_type;
			else if constexpr ( std::is_same_v<D, nt::eprocess_t> )
				return *( nt::object_type_t** ) &ps::process_type;
			else if constexpr ( std::is_same_v<D, nt::file_object_t> )
				return *( nt::object_type_t** ) &io::file_object_type;
			else if constexpr ( std::is_same_v<D, nt::section_t> )
				return *( nt::object_type_t** ) &mm::section_object_type;
			else if constexpr ( std::is_same_v<D, nt::object_directory_t> )
				return *( nt::object_type_t** ) &obp::directory_object_type;
			else if constexpr ( std::is_same_v<D, nt::driver_object_t> )
				return *( nt::object_type_t** ) &io::driver_object_type;
			else if constexpr ( std::is_same_v<D, nt::device_object_t> )
				return *( nt::object_type_t** ) &io::device_object_type;
			else if constexpr ( std::is_same_v<D, cm::key_body_t> )
				return *( nt::object_type_t** ) &cm::key_object_type;
			else if constexpr ( std::is_same_v<D, nt::kevent_t> )
				return *( nt::object_type_t** ) &ex::event_object_type;
			else if constexpr ( std::is_same_v<D, nt::kmutant_t> )
				return *( nt::object_type_t** ) &ex::mutant_object_type;
			else if constexpr ( std::is_same_v<D, nt::ksemaphore_t> )
				return *( nt::object_type_t** ) &ex::semaphore_object_type;
			else if constexpr ( std::is_same_v<D, nt::callback_object_t> )
				return *( nt::object_type_t** ) &ex::callback_object_type;
			else if constexpr ( std::is_same_v<D, nt::token_t> )
				return *( nt::object_type_t** ) &se::token_object_type;
			else if constexpr ( std::is_same_v<D, nt::object_symbolic_link_t> )
				return *( nt::object_type_t** ) &obp::symbolic_link_object_type;
			else {
				static_assert( sizeof( D ) == -1, "Invalid object type." );
				return nullptr;
			}
		}
		
		template<typename T>
		inline nt::object_type_t* const type_of_v = fetch_type_of<T>();

	};
	template<typename T>
	FORCE_INLINE CONST_FN inline nt::object_type_t* type_of() { return impl::type_of_v<impl::ob_decay_t<T>>; }
	CONST_FN FORCE_INLINE nt::object_type_t* type_of( const void* obj );
	CONST_FN FORCE_INLINE int64_t get_object_header_offset( uint8_t info_mask, uint8_t flag );
	inline any_ptr get_object_header_info( nt::object_header_t* hdr, uint8_t flag ) {
		if ( hdr->info_mask & flag ) [[likely]]
			return xstd::ptr_at( hdr, get_object_header_offset( hdr->info_mask, flag ) );
		return nullptr;
	}
	inline any_ptr get_object_info( const void* obj, uint8_t flag ) {
		if ( !obj ) [[unlikely]]
			return nullptr;
		nt::object_header_t* hdr = get_object_header( obj );
		return get_object_header_info( hdr, flag );
	}
	inline nt::object_header_creator_info_t* get_object_creator_info( const void* obj ) { return get_object_info( obj, obj_info_creator ); }
	inline nt::object_header_name_info_t* get_object_name_info( const void* obj ) { return get_object_info( obj, obj_info_name ); }
	inline nt::object_header_handle_info_t* get_object_handle_info( const void* obj ) { return get_object_info( obj, obj_info_handle ); }
	inline nt::object_header_quota_info_t* get_object_quota_info( const void* obj ) { return get_object_info( obj, obj_info_quota ); }
	inline nt::object_header_process_info_t* get_object_process_info( const void* obj ) { return get_object_info( obj, obj_info_process ); }
	inline nt::object_header_audit_info_t* get_object_audit_info( const void* obj ) { return get_object_info( obj, obj_info_audit ); }
	inline nt::handle_revocation_info_t* get_object_handle_revocation_info( const void* obj ) { return get_object_info( obj, obj_info_revocation ); }
	inline nt::object_header_extended_info_t* get_object_extended_info( const void* obj ) { return get_object_info( obj, obj_info_extended ); }
	inline nt::object_header_padding_info_t* get_object_padding_info( const void* obj ) { return get_object_info( obj, obj_info_padding ); }

	// Dynamic casting.
	//
	template<typename T>
	CONST_FN inline T* dyn_cast( any_ptr obj )
	{
		auto* expected_type = type_of<std::remove_cvref_t<T>>();
		if ( obj && expected_type && type_of( obj ) != expected_type ) {
			obj = nullptr;
		}
		return ( T* ) obj;
	}

	// Reference counting.
	//
	inline void reference_object( const void* obj, int64_t count = 1 )
	{
		auto* hdr = get_object_header( obj );
		std::atomic_ref ptr_count{ *( int64_t* ) hdr }; // xstd::make_atomic( hdr->pointer_count );

		auto prev_cnt = ptr_count.fetch_add( count );
		dassert( prev_cnt > 0 );
	}
	inline bool reference_object_s( const void* obj, int64_t count = 1 )
	{
		if ( !obj ) [[unlikely]]
			return false;
		auto* hdr = get_object_header( obj );
		std::atomic_ref ptr_count{ *( int64_t* ) hdr }; // xstd::make_atomic( hdr->pointer_count );

		int64_t expected_count = ptr_count;
		while ( expected_count != 0 ) [[likely]]
			if ( ptr_count.compare_exchange_strong( expected_count, expected_count + count ) ) [[likely]]
				return true;
		return false;
	}
	inline void dereference_object( const void* obj, int64_t count = 1 )
	{
		auto* hdr = get_object_header( obj );
		std::atomic_ref ptr_count{ *( int64_t* ) hdr }; // xstd::make_atomic( hdr->pointer_count );

		auto new_cnt = ptr_count -= count;
		dassert( new_cnt >= 0 );
		if ( !new_cnt ) [[unlikely]]
			obp::defer_object_deletion( hdr );
	}
	template<typename T = void>
	struct ref
	{
		T* object;

		// Constructed by a pointer to the type.
		//
		ref( T* object, bool adopt_ref ) : object( object )
		{
			if ( !adopt_ref && object )
				reference_object( object );
		}
		explicit ref( T* obj ) : ref( obj, false ) {}
		constexpr ref() noexcept : ref( nullptr ) {}

		// Implement copy and move.
		//
		ref( ref&& o ) noexcept : ref( std::exchange( o.object, nullptr ), true ) {}
		ref( const ref& o ) : ref( o.object, false ) {}
		ref& operator=( ref&& o ) noexcept
		{
			std::swap( o.object, object );
			return *this;
		}
		ref& operator=( const ref& o )
		{
			auto* obj = o.object;
			if ( obj ) 
				reference_object( obj );
			reset();
			object = obj;
			return *this;
		}

		// Decay to pointer on demand.
		//
		T* get() const { return object; }
		T* operator->() const { return object; }
		operator T*() const { return object; }
		explicit operator bool() const { return object; }

		// Hashing and string conversion.
		//
		auto tie() { return std::tie( object ); }
		std::string to_string() const { return xstd::fmt::as_string( object ); }

		// Reset release and destructor.
		//
		T* release()
		{
			return std::exchange( object, nullptr );
		}
		void reset( T* other = nullptr, bool inherit = false )
		{
			if ( !inherit && !reference_object_s( other ) )
				other = nullptr;
			if ( T* obj = std::exchange( object, other ) )
				dereference_object( obj );
		}
		~ref() { reset(); }
	};
	template<typename T>
	inline ref<T> make_safe_reference( T* ptr ) {
		if ( reference_object_s( ptr ) )
			return ref<T>{ ptr, true};
		return ref<T>{};
	}

	// Resolves a handle within the context of a handle table; does not handle locks.
	//
	union handle_table_level {
		uint64_t value;
		nt::handle_table_entry_t* entry;
		handle_table_level* table;
	};
	nt::handle_table_entry_t* lookup_handle_table_entry( nt::handle_table_t* table, any_ptr handle );
	
	// Sets or gets the target object of an handle table entry.
	//
	enum class table_type : ptrdiff_t
	{
		// CID table entries point at the object as is.
		cid_table    = 0,
		// Handle table entries point at the object header.
		handle_table = object_header_length
	};
	template<table_type Type>
	inline any_ptr resolve_handle_table_entry( nt::handle_table_entry_t* entry )
	{ 
		uint64_t value = ( *( ( int64_t* ) entry ) >> 16 ) & ~0xFull;
		if ( value ) [[likely]]
		{
			value += ( ptrdiff_t ) Type;
			value |= ~0ull << ia32::mem::va_bits;
		}
		return value;
	}
	template<table_type Type>
	inline void replace_handle_table_entry( nt::handle_table_entry_t* entry, any_ptr object )
	{
		if ( object ) [[likely]]
			object -= ( ptrdiff_t ) Type;
		entry->object_pointer_bits = object.address >> 4; 
	}
	
	// Locks/Unlocks the handle table entry.
	//
	bool lock_handle_table_entry( nt::handle_table_t* table, nt::handle_table_entry_t* entry );
	void unlock_handle_table_entry( nt::handle_table_t* table, nt::handle_table_entry_t* entry );

	// Resolves a handle within the context of a handle table; acquires the lock before returning if non-null.
	//
	nt::handle_table_entry_t* reference_handle_table_entry( nt::handle_table_t* table, any_ptr handle );

	// Destroys a given handle table entry.
	//
	void destroy_handle_table_entry( nt::handle_table_t* table, any_ptr handle, nt::handle_table_entry_t* entry );
	bool destroy_handle_table_entry( nt::handle_table_t* table, any_ptr handle );

	// Creates a new handle table entry.
	//
	void* create_handle_table_entry( nt::handle_table_t* table, const void* object, uint32_t access_mask = 0, uint32_t handle_attributes = 0 );

	// References a handle table entry and returns the referenced object if possible.
	//
	template<table_type Type, typename T = void>
	inline ref<T> reference_handle_object( nt::handle_table_t* table, uint64_t raw_handle )
	{
		critical_region _g{};
		if ( auto* entry = reference_handle_table_entry( table, raw_handle ) ) [[likely]]
		{
			any_ptr object = resolve_handle_table_entry<Type>( entry );
			reference_object( object );
			unlock_handle_table_entry( table, entry );

			if ( object ) [[likely]]
			{
				if ( T* result = dyn_cast< T >( object ) ) [[likely]]
					return ref<T>{ result, true };
				else
					dereference_object( object );
			}
		}
		return {};
	}
	
	// Enumerates handle table entries in the given table.
	//
	template<typename F>
	inline void enum_handle_table( nt::handle_table_t* table, F&& fn )
	{
#if NTPP_OB_UNSAFE_RESOLUTION
		critical_region _g{};
		for ( size_t idx = 4; idx < table->next_handle_needing_pool; idx += 4 )
		{
			auto* entry = reference_handle_table_entry( table, ( void* ) idx );
			if ( !entry ) [[unlikely]]
				continue;

			fn( ( void* ) idx, entry );
			unlock_handle_table_entry( table, entry );
		}
#else
		ex::enum_handle_table( table, +[ ] ( nt::handle_table_t* table, nt::handle_table_entry_t* entry, void* handle, void* ctx ) {
			using FPtr = decltype( &fn );
			( *FPtr( ctx ) )( handle, entry );
			unlock_handle_table_entry( table, entry );
			return false;
		}, &fn, nullptr );
#endif
	}

	// Resolves a given handle into an object.
	//
	template<typename T = void>
	inline ref<T> resolve_handle( void* hnd, nt::eprocess_t* process = nullptr )
	{
		// Handle special handles.
		//
		if ( ob::is_special_handle( hnd ) ) {
			if ( hnd == ob::current_thread() ) {
				if constexpr ( xstd::Void<T> || std::is_same_v<T, nt::ethread_t> || std::is_same_v<T, nt::kthread_t> )
					return ref<T>{ ( T* ) ke::get_ethread() };
			} else if ( hnd == ob::current_process() ) {
				if constexpr ( xstd::Void<T> || std::is_same_v<T, nt::eprocess_t> || std::is_same_v<T, nt::kprocess_t> )
					return ref<T>{ ( T* ) ke::get_eprocess() };
			}
			return {};
		}
#if NTPP_OB_UNSAFE_RESOLUTION
		uint64_t hnd_val = uint64_t( hnd );
		nt::handle_table_t* tbl;
		shared_lock<ex::rundown_ref_t> g{};

		// If kernel handle:
		//
		if ( ob::clear_khandle( hnd_val ) )
		{
			tbl = get_kernel_handle_table();
		}
		else
		{
			// Acquire rundown protection for the process we're going to reference the handle table of.
			//
			if ( !process ) process = ke::get_eprocess();
			g.reset( &process->rundown_protect );

			// Reference the process's handle table.
			//
			tbl = process->object_table;
		}

		// Reference the object and return.
		//
		return reference_handle_object<table_type::handle_table, T>( tbl, hnd_val );
#endif

		// If there's a process context associated, attach to it.
		//
		if ( ob::is_khandle( hnd ) ) {
			process = nullptr;
		}
		scope_process sp{ process };

		// Resolve the handle.
		//
		if constexpr ( std::is_same_v<nt::file_object_t, T> ) {
			nt::file_object_t* fo = nullptr;
			iop::reference_file_object( hnd, 0, 0, &fo, nullptr );
			return ntpp::ref{ fo, true };
		} else {
			T* result = nullptr;
			ob::reference_object_by_handle(
				hnd,
				0,
				type_of<T>(),
				( char ) nt::mode_t::kernel_mode,
				( void** ) &result,
				nullptr
			);
			return ntpp::ref{ result, true };
		}

	}

	// Helper for closing all handles.
	//
	template<typename F>
	inline void close_handle_if( nt::eprocess_t* eproc, F&& filter )
	{
		// Acquire the rundown protection.
		//
		shared_lock g{ &eproc->rundown_protect };
		if ( !g.handle() )
			return;

		// Reference the handle table.
		//
		bool is_system_proc = eproc == get_initial_system_process();
		nt::handle_table_t* tbl = is_system_proc ? get_kernel_handle_table() : eproc->object_table;
		if ( !tbl )
			return;

		// Enumerate the handle table.
		//
		std::vector<void*> close_list;
		enum_handle_table( tbl, [ & ] ( void* handle, nt::handle_table_entry_t* entry ) {
			// Run it through the filter.
			//
			if ( filter( entry ) ) {
				// Remove the protection.
				//
				xstd::make_atomic( entry->attributes ).fetch_and( ~( OBJ_PROTECT_CLOSE | OBJ_AUDIT_OBJECT_CLOSE ) );

				// Revoke the handle if file object.
				//
				void* obj = resolve_handle_table_entry<table_type::handle_table>( entry );
				if ( obj && dyn_cast< nt::file_object_t >( obj ) ) {
					iop::revoke_file_object_for_process( obj, eproc );
				}

				// Adjust the handle if system process and push to the list.
				//
				if ( is_system_proc )
					handle = ob::make_khandle( handle );
				close_list.emplace_back( handle );
			}
		} );

		// If close list is not empty:
		//
		if ( !close_list.empty() ) {
			scope_process g{ eproc };
			for ( any_ptr hnd : close_list ) {
				if ( close_handle( hnd ) ) continue;
#if NTPP_OB_UNSAFE_RESOLUTION
				destroy_handle_table_entry( tbl, hnd & ~ob::khandle_flag );
#endif
			}
		}
	}

	// Finds an object by its name.
	//
	template<xstd::NonVoid T>
	inline ref<T> reference_object_by_name( std::wstring_view name )
	{
		nt::unicode_view str = name;
		T* result = nullptr;
		ob::reference_object_by_name(
			&str,
			OBJ_CASE_INSENSITIVE | OBJ_KERNEL_HANDLE,
			nullptr,
			0ull,
			type_of<T>(),
			0,
			nullptr,
			( void** ) &result
		);
		return ref<T>{ result, true };
	}

	// Creates a handle to an object by its pointer.
	//
	template<xstd::NonVoid T>
	inline nt::result<unique_handle> open_object_by_pointer( const T* obj )
	{
		unique_handle result = {};
		nt::status status = ob::open_object_by_pointer(
			( void* ) obj,
			OBJ_KERNEL_HANDLE,
			nullptr,
			MAXIMUM_ALLOWED,
			type_of<T>(),
			0,
			&result.handle
		);
		return nt::result<unique_handle>{ std::move( result ), status };
	}

	// Queries the name of an object.
	//
	std::wstring name_object( const void* obj );
	
	// Thread/Process lookup by ID.
	//
	template<typename T>
	inline ref<T> lookup_cid( any_ptr cid )
	{
		// If we're looking up processes:
		//
		if constexpr ( std::is_same_v<T, nt::eprocess_t> || std::is_same_v<T, nt::kprocess_t> )
		{
			// If client id is 4, take the shortcut to resolving the initial system process.
			//
			if ( cid == 4 )
				return ref<T>{ ( T* ) get_initial_system_process() };
		}

		// Reference the object and return.
		//
		return reference_handle_object<table_type::cid_table, T>( get_cid_table(), cid );
	}
	inline ref<nt::ethread_t> lookup_thread( any_ptr tid ) { return lookup_cid<nt::ethread_t>( tid ); }
	inline ref<nt::eprocess_t> lookup_process( any_ptr pid ) { return lookup_cid<nt::eprocess_t>( pid ); }
#endif

	// Thread/Process lookup by ID.
	//
	nt::result<unique_handle> open_process( void* pid, uint32_t access = MAXIMUM_ALLOWED );
	nt::result<unique_handle> open_thread( void* tid, uint32_t access = MAXIMUM_ALLOWED );
};