#if !__private_binary__ && not defined(NO_NTPP)
#include "ob.hpp"
#include "sync.hpp"
#include <sdk/expi/api.hpp>

namespace ntpp
{
#if KERNEL_TARGET && !defined(NTPP_NO_OB)
	static std::array<uint8_t, 0x100> obp_info_mask_to_offset;
	static std::array<nt::object_type_t*, 256> ob_type_index_table;

	[[gnu::constructor( 122 )]] static void init_ob() {
		nt::object_type_t** tbl = ( nt::object_type_t** ) &ob::type_index_table;
		uint32_t cookie = *( const uint32_t* ) &ob::header_cookie;
		for ( uint32_t i = 0; i != 256; i++ ) {
			ob_type_index_table[ i ] = tbl[ ( cookie ^ i ) & 0xFF ];
		}
		memcpy( &obp_info_mask_to_offset, ( void* ) &obp::info_mask_to_offset, sizeof( obp_info_mask_to_offset ) );
	}

	CONST_FN FORCE_INLINE int64_t get_object_header_offset( uint8_t info_mask, uint8_t flag ) {
		return -int64_t( obp_info_mask_to_offset[ info_mask & ( flag | ( flag - 1 ) ) ] );
	}
	CONST_FN FORCE_INLINE nt::object_type_t* type_of( const void* obj ) {
		nt::object_header_t* hdr = get_object_header( obj );
		return ob_type_index_table[ ( hdr->type_index ^ ( uint64_t( hdr ) >> 8 ) ) & 0xFF ];
	}
#endif

	FORCE_INLINE nt::result<> close_handle( void* handle, bool nonreg_type )
	{
		if constexpr ( is_kernel_mode() )
		{
			if ( !nonreg_type && get_task_priority() == 0 ) [[unlikely]]
			{
				scope_registry_lock _g{};
				return ( nt::status ) obp::close_handle( handle, nt::mode_t::kernel_mode );
			} else
			{
				return ( nt::status ) obp::close_handle( handle, nt::mode_t::kernel_mode );
			}
		} else
		{
			return ( nt::status ) os::close( handle );
		}
	}

	FORCE_INLINE scope_registry_lock::scope_registry_lock( bool )
	{
		if constexpr ( is_kernel_mode() )
			lock_shared( ( nt::eresource_t* ) &cmp::registry_lock );
	}
	FORCE_INLINE scope_registry_lock::~scope_registry_lock()
	{
		if constexpr ( is_kernel_mode() )
			unlock_shared( ( nt::eresource_t* ) &cmp::registry_lock );
	}

	// Thread/Process lookup by ID.
	//
	nt::result<unique_handle> open_process( void* pid, uint32_t access )
	{
		scope_mode _p{};

		nt::client_id_t client_id = {};
		client_id.unique_process = pid;
		client_id.unique_thread = nullptr;

		nt::object_attributes_t attrib = {};
		attrib.length = sizeof( nt::object_attributes_t );
		attrib.attributes = default_attributes;

		nt::result<unique_handle> res = {};
		res.status = os::open_process( &res.result.emplace().handle, access, &attrib, &client_id );
		return res;
	}
	nt::result<unique_handle> open_thread( void* tid, uint32_t access )
	{
		scope_mode _p{};

		nt::client_id_t client_id = {};
		client_id.unique_process = nullptr;
		client_id.unique_thread = tid;


		nt::object_attributes_t attrib = {};
		attrib.length = sizeof( nt::object_attributes_t );
		attrib.attributes = default_attributes;

		nt::result<unique_handle> res = {};
		res.status = os::open_thread( &res.result.emplace().handle, access, &attrib, &client_id );
		return res;
	}

	// Duplicates a handle.
	//
	nt::result<unique_handle> duplicate_handle( const duplicate_handle_args& args )
	{
		scope_mode _p{};

		nt::result<unique_handle> result = {};
		result.status = os::duplicate_object(
			args.src_process,
			args.handle,
			args.dst_process,
			&result.result.emplace().handle,
			MAXIMUM_ALLOWED,
			args.handle_attributes,
			0
		);
		return result;
	}

	#if KERNEL_TARGET

	// Resolves a handle within the context of a handle table; does not handle locks.
	//
	nt::handle_table_entry_t* lookup_handle_table_entry( nt::handle_table_t* table, any_ptr handle )
	{
		//return ( nt::handle_table_entry_t* ) expi::lookup_handle_table_entry( table, handle.address );

		// Convert the handle value to an integer and mask, if out of table boundaries, fail.
		//
		uint64_t handle_value = uint64_t( handle ) & ~3;
		if ( handle_value >= table->next_handle_needing_pool ) [[unlikely]]
			return nullptr;
		handle_value >>= 2;

		// Switch based on nesting level:
		//
		handle_table_level level = { table->table_code & ~3ull };
		switch ( table->table_code & 3 )
		{
			case 0:  return &level.entry[ handle_value ];
			case 1:  return &level.table[ handle_value >> 8 ].entry[ handle_value & 0xFF ];
			default: return &level.table[ handle_value >> 17 ].table[ ( handle_value >> 8 ) & 0x1FF ].entry[ handle_value & 0xFF ];
		}
	}

	// Locks/Unlocks the handle table entry.
	//
	bool lock_handle_table_entry( nt::handle_table_t* table, nt::handle_table_entry_t* entry )
	{
		// Start the transaction loop.
		//
		auto& ref = xstd::make_atomic( entry->volatile_low_value );
		int64_t value = ref.load( std::memory_order::relaxed );
		while ( value ) [[likely]]
		{
			// Handle locked entry:
			//
			if ( !( value & 1 ) ) [[unlikely]]
			{
				expi::block_on_locked_handle_entry( table, entry, value );
				value = ref.load( std::memory_order::relaxed );
				continue;
			}

				// If we could acquire the lock, return.
				//
				if ( ref.compare_exchange_strong( value, value - 1 ) ) [[likely]]
					return true;
		}
		return ( ( uint8_t ) ex::lock_handle_table_entry( table, entry ) ) != 0;
	}
	void unlock_handle_table_entry( nt::handle_table_t* table, nt::handle_table_entry_t* entry )
	{
		// Set the unlocked bit.
		//
		xstd::atomic_bit_set( *( uint64_t* ) entry, 0 );

		// Unblock the pushlock if relevant.
		//
		if ( auto& evt = table->handle_contention_event; evt.value != 0 )
			expi::unblock_push_lock( &evt, nullptr, 0 );
	}

	// Resolves a handle within the context of a handle table; acquires the lock before returning if non-null.
	//
	nt::handle_table_entry_t* reference_handle_table_entry( nt::handle_table_t* table, any_ptr handle )
	{
		auto* entry = lookup_handle_table_entry( table, handle );
		if ( !entry || !lock_handle_table_entry( table, entry ) ) [[unlikely]]
			entry = nullptr;
		return entry;
	}

	// Destroys a given handle table entry.
	//
	void destroy_handle_table_entry( nt::handle_table_t* table, any_ptr handle, nt::handle_table_entry_t* entry )
	{
		ex::destroy_handle( table, handle, entry );
	}
	bool destroy_handle_table_entry( nt::handle_table_t* table, any_ptr handle )
	{
		critical_region _g{};
		auto entry = reference_handle_table_entry( table, handle );
		if ( !entry ) [[unlikely]]
			return false;
		destroy_handle_table_entry( table, handle, entry );
		return true;
	}

	// Creates a new handle table entry.
	//
	void* create_handle_table_entry( nt::handle_table_t* table, const void* object, uint32_t access_mask, uint32_t handle_attributes )
	{
		return ( void* ) ex::create_handle_ex( table, object, access_mask, handle_attributes, nullptr );
	}

	// Queries the name of an object.
	//
	std::wstring name_object( const void* obj )
	{
		std::vector<uint8_t> data;
		uint32_t length = sizeof( nt::object_name_information_t ) + 256;
		while ( 1 )
		{
			data.resize( length );
			auto status = ( nt::status ) ob::query_name_string(
				( any_ptr ) obj,
				( any_ptr ) data.data(),
				length,
				&length
			);
			if ( status.is_success() )
			{
				auto inf = ( nt::object_name_information_t* ) data.data();
				return std::wstring{ inf->name.get() };
			}
			if ( length <= data.size() )
				return {};
		}
	}
	#endif
};
#endif