#pragma once
#include <xstd/formatting.hpp>
#include "common.hpp"
#include "enums.hpp"
#include "vm.hpp"

namespace wasm
{
	// Descriptor for resizable limits.
	//
	struct resizable_limits_t
	{
		// Set if maximum field is present.
		//
		var_enum_t<limits_flags>          flags;
		var_size_t                        initial;
		var_size_t                        maximum;

		// String conversion.
		//
		std::string to_string() const
		{
			std::vector<std::string> str_flags;
			if ( flags.value & limits_is_shared )
				str_flags.emplace_back( "shared" );
			if ( flags.value & limits_memory64 )
				str_flags.emplace_back( "mem64" );

			if ( flags.value & limits_has_max )
				return xstd::fmt::str( "[%llx, %llx] %s", flags.value, initial.value, str_flags );
			else
				return xstd::fmt::str( "[%llx] %s", flags.value, str_flags );
		}

		// Manually serialized according to the RFC.
		//
		static resizable_limits_t deserialize( xstd::serialization& stream )
		{
			resizable_limits_t lims;
			stream >> lims.flags;
			stream >> lims.initial;
			if ( lims.flags & limits_has_max )
				stream >> lims.maximum;
			else
				lims.maximum = lims.initial;
			return lims;
		}
		void serialize( xstd::serialization& stream ) const
		{
			stream << flags;
			stream << initial;
			if ( flags.value & limits_has_max )
				stream << maximum;
		}
	};

	// Descriptor for function types.
	//
	struct func_type_t
	{
		var_enum_t<language_type>         form;
		var_container<value_type>         param_types;
		var_container<value_type, 1>      return_types;

		// Auto-serialization.
		//
		auto tie() { return std::tie( form, param_types, return_types ); }
	};

	// Descriptor for global types.
	//
	struct global_type_t
	{
		value_type                        type;
		var_bool_t                        mutability;

		// Auto-serialization.
		//
		auto tie() { return std::tie( type, mutability ); }
	};

	// Descriptor for table types.
	//
	struct table_type_t
	{
		elem_type                         element_type;
		resizable_limits_t                limits;

		// Auto-serialization.
		//
		auto tie() { return std::tie( element_type, limits ); }
	};

	// Descriptor for memory.
	//
	struct memory_type_t
	{
		resizable_limits_t                limits;

		// Auto-serialization.
		//
		auto tie() { return std::tie( limits ); }
	};

	// Descriptor for local variables.
	//
	struct local_entry_t
	{
		var_size_t                        count;
		value_type                        type;

		// Auto-serialization.
		//
		auto tie() { return std::tie( count, type ); }
	};

	// TODO:
	// Descriptor for data segments.
	//
	//struct data_segment_t
	//{
	//    var_uint_t<32>                    index;
	//    init_expression_t                 offset;
	//    var_container<uint8_t>            raw_data;
	//
	//    // Auto-serialization.
	//    //
	//    auto tie() { return std::tie( index, offset, raw_data ); }
	//};

	// Descriptor for function bodies.
	//
	struct function_body_t
	{
		var_container<local_entry_t>      locals;
		std::vector<uint8_t>              code;

		size_t                            code_offset; // Absolute offset into the stream, not serialized, just for ease of linking.

		// Manually serialized according to the RFC.
		//
		static function_body_t deserialize( xstd::serialization& stream )
		{

			function_body_t body;
			var_size_t length;
			stream >> length;

			auto off0 = stream.offset();
			stream >> body.locals;

			length -= stream.offset() - off0;
			body.code.resize( length );
			body.code_offset = stream.offset();
			stream.read( body.code.data(), body.code.size() );
			fassert( body.code.back() == op_end );


			return body;
		}
		void serialize( xstd::serialization& stream ) const
		{
			stream << var_size_t{ ( uint32_t ) code.size() };
			stream << locals;
			stream.write( code.data(), code.size() );
		}
	};

	// Descriptor for import / export entries.
	//
	struct export_entry
	{
		var_string                        field_name;
		external_kind                     kind;
		var_index_t                       index;

		// Auto-serialization.
		//
		auto tie() { return std::tie( field_name, kind, index ); }
	};
	struct import_entry
	{
		var_string                        module_name;
		var_string                        field_name;
		external_kind                     kind;
		union
		{
			var_index_t                   fn_type;
			table_type_t                  tbl_type;
			global_type_t                 glb_type;
			memory_type_t                 mem_type;
		};

		// Default construct / move / copy / destruct. Everything is trivial
		// so this does not matter.
		//
		import_entry() {}
		import_entry( import_entry&& ) noexcept = default;
		import_entry( const import_entry& ) = default;
		import_entry& operator=( import_entry&& ) noexcept = default;
		import_entry& operator=( const import_entry& ) = default;
		~import_entry() {}

		// Manually serialized according to the RFC.
		//
		static import_entry deserialize( xstd::serialization& stream )
		{
			import_entry imp;
			stream >> imp.module_name >> imp.field_name >> imp.kind;
			switch ( imp.kind )
			{
				case external_kind::function: stream >> imp.fn_type;  break;
				case external_kind::table:    stream >> imp.tbl_type; break;
				case external_kind::memory:   stream >> imp.mem_type; break;
				case external_kind::global:   stream >> imp.glb_type; break;
				default: unreachable();
			}
			return imp;
		}
		void serialize( xstd::serialization& stream ) const
		{
			stream << module_name << field_name << kind;
			switch ( kind )
			{
				case external_kind::function: stream << fn_type;  break;
				case external_kind::table:    stream << tbl_type; break;
				case external_kind::memory:   stream << mem_type; break;
				case external_kind::global:   stream << glb_type; break;
				default: unreachable();
			}
		}
	};
};