#pragma once
#include "config.hpp"
#include <xstd/type_helpers.hpp>
#include <xstd/text.hpp>
#include <xstd/utf.hpp>
#include <xstd/formatting.hpp>
#include <string>

#pragma pack(push, 1)
namespace xt
{
	// Event types.
	//
	enum event_type : uint8_t
	{
		event_none = 0,
		
		// -- Main control flow events.
		//
		// Beginning of task // Re-entry.
		event_enter,
		// Returning from a task // External invocation.
		event_exit,

		// -- Interruption of control flow.
		//
		// Trapped execution that immediately returns back to the task.
		event_checkpoint,
		// Interruption of a task or an exception being raised.
		event_interrupt,

		// -- Miscellaneous events.
		//
		// Critical provider errors that occured during event reporting.
		event_error,
		// Provider comments.
		event_comment,
		// External invocation that should be skipped.
		event_silent_exit,
		// External swapping of processors running the task.
		event_swap_context,

		event_max,
	};

	// Checkpoint identifiers.
	//
	enum checkpoint_id : uint8_t
	{
		// -- Architecture builtins.
		//
		builtin_none =             0x00,
		builtin_rdtsc,
		builtin_rdtscp,
		builtin_rdmsr,
		builtin_wrmsr,
		builtin_disable,
		builtin_enable,
		builtin_hlt,
		builtin_swapgs,
		builtin_wrgsbase,
		builtin_wrfsbase,
		builtin_rdgsbase,
		builtin_rdfsbase,
		builtin_wbinvd,
		builtin_invd,
		builtin_xsetbv,
		builtin_clts,
		builtin_str,
		builtin_sidt,
		builtin_sgdt,
		builtin_sldt,
		builtin_ltr,
		builtin_lidt,
		builtin_lgdt,
		builtin_lldt,
		builtin_readcr,
		builtin_writecr,
		builtin_readdr,
		builtin_writedr,
		builtin_iretq,
		builtin_sysret,
		builtin_int,
		builtin_vmm,
		builtin_invlpg,
		builtin_invpcid,
		builtin_in,
		builtin_out,
		builtin_rdpmc,
		builtin_monitor,
		builtin_mwait,
		builtin_smsw,
		builtin_lmsw,
		builtin_cpuid,
		builtin_stac,
		builtin_clac,
		builtin_xbegin,
		builtin_xbegin_missed,
		builtin_max,

		// -- User defined events.
		//
		checkpoint_none =          0x80,
		checkpoint_read_pte,
		checkpoint_write_pte,
		checkpoint_read_host,
		checkpoint_write_host,
		checkpoint_code_rewrite,
		checkpoint_write_wp,
		checkpoint_syscall,
		checkpoint_csyscall,
		checkpoint_max,
	};
	template<auto C = 0> // Prevent code-generation unless used.
	inline static std::string name_checkpoint( checkpoint_id id )
	{
		if ( id == checkpoint_none || id == builtin_none )
			return "none";

		auto opt = xstd::visit_range<checkpoint_none, checkpoint_max>( id, [ ] <checkpoint_id I> ( xstd::const_tag<I> )
		{
			std::string_view name = xstd::const_tag<I>::to_string();
			size_t n = name.rfind( ':' );
			if ( n != std::string::npos )
				name.remove_prefix( n + 1 );
			if ( name.starts_with( "checkpoint_" ) )
				name.remove_prefix( xstd::strlen( "checkpoint_" ) );
			return "__"s += name;
		} );
		if ( opt ) return *opt;

		opt = xstd::visit_range<builtin_none, builtin_max>( id, [] <checkpoint_id I> ( xstd::const_tag<I> )
		{
			std::string_view name = xstd::const_tag<I>::to_string();
			size_t n = name.rfind( ':' );
			if ( n != std::string::npos )
				name.remove_prefix( n + 1 );
			if ( name.starts_with( "builtin_" ) )
				name.remove_prefix( xstd::strlen( "builtin_" ) );
			return "__"s += name;
		} );
		if ( opt ) return *opt;

		if ( id >= checkpoint_none )
			return xstd::fmt::str( "checkpoint_%02x", ( uint32_t ) id );
		else
			return xstd::fmt::str( "builtin_%02x", ( uint32_t ) id );
	}

	// Interrupt identifiers.
	//
	enum class interrupt_id : uint8_t
	{
		divide_by_zero =               0x00, // #DB
		debug =                        0x01, // #DB
		non_maskable =                 0x02, // #NMI
		breakpoint =                   0x03, // #BP
		overflow =                     0x04, // #OF
		bound_range =                  0x05, // #BR
		invalid_opcode =               0x06, // #UD
		device_not_available =         0x07, // #NM
		double_fault =                 0x08, // #DF
		coprocessor_segment_overrun =  0x09, // #CSO
		invalid_tss =                  0x0A, // #TS
		segment_not_present =          0x0B, // #NP
		stack_segment_fault =          0x0C, // #SS
		general_protection_fault =     0x0D, // #GP
		page_fault =                   0x0E, // #PF
		fpu_exception =                0x10, // #MF
		alignment_check =              0x11, // #AC
		machine_check =                0x12, // #MC
		xmm_exception =                0x13, // #XM
		vmx_exception =                0x14, // #VE
		control_protection_exception = 0x15, // #CP
		security_exception =           0x1E, // #SX
		max_hardware_exception =       0x1E, // --- Limit of hardware interrupts.
		apc_interrupt =                0x1F,
		sw_interrupt =                 0x20,
		raise_security_check =         0x29,
		raise_assert =                 0x2C,
		debug_service_trap =           0x2D,
		dpc_interrupt =                0x2F,
		hv_interrupt =                 0x30,
		ipi_interrupt =                0xE1,
		pmi_interrupt =                0xFE,
	};
	template<auto C = 0> // Prevent code-generation unless used.
	inline static std::string name_interrupt( interrupt_id id )
	{
		switch ( id )
		{
			case interrupt_id::divide_by_zero:               return "#DE";
			case interrupt_id::debug:                        return "#DB";
			case interrupt_id::breakpoint:                   return "#BP";
			case interrupt_id::overflow:                     return "#OF";
			case interrupt_id::bound_range:                  return "#BR";
			case interrupt_id::invalid_opcode:               return "#UD";
			case interrupt_id::device_not_available:         return "#NM";
			case interrupt_id::double_fault:                 return "#DF";
			case interrupt_id::coprocessor_segment_overrun:  return "#CSO";
			case interrupt_id::invalid_tss:                  return "#TS";
			case interrupt_id::segment_not_present:          return "#NP";
			case interrupt_id::stack_segment_fault:          return "#SS";
			case interrupt_id::general_protection_fault:     return "#GP";
			case interrupt_id::page_fault:                   return "#PF";
			case interrupt_id::fpu_exception:                return "#MF";
			case interrupt_id::alignment_check:              return "#AC";
			case interrupt_id::machine_check:                return "#MC";
			case interrupt_id::xmm_exception:                return "#XM";
			case interrupt_id::vmx_exception:                return "#VE";
			case interrupt_id::control_protection_exception: return "#CP";
			case interrupt_id::security_exception:           return "#SX";
				 
			case interrupt_id::sw_interrupt:                 return "__int20";
			case interrupt_id::raise_security_check:         return "__fastfail";
			case interrupt_id::raise_assert:                 return "__int2c";
			case interrupt_id::debug_service_trap:           return "__dbg";
				 
			case interrupt_id::apc_interrupt:                return "<APC>";
			case interrupt_id::dpc_interrupt:                return "<DPC>";
			case interrupt_id::ipi_interrupt:                return "<IPI>";
			case interrupt_id::non_maskable:                 return "<NMI>";

			default:                                         return xstd::fmt::str( "#%02x", ( uint8_t ) id );
		}
	}
	
	// Snapshot of the task state, passed to every event.
	//
	struct task_snapshot
	{
		// Instruction pointer.
		//
		xstd::any_ptr     ip;

		// Stack pointer.
		//
		xstd::any_ptr     sp;

		// Task priority register.
		//
		uint8_t           tpr;

		// Processor identifier.
		//
		uint16_t          pcid;

		// String conversion / hashing.
		//
		auto tie() { return std::tie( ip, sp, tpr, pcid ); }
		std::string to_string( fn_address_namer namer = name_address ) const
		{
			return xstd::fmt::str( "[PCID:0x%x, IP:%s, SP:%p, TPR:%d]", pcid, namer( ip ), sp, tpr );
		}
	};

	// Control parameters, passed in enter and exit events where we'd either 
	// need the return value or the ToS return pointer.
	//
	struct control_parameters
	{
		// Value on top of the stack.
		//
		xstd::any_ptr     tos;

		// Return value in the register.
		//
		xstd::any_ptr     retval;

		// String conversion / hashing.
		//
		auto tie() { return std::tie( tos, retval ); }
		std::string to_string( fn_address_namer namer = name_address ) const
		{
			return xstd::fmt::str( "[TOS:%s, RET:%p]", namer( tos ), retval );
		}
	};

	// Task parameters, passed in enter events for the sake of identifying the task and
	// matching with previous entries.
	//
	struct task_parameters
	{
		// Stack limits.
		//
		uint32_t          stack_used; // StackBase - Snapshot.SP
		uint32_t          stack_size; // StackBase - StackLimit

		// Thread identifier.
		//
		uint32_t          tid;

		// String conversion / hashing.
		//
		auto tie() { return std::tie( stack_used, stack_size, tid ); }
		std::string to_string() const
		{
			return xstd::fmt::str( "[Stack use: 0x%x/0x%x, TID:0x%x]", stack_used, stack_size, tid );
		}
	};

	// Variable argument header.
	//
	enum class vararg_type : uint8_t { string, integer };
	struct vararg_header
	{
		vararg_type       type      : 1; // If set, string, otherwise integer.
		uint8_t           length    : 7; // Length of the data in bytes.
	};

	// Event header.
	//
	struct event_header
	{
		// Timestamp.
		//
		uint64_t          timestamp;

		// Event type.
		//
		event_type        type;

		// Number of bytes following this header.
		//
		uint16_t          length;

		// Task snapshot.
		//
		task_snapshot     snapshot;

		// Iteration of extension data.
		//
		uint8_t* begin() { return ( uint8_t* ) ( this + 1 ); }
		const uint8_t* begin() const { return ( const uint8_t* ) ( this + 1 ); }
		uint8_t* end() { return length + ( uint8_t* ) ( this + 1 ); }
		const uint8_t* end() const { return length + ( const uint8_t* ) ( this + 1 ); }

		// Gets the next event header.
		//
		event_header* next() { return ( event_header* ) end(); }
		const event_header* next() const { return ( const event_header* ) end(); }

		// String conversion.
		//
		std::string to_string() const
		{
			return "(" + xstd::fmt::as_string( type ) + " @ " + snapshot.to_string() + ")";
		}
	};
	
	// Serialization implementation.
	// - Writer takes a pointer (or std::nullptr_t) and a reference to the value and returns the number of bytes.
	// - Reader takes a iterator and a output reference.
	//
	using vararg_store = std::variant<uint64_t, std::string>;

	template<typename T> struct vararg_view { T value; auto tie() { return std::tie( value ); } };
	template<typename T>
	inline auto make_vararg_view( const T& value )
	{
		if constexpr ( xstd::Integral<T> || xstd::Enum<T> )
			return vararg_view<T>{ value };
		else if constexpr ( xstd::Variant<T> || xstd::Tuple<T> || xstd::Optional<T> )
			return vararg_view<const T&>{ value };
		else if constexpr ( xstd::String<T> )
			return vararg_view<xstd::string_view_t<T>>{ value };
		else if constexpr ( xstd::Convertible<T, std::string_view> )
			return vararg_view<std::string_view>{ value };
		else if constexpr ( xstd::Same<std::monostate, T> )
			return value;
		else
			unreachable();
	}

	template<typename T>
	struct buffer_serializer
	{
		template<typename It>
		inline static size_t write( const It& it, const T& value )
		{
			if constexpr ( !std::is_same_v<std::decay_t<It>, std::nullptr_t> )
				std::copy_n( ( const uint8_t* ) &value, sizeof( T ), it );
			return sizeof( T );
		}

		template<typename It>
		inline static void read( It& it, T& value )
		{
			std::copy_n( it, sizeof( T ), ( uint8_t* ) &value );
			it += sizeof( T );
		}
	};
	template<>
	struct buffer_serializer<std::monostate>
	{
		template<typename It> inline static size_t write( const It& it, const std::monostate& value ) { return 0; }
		template<typename It> inline static void read( It& it, std::monostate& value ) {}
	};
	template<typename T>
	struct buffer_serializer<vararg_view<T>>
	{
		template<typename It>
		inline static size_t write( const It& it, const vararg_view<T>& vararg )
		{
			vararg_header hdr;

			using Td = std::decay_t<T>;
			if constexpr ( xstd::Variant<Td> )
			{
				return std::visit( [ & ] <typename Tv> ( const Tv & value )
				{
					auto vv = make_vararg_view( value );
					return buffer_serializer<decltype( vv )>::write( it, vv );
				}, vararg.value );
			}
			else if constexpr ( xstd::Optional<Td> )
			{
				if ( vararg.value )
				{
					auto vv = make_vararg_view( *vararg.value );
					return buffer_serializer<decltype( vv )>::write( it, vv );
				}
				else
				{
					return buffer_serializer<vararg_view<std::string_view>>::write( it, make_vararg_view( "err" ) );
				}
			}
			else if constexpr ( xstd::Tuple<Td> )
			{
				size_t total = 0;
				xstd::make_constant_series<std::tuple_size_v<Td>>( [ & ] <size_t N> ( xstd::const_tag<N> )
				{
					using Tv = std::tuple_element_t<N, Td>;
					auto vv = make_vararg_view( std::get<N>( vararg.value ) );
					if constexpr ( !std::is_same_v<std::decay_t<It>, std::nullptr_t> )
						total += buffer_serializer<decltype( vv )>::write( it, vv );
					else
						total += buffer_serializer<decltype( vv )>::write( it + total, vv );
				} );
				return total;
			}
			else if constexpr ( xstd::CppStringView<Td> || xstd::CppString<Td> )
			{
				hdr.type = vararg_type::string;
				hdr.length = std::min( xstd::utf_length<char>( vararg.value ), max_string_length );
				if constexpr ( !std::is_same_v<std::decay_t<It>, std::nullptr_t> )
				{
					auto it2 = ( char* ) std::copy_n( ( const uint8_t* ) &hdr, sizeof( vararg_header ), it );
					if constexpr ( xstd::Same<xstd::string_unit_t<Td>, char> )
						memcpy( it2, vararg.value.data(), hdr.length );
					else
						xstd::utf_convert<char>( vararg.value, std::span<char>{ it2, hdr.length } );
				}
			}
			else if constexpr( xstd::Integral<Td> || xstd::Enum<Td> )
			{
				auto& v = vararg.value;
				hdr.type = vararg_type::integer;

				if constexpr ( !std::is_same_v<std::decay_t<It>, std::nullptr_t> )
				{
					if constexpr ( sizeof( Td ) == 1 )
						hdr.length = 1;
					else
						hdr.length = ( 8 + xstd::msb( ( uint64_t ) v ) ) / 8;

					xstd::ref_at<vararg_header>( it ) = hdr;
					xstd::ref_at<Td>( it, sizeof( vararg_header ) ) = v;
				}
				else
				{
					// Assume maximum size if we're only reserving.
					//
					hdr.length = sizeof( Td );
				}
			}
			else
			{
				unreachable();
			}
			return sizeof( vararg_header ) + hdr.length;
		}
	};
	
	template<>
	struct buffer_serializer<vararg_store>
	{
		template<typename It>
		inline static void read( It& it, vararg_store& out )
		{
			vararg_header hdr;
			std::copy_n( it, sizeof( vararg_header ), ( uint8_t* ) &hdr );
			it += sizeof( vararg_header );

			switch ( hdr.type )
			{
				case vararg_type::string:
				{
					out.emplace<1>( std::string{ ( const char* ) it, ( const char* ) std::next( it, hdr.length ) } );
					break;
				}
				case vararg_type::integer:
				{
					uint64_t value = 0;
					if ( hdr.length > 8 )
						xstd::error( "Likely buffer corruption: [Integer length: %llu].", ( uint64_t ) hdr.length );
					std::copy_n( it, hdr.length, ( uint8_t* ) &value );
					out.emplace<0>( value );
					break;
				}
				default: unreachable();
			}
			it += hdr.length;
		}
	};

	template<typename It>
	inline size_t write_buffer( const It& it )
	{
		return 0;
	}
	template<typename It, typename T>
	inline size_t write_buffer( const It& it, const T& value )
	{
		return buffer_serializer<T>::write( it, value );
	}
	template<typename It, typename T>
	inline void read_buffer( It& it, T& out )
	{
		buffer_serializer<T>::read( it, out );
	}
	template<typename It, typename T, typename... Tx>
	inline size_t write_buffer( const It& it, const T& value, const Tx&... rest )
	{
		size_t len = write_buffer( it, value );
		if constexpr ( !std::is_same_v<std::decay_t<It>, std::nullptr_t> )
			return len + write_buffer( it + len, rest... );
		else
			return len + write_buffer( nullptr, rest... );
	}
	template<typename It, typename T, typename... Tx>
	inline void read_buffer( It& it, T& value, Tx&... rest )
	{
		read_buffer( it, value );
		read_buffer( it, rest... );
	}

	// Serialization of a partial event into a temporary buffer.
	//
	template<size_t N, typename... Tx>
	inline size_t write_partial( xstd::small_vector<uint8_t, N>& into, const Tx&... data )
	{
		// Drop if too large.
		//
		size_t len = write_buffer( nullptr, data... ) + 2;
		size_t max_length = N - into.length;
		if ( len > max_length || len == 0 || ( len - 1 ) > 0xFFFF ) {
			return 0;
		}

		// Write the data.
		//
		auto it = into.space + into.length;
		*( uint16_t* ) it = uint16_t( len - 1 );
		it += sizeof( uint16_t );
		write_buffer( it, data... );
		return len;
	}
	// Deserializtion:
	//
	struct partial_event {
		std::span<const uint8_t> view;
		static partial_event next( std::span<const uint8_t>& span ) {
			if ( span.size() > 2 ) {
				uint16_t len = 1 + *( const uint16_t* ) span.data();
				auto result = span.subspan( sizeof( uint16_t ), len );
				span = span.subspan( sizeof( uint16_t ) + len );
				return partial_event{ result };
			}
			return {};
		}
	};
	// Transfer:
	//
	template<>
	struct buffer_serializer<partial_event> {
		template<typename It> inline static size_t write( const It& it, const partial_event& value ) {
			size_t r = 0;
			if ( size_t len = value.view.size() ) {
				r = len;
				if constexpr ( !std::is_same_v<std::decay_t<It>, std::nullptr_t> ) {
					std::copy_n( value.view.data(), len, it );
				}
			}
			return r;
		}
	};
};
#pragma pack(pop)