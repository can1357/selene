#include "apiset.hpp"
#include <variant>
#include <xstd/intrinsics.hpp>
#include <xstd/guid.hpp>
#include <ntpp.hpp>
#include <sdk/fltmgr/api.hpp>
#include <sdk/ob/callback_registration_t.hpp>
#include <sdk/ob/operation_registration_t.hpp>
#include <sdk/os/km/api.hpp>
#include "../trapframe.hpp"
#include "../vm.hpp"
#include "../su0.hpp"
#include "../mirrormm.hpp"
#include "../../utility/thread.hpp"
#include "../../utility/safe_wrappers.hpp"

//
// TODO: Deferred namer
//

// ApiSet implements a series of instrumentation routines for certain NT functions to collect
// better logger information for arguments and hide certain telltales of our targetted paravirtualization.
//
namespace su::ext::apiset
{
	constexpr bool redir_io_map = false; // No need since systemptes are trapped.

	namespace util
	{
		// Returns a value or optionally void from a call popping the stack.
		//
		inline bool ret( trapframe* tf )
		{
			if ( auto tos = safe::read<uint64_t>( tf->rsp ) )
			{
				tf->rip = *tos;
				tf->rsp += 8;
				return true;
			}
			return false;
		}

		template<typename T>
		inline bool ret( trapframe* tf, const T& value )
		{
			if ( auto tos = safe::read<uint64_t>( tf->rsp ) )
			{
				tf->rax = ( uint64_t ) value;
				tf->rip = *tos;
				tf->rsp += 8;
				return true;
			}
			return false;
		}

		// Reads an argument.
		//
		template<typename T, size_t N>
		inline auto arg( const trapframe* tf )
		{
			if constexpr ( xstd::Same<std::monostate, T> )
			{
				return std::monostate{};
			}
			else
			{
				switch ( N )
				{
					case 0:  return ( T ) ( xstd::convert_uint_t<T> ) tf->rcx;
					case 1:  return ( T ) ( xstd::convert_uint_t<T> ) tf->rdx;
					case 2:  return ( T ) ( xstd::convert_uint_t<T> ) tf->r8;
					case 3:  return ( T ) ( xstd::convert_uint_t<T> ) tf->r9;
					default: return safe::read<T>( tf->rsp + 0x28 + ( N - 4 ) * 8 ).value_or( T{} );
				}
			}
		}

		// Hooks the callee.
		//
		inline auto hook( trapframe* tf, const void* dst )
		{
			tf->rip = ( uint64_t ) dst;
		}

		// Pseudo types.
		//
		struct handle_t
		{
			void* value;
			handle_t() : value( nullptr ) {}
			handle_t( any_ptr p ) : value( p ) {}
			operator any_ptr() const { return value; }
		};
		struct cid_t
		{
			nt::client_id_t value;
		};
		struct object_t
		{
			void* value;
			object_t() : value( nullptr ) {}
			object_t( any_ptr p ) : value( p ) {}
			operator any_ptr() const { return value; }
		};
		struct duration_t
		{
			int64_t value;
			duration_t() : value( 0 ) {}
			duration_t( int64_t p ) : value( p ) {}
			operator int64_t() const { return value; }
		};
		struct fmtarg_t
		{
			uint64_t value;
			fmtarg_t() : value( 0 ) {}
			fmtarg_t( uint64_t p ) : value( p ) {}
			operator uint64_t() const { return value; }
		};

		// Argument conversion helpers for the logger.
		//
		template<typename T> struct argument_converter;
		template<typename T> concept ArgumentConvertable = requires( const T& v ){ argument_converter<T>{}( v ); };
		template<typename T> inline auto cvt_arg( const T& value ) { return argument_converter<T>{}( value ); }
		template<typename T> using converted_type_t = decltype( argument_converter<T>{}( std::declval<const T&>() ) );

		// Small string types.
		//
		template<size_t N>
		struct static_string
		{
			static constexpr size_t max_capacity = N;

			uint8_t length = 0;
			char data[ N ];

			// Null constructor.
			//
			inline constexpr static_string() noexcept {}

			// Initializing constructor.
			//
			template<typename T = char>
			inline constexpr static_string( std::basic_string_view<T> view ) noexcept { concat( view ); }
			template<size_t L>
			inline constexpr static_string( const char( &str )[ L ] ) noexcept { concat( std::string_view{ &str[ 0 ], &str[ L - 1 ] } ); }
			inline constexpr static_string( const char* str ) noexcept { concat( std::string_view{ str } ); }

			// Format constructor.
			//
			template<typename... Tx> requires ( sizeof...( Tx ) != 0 )
			inline static_string( const char* fmt, Tx... args ) noexcept { concat( fmt, args... ); }

			// Default copy.
			//
			inline constexpr static_string( const static_string& ) noexcept = default;
			inline constexpr static_string& operator=( const static_string& ) noexcept = default;

			// Make string-view convertible.
			//
			inline constexpr operator std::string_view() const { return { &data[ 0 ], &data[ length ] }; }

			// Format concat.
			//
			template<typename... Tx> requires ( sizeof...( Tx ) != 0 )
			inline void concat( const char* fmt, Tx... args ) noexcept
			{
				size_t prev = length;
				size_t n = snprintf( &data[ prev ], N + 1 - prev, fmt, args... );
				length = ( uint8_t ) std::min( prev + n, N );
			}

			// String concat.
			//
			inline constexpr void concat( std::string_view view ) noexcept
			{
				// Simple memcpy if already in the required format.
				//
				size_t capacity = N - length;
				uint8_t copy_count = ( uint8_t ) std::min<size_t>( view.length(), capacity );
				if ( std::is_constant_evaluated() )
					std::copy_n( view.data() + view.size() - copy_count, copy_count, &data[ length ] );
				else
					memcpy( &data[ length ], view.data() + view.size() - copy_count, copy_count );
				length += copy_count;
			}
			inline constexpr void concat( std::wstring_view view ) noexcept
			{
				length += xstd::utf_convert<char, wchar_t>( view, { std::begin( data ) + length, std::end( data ) } );
			}

			// Operator +=.
			//
			inline constexpr static_string& operator+=( std::string_view other )
			{
				concat( other );
				return *this;
			}

			// Equals comparison.
			//
			inline constexpr bool operator==( std::string_view other ) const
			{
				if ( other.size() != length )
					return false;

				if ( std::is_constant_evaluated() )
					return std::string_view( *this ) == other;
				else
					return !memcmp( &data[ 0 ], other.data(), other.size() );
			}
		};
		using small_string = static_string<126 /*xt's max string length*/>;
		using tiny_string =  static_string<32>;

		// - Integral converters.
		//
		template<xstd::Integral T>
		struct argument_converter<T>
		{
			inline T operator()( T v ) const noexcept { return v; }
		};
		template<xstd::Enum T>
		struct argument_converter<T>
		{
			inline auto operator()( T v ) const noexcept
			{
				if constexpr ( is_release_build() )
					return ( std::underlying_type_t<T> ) v;
				else
				{
					small_string ss = xstd::try_name_enum( v );
					if ( !ss.length )
						ss.concat( "0x%llx", v );
					return ss;
				}
			}
		};

		// - String conerters.
		//
		template<typename T>
		inline small_string read_string( const T* str, size_t length_bytes, std::string_view unk_default )
		{
			// Handle invalid cases.
			//
			if ( !mem::is_cannonical( str ) )
				return unk_default;
			if ( !str )
				return {};
			if ( length_bytes < sizeof( T ) )
				return {};

			// Normalize length.
			//
			if ( length_bytes > ( small_string::max_capacity * sizeof( T ) ) )
				length_bytes = small_string::max_capacity * sizeof( T );

			// Read into temporary array.
			//
			T tmp[ small_string::max_capacity ];
			size_t length = ( length_bytes - safe::copy( &tmp[ 0 ], str, length_bytes ) ) / sizeof( T );
			if ( !length )
				return unk_default;

			// Return the slice.
			//
			auto end = std::find( &tmp[ 0 ], &tmp[ length ], '\x0' );
			return { std::basic_string_view<T>{ &tmp[ 0 ], end } };
		}
		template<typename T>
		inline small_string read_string( nt::string_view<T> view, std::string_view unk_default )
		{
			return read_string( view.buffer, view.length, unk_default );
		}
		template<typename T>
		inline small_string read_string( const nt::string_view<T>* pview, std::string_view unk_default )
		{
			if ( auto view = safe::read( pview ) )
				return read_string( *view, unk_default );
			else
				return unk_default;
		}
		template<typename T>
		inline small_string read_string( const nt::string_view<T>* const* pview, std::string_view unk_default )
		{
			if ( auto view = safe::read( pview ) )
				return read_string( *view, unk_default );
			else
				return unk_default;
		}
		inline small_string read_object_name( const void* obj, std::string_view unk_default )
		{
			nt::object_header_t* hdr = ntpp::get_object_header( obj );

			uint8_t info_mask = safe::read( &hdr->info_mask ).value_or( 0 );
			if ( info_mask & ntpp::obj_info_name )
			{
				nt::object_header_name_info_t* name_info = xstd::ptr_at( hdr, ntpp::get_object_header_offset( info_mask, ntpp::obj_info_name ) );
				return read_string( &name_info->name, unk_default );
			}
			else
			{
				return unk_default;
			}
		}


		// Handle fuckery.
		//
		static nt::handle_table_entry_t* lookup_handle_unsafe( nt::handle_table_t* table, any_ptr handle ) {
			uint64_t handle_value = uint64_t( handle ) & ~3;
			if ( handle_value >= safe::read( &table->next_handle_needing_pool ).value_or( 0 ) ) [[unlikely]]
				return nullptr;
			handle_value >>= 2;

			auto code = safe::read( &table->table_code );
			if ( !code ) return nullptr;

			ntpp::handle_table_level level = { *code & ~3ull };
			switch ( *code & 3 ) {
				case 0: {
					return &level.entry[ handle_value ];
				}
				case 1: {
					auto l0 = safe::read( &level.table[ handle_value >> 8 ] );
					if ( !l0 ) return nullptr;
					return &l0->entry[ handle_value & 0xFF ];
				}
				default: {
					auto l0 = safe::read( &level.table[ handle_value >> 17 ] );
					if ( !l0 ) return nullptr;
					auto l1 = safe::read( &l0->table[ ( handle_value >> 8 ) & 0x1FF ] );
					if ( !l1 ) return nullptr;
					return &l1->entry[ handle_value & 0xFF ];
				}
			}
		}
		static void* resolve_handle_unsafer( nt::handle_table_t* table, uint64_t raw_handle, ntpp::table_type type ) {
			if ( auto* entry = lookup_handle_unsafe( table, raw_handle ) ) {
				if ( auto bits = safe::read( entry ) ) {
					uint64_t value = bits->object_pointer_bits << 4;
					if ( value ) {
						value += ( ptrdiff_t ) type;
						value |= ~0ull << ia32::mem::va_bits;
						return ( void* ) value;
					}
				}
			}
			return nullptr;
		}
		static void* resolve_handle_unsafe( nt::handle_table_t* table, uint64_t raw_handle, ntpp::table_type type ) {
			void* p0 = resolve_handle_unsafer( table, raw_handle, type );
			if ( !p0 ) return nullptr;
			void* p1 = resolve_handle_unsafer( table, raw_handle, type );
			return p0 == p1 ? p1 : nullptr;
		}
		static void* resolve_cid( void* cid ) {
			return resolve_handle_unsafe( ntpp::get_cid_table(), ( uint64_t ) cid, ntpp::table_type::cid_table );
		}

		// Argument converters.
		//
		template<>
		struct argument_converter<char*>
		{
			inline small_string operator()( const char* str ) const noexcept
			{
				return read_string( str, std::string::npos, "C?" );
			}
		};
		template<>
		struct argument_converter<wchar_t*>
		{
			inline small_string operator()( const wchar_t* str ) const noexcept
			{
				return read_string( str, std::string::npos, "W?" );
			}
		};
		template<typename T>
		struct argument_converter<nt::string_view<T>>
		{
			inline small_string operator()( nt::string_view<T> view ) const noexcept
			{
				return read_string( view, "Nt?" );
			}
		};
		template<typename T>
		struct argument_converter<nt::string_view<T>*>
		{
			inline small_string operator()( nt::string_view<T>* view ) const noexcept
			{
				return read_string( view, "Nt?" );
			}
		};

		// - Converters for other NT types.
		//
		template<>
		struct argument_converter<nt::object_attributes_t*>
		{
			inline small_string operator()( nt::object_attributes_t* view ) const noexcept
			{
				if ( !view )
					return "null";
				else
					return read_string( &view->object_name, "Obj?" );
			}
		};
		template<>
		struct argument_converter<nt::exception_record_t*>
		{
			inline small_string operator()( nt::exception_record_t* ex ) const noexcept
			{
				return small_string{ "%08x@%p", safe::read( &ex->exception_code ).value_or( 0 ), safe::read( &ex->exception_address ).value_or( nullptr ) };
			}
		};
		template<>
		struct argument_converter<nt::eprocess_t*>
		{
			inline small_string operator()( nt::eprocess_t* proc ) const noexcept
			{
				if ( !proc )
					return "null";
				else
					return read_string( ( char* ) proc->image_file_name.data(), proc->image_file_name.size(), "Prc?" );
			}
		};
		template<>
		struct argument_converter<nt::ethread_t*>
		{
			inline small_string operator()( nt::ethread_t* thr ) const noexcept
			{
				if ( !thr )
					return "null";
				if ( auto proc = safe::read( &thr->tcb.process ) )
				{
					if ( auto cid = safe::read( &thr->cid.unique_thread ) )
					{
						small_string res{ "Thr0x%llx-", *cid };
						res += cvt_arg( ( nt::eprocess_t* ) *proc );
						return res;
					}
				}
				return "Thr?";
			}
		};
		template<>
		struct argument_converter<nt::file_object_t*>
		{
			inline small_string operator()( nt::file_object_t* fo ) const noexcept
			{
				if ( !fo )
					return "null";
				else
					return read_string( &fo->file_name, "Fo?" );
			}
		};
		template<>
		struct argument_converter<nt::driver_object_t*>
		{
			inline small_string operator()( nt::driver_object_t* drv ) const noexcept
			{
				if ( !drv )
					return "null";
				else
					return read_string( &drv->driver_name, "Drv?" );
			}
		};
		template<>
		struct argument_converter<nt::device_object_t*>
		{
			inline small_string operator()( nt::device_object_t* dev ) const noexcept
			{
				if ( !dev )
					return "null";
				else if ( auto drv = safe::read( &dev->driver_object ) )
					return read_string( &drv.value()->driver_name, "Dev?" );
				else
					return "Dev?";
			}
		};
		template<>
		struct argument_converter<nt::section_t*>
		{
			inline small_string operator()( nt::section_t* pscn ) const noexcept
			{
				if ( !pscn ) return "null";
				auto scn = safe::read( pscn );
				if ( !scn ) return "Scn?";

				// Try section control area -> File object.
				//
				if ( auto* ctl = ntpp::section_control_area( &*scn ) )
					if ( auto fo = ntpp::reference_control_area_file( ctl ) )
						if ( auto res = cvt_arg( fo.get() ); res.length && res != "Fo?" )
							return res;

				// Special case for physical memory.
				//
				if ( scn->flags.physical_memory )
					return "PhysicalMemory"_es;

				return read_object_name( pscn, "Scn?" );
			}
		};
		template<>
		struct argument_converter<nt::object_directory_t*>
		{
			inline small_string operator()( nt::object_directory_t* dir ) const noexcept
			{
				if ( !dir )
					return "null";
				else
					return read_object_name( dir, "Dir?" );
			}
		};
		template<>
		struct argument_converter<nt::callback_object_t*>
		{
			inline small_string operator()( nt::callback_object_t* cb ) const noexcept
			{
				if ( !cb )
					return "null";
				else
					return read_object_name( cb, "Cb?" );
			}
		};
		template<xstd::Integral T> requires ( !xstd::Same<T, char> && !xstd::Same<T, wchar_t> )
		struct argument_converter<T*>
		{
			inline T operator()( T* p ) const noexcept
			{
				if ( !p ) return T{};
				return safe::read<T>( p ).value_or( T{} );
			}
		};
		template<>
		struct argument_converter<any_ptr>
		{
			inline uint64_t operator()( any_ptr p ) const noexcept
			{
				// TODO: More logic.
				return p;
			}
		};
		template<>
		struct argument_converter<xstd::guid*>
		{
			inline small_string operator()( xstd::guid* p ) const noexcept
			{
				small_string result = { "Guid?" };
				if ( auto u = safe::read( p ) )
				{
					u->to_string( &result.data[ 0 ] );
					result.length = ( uint8_t ) xstd::guid::string_length;
				}
				return result;
			}
		};
		template<>
		struct argument_converter<nt::irp_t*>
		{
			inline small_string operator()( nt::irp_t* irp ) const noexcept
			{
				small_string result = {};

				auto rsp = [ & ] ( int i, auto sp )
				{
					if ( sp->major_function == IRP_MJ_DEVICE_CONTROL )
						result.concat( "#%d=Ioctl(%08x)\n", i, sp->parameters.device_io_control.io_control_code );
					else
						result.concat( "#%d=Dvctl(%02x:%02x)\n", i, sp->major_function, sp->minor_function );
				};

				if ( auto psp = safe::read( &irp->tail.overlay.current_stack_location ) )
					if ( auto sp = safe::read( *psp ) )
						rsp( 0, sp );
				if ( auto psp = safe::read( &irp->tail.overlay.current_stack_location ) )
					if ( auto sp = safe::read( ( *psp ) - 1 ) )
						rsp( -1, sp );

				if ( !result.length )
					result += "Irp?";
				else
					result.length--;
				return result;
			}
		};
		template<>
		struct argument_converter<object_t*>
		{
			inline small_string operator()( object_t* obj ) const noexcept
			{
				if ( !obj )
					return "null";

				if ( safe::read( &ntpp::get_object_header( obj )->type_index ) ) {
					if ( auto x = ntpp::dyn_cast< nt::eprocess_t >( obj ) )
						return cvt_arg( x );
					if ( auto x = ntpp::dyn_cast< nt::ethread_t >( obj ) )
						return cvt_arg( x );
					if ( auto x = ntpp::dyn_cast< nt::file_object_t >( obj ) )
						return cvt_arg( x );
					if ( auto x = ntpp::dyn_cast< nt::driver_object_t >( obj ) )
						return cvt_arg( x );
					if ( auto x = ntpp::dyn_cast< nt::device_object_t >( obj ) )
						return cvt_arg( x );
					if ( auto x = ntpp::dyn_cast< nt::section_t >( obj ) )
						return cvt_arg( x );
					if ( auto x = ntpp::dyn_cast< nt::object_directory_t >( obj ) )
						return cvt_arg( x );
					if ( auto x = ntpp::dyn_cast< nt::callback_object_t >( obj ) )
						return cvt_arg( x );
					if ( auto x = ntpp::dyn_cast< cm::key_body_t >( obj ) )
						return read_object_name( x, "Key?" ); // TODO: This doesnt work, need to read the key control block.
				}
				return small_string{ "Obj-%p", obj };
			}
		};
		template<>
		struct argument_converter<handle_t>
		{
			inline small_string operator()( handle_t hnd ) const noexcept
			{
				if ( hnd.value == ob::current_process() ) {
					return small_string{ "MyProcess" };
				} else if ( hnd.value == ob::current_thread() ) {
					return small_string{ "MyThread" };
				} else if ( hnd.value == ob::current_session() ) {
					return small_string{ "MySession" };
				} else if ( hnd.value == ob::current_process_token() ) {
					return small_string{ "MyProcessToken" };
				} else if ( hnd.value == ob::current_thread_token() ) {
					return small_string{ "MyThreadToken" };
				} else if ( hnd.value == ob::current_thread_effective_token() ) {
					return small_string{ "MyThreadEffToken" };
				}

				nt::handle_table_t* tbl;
				uint64_t raw_handle = ( uint64_t ) hnd.value;
				if ( ob::clear_khandle( raw_handle ) ) {
					tbl = ntpp::get_kernel_handle_table();
				} else {
					tbl = ke::get_eprocess()->object_table;
				}
				auto obj = resolve_handle_unsafe( tbl, raw_handle, ntpp::table_type::handle_table );
				if ( obj && safe::read( &ntpp::get_object_header( obj )->type_index ) ) {
					return cvt_arg( ( object_t* ) obj );
				}
				return small_string{ "Hnd-%llx", hnd.value };
			}
		};
		template<>
		struct argument_converter<cid_t>
		{
			inline small_string operator()( cid_t cid ) const noexcept
			{
				if ( cid.value.unique_process == ( void* ) 4 ) {
					return small_string{ "System" };
				}
				if ( void* obj = resolve_cid( cid.value.unique_process ) ) {
					if ( safe::read( &ntpp::get_object_header( obj )->type_index ) ) {
						if ( auto x = ntpp::dyn_cast< nt::eprocess_t >( obj ) )
							return cvt_arg( x );
						if ( auto x = ntpp::dyn_cast< nt::ethread_t >( obj ) )
							return cvt_arg( x );
					}
				}
				return small_string{ "CID-%llx", cid.value.unique_process };
			}
		};
		template<>
		struct argument_converter<cid_t*>
		{
			inline small_string operator()( cid_t* cid ) const noexcept
			{
				if ( auto v = safe::read( cid ) )
					return cvt_arg( *v );
				else
					return small_string{ "CID?" };
			}
		};
		template<>
		struct argument_converter<duration_t>
		{
			inline tiny_string operator()( duration_t dr ) const noexcept
			{
				int64_t v = dr;
				if ( v > 0 )
					v -= *( uint64_t* ) &ke::get_user_shared_data()->system_time;
				else
					v = -v;

				tiny_string result{};
				result.length = ( uint8_t ) xstd::time::to_string( &result.data[ 0 ], tiny_string::max_capacity, v * 100ns );
				return result;
			}
		};
		template<>
		struct argument_converter<duration_t*>
		{
			inline tiny_string operator()( duration_t* p ) const noexcept
			{
				if ( !p )
					return "0";
				else if ( auto dr = safe::read( p ) )
					return cvt_arg( *dr );
				else
					return "Dur?";
			}
		};
		template<>
		struct argument_converter<ob::callback_registration_t*>
		{
			inline small_string operator()( ob::callback_registration_t* p ) const noexcept
			{
				if ( auto reg = safe::read( p ) )
				{
					small_string res{ "V%x", ( uint32_t ) reg->version };
					for ( size_t n = 0; n != reg->operation_registration_count; n++ )
					{
						auto opreg = safe::read( &reg->operation_registration[ n ] );
						if ( !opreg )
						{
							res += "[?]";
							break;
						}
						res.concat( "[%x, %p, %p]", opreg->operations, opreg->post_operation, opreg->pre_operation );
					}
					return res;
				}
				return "ObR?";
			}
		};
		template<typename T>
		struct argument_converter<std::optional<T>>
		{
			inline auto operator()( const std::optional<T>& val ) const noexcept
			{
				if ( val )
					return cvt_arg( *val );
				else
					return converted_type_t<T>{};
			}
		};
		template<>
		struct argument_converter<std::monostate>
		{
			inline auto operator()( const std::monostate& val ) const noexcept
			{
				return val;
			}
		};
		template<>
		struct argument_converter<fmtarg_t>
		{
			using string_type = tiny_string;

			inline std::variant<uint64_t, string_type> operator()( fmtarg_t arg ) const noexcept
			{
				std::variant<uint64_t, string_type> result = {};

				// If kernel address that is 8-bytes aligned but not page aligned:
				//
				if ( is_kernel_va( arg.value ) && ( arg & 0xFFF ) && !( arg & 7 ) )
				{
					uint8_t buffer[ string_type::max_capacity * 2 ];
					size_t length = sizeof( buffer ) - safe::copy( &buffer[ 0 ], ( char* ) arg.value, sizeof( buffer ) );
					if ( length )
					{
						auto try_as = [ & ] <typename T> ( const T * beg ) -> bool
						{
							size_t lim = length / sizeof( T );
							if ( lim <= 3 )
								return false;
							constexpr auto is_valid = [ ] ( T c ) { return c <= 0x7F && ( isprint( ( char ) c ) || isspace( ( char ) c ) ); };
							auto end = std::find_if_not( beg, beg + lim, is_valid );
							if ( ( end - beg ) > 3 && ( end == ( beg + lim ) || *end == 0 ) )
							{
								result.emplace<1>( string_type{ std::basic_string_view<T>{ beg, end } } );
								return true;
							}
							return false;
						};
						if ( try_as( ( char* ) &buffer[ 0 ] ) ||
							  try_as( ( wchar_t* ) &buffer[ 0 ] ) )
							return result;
					}
				}
				result.emplace<0>( arg.value );
				return result;
			}
		};

		template<typename... Tx>
		NO_INLINE FLATTEN inline void log( xt::local_buffer* buffer, const trapframe* tf, Tx... args )
		{
			auto* vm = tf->vmcs;
			buffer->exit(
				vm->tf_snapshot( tf ),
				vm->tf_control_parameters( tf ),
				cvt_arg( args )...
			);
			//tf->vmcs->record_exit( tf, cvt_arg( args )... );
		}
		template<typename... Tx>
		static void log( const trapframe* tf, Tx... args )
		{
			if ( auto& buffer = tf->vmcs->event_buffer )
				log( buffer.get(), tf, args... );
		}
		template<typename... Tx>
		inline void skip_log( const trapframe* tf )
		{
			if ( auto* tls = thread::get_context( tf->vmcs->get_current_thread() ); !tls->xt_skip_enter )
			{
				tls->xt_skip_enter = true;
				tls->xt_skip_pcid = ia32::read_pcid();
				tls->xt_skip_sp = tf->rsp + 8;
			}
			else
			{
				tf->vmcs->record_exit_silent( tf );
			}
		}
		template<typename... Tx>
		struct logger
		{
			template<size_t... I>
			FORCE_INLINE static void write( const trapframe* tf, std::index_sequence<I...> )
			{
				log( tf, arg<std::tuple_element_t<I, std::tuple<Tx...>>, I>( tf )... );
			}
			static bool hook( trapframe* tf )
			{
				write( tf, std::make_index_sequence<sizeof...( Tx )>() );
				return false;
			}
			constexpr operator decltype( &hook )() const noexcept{ return &hook; }
		};
		struct silent_logger
		{
			static bool hook( trapframe* tf )
			{
				skip_log( tf );
				return false;
			}
			constexpr operator decltype( &hook )() const noexcept{ return &hook; }
		};
	};

	// Export helper:
	//
	template<typename F>
	static void enum_direct_exports( const win::image_x64_t* image, F&& fn )
	{
		// Fail if image does not have an export directory.
		//
		const win::data_directory_t* exp_dir_entry = image->get_directory( win::directory_entry_export );
		if ( !exp_dir_entry )
			return;

		// Fail if export directory is empty.
		//
		const win::export_directory_t* exp_dir = image->raw_to_ptr<win::export_directory_t>( exp_dir_entry->rva, 1 );
		if ( !exp_dir )
			return;

		// Fetch the data tables.
		//
		const uint32_t* names = image->raw_to_ptr<uint32_t>( exp_dir->rva_names, 1 );
		const uint32_t* rvas = image->raw_to_ptr<uint32_t>( exp_dir->rva_functions, 1 );
		const uint16_t* ordinals = image->raw_to_ptr<uint16_t>( exp_dir->rva_name_ordinals, 1 );
		if ( !names || !ordinals || !rvas )
			return;

		// For each name:
		//
		for ( size_t n = 0; n != exp_dir->num_names; n++ )
		{
			// If export name does not translate, skip.
			//
			const char* exp_cname = ( const char* ) image->raw_to_ptr<char>( names[ n ], 1 );
			if ( !exp_cname )
				continue;

			// If out of boundary for export table, skip.
			//
			uint16_t ordinal = ordinals[ n ];
			if ( ordinal >= exp_dir->num_functions )
				continue;

			// Invoke the function.
			//
			fn( exp_cname, image->raw_to_ptr( rvas[ ordinals[ n ] ] ) );
		}
	}

	// Define the function hasher.
	//
#if 1
	struct fn_hash_t
	{
		xstd::hash_t hash = {};
		constexpr fn_hash_t( std::string_view name )
		{
			if ( name.starts_with( "Nt" ) || name.starts_with( "Zw" ) )
				name.remove_prefix( 2 );
			hash = xstd::make_ahash<xstd::hash_t>( name );
		}

		constexpr bool operator<( const fn_hash_t& o ) const noexcept { return o.hash < hash; }
		constexpr bool operator==( const fn_hash_t& o ) const noexcept { return o.hash == hash; }
		constexpr bool operator!=( const fn_hash_t& o ) const noexcept { return o.hash != hash; }

		std::string to_string() const { return hash.to_string(); }
	};
#else
	struct fn_hash_t
	{
		std::string_view name;

		constexpr fn_hash_t( std::string_view _name ) : name( _name )
		{
			if ( name.starts_with( "Nt" ) || name.starts_with( "Zw" ) )
				name.remove_prefix( 2 );
		}

		constexpr bool operator<( const fn_hash_t& o ) const noexcept { return xstd::istrcmp( name, o.name ) < 0; }
		constexpr bool operator==( const fn_hash_t& o ) const noexcept { return xstd::iequals( name, o.name ); }
		constexpr bool operator!=( const fn_hash_t& o ) const noexcept { return !xstd::iequals( name, o.name ); }

		std::string to_string() const { return std::string{ name }; }
	};
#endif
	consteval fn_hash_t operator""_fnhash( const char* x, size_t n )
	{
		return fn_hash_t{ std::string_view{ x, n } };
	}

	// Define the table:
	//
	using skip_t = std::monostate;
	using fn_api_hook = bool( * )( trapframe* tf );
	static constexpr std::pair<fn_hash_t, fn_api_hook> default_loggers[] = {
		//
		// Ob NT
		//
		{ "NtOpenFile"_fnhash,                                      util::logger<skip_t, uint32_t, nt::object_attributes_t*, skip_t, uint32_t, uint32_t>{} },
		{ "NtCreateFile"_fnhash,                                    util::logger<skip_t, uint32_t, nt::object_attributes_t*, skip_t, skip_t, uint32_t, uint32_t, uint32_t, uint32_t, skip_t, skip_t>{} },
		{ "NtOpenKey"_fnhash,                                       util::logger<skip_t, uint32_t, nt::object_attributes_t*>{} },
		{ "NtCreateKey"_fnhash,                                     util::logger<skip_t, uint32_t, nt::object_attributes_t*, uint32_t, nt::unicode_view*, uint32_t>{} },
		{ "NtOpenSection"_fnhash,                                   util::logger<skip_t, uint32_t, nt::object_attributes_t*>{} },
		{ "NtCreateSection"_fnhash,                                 util::logger<skip_t, uint32_t, nt::object_attributes_t*, skip_t, uint32_t, uint32_t, util::handle_t>{} },
		{ "NtOpenDirectoryObject"_fnhash,                           util::logger<skip_t, uint32_t, nt::object_attributes_t*>{} },
		{ "NtOpenThread"_fnhash,                                    util::logger<skip_t, uint32_t, skip_t, util::cid_t*>{} },
		{ "NtOpenProcess"_fnhash,                                   util::logger<skip_t, uint32_t, skip_t, util::cid_t*>{} },

		//
		// Query NT
		//
		{ "NtQuerySystemInformation"_fnhash,                        util::logger<win::system_information_class_t>{} },
		{ "NtQueryInformationThread"_fnhash,                        util::logger<util::handle_t, nt::threadinfoclass_t>{} },
		{ "NtQueryInformationProcess"_fnhash,                       util::logger<util::handle_t, win::processinfoclass_t>{} },
		{ "NtQueryInformationFile"_fnhash,                          util::logger<util::handle_t, skip_t, skip_t, skip_t, nt::file_information_class_t>{} },
		{ "NtQueryInformationToken"_fnhash,                         util::logger<uint64_t, nt::token_information_class_t>{} },
		{ "NtQueryFullAttributesFile"_fnhash,                       util::logger<nt::object_attributes_t*>{} },
		{ "NtQueryLicenseValue"_fnhash,                             util::logger<nt::unicode_view*, uint32_t*>{} },
		{ "NtQuerySystemEnvironmentValueEx"_fnhash,                 util::logger<nt::unicode_view*, xstd::guid*>{} },
		{ "NtQueryDirectoryObject"_fnhash,                          util::logger</*??*/>{} },
		{ "NtQueryValueKey"_fnhash,                                 util::logger<util::handle_t /*?*/, nt::unicode_view*, nt::key_value_information_class_t>{} },
		{ "NtQueryVirtualMemory"_fnhash,                            util::logger<util::handle_t /*?*/, any_ptr, nt::memory_information_class_t>{} },
		{ "SeQueryInformationToken"_fnhash,                         util::logger<uint64_t, nt::token_information_class_t>{} },

		//
		// Misc. NT
		//
		{ "NtReadFile"_fnhash,                                      util::logger<util::handle_t, skip_t, skip_t, skip_t, skip_t, skip_t, uint32_t, uint32_t*>{} },
		{ "NtWriteFile"_fnhash,                                     util::logger<util::handle_t, skip_t, skip_t, skip_t, skip_t, skip_t, uint32_t, uint32_t*>{} },
		{ "NtSetValueKey"_fnhash,                                   util::logger<util::handle_t /*?*/, nt::unicode_view*, uint32_t, uint32_t, skip_t, uint32_t>{} },
		{ "NtMapViewOfSection"_fnhash,                              util::logger<util::handle_t, util::handle_t, skip_t, size_t, size_t, size_t*, size_t*, nt::section_inherit_t, uint32_t, uint32_t>{} },
		{ "NtDeviceIoControlFile"_fnhash,                           util::logger<util::handle_t, skip_t, skip_t, skip_t, skip_t, uint32_t>{} },
		{ "NtFlushBuffersFile"_fnhash,                              util::logger<util::handle_t, skip_t>{} },
		{ "NtFlushKey"_fnhash,                                      util::logger<util::handle_t>{} },
		{ "NtEnumerateValueKey"_fnhash,                             util::logger<util::handle_t /*?*/, uint32_t, nt::key_value_information_class_t>{} },
		{ "NtUnmapViewOfSection"_fnhash,                            util::logger<util::handle_t /*?*/, any_ptr>{} },
		{ "NtAllocateVirtualMemory"_fnhash,                         util::logger<util::handle_t, skip_t, uint64_t, size_t*, uint32_t, uint32_t>{} },
		{ "NtFreeVirtualMemory"_fnhash,                             util::logger<util::handle_t, skip_t, size_t*, uint32_t>{} },
		{ "NtProtectVirtualMemory"_fnhash,                          util::logger<util::handle_t, skip_t, size_t*, uint32_t, skip_t>{} },

		//
		// WDM
		//
		{ "DbgPrompt"_fnhash,                                       util::logger<char*>{} },
		{ "DbgPrint"_fnhash,                                        util::logger<char*, uint64_t, uint64_t, uint64_t, uint64_t>{} },
		{ "DbgPrintEx"_fnhash,                                      util::logger<uint32_t, uint32_t, char*, uint64_t, uint64_t, uint64_t, uint64_t>{} },
		{ "vDbgPrintEx"_fnhash,                                     util::logger<uint32_t, uint32_t, char*>{} },
		{ "vDbgPrintExWithPrefix"_fnhash,                           util::logger<char*, uint32_t, uint32_t, char*>{} },
		{ "ExCreateCallback"_fnhash,                                util::logger<skip_t, nt::object_attributes_t*, bool, bool>{} },
		{ "ExEnumHandleTable"_fnhash,                               util::logger<any_ptr, skip_t, skip_t, skip_t>{} },
		{ "ExGetFirmwareEnvironmentVariable"_fnhash,                util::logger<nt::unicode_view*, xstd::guid*>{} },
		{ "ExRegisterCallback"_fnhash,                              util::logger<nt::callback_object_t*, any_ptr, skip_t>{} },
		{ "ExSystemTimeToLocalTime"_fnhash,                         util::logger<uint64_t*, skip_t>{} },
		{ "IoAllocateMdl"_fnhash,                                   util::logger<any_ptr, uint32_t, bool, bool, skip_t>{} },
		{ "IoBuildDeviceIoControlRequest"_fnhash,                   util::logger<uint32_t, nt::device_object_t*, skip_t, skip_t, skip_t, skip_t, bool>{} },
		{ "IoCreateDevice"_fnhash,                                  util::logger<nt::driver_object_t*, uint32_t, nt::unicode_view*, uint32_t, uint32_t, bool>{} },
		{ "IoCreateFileEx"_fnhash,                                  util::logger<skip_t, uint32_t, nt::object_attributes_t*, skip_t, skip_t, uint32_t, uint32_t, uint32_t, uint32_t, skip_t, skip_t, uint32_t, any_ptr, uint32_t>{} },
		{ "IoCreateFileSpecifyDeviceObjectHint"_fnhash,             util::logger<skip_t, uint32_t, nt::object_attributes_t*, skip_t, skip_t, uint32_t, uint32_t, uint32_t, uint32_t, skip_t, skip_t, uint32_t, any_ptr, uint32_t>{} },
		{ "IoCreateSymbolicLink"_fnhash,                            util::logger<nt::unicode_view*, nt::unicode_view*>{} },
		{ "IoFreeMdl"_fnhash,                                       util::logger<any_ptr>{} },
		{ "IoEnumerateDeviceObjectList"_fnhash,                     util::logger<nt::driver_object_t*>{} },
		{ "IoGetDeviceInterfaces"_fnhash,                           util::logger<xstd::guid*, nt::device_object_t*, uint32_t>{} },
		{ "IoGetInitialStack"_fnhash,                               util::logger<>{} },
		{ "IoGetTopLevelIrp"_fnhash,                                util::logger<>{} },
		{ "IoIsSystemThread"_fnhash,                                util::logger<nt::ethread_t*>{} },
		{ "IoQueryFileDosDeviceName"_fnhash,                        util::logger<nt::file_object_t*>{} },
		{ "IoRegisterShutdownNotification"_fnhash,                  util::logger<nt::device_object_t*>{} },
		{ "IoThreadToProcess"_fnhash,                               util::logger<nt::ethread_t*>{} },
		{ "IoWMIOpenBlock"_fnhash,                                  util::logger<xstd::guid*, uint32_t>{} },
		{ "IoWMIQueryAllData"_fnhash,                               util::logger<>{} },
		{ "IofCallDriver"_fnhash,                                   util::logger<nt::irp_t*>{} },
		{ "IofCompleteRequest"_fnhash,                              util::logger<nt::irp_t*>{} },
		{ "KdChangeOption"_fnhash,                                  util::logger<uint32_t>{} },
		{ "KeDelayExecutionThread"_fnhash,                          util::logger<uint8_t, bool, util::duration_t*>{} },
		{ "KeEnterCriticalRegion"_fnhash,                           util::logger<>{} },
		{ "KeLeaveCriticalRegion"_fnhash,                           util::logger<>{} },
		{ "KeEnterGuardedRegion"_fnhash,                            util::logger<>{} },
		{ "KeLeaveGuardedRegion"_fnhash,                            util::logger<>{} },
		{ "KeQueryActiveProcessorCount"_fnhash,                     util::logger<>{} },
		{ "KeQueryTimeIncrement"_fnhash,                            util::logger<>{} },
		{ "KeStackAttachProcess"_fnhash,                            util::logger<nt::eprocess_t*>{} },
		{ "KeUnstackDetachProcess"_fnhash,                          util::logger<>{} },
		{ "MmAllocateContiguousMemorySpecifyCache"_fnhash,          util::logger<size_t, uint64_t, uint64_t, uint64_t, nt::memory_caching_type_t>{} },
		{ "MmBuildMdlForNonPagedPool"_fnhash,                       util::logger<any_ptr>{} },
		{ "MmCopyMemory"_fnhash,                                    util::logger<any_ptr, any_ptr, size_t, uint32_t>{} },
		{ "MmCopyVirtualMemory"_fnhash,                             util::logger<nt::eprocess_t*, any_ptr, nt::eprocess_t*, any_ptr, size_t>{} },
		{ "MmGetPhysicalAddress"_fnhash,                            util::logger<any_ptr>{} },
		{ "MmGetPhysicalMemoryRanges"_fnhash,                       util::logger<>{} },
		{ "MmGetSystemRoutineAddress"_fnhash,                       util::logger<nt::unicode_view*>{} },
		{ "MmGetVirtualForPhysical"_fnhash,                         util::logger<any_ptr>{} },
		{ "MmIsAddressValid"_fnhash,                                util::logger<any_ptr>{} },
		{ "MmMapLockedPagesSpecifyCache"_fnhash,                    util::logger<skip_t, uint8_t, nt::memory_caching_type_t, any_ptr, bool, uint32_t>{} },
		{ "MmProbeAndLockPages"_fnhash,                             util::logger<skip_t, uint8_t>{} },
		{ "MmProtectMdlSystemAddress"_fnhash,                       util::logger<skip_t, uint32_t>{} },
		{ "MmUnlockPages"_fnhash,                                   util::logger<skip_t>{} },
		{ "MmMapIoSpace"_fnhash,                                    util::logger<uint64_t, size_t, nt::memory_caching_type_t>{} },
		{ "MmMapIoSpaceEx"_fnhash,                                  util::logger<uint64_t, size_t, uint32_t>{} },
		{ "MmUnmapIoSpace"_fnhash,                                  util::logger<any_ptr, size_t>{} },
		{ "MmMapLockedPagesSpecifyCache"_fnhash,                    util::logger<skip_t, uint8_t, nt::memory_caching_type_t, any_ptr, uint8_t, uint32_t>{} },
		{ "ObGetFilterVersion"_fnhash,                              util::logger<>{} },
		{ "ObGetObjectType"_fnhash,                                 util::logger<util::object_t*>{} },
		{ "ObOpenObjectByName"_fnhash,                              util::logger<nt::object_attributes_t*, skip_t, uint8_t, skip_t, uint32_t>{} },
		{ "ObOpenObjectByPointer"_fnhash,                           util::logger<util::object_t*, uint32_t, skip_t, uint32_t, skip_t, uint8_t>{} },
		{ "ObRegisterCallbacks"_fnhash,                             util::logger<ob::callback_registration_t*>{} },
		{ "ObQueryNameString"_fnhash,                               util::logger<util::object_t*>{} },
		{ "PsAcquireProcessExitSynchronization"_fnhash,             util::logger<nt::eprocess_t*>{} },
		{ "PsReleaseProcessExitSynchronization"_fnhash,             util::logger<nt::eprocess_t*>{} },
		{ "PsCreateSystemThread"_fnhash,                            util::logger<skip_t, uint32_t, nt::object_attributes_t*, util::handle_t, skip_t, any_ptr, any_ptr>{} },
		{ "PsGetCurrentThreadStackBase"_fnhash,                     util::logger<>{} },
		{ "PsGetCurrentThreadStackLimit"_fnhash,                    util::logger<>{} },
		{ "PsGetProcessCreateTimeQuadPart"_fnhash,                  util::logger<nt::eprocess_t*>{} },
		{ "PsGetProcessExitProcessCalled"_fnhash,                   util::logger<nt::eprocess_t*>{} },
		{ "PsGetProcessId"_fnhash,                                  util::logger<nt::eprocess_t*>{} },
		{ "PsGetProcessImageFileName"_fnhash,                       util::logger<nt::eprocess_t*>{} },
		{ "PsGetProcessInheritedFromUniqueProcessId"_fnhash,        util::logger<nt::eprocess_t*>{} },
		{ "PsGetProcessPeb"_fnhash,                                 util::logger<nt::eprocess_t*>{} },
		{ "PsGetProcessSectionBaseAddress"_fnhash,                  util::logger<nt::eprocess_t*>{} },
		{ "PsGetProcessSessionId"_fnhash,                           util::logger<nt::eprocess_t*>{} },
		{ "PsGetProcessWow64Process"_fnhash,                        util::logger<nt::eprocess_t*>{} },
		{ "PsGetThreadProcessId"_fnhash,                            util::logger<nt::ethread_t*>{} },
		{ "PsGetCurrentProcess"_fnhash,                             util::logger<>{} },
		{ "PsGetCurrentProcessId"_fnhash,                           util::logger<>{} },
		{ "PsGetCurrentThreadId"_fnhash,                            util::logger<>{} },
		{ "PsIsProtectedProcess"_fnhash,                            util::logger<nt::eprocess_t*>{} },
		{ "PsIsProtectedProcessLight"_fnhash,                       util::logger<nt::eprocess_t*>{} },
		{ "PsIsThreadTerminating"_fnhash,                           util::logger<nt::ethread_t*>{} },
		//{ "PsLookupProcessByProcessId"_fnhash,                      util::logger<uint64_t>{} },
		//{ "PsLookupThreadByThreadId"_fnhash,                        util::logger<uint64_t>{} },
		{ "PsLookupProcessByProcessId"_fnhash,                      util::silent_logger{} },
		{ "PsLookupThreadByThreadId"_fnhash,                        util::silent_logger{} },
		{ "PsReferencePrimaryToken"_fnhash,                         util::logger<nt::eprocess_t*>{} },
		{ "PsReferenceProcessFilePointer"_fnhash,                   util::logger<nt::eprocess_t*>{} },
		{ "PsSuspendProcess"_fnhash,                                util::logger<nt::eprocess_t*>{} },
		{ "PsResumeProcess"_fnhash,                                 util::logger<nt::eprocess_t*>{} },
		{ "PsGetContextThread"_fnhash,                              util::logger<nt::ethread_t*>{} },
		{ "PsSetCreateProcessNotifyRoutine"_fnhash,                 util::logger<any_ptr, bool>{} },
		{ "PsSetCreateProcessNotifyRoutineEx"_fnhash,               util::logger<any_ptr, bool>{} },
		{ "PsSetLoadImageNotifyRoutine"_fnhash,                     util::logger<any_ptr>{} },
		{ "PsRemoveLoadImageNotifyRoutine"_fnhash,                  util::logger<any_ptr>{} },
		{ "PsSetCreateThreadNotifyRoutine"_fnhash,                  util::logger<any_ptr, bool>{} },
		{ "PsRemoveCreateThreadNotifyRoutine"_fnhash,               util::logger<any_ptr>{} },
		{ "RtlAnsiStringToUnicodeString"_fnhash,                    util::logger<skip_t, nt::ascii_view*, bool>{} },
		{ "RtlCompareString"_fnhash,                                util::logger<nt::ascii_view*, nt::ascii_view*, bool>{} },
		{ "RtlCompareUnicodeString"_fnhash,                         util::logger<nt::unicode_view*, nt::unicode_view*, bool>{} },
		{ "RtlDuplicateUnicodeString"_fnhash,                       util::logger<bool, nt::unicode_view*, skip_t>{} },
		{ "RtlGetVersion"_fnhash,                                   util::logger<>{} },
		{ "RtlInitAnsiString"_fnhash,                               util::logger<skip_t, char*>{} },
		{ "RtlInitUnicodeString"_fnhash,                            util::logger<skip_t, wchar_t*>{} },
		{ "RtlIntegerToUnicodeString"_fnhash,                       util::logger<uint32_t, uint8_t>{} },
		{ "RtlLookupFunctionEntry"_fnhash,                          util::logger<any_ptr, skip_t, any_ptr>{} },
		{ "RtlPcToFileHeader"_fnhash,                               util::logger<any_ptr>{} },
		{ "RtlPcToFileName"_fnhash,                                 util::logger<any_ptr>{} },
		{ "RtlPcToFilePath"_fnhash,                                 util::logger<any_ptr>{} },
		{ "RtlRandomEx"_fnhash,                                     util::logger<>{} },
		{ "RtlSetBits"_fnhash,                                      util::logger<any_ptr, uint32_t, uint32_t>{} },
		{ "RtlStringFromGUID"_fnhash,                               util::logger<xstd::guid*>{} },
		{ "RtlTimeToTimeFields"_fnhash,                             util::logger<util::duration_t*>{} },
		{ "RtlTimeToSecondsSince1970"_fnhash,                       util::logger<util::duration_t*>{} },
		{ "RtlUnicodeToMultiByteN"_fnhash,                          util::logger<skip_t, skip_t, skip_t, wchar_t*, skip_t/*TODO length :(*/>{} },
		{ "RtlMultiByteToUnicodeN"_fnhash,                          util::logger<skip_t, skip_t, skip_t, char*, skip_t/*TODO length :(*/>{} },
		{ "RtlUTF8ToUnicodeN"_fnhash,                               util::logger<skip_t, skip_t, skip_t, char*, skip_t/*TODO length :(*/>{} },
		{ "RtlUnicodeStringToAnsiString"_fnhash,                    util::logger<skip_t, nt::unicode_view*, bool>{} },
		{ "RtlVirtualUnwind"_fnhash,                                util::logger<uint32_t, any_ptr, any_ptr>{} },
		{ "RtlWalkFrameChain"_fnhash,                               util::logger<skip_t /*TODO*/, uint32_t, bool>{} },
		{ "RtlWriteRegistryValue"_fnhash,                           util::logger<uint32_t, wchar_t*, wchar_t*, uint32_t, any_ptr, uint32_t>{} },
		{ "SeRegisterImageVerificationCallback"_fnhash,             util::logger<uint32_t, uint32_t, any_ptr>{} },
		{ "CmRegisterCallback"_fnhash,                              util::logger<any_ptr, any_ptr>{} },
		{ "CmRegisterCallbackEx"_fnhash,                            util::logger<any_ptr, nt::unicode_view*, nt::driver_object_t*, any_ptr>{} },
		{ "CmUnRegisterCallback"_fnhash,                            util::logger<>{} },
		{ "ProbeForRead"_fnhash,                                    util::logger<any_ptr, size_t, uint32_t>{} },
		{ "ProbeForWrite"_fnhash,                                   util::logger<any_ptr, size_t, uint32_t>{} },

		//
		// Ob.
		//
		{ "ObReferenceObjectByHandle"_fnhash,                       util::logger<util::handle_t,  uint32_t, skip_t, uint8_t>{} },
		{ "ObReferenceObjectByHandleWithTag"_fnhash,                util::logger<util::handle_t,  uint32_t, skip_t, uint8_t, uint32_t>{} },
		{ "ObReferenceObjectByPointer"_fnhash,                      util::logger<util::object_t*, uint32_t, skip_t, uint8_t>{} },
		{ "ObReferenceObjectByPointerWithTag"_fnhash,               util::logger<util::object_t*, uint32_t, skip_t, uint8_t, uint32_t>{} },
		{ "ObReferenceObjectByName"_fnhash,                         util::logger<nt::unicode_view*, uint32_t, skip_t, uint32_t, skip_t, uint8_t>{} },
		{ "ObfReferenceObject"_fnhash,                              util::silent_logger{} },
		{ "ObfReferenceObjectWithTag"_fnhash,                       util::silent_logger{} },
		{ "ObDereferenceObject"_fnhash,                             util::silent_logger{} },
		{ "ObDereferenceObjectDeferDelete"_fnhash,                  util::silent_logger{} },
		{ "ObDereferenceObjectDeferDeleteWithTag"_fnhash,           util::silent_logger{} },
		{ "ObfDereferenceObject"_fnhash,                            util::silent_logger{} },
		{ "ObfDereferenceObjectWithTag"_fnhash,                     util::silent_logger{} },
		{ "ObReferenceObjectSafe"_fnhash,                           util::silent_logger{} },
		{ "ObReferenceObjectSafeWithTag"_fnhash,                    util::silent_logger{} },

		//
		// Scheduler
		//
		{ "KeInitializeEvent"_fnhash,                               util::logger<any_ptr, nt::event_type_t, bool>{} },
		{ "KeInitializeTimer"_fnhash,                               util::logger<any_ptr>{} },
		{ "KeInitializeSemaphore"_fnhash,                           util::logger<any_ptr, int32_t, int32_t>{} },
		{ "KeInitializeQueue"_fnhash,                               util::logger<any_ptr, uint32_t>{} },
		{ "KeInitializeMutex"_fnhash,                               util::logger<any_ptr, uint32_t>{} },
		{ "KeInitializeMutant"_fnhash,                              util::logger<any_ptr, bool>{} },
		{ "ExInitializePushLock"_fnhash,                            util::logger<any_ptr>{} },
		{ "ExInitializeResourceLite"_fnhash,                        util::logger<any_ptr>{} },
		{ "ExInitializeRundownProtection"_fnhash,                   util::logger<any_ptr>{} },
		{ "ExInitializeRundownProtectionCacheAware"_fnhash,         util::logger<any_ptr>{} },
		{ "ExInitializeRundownProtectionCacheAwareEx"_fnhash,       util::logger<any_ptr>{} },

		{ "KeReadStateEvent"_fnhash,                                util::logger<any_ptr>{} },
		{ "KeReadStateTimer"_fnhash,                                util::logger<any_ptr>{} },
		{ "KeReadStateSemaphore"_fnhash,                            util::logger<any_ptr>{} },
		{ "KeReadStateQueue"_fnhash,                                util::logger<any_ptr>{} },
		{ "KeReadStateMutex"_fnhash,                                util::logger<any_ptr>{} },
		{ "KeReadStateMutant"_fnhash,                               util::logger<any_ptr>{} },

		{ "KeResetEvent"_fnhash,                                    util::logger<any_ptr>{} },
		{ "KeClearEvent"_fnhash,                                    util::logger<any_ptr>{} },
		{ "KeSetEvent"_fnhash,                                      util::logger<any_ptr>{} },
		{ "KeSetTimer"_fnhash,                                      util::logger<any_ptr, util::duration_t>{} },
		{ "KeSetTimerEx"_fnhash,                                    util::logger<any_ptr, util::duration_t, util::duration_t>{} },

		{ "KeAreAllApcsDisabled"_fnhash,                            util::logger<>{} },
		{ "KfRaiseIrql"_fnhash,                                     util::logger<uint8_t>{} },
		{ "KeLowerIrql"_fnhash,                                     util::logger<uint8_t>{} },
		{ "KeInitializeApc"_fnhash,                                 util::logger<any_ptr, nt::ethread_t*, nt::kapc_environment_t, any_ptr, any_ptr, any_ptr, uint8_t>{} },
		{ "KeInsertQueueApc"_fnhash,                                util::logger<any_ptr>{} },
		{ "KeInitializeDpc"_fnhash,                                 util::logger<any_ptr, any_ptr, any_ptr>{} },
		{ "KeIpiGenericCall"_fnhash,                                util::logger<any_ptr, uint64_t>{} },
		{ "KeRegisterNmiCallback"_fnhash,                           util::logger<any_ptr, any_ptr>{} },
		{ "KeSignalCallDpcDone"_fnhash,                             util::logger<>{} },
		{ "KeSignalCallDpcSynchronize"_fnhash,                      util::logger<>{} },

		//
		// Fltmgr API.
		//
		{ "FltGetRoutineAddress"_fnhash,                            util::logger<char*>{} },
		{ "FltAllocatePoolAlignedWithTag"_fnhash,                   util::silent_logger{} },
		{ "FltFreePoolAlignedWithTag"_fnhash,                       util::silent_logger{} },
		{ "FltRegisterFilter"_fnhash,                               util::logger<>{} },
		{ "FltStartFiltering"_fnhash,                               util::logger<>{} },
		{ "FltGetRequestorProcess"_fnhash,                          util::logger<>{} },
		{ "FltQueryInformationFile"_fnhash,                         util::logger<skip_t, nt::file_object_t*, skip_t, skip_t, nt::file_information_class_t>{} },
		{ "FltReadFile"_fnhash,                                     util::logger<skip_t, nt::file_object_t*>{} },

		//
		// CRT
		//
		{ "__C_specific_handler"_fnhash,                            util::logger<nt::exception_record_t*>{} },
		{ "rand"_fnhash,                                            util::logger<>{} },
		{ "srand"_fnhash,                                           util::logger<uint32_t>{} },
		{ "qsort"_fnhash,                                           util::logger<any_ptr, size_t, size_t, any_ptr>{} },
		{ "qsort_s"_fnhash,                                         util::logger<any_ptr, size_t, size_t, any_ptr, any_ptr>{} },

		// Integer to string conversion.
		{ "_i64toa_s"_fnhash,                                       util::logger<int64_t, skip_t, skip_t, int>{} },
		{ "_i64tow_s"_fnhash,                                       util::logger<int64_t, skip_t, skip_t, int>{} },
		{ "_ui64toa_s"_fnhash,                                      util::logger<uint64_t, skip_t, skip_t, int>{} },
		{ "_ui64tow_s"_fnhash,                                      util::logger<uint64_t, skip_t, skip_t, int>{} },
		{ "_itoa"_fnhash,                                           util::logger<int32_t, skip_t, int>{} },
		{ "_itoa_s"_fnhash,                                         util::logger<int32_t, skip_t, skip_t, int>{} },
		{ "_itow"_fnhash,                                           util::logger<int32_t, skip_t, int>{} },
		{ "_itow_s"_fnhash,                                         util::logger<int32_t, skip_t, skip_t, int>{} },
		{ "_ltow_s"_fnhash,                                         util::logger<int32_t, skip_t, skip_t, int>{} },
		{ "_ltoa_s"_fnhash,                                         util::logger<int32_t, skip_t, skip_t, int>{} },
		{ "_ultoa_s"_fnhash,                                        util::logger<uint32_t, skip_t, skip_t, int>{} },
		{ "_ultow_s"_fnhash,                                        util::logger<uint32_t, skip_t, skip_t, int>{} },

		// String to integer conversion.
		{ "atoi"_fnhash,                                            util::logger<char*>{} },
		{ "atol"_fnhash,                                            util::logger<char*>{} },
		{ "_wtoi"_fnhash,                                           util::logger<wchar_t*>{} },
		{ "_wtol"_fnhash,                                           util::logger<wchar_t*>{} },
		{ "wcstoul"_fnhash,                                         util::logger<wchar_t*>{} },
		{ "_strtoui64"_fnhash,                                      util::logger<char*, skip_t, int>{} },

		// String comparison.
		{ "_stricmp"_fnhash,                                        util::logger<char*, char*>{} },
		{ "_wcsicmp"_fnhash,                                        util::logger<wchar_t*, wchar_t*>{} },
		{ "_strnicmp"_fnhash,                                       util::logger<char*, char*, size_t/*TODO length :(*/>{} },
		{ "_wcsnicmp"_fnhash,                                       util::logger<wchar_t*, wchar_t*, size_t/*TODO length :(*/>{} },
		{ "strcmp"_fnhash,                                          util::logger<char*, char*>{} },
		{ "strncmp"_fnhash,                                         util::logger<char*, char*, size_t/*TODO length :(*/>{} },
		{ "wcscmp"_fnhash,                                          util::logger<wchar_t*, wchar_t*>{} },
		{ "wcsncmp"_fnhash,                                         util::logger<wchar_t*, wchar_t*, size_t/*TODO length :(*/>{} },

		// Misc. string.
		{ "_strlwr"_fnhash,                                         util::logger<char*>{} },
		{ "_strupr"_fnhash,                                         util::logger<char*>{} },
		{ "_strlwr"_fnhash,                                         util::logger<char*>{} },
		{ "_wcsupr"_fnhash,                                         util::logger<wchar_t*>{} },
		{ "_wcslwr"_fnhash,                                         util::logger<wchar_t*>{} },
		{ "_wcslwr_s"_fnhash,                                       util::logger<wchar_t*, uint32_t/*TODO length :(*/>{} },
		{ "_wcsrev"_fnhash,                                         util::logger<wchar_t*>{} },
		{ "strtok_s"_fnhash,                                        util::logger<char*>{} },
		{ "sscanf_s"_fnhash,                                        util::logger<char*, char*>{} },
		{ "swscanf_s"_fnhash,                                       util::logger<wchar_t*, wchar_t*>{} },
		{ "tolower"_fnhash,                                         util::logger<int>{} },
		{ "towlower"_fnhash,                                        util::logger<int>{} },
		{ "toupper"_fnhash,                                         util::logger<int>{} },
		{ "towupper"_fnhash,                                        util::logger<int>{} },

		// String formatting.
		{ "sprintf"_fnhash,                                         util::silent_logger{} }, //util::logger<skip_t, char*, util::fmtarg_t, util::fmtarg_t, util::fmtarg_t, util::fmtarg_t>{} },
		{ "sprintf_s"_fnhash,                                       util::silent_logger{} }, //util::logger<skip_t, skip_t, char*, util::fmtarg_t, util::fmtarg_t, util::fmtarg_t, util::fmtarg_t>{} },
		{ "_snprintf"_fnhash,                                       util::silent_logger{} }, //util::logger<skip_t, skip_t, char*, util::fmtarg_t, util::fmtarg_t, util::fmtarg_t, util::fmtarg_t>{} },
		{ "_snprintf_s"_fnhash,                                     util::silent_logger{} }, //util::logger<skip_t, skip_t, skip_t, char*, util::fmtarg_t, util::fmtarg_t, util::fmtarg_t, util::fmtarg_t>{} },
		{ "swprintf"_fnhash,                                        util::silent_logger{} }, //util::logger<skip_t, wchar_t*, util::fmtarg_t, util::fmtarg_t, util::fmtarg_t, util::fmtarg_t>{} },
		{ "_swprintf"_fnhash,                                       util::silent_logger{} }, //util::logger<skip_t, wchar_t*, util::fmtarg_t, util::fmtarg_t, util::fmtarg_t, util::fmtarg_t>{} },
		{ "_snwprintf"_fnhash,                                      util::silent_logger{} }, //util::logger<skip_t, skip_t, wchar_t*, util::fmtarg_t, util::fmtarg_t, util::fmtarg_t, util::fmtarg_t>{} },
		{ "swprintf_s"_fnhash,                                      util::silent_logger{} }, //util::logger<skip_t, skip_t, wchar_t*, util::fmtarg_t, util::fmtarg_t, util::fmtarg_t, util::fmtarg_t>{} },
		{ "_snwprintf_s"_fnhash,                                    util::silent_logger{} }, //util::logger<skip_t, skip_t, skip_t, wchar_t*, util::fmtarg_t, util::fmtarg_t, util::fmtarg_t, util::fmtarg_t>{} },
		{ "vsprintf"_fnhash,                                        util::logger<skip_t, char*>{} },
		{ "vsprintf_s"_fnhash,                                      util::logger<skip_t, skip_t, char*>{} },
		{ "vswprintf_s"_fnhash,                                     util::logger<skip_t, skip_t, wchar_t*>{} },
		{ "_vswprintf"_fnhash,                                      util::logger<skip_t, wchar_t*>{} },
		{ "_vsnprintf"_fnhash,                                      util::logger<skip_t, skip_t, char*>{} },
		{ "_vsnprintf_s"_fnhash,                                    util::logger<skip_t, skip_t, skip_t, char*>{} },
		{ "_vsnwprintf"_fnhash,                                     util::logger<skip_t, skip_t, wchar_t*>{} },
		{ "_vsnwprintf_s"_fnhash,                                   util::logger<skip_t, skip_t, skip_t, wchar_t*>{} },

		// String details.
		{ "strlen"_fnhash,                                          util::logger<char*>{} },
		{ "strnlen"_fnhash,                                         util::logger<char*, uint32_t /*TODO length :(*/>{} },
		{ "strchr"_fnhash,                                          util::logger<char*, char>{} },
		{ "strrchr"_fnhash,                                         util::logger<char*, char>{} },
		{ "strspn"_fnhash,                                          util::logger<char*, char*>{} },
		{ "strstr"_fnhash,                                          util::logger<char*, char*>{} },
		{ "wcslen"_fnhash,                                          util::logger<wchar_t*>{} },
		{ "wcsnlen"_fnhash,                                         util::logger<wchar_t*, uint32_t /*TODO length :(*/>{} },
		{ "wcschr"_fnhash,                                          util::logger<wchar_t*, wchar_t>{} },
		{ "wcsrchr"_fnhash,                                         util::logger<wchar_t*, wchar_t>{} },
		{ "wcsspn"_fnhash,                                          util::logger<wchar_t*, wchar_t*>{} },
		{ "wcscspn"_fnhash,                                         util::logger<wchar_t*, wchar_t*>{} },
		{ "wcsstr"_fnhash,                                          util::logger<wchar_t*, wchar_t*>{} },

		// String copy.
		{ "strcat"_fnhash,                                          util::logger<char*, char*>{} },
		{ "strcat_s"_fnhash,                                        util::logger<char*, uint32_t/*TODO length :(*/, char*>{} },
		{ "strncat"_fnhash,                                         util::logger<char*, char*, uint32_t /*TODO length :(*/>{} },
		{ "strncat_s"_fnhash,                                       util::logger<char*, uint32_t/*TODO length :(*/, char*, uint32_t /*TODO length :(*/>{} },
		{ "strcpy"_fnhash,                                          util::logger<skip_t, char*>{} },
		{ "strcpy_s"_fnhash,                                        util::logger<skip_t, skip_t, char*>{} },
		{ "strncpy"_fnhash,                                         util::logger<skip_t, char*, uint32_t/*TODO length :(*/>{} },
		{ "strncpy_s"_fnhash,                                       util::logger<skip_t, skip_t, char*, uint32_t/*TODO length :(*/>{} },
		{ "wcscat"_fnhash,                                          util::logger<wchar_t*, wchar_t*>{} },
		{ "wcscat_s"_fnhash,                                        util::logger<wchar_t*, uint32_t/*TODO length :(*/, wchar_t*>{} },
		{ "wcsncat"_fnhash,                                         util::logger<wchar_t*, wchar_t*, uint32_t /*TODO length :(*/>{} },
		{ "wcsncat_s"_fnhash,                                       util::logger<wchar_t*, uint32_t/*TODO length :(*/, wchar_t*, uint32_t /*TODO length :(*/>{} },
		{ "wcscpy"_fnhash,                                          util::logger<skip_t, wchar_t*>{} },
		{ "wcscpy_s"_fnhash,                                        util::logger<skip_t, skip_t, wchar_t*>{} },
		{ "wcsncpy"_fnhash,                                         util::logger<skip_t, wchar_t*, uint32_t/*TODO length :(*/>{} },
		{ "wcsncpy_s"_fnhash,                                       util::logger<skip_t, skip_t, wchar_t*, uint32_t/*TODO length :(*/>{} },

		// String conversion.
		{ "mbstowcs"_fnhash,                                        util::logger<skip_t, char*, uint32_t/*TODO length :(*/>{} },
		{ "mbtowc"_fnhash,                                          util::logger<skip_t, char*, uint32_t/*TODO length :(*/>{} },
		{ "wcstombs"_fnhash,                                        util::logger<skip_t, wchar_t*, uint32_t/*TODO length :(*/>{} },
		{ "wctomb"_fnhash,                                          util::logger<skip_t, wchar_t*, uint32_t/*TODO length :(*/>{} },

		// <cstring.h> memory operations.
		{ "memchr"_fnhash,                                          util::logger<any_ptr, int>{} },
		{ "memcmp"_fnhash,                                          util::logger<any_ptr, any_ptr, size_t>{} },
		{ "memset"_fnhash,                                          util::logger<any_ptr, int, size_t>{} },
		{ "memcpy"_fnhash,                                          util::logger<any_ptr, any_ptr, size_t>{} },
		{ "memcpy_s"_fnhash,                                        util::logger<any_ptr, size_t, any_ptr, size_t>{} },
		{ "memmove"_fnhash,                                         util::logger<any_ptr, any_ptr, size_t>{} },
		{ "memmove_s"_fnhash,                                       util::logger<any_ptr, size_t, any_ptr, size_t>{} },

		//
		// Skip list
		//
		{ "__chkstk"_fnhash,                                        util::silent_logger{} },
		{ "_setjmpex"_fnhash,                                       util::logger<>{} },
		{ "_setjmp"_fnhash,                                         util::logger<>{} },
		{ "longjmp"_fnhash,                                         util::logger<>{} },
		{ "isdigit"_fnhash,                                         util::silent_logger{} },
		{ "islower"_fnhash,                                         util::silent_logger{} },
		{ "isprint"_fnhash,                                         util::silent_logger{} },
		{ "sqrt"_fnhash,	                                          util::silent_logger{} },
		{ "sqrtf"_fnhash,                                           util::silent_logger{} },
		{ "isspace"_fnhash,                                         util::silent_logger{} },
		{ "isupper"_fnhash,                                         util::silent_logger{} },
		{ "iswalnum"_fnhash,                                        util::silent_logger{} },
		{ "iswdigit"_fnhash,                                        util::silent_logger{} },
		{ "iswspace"_fnhash,                                        util::silent_logger{} },
		{ "isxdigit"_fnhash,                                        util::silent_logger{} },

		// Reference counting.
		{ "NtClose"_fnhash,                                         util::silent_logger{} },
		{ "ZwClose"_fnhash,                                         util::silent_logger{} },

		// Kernel heap.
		{ "ExAllocatePool"_fnhash,                                  util::silent_logger{} },
		{ "ExAllocatePoolWithTag"_fnhash,                           util::silent_logger{} },
		{ "ExAllocatePoolWithTagPriority"_fnhash,                   util::silent_logger{} },
		{ "ExAllocatePoolWithQuota"_fnhash,                         util::silent_logger{} },
		{ "ExAllocatePoolWithQuotaTag"_fnhash,                      util::silent_logger{} },
		{ "ExFreePool"_fnhash,                                      util::silent_logger{} },
		{ "ExFreePoolWithTag"_fnhash,                               util::silent_logger{} },
		{ "RtlFreeAnsiString"_fnhash,                               util::silent_logger{} },

		// Synchronization.
		{ "ExAcquireAutoExpandPushLockExclusive"_fnhash,            util::silent_logger{} },
		{ "ExAcquireAutoExpandPushLockShared"_fnhash,               util::silent_logger{} },
		{ "ExAcquireCacheAwarePushLockExclusive"_fnhash,            util::silent_logger{} },
		{ "ExAcquireCacheAwarePushLockExclusiveEx"_fnhash,          util::silent_logger{} },
		{ "ExAcquireCacheAwarePushLockSharedEx"_fnhash,             util::silent_logger{} },
		{ "ExAcquireFastMutex"_fnhash,                              util::silent_logger{} },
		{ "ExAcquireFastMutexUnsafe"_fnhash,                        util::silent_logger{} },
		{ "ExAcquireFastResourceExclusive"_fnhash,                  util::silent_logger{} },
		{ "ExAcquireFastResourceShared"_fnhash,                     util::silent_logger{} },
		{ "ExAcquireFastResourceSharedStarveExclusive"_fnhash,      util::silent_logger{} },
		{ "ExAcquirePushLockExclusiveEx"_fnhash,                    util::silent_logger{} },
		{ "ExAcquirePushLockSharedEx"_fnhash,                       util::silent_logger{} },
		{ "ExAcquireResourceExclusiveLite"_fnhash,                  util::silent_logger{} },
		{ "ExAcquireResourceSharedLite"_fnhash,                     util::silent_logger{} },
		{ "ExAcquireRundownProtection"_fnhash,                      util::silent_logger{} },
		{ "ExAcquireRundownProtectionCacheAware"_fnhash,            util::silent_logger{} },
		{ "ExAcquireRundownProtectionCacheAwareEx"_fnhash,          util::silent_logger{} },
		{ "ExAcquireRundownProtectionEx"_fnhash,                    util::silent_logger{} },
		{ "ExAcquireSharedStarveExclusive"_fnhash,                  util::silent_logger{} },
		{ "ExAcquireSharedWaitForExclusive"_fnhash,                 util::silent_logger{} },
		{ "ExAcquireSpinLockExclusive"_fnhash,                      util::silent_logger{} },
		{ "ExAcquireSpinLockExclusiveAtDpcLevel"_fnhash,            util::silent_logger{} },
		{ "ExAcquireSpinLockShared"_fnhash,                         util::silent_logger{} },
		{ "ExAcquireSpinLockSharedAtDpcLevel"_fnhash,               util::silent_logger{} },
		{ "KeAcquireGuardedMutex"_fnhash,                           util::silent_logger{} },
		{ "KeAcquireGuardedMutexUnsafe"_fnhash,                     util::silent_logger{} },
		{ "KeAcquireInStackQueuedSpinLock"_fnhash,                  util::silent_logger{} },
		{ "KeAcquireInStackQueuedSpinLockAtDpcLevel"_fnhash,        util::silent_logger{} },
		{ "KeAcquireInStackQueuedSpinLockForDpc"_fnhash,            util::silent_logger{} },
		{ "KeAcquireInStackQueuedSpinLockRaiseToSynch"_fnhash,      util::silent_logger{} },
		{ "KeAcquireInterruptSpinLock"_fnhash,                      util::silent_logger{} },
		{ "KeAcquireQueuedSpinLock"_fnhash,                         util::silent_logger{} },
		{ "KeAcquireQueuedSpinLockRaiseToSynch"_fnhash,             util::silent_logger{} },
		{ "KeAcquireSpinLockAtDpcLevel"_fnhash,                     util::silent_logger{} },
		{ "KeAcquireSpinLockForDpc"_fnhash,                         util::silent_logger{} },
		{ "KeAcquireSpinLockRaiseToDpc"_fnhash,                     util::silent_logger{} },
		{ "KeAcquireSpinLockRaiseToSynch"_fnhash,                   util::silent_logger{} },
		{ "ExReleaseAutoExpandPushLockExclusive"_fnhash,            util::silent_logger{} },
		{ "ExReleaseAutoExpandPushLockShared"_fnhash,               util::silent_logger{} },
		{ "ExReleaseCacheAwarePushLockExclusive"_fnhash,            util::silent_logger{} },
		{ "ExReleaseCacheAwarePushLockExclusiveEx"_fnhash,          util::silent_logger{} },
		{ "ExReleaseCacheAwarePushLockSharedEx"_fnhash,             util::silent_logger{} },
		{ "ExReleaseDisownedFastResource"_fnhash,                   util::silent_logger{} },
		{ "ExReleaseDisownedFastResourceExclusive"_fnhash,          util::silent_logger{} },
		{ "ExReleaseDisownedFastResourceShared"_fnhash,             util::silent_logger{} },
		{ "ExReleaseFastMutex"_fnhash,                              util::silent_logger{} },
		{ "ExReleaseFastMutexUnsafe"_fnhash,                        util::silent_logger{} },
		{ "ExReleaseFastMutexUnsafeAndLeaveCriticalRegion"_fnhash,  util::silent_logger{} },
		{ "ExReleaseFastResource"_fnhash,                           util::silent_logger{} },
		{ "ExReleaseFastResourceExclusive"_fnhash,                  util::silent_logger{} },
		{ "ExReleaseFastResourceShared"_fnhash,                     util::silent_logger{} },
		{ "ExReleasePushLockEx"_fnhash,                             util::silent_logger{} },
		{ "ExReleasePushLockExclusiveEx"_fnhash,                    util::silent_logger{} },
		{ "ExReleasePushLockSharedEx"_fnhash,                       util::silent_logger{} },
		{ "ExReleaseResourceAndLeaveCriticalRegion"_fnhash,         util::silent_logger{} },
		{ "ExReleaseResourceAndLeavePriorityRegion"_fnhash,         util::silent_logger{} },
		{ "ExReleaseResourceForThreadLite"_fnhash,                  util::silent_logger{} },
		{ "ExReleaseResourceLite"_fnhash,                           util::silent_logger{} },
		{ "ExReleaseRundownProtection"_fnhash,                      util::silent_logger{} },
		{ "ExReleaseRundownProtectionCacheAware"_fnhash,            util::silent_logger{} },
		{ "ExReleaseRundownProtectionCacheAwareEx"_fnhash,          util::silent_logger{} },
		{ "ExReleaseRundownProtectionEx"_fnhash,                    util::silent_logger{} },
		{ "ExReleaseSpinLockExclusive"_fnhash,                      util::silent_logger{} },
		{ "ExReleaseSpinLockExclusiveFromDpcLevel"_fnhash,          util::silent_logger{} },
		{ "ExReleaseSpinLockShared"_fnhash,                         util::silent_logger{} },
		{ "ExReleaseSpinLockSharedFromDpcLevel"_fnhash,             util::silent_logger{} },
		{ "KeReleaseGuardedMutex"_fnhash,                           util::silent_logger{} },
		{ "KeReleaseGuardedMutexUnsafe"_fnhash,                     util::silent_logger{} },
		{ "KeReleaseInStackQueuedSpinLock"_fnhash,                  util::silent_logger{} },
		{ "KeReleaseInStackQueuedSpinLockForDpc"_fnhash,            util::silent_logger{} },
		{ "KeReleaseInStackQueuedSpinLockFromDpcLevel"_fnhash,      util::silent_logger{} },
		{ "KeReleaseInterruptSpinLock"_fnhash,                      util::silent_logger{} },
		{ "KeReleaseMutant"_fnhash,                                 util::silent_logger{} },
		{ "KeReleaseMutex"_fnhash,                                  util::silent_logger{} },
		{ "KeReleaseQueuedSpinLock"_fnhash,                         util::silent_logger{} },
		{ "KeReleaseSemaphore"_fnhash,                              util::silent_logger{} },
		{ "KeReleaseSpinLock"_fnhash,                               util::silent_logger{} },
		{ "KeReleaseSpinLockForDpc"_fnhash,                         util::silent_logger{} },
		{ "KeReleaseSpinLockFromDpcLevel"_fnhash,                   util::silent_logger{} },
		{ "KeWaitForSingleObject"_fnhash,                           util::silent_logger{} },
		{ "ExfUnblockPushLock"_fnhash,                              util::silent_logger{} },
	};
	static consteval fn_api_hook get_logger( fn_hash_t hash )
	{
		auto it = std::find_if( default_loggers, std::end( default_loggers ), [ & ] ( auto e ) { return e.first == hash; } );
		if ( it != std::end( default_loggers ) )
			return it->second;
		else
			unreachable();
	}

	// IPI hook to mitigate EAC.
	//
	MS_SSE2AVX static uint64_t eac_ke_ipi_generic_call( uint64_t fn, uint64_t* context, r0::mgx_info* mgx )
	{
		auto f = ( decltype( &eac_ke_ipi_generic_call ) ) &ke::ipi_generic_call;
		xstd::log( "ipi(%p, %p)\n", fn, context );

		// Check if it looks legit:
		//
		if ( mem::is_address_valid( context ) && mem::is_address_valid( context + 4 ) ) {
			// pdpte_dos_ipi:
			//
			if ( !*context && context[ 1 ] >= 0x100 ) {
				// If we did not find the IPI before this, set the VA.
				//
				uint64_t pdpte_dos_ipi = mgx->eac.pdpte_dos_ipi.load( std::memory_order::relaxed );
				if ( !pdpte_dos_ipi ) [[unlikely]] {
					if ( mgx->eac.pdpte_dos_ipi.compare_exchange_strong( pdpte_dos_ipi, fn ) ) {
						pdpte_dos_ipi = fn;
					}
				}

				// If it does match, mitigate:
				//
				if ( pdpte_dos_ipi == fn ) {
					xstd::log( "Intercepting DoS IPI\n" );
					return apic::number_of_processors();
				}
			}

			// tlb_test_ipi:
			//
			if ( mem::get_pte( context[ 1 ] ) == ( void* ) context[ 0 ] ) {
				// If we did not find the IPI before this, set the VA.
				//
				uint64_t tlb_test_ipi = mgx->eac.tlb_test_ipi.load( std::memory_order::relaxed );
				if ( !tlb_test_ipi ) [[unlikely]] {
					if ( mgx->eac.tlb_test_ipi.compare_exchange_strong( tlb_test_ipi, fn ) ) {
						tlb_test_ipi = fn;
					}
				}

				// If it does match, mitigate:
				//
				//[0]: FFFFF77C012E7908 -> FFFFF77C012E7908
				//[1]: FFFFF8025CF21030 -> FFFFF8025CF21030
				//[2]: 0000000400000000 -> 0000000400000004
				//[3]: 0000000000000000 -> 0000000000000001
				//
				if ( tlb_test_ipi == fn ) {
					xstd::log( "Intercepting TLB IPI\n" );
					context[ 2 ] |= context[ 2 ] >> 32;
					( uint8_t& ) context[ 3 ] = 0; // yes we good
					return context[ 2 ] >> 32;
				}
			}
		}


		if constexpr ( is_debug_build() ) {
			for ( size_t i = 0; i != 16; i++ ) {
				if ( mem::is_address_valid( &context[ i ] ) ) {
					printf("[%d]: %p\n", i, context[ i ] );
				} else {
					printf( "[%d]: ?????????\n", i );
				}
			}
			uint64_t result = f( fn, context, nullptr );
			printf( "retval: %p\n", result );
			for ( size_t i = 0; i != 16; i++ ) {
				if ( mem::is_address_valid( &context[ i ] ) ) {
					printf( "[%d]: %p\n", i, context[ i ] );
				} else {
					printf( "[%d]: ?????????\n", i );
				}
			}
			return result;
		} else {
			[[clang::musttail]] return f( fn, context, nullptr );
		}
	}

	// API hook list.
	//
	static const std::unordered_map<any_ptr, fn_api_hook, xstd::hasher<>> api_hooks = [ ] ()
	{
		win::image_x64_t* image_list[] =
		{
			ntpp::get_ntoskrnl(),
			sdk::image_base_of( fltmgr::flt_query_information_file )
		};

		std::unordered_map<any_ptr, fn_api_hook, xstd::hasher<>> result = {};
		auto bind = [ & ] ( const std::variant<fn_hash_t, void*>& id, fn_api_hook hnd )
		{
			if ( id.index() == 1 )
			{
				result[ std::get<1>( id ) ] = hnd;
			}
			else
			{
				fn_hash_t hash = std::get<0>( id );
				bool found = false;

				for ( auto* img : image_list )
				{
					enum_direct_exports( img, [ & ] ( const char* name, any_ptr ptr )
					{
						if ( fn_hash_t{ name } == hash )
							result[ ptr ] = hnd, found = true;
					} );
					if ( found )
						break;
				}

				if ( !found )
					xstd::warning( "Couldn't find %s."_es, hash );
			}
		};
		// Bind default loggers.
		//
		for ( auto& [name, def] : default_loggers )
			bind( name, def );

		// "Undocumented" routines.
		//
		bind( &os::resume_thread,                      util::logger<util::handle_t>{} );
		bind( &os::suspend_thread,                     util::logger<util::handle_t>{} );
		bind( &os::km::resume_thread,                  util::logger<util::handle_t>{} );
		bind( &os::km::suspend_thread,                 util::logger<util::handle_t>{} );
		bind( &os::resume_process,                     util::logger<util::handle_t>{} );
		bind( &os::suspend_process,                    util::logger<util::handle_t>{} );
		bind( &os::km::resume_process,                 util::logger<util::handle_t>{} );
		bind( &os::km::suspend_process,                util::logger<util::handle_t>{} );
		bind( &ps::suspend_thread,                     util::logger<nt::ethread_t*>{} );
		bind( &ps::resume_thread,                      util::logger<nt::ethread_t*>{} );
		bind( &os::query_system_environment_value,     util::logger<nt::unicode_view*>{} );
		bind( &os::km::query_system_environment_value, util::logger<nt::unicode_view*>{} );
		bind( &ob::reference_process_handle_table,     util::logger<nt::eprocess_t*>{} );
		bind( &ke::remove_queue_apc,                   util::logger<any_ptr>{} );

		// Accelerated routines.
		//
		bind( "tolower"_fnhash, [ ] ( trapframe* tf )
		{
			util::skip_log( tf );
			uint32_t chr = util::arg<uint32_t, 0>( tf );
			return chr <= 0x7F && util::ret( tf, tolower( chr ) );
		} );
		bind( "toupper"_fnhash, [ ] ( trapframe* tf )
		{
			util::skip_log( tf );
			uint32_t chr = util::arg<uint32_t, 0>( tf );
			return chr <= 0x7F && util::ret( tf, toupper( chr ) );
		} );
		bind( "towlower"_fnhash, [ ] ( trapframe* tf )
		{
			util::skip_log( tf );
			uint16_t chr = util::arg<uint16_t, 0>( tf );
			return chr <= 0x7F && util::ret( tf, tolower( chr ) );
		} );
		bind( "towupper"_fnhash, [ ] ( trapframe* tf )
		{
			util::skip_log( tf );
			uint16_t chr = util::arg<uint16_t, 0>( tf );
			return chr <= 0x7F && util::ret( tf, toupper( chr ) );
		} );
		bind( "KfRaiseIrql"_fnhash, [ ] ( trapframe* tf )
		{
			util::skip_log( tf );
			irql_t irql = util::arg<uint8_t, 0>( tf );
			if ( irql & 0xF0 ) return false;

			if ( !util::ret( tf, uint32_t( tf->vmcs->guest_cr8 ) ) )
				return false;

			tf->vmcs->guest_cr8 = irql;
			ia32::set_irql( irql );
			return true;
		} );
		bind( "KeLowerIrql"_fnhash, [ ] ( trapframe* tf )
		{
			util::skip_log( tf );
			irql_t irql = util::arg<uint8_t, 0>( tf );
			if ( irql & 0xF0 ) return false;

			if ( !util::ret( tf ) )
				return false;

			tf->vmcs->guest_cr8 = irql;
			ia32::set_irql( irql );
			return true;
		} );
		bind( "PsGetCurrentThread"_fnhash, [ ] ( trapframe* tf )
		{
			util::log( tf );
			return util::ret( tf, ke::get_ethread() );
		} );
		bind( "PsGetCurrentProcess"_fnhash, [ ] ( trapframe* tf )
		{
			util::log( tf );
			return util::ret( tf, ke::get_eprocess() );
		} );
		bind( "PsGetCurrentProcessId"_fnhash, [ ] ( trapframe* tf )
		{
			util::log( tf );
			void* res = ntpp::get_client_id().unique_process;
			return util::ret( tf, res );
		} );
		bind( "PsGetCurrentThreadId"_fnhash, [ ] ( trapframe* tf )
		{
			util::log( tf );
			void* res = ntpp::get_client_id().unique_thread;
			return util::ret( tf, res );
		} );
		bind( "PsGetThreadProcessId"_fnhash, [ ] ( trapframe* tf )
		{
			auto thr = util::arg<nt::ethread_t*, 0>( tf );
			util::log( tf, thr );

			if ( auto proc = safe::read( &thr->cid.unique_process ) )
				return util::ret( tf, *proc );
			return false;
		} );
		bind( "MmGetPhysicalAddress"_fnhash, [ ] ( trapframe* tf )
		{
			get_logger( "MmGetPhysicalAddress"_fnhash )( tf );
			return util::ret( tf, mmm::get_physical_address( util::arg<any_ptr, 0>( tf ) ) );
		} );
		if constexpr ( redir_io_map ) {
			bind( "MmMapIoSpace"_fnhash, [ ] ( trapframe* tf ) {
				get_logger( "MmMapIoSpace"_fnhash )( tf );
				util::hook( tf, &mmm::map_io_space );
				return false;
			} );
			bind( "MmMapIoSpaceEx"_fnhash, [ ] ( trapframe* tf ) {
				get_logger( "MmMapIoSpaceEx"_fnhash )( tf );
				util::hook( tf, &mmm::map_io_space_ex );
				return false;
			} );
			bind( "MmUnmapIoSpace"_fnhash, [ ] ( trapframe* tf ) {
				get_logger( "MmUnmapIoSpace"_fnhash )( tf );
				util::hook( tf, &mmm::unmap_io_space );
				return false;
			} );
		}
		bind( "MmIsAddressValid"_fnhash, [ ] ( trapframe* tf )
		{
			//get_logger( "MmIsAddressValid"_fnhash )( tf );
			util::skip_log( tf );
			return util::ret( tf, mmm::is_address_valid( util::arg<any_ptr, 0>( tf ) ) );
		} );
		bind( "MmCopyMemory"_fnhash, [ ] ( trapframe* tf )
		{
			get_logger( "MmCopyMemory"_fnhash )( tf );

			auto dst = util::arg<any_ptr, 0>( tf );
			auto src = util::arg<any_ptr, 1>( tf );
			auto size = util::arg<size_t, 2>( tf );
			auto flags = util::arg<uint32_t, 3>( tf );

			if ( mmm::should_handle_va( dst, size ) ||
				 ( flags == MM_COPY_MEMORY_PHYSICAL ? mmm::should_handle_pa( src, size ) : mmm::should_handle_va( src, size ) ) )
				util::hook( tf, &mmm::mm_copy_memory );
			return false;
		} );
		bind( "MmCopyVirtualMemory"_fnhash, [ ] ( trapframe* tf )
		{
			get_logger( "MmCopyVirtualMemory"_fnhash )( tf );
			util::hook( tf, &mmm::mm_copy_virtual_memory );
			return false;
		} );
		bind( "KeAreAllApcsDisabled"_fnhash, [ ] ( trapframe* tf )
		{
			util::skip_log( tf );
			return util::ret( tf, !tf->rflags.interrupt_enable_flag || tf->vmcs->guest_cr8 || ke::get_ethread()->tcb.special_apc_disable );
		} );
		bind( "PsGetProcessInheritedFromUniqueProcessId"_fnhash, [ ] ( trapframe* tf )
		{
			get_logger( "PsGetProcessInheritedFromUniqueProcessId"_fnhash )( tf );

			auto prc = util::arg<nt::eprocess_t*, 0>( tf );
			if ( auto proc = safe::read( &prc->inherited_from_unique_process_id ) )
				return util::ret( tf, *proc );
			return false;
		} );
		return result;
	}();


	// Should be invoked upon an exit to host ranges, returns true if the handler emulated the logic
	// thus eliminating the need to quit the VM.
	//
	bool instrument_exit( trapframe* tf )
	{
		auto* vm = tf->vmcs;
		auto& buf = vm->event_buffer;
		auto tls = thread::get_context( vm->get_current_thread() );

		// Make XT pending available.
		//
		bool xt_pav = false;
		if ( tls ) {
			tls->xt_pending_available = ( xt_pav = buf && ( tf->rsp & 0xF ) == 8 );
			tls->xt_pending_chk.length = 0;
		}

		// Call the API hook.
		//
		bool do_resume = false;
		if ( auto it = api_hooks.find( ( any_ptr ) tf->rip ); it != api_hooks.end() ) [[likely]]
		{
			do_resume = it->second( tf );

			// Even if we can resume, exit if the buffer is below critical threshold to flush the buffer before continuing.
			//
			do_resume = do_resume && ( !buf || buf->raw_buffer.current_capacity() >= xt::critical_threshold );

			// If we're resuming:
			//
			if ( do_resume ) {
				// Record an enter.
				//
				vm->record_enter( tf );

				// If XT was made available, consume all.
				//
				if ( xt_pav ) {
					if ( !tls->xt_pending_chk.empty() ) [[unlikely]] {
						vm->unchecked_transfer_deferred( vm->tf_snapshot( tf ), tls->xt_pending_chk );
						tls->xt_pending_chk.clear();
					}
					tls->xt_pending_available = false;
				}
			}
		}
		// If none found, record a normal exit.
		//
		else if ( buf )
		{
			if ( ( tf->rsp & 0xF ) == 8 )
				vm->unchecked_record_exit( tf, tf->rcx, tf->rdx, tf->r8, tf->r9 /*Default arguments: uint64_t[4]*/, "!!MISSING!!" );
			else
				vm->unchecked_record_exit( tf, tf->rax );
		}
		return do_resume;
	}

	// Should be invoked upon an enter to guest ranges.
	//
	void instrument_enter( nt::trapframe* tf, vm_context* vm )
	{
		vm->record_enter( tf );

		// Bring back the return pointer if returning from CALL, mframe is already copied so this shouldn't hurt.
		//
		if ( !( tf->rsp & 0xF ) ) {
			safe::write( tf->rsp - 8, tf->rip );
		}
	}
};
