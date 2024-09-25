#pragma once
#include <string>
#include <string_view>
#include <functional>
#include <variant>
#include <numeric>
#include <memory>
#include <unordered_set>
#include <array>
#include <xstd/assert.hpp>
#include <xstd/narrow_cast.hpp>
#include "cvconsts.h"
#include "cvinfo.h"
#include "dbi.hpp"

namespace pdb
{
	namespace impl
	{
		template<typename T> concept HasBaseType = requires { typename T::base_type; };
		template<typename T> concept HasStaticTypeId = requires { ( size_t ) T::static_type_id; };

		template<typename I, typename T>
		concept InterfaceContains = HasBaseType<I> && HasBaseType<T> && std::is_same_v<typename I::base_type, typename T::base_type>;
		template<typename I, typename T>
		concept InterfaceSpecialization = InterfaceContains<I, T> && HasStaticTypeId<T>;

		// Checks if the name is valid in C.
		//
		inline static bool is_valid_c_name( std::string_view name )
		{
			if ( name.empty() )
				return false;
			if ( !isalpha( name[ 0 ] ) && name[ 0 ] != '_' )
				return false;
			return name.end() == std::find_if( name.begin(), name.end(), [ ] ( char c )
			{
				return !isalnum( c ) && c != '_';
			} );
		}

		// Checks if the name is anonymous.
		//
		inline static bool is_anonymous_type( std::string_view name )
		{
			return name.empty() ||
				name.find( "__unnamed" ) != std::string::npos ||
				name.find( "<unnamed-" ) != std::string::npos ||
				name.find( "<anonymous-" ) != std::string::npos;
		}
	};

	// Fast RTTI alternative with the constraint that implementations are always of depth one.
	//
	template<typename T>
	struct rtti_interface
	{
		using base_type = T;

		// Defaulted movement/copy/construct.
		//
		constexpr rtti_interface() noexcept {};
		constexpr rtti_interface( rtti_interface&& ) noexcept = default;
		constexpr rtti_interface( const rtti_interface& ) noexcept = default;
		constexpr rtti_interface& operator=( rtti_interface&& ) noexcept = default;
		constexpr rtti_interface& operator=( const rtti_interface& ) noexcept = default;

		// Introducing two utility functions and a virtual destructor on the vtable.
		//
		virtual size_t dynamic_type_id() const = 0;
		virtual std::string_view specialization_name() const = 0;
		virtual ~rtti_interface() = default;

		// Any class that implements this interface should use the following type.
		//
		template<size_t I>
		struct specialization : T
		{
			static constexpr size_t static_type_id = I;

			// Defaulted movement/copy/construct.
			//
			constexpr specialization() noexcept {}
			constexpr specialization( specialization&& ) noexcept = default;
			constexpr specialization( const specialization& ) noexcept = default;
			constexpr specialization& operator=( specialization&& ) noexcept = default;
			constexpr specialization& operator=( const specialization& ) noexcept = default;

			// Implement the vtable functions needed.
			//
			size_t dynamic_type_id() const override { return static_type_id; };
			std::string_view specialization_name() const override
			{
				static const auto id = typeid( this ).name();
				static const std::string_view res = id;
				return res;
			}
		};

		// Helpers for casting purposes.
		//
		template<typename O> requires impl::InterfaceContains<rtti_interface<T>, O>
		bool is() const
		{
			if constexpr ( impl::InterfaceSpecialization<rtti_interface<T>, O> )
				return dynamic_type_id() == O::static_type_id;
			else
				return true; // Comparing against generic interface type.
		}
		template<typename O> O* as() { return is<O>() ? ( O* ) this : nullptr; }
		template<typename O> const O* as() const { return is<O>() ? ( const O* ) this : nullptr; }
	};

	// Forward references for PDB instance and the generic leaf type utils.
	//
	struct instance;
	struct leaf_generic;
	using  leaf_enumerator = std::function<bool( leaf_generic* /* const correctness is caller's responsiblity */ )>;

	// Define reference counting lists.
	//
	using  ref_list_t = std::unordered_multiset<leaf_generic*>;
	struct generic_ref
	{
		// Holds the reference list we're added into and a self pointer.
		//
		ref_list_t* list;
		leaf_generic* src;

		// Null and referencing counters.
		//
		generic_ref() : list( nullptr ), src( nullptr ) {}
		generic_ref( std::nullptr_t ) : generic_ref() {};
		generic_ref( ref_list_t* list, leaf_generic* src ) : list( list ), src( src ) { list->emplace( src ); }

		// Custom move and copy since source pointer cannot change.
		//
		generic_ref( generic_ref&& o )
		{
			list = std::exchange( o.list, nullptr );
			src = std::exchange( o.src, nullptr );
		}
		generic_ref& operator=( generic_ref&& o )
		{
			xstd::assert_that( !src || !o.src || o.src == src, "Invalid reference assignment" );
			std::swap( o.list, list );
			std::swap( o.src, src );
			return *this;
		}
		generic_ref( const generic_ref& ) = delete;
		generic_ref& operator=( const generic_ref& ) = delete;

		// Deconstructor dereferences.
		//
		~generic_ref()
		{
			if ( list )
			{
				auto it = list->find( src );
				xstd::assert_that( it != list->end(), "Reference counting failed." );
				list->erase( it );
			}
		}
	};

	// Define the string and type maps.
	//
	enum string_type
	{
		str_type_name,
		str_field_name,
		str_enum_name,
		str_max
	};
	using type_map_t = std::vector<std::pair<std::shared_ptr<leaf_generic>, ref_list_t>>;
	using string_map_t = std::array<std::unordered_map<std::string, std::pair<std::string, ref_list_t>>, str_max>;
	using string_map_entry_t = typename string_map_t::value_type::value_type;

	// String reference with two levels of indirection.
	//
	struct string_ref
	{
		inline static const std::string __i_null = {};

		std::variant<
			std::nullptr_t,
			std::tuple<instance*, const string_map_entry_t*, generic_ref>,
			std::string
		> value;

		// Default constructor makes a null reference.
		//
		string_ref( std::nullptr_t v = {} ) : value( v ) {}

		// Emplacing constructor uses an already existing entry where possible, or emplaces a new entry.
		//
		string_ref( leaf_generic* _self, instance* inst, string_type type, std::string_view str );

		// Custom string constructor is used to assign custom names.
		//
		explicit string_ref( std::string p ) : value( std::move( p ) ) {}

		// Explicit clone.
		//
		explicit string_ref( leaf_generic* _self, const string_ref& o )
		{
			if ( o.value.index() == 1 )
			{
				auto& [dbo, vpo, refo] = std::get<1>( o.value );
				auto& [db, vp, ref] = value.emplace<1>();
				vp = vpo;
				ref = { refo.list, _self };
				db = dbo;
			}
			else if ( o.value.index() == 2 )
			{
				value.emplace<2>( std::get<2>( o.value ) );
			}
			else
			{
				value.emplace<0>();
			}
		}

		// Explicit group assign.
		//
		void assign( std::string str )
		{
			if ( value.index() == 1 )
				const_cast< std::string& >( std::get<1>( std::get<1>( value ) )->second.first ) = std::move( str );
			else
				value.emplace<2>( std::move( str ) );
		}

		// Resolves the string reference.
		//
		const std::string& resolve_original() const
		{
			if ( value.index() == 1 )
				return std::get<1>( std::get<1>( value ) )->first;
			if ( value.index() == 2 )
				return std::get<2>( value );
			return __i_null;
		}
		const std::string& resolve() const
		{
			if ( value.index() == 1 )
				return std::get<1>( std::get<1>( value ) )->second.first;
			if ( value.index() == 2 )
				return std::get<2>( value );
			return __i_null;
		}
		operator const std::string& ( ) const { return resolve(); }
		explicit operator bool() const { return !resolve().empty(); }
		bool operator==( std::string_view view ) const
		{
			std::string_view v2{ resolve() };
			return view.size() == v2.size() && ( view.data() == v2.data() || !view.compare( v2 ) );
		}
		bool operator==( const string_ref& ref ) const { return operator==( std::string_view{ ref.resolve() } ); }

		auto size() const { return resolve().size(); }
		auto empty() const { return resolve().empty(); }
		auto length() const { return resolve().length(); }
		auto data() const { return resolve().data(); }
		auto c_str() const { return resolve().c_str(); }
		auto operator[]( size_t n ) const { return resolve()[ n ]; }
	};

	// Leaf interface.
	//
	struct leaf_generic : rtti_interface<leaf_generic>
	{
		// Topology order as a hint.
		//
		const void* instance_src = nullptr;
		size_t order_dagt = 0;

		// Optionally holds the user defined type name.
		//
		string_ref user_defined_name = {};

		// Returns whether or not the leaf is signed.
		//
		virtual bool is_signed() const { return false; }

		// Gets size in bytes/bits, or < 0 if N/A.
		//
		virtual int32_t size() const { return -1; }
		virtual int32_t bit_size() const { return size() * 8; }

		// Returns the type name for the use of making a variable, note that bitfields
		// and fieldlists will not return a valid name.
		//
		virtual std::string type_name() const { return user_defined_name; }

		// Enumerates every child type.
		//
		virtual void enum_subtypes( const leaf_enumerator& fn ) const {}

		// Basic properties.
		//
		virtual bool is_bitfield() const = 0;
		virtual bool is_intrinsic() const = 0;
		virtual bool is_anonymous() const = 0;
		virtual bool is_defn_identical( const leaf_generic* g ) const = 0;
		virtual bool is_decl_identical( const leaf_generic* g ) const = 0;
	};

	// Leaf reference with two levels of indirection.
	//
	struct leaf_ref
	{
		std::variant<
			std::nullptr_t,
			std::tuple<instance*, CV_typ_t, generic_ref>,
			std::shared_ptr<leaf_generic>
		> value;

		// Default constructor makes a null reference.
		//
		leaf_ref( std::nullptr_t v = {} ) : value( v ) {}

		// Referencing constructor uses an already existing entry into the table.
		//
		leaf_ref( leaf_generic* _self, instance* inst, CV_typ_t leafi );

		// Custom leaf constructor is used to assign custom types.
		//
		leaf_ref( std::shared_ptr<leaf_generic> p ) : value( std::move( p ) ) {}

		// Explicit clone.
		//
		explicit leaf_ref( leaf_generic* _self, const leaf_ref& o )
		{
			if ( o.value.index() == 1 )
			{
				auto& [dbo, ibo, refo] = std::get<1>( o.value );
				auto& [db, ib, ref] = value.emplace<1>();
				ib = ibo;
				ref = { refo.list, _self };
				db = dbo;
			}
			else if ( o.value.index() == 2 )
			{
				value.emplace<2>( std::get<2>( o.value ) );
			}
			else
			{
				value.emplace<0>();
			}
		}

		// Resolves the type reference.
		//
		const leaf_generic* resolve() const;
		leaf_generic* resolve() { return ( leaf_generic* ) ( ( const leaf_ref* ) this )->resolve(); };
		leaf_generic* operator->() { return resolve(); }
		const leaf_generic* operator->() const { return resolve(); }
		explicit operator bool() const { return resolve(); }

		// Resolve to implementation.
		//
		template<typename O> requires impl::InterfaceSpecialization<rtti_interface<leaf_generic>, O>
			O* resolve_as()
			{
				auto ptr = resolve();
				return ptr ? ptr->as<O>() : nullptr;
			}
			operator leaf_generic* ( ) { return resolve(); }

			template<typename O> requires impl::InterfaceSpecialization<rtti_interface<leaf_generic>, O>
				const O* resolve_as() const
				{
					auto ptr = resolve();
					return ptr ? ptr->as<O>() : nullptr;
				}
				operator const leaf_generic* ( ) const { return resolve(); }

				// Decay to implementation.
				//
				template<typename O> requires impl::InterfaceSpecialization<rtti_interface<leaf_generic>, O>
					operator O* ( ) { return resolve_as<O>(); }
					template<typename O> requires impl::InterfaceSpecialization<rtti_interface<leaf_generic>, O>
						operator const O* ( ) const { return resolve_as<O>(); }
	};

	// Primitive type.
	//
	struct leaf_primitive final : leaf_generic::specialization<LF_ID_MAX>
	{
		// Simplified version of primitive type.
		//
		enum primitive_type
		{
			integral = 0,
			real = 1,
			complex = 2,
			special = 3,
			pointer = 4
		};

		// Primitive name and the identifier.
		//
		std::string cname;
		uint16_t id;

		// Primitive traits.
		//
		primitive_type traits;
		int32_t value_size = -1;

		// Construction from primitive identifier.
		//
		leaf_primitive( uint16_t pr_id = 0 ) : id( pr_id )
		{
			// Handle the base type.
			//
			switch ( CV_TYPE( id ) )
			{
				case CV_SPECIAL:
				{
					switch ( CV_SUBT( id ) )
					{
						case CV_SP_NOTYPE:    cname = "/*none*/";                                              break;
						case CV_SP_ABS:       cname = "/*absolute*/";                                          break;
						case CV_SP_SEGMENT:   cname = "sdk::segment";                                          break;
						case CV_SP_VOID:      cname = "void";                                                  break;
						case CV_SP_CURRENCY:  cname = "sdk::currency";                                         break;
						case CV_SP_NBASICSTR: cname = "sdk::bstring";    value_size = 8;                       break;
						case CV_SP_FBASICSTR: cname = "sdk::fstring";    value_size = 8;                       break;
						case CV_SP_HRESULT:   cname = "sdk::hresult";    value_size = 4;                       break;
						case CV_SP_NOTTRANS:  cname = "sdk::unknown";    value_size = 1;                       break;
						default:              cname = "/*unspecified special*/";                               break;
					}
					traits = special;
					break;
				}
				case CV_BOOLEAN:
				{
					// Handle base types.
					//
					switch ( CV_SUBT( id ) )
					{
						case CV_IN_1BYTE:  cname = "bool";      value_size = 1;  break;
						case CV_IN_2BYTE:  cname = "bool16_t";  value_size = 2;  break;
						case CV_IN_4BYTE:  cname = "bool32_t";  value_size = 4;  break;
						case CV_IN_8BYTE:  cname = "bool64_t";  value_size = 8;  break;
						case CV_IN_16BYTE:
						default:           cname = "/*unspecified bool*/";       break;
					}
					traits = integral;
					break;
				}
				case CV_UNSIGNED:
				{
					// Handle base types.
					//
					switch ( CV_SUBT( id ) )
					{
						case CV_IN_1BYTE:  cname = "uint8_t";   value_size = 1;  break;
						case CV_IN_2BYTE:  cname = "uint16_t";  value_size = 2;  break;
						case CV_IN_4BYTE:  cname = "uint32_t";  value_size = 4;  break;
						case CV_IN_8BYTE:  cname = "uint64_t";  value_size = 8;  break;
						case CV_IN_16BYTE: cname = "uint128_t"; value_size = 16; break;
						default:           cname = "/*unspecified unsigned*/";   break;
					}
					traits = integral;
					break;
				}
				case CV_SIGNED:
				{
					// Handle base types.
					//
					switch ( CV_SUBT( id ) )
					{
						case CV_IN_1BYTE:  cname = "int8_t";   value_size = 1;  break;
						case CV_IN_2BYTE:  cname = "int16_t";  value_size = 2;  break;
						case CV_IN_4BYTE:  cname = "int32_t";  value_size = 4;  break;
						case CV_IN_8BYTE:  cname = "int64_t";  value_size = 8;  break;
						case CV_IN_16BYTE: cname = "int128_t"; value_size = 16; break;
						default:           cname = "/*unspecified signed*/";    break;
					}
					traits = integral;
					break;
				}
				case CV_REAL:
				{
					switch ( CV_SUBT( id ) )
					{
						case CV_RC_REAL32PP:
						case CV_RC_REAL16:  cname = "__half";      value_size = 2;    break;
						case CV_RC_REAL32:  cname = "float";       value_size = 4;    break;
						case CV_RC_REAL48:  cname = "__float48";   value_size = 6;    break;
						case CV_RC_REAL64:  cname = "double";      value_size = 8;    break;
						case CV_RC_REAL80:  cname = "long double"; value_size = 10;   break;
						case CV_RC_REAL128: cname = "__float128";  value_size = 16;   break;
						default:            cname = "/*unspecified real*/";           break;
					}
					traits = real;
					break;
				}
				case CV_COMPLEX:
				{
					switch ( CV_SUBT( id ) )
					{
						case CV_RC_REAL32PP:
						case CV_RC_REAL16:  cname = "std::complex<__half>";      value_size = 2;    break;
						case CV_RC_REAL32:  cname = "std::complex<float>";       value_size = 4;    break;
						case CV_RC_REAL48:  cname = "std::complex<__float48>";   value_size = 6;    break;
						case CV_RC_REAL64:  cname = "std::complex<double>";      value_size = 8;    break;
						case CV_RC_REAL80:  cname = "std::complex<long double>"; value_size = 10;   break;
						case CV_RC_REAL128: cname = "std::complex<__float128>";  value_size = 16;   break;
						default:            cname = "/*unspecified complex*/";                      break;
					}
					traits = complex;
					break;
				}
				case CV_SPECIAL2:
				{
					switch ( CV_SUBT( id ) )
					{
						case CV_S2_PASCHAR:     cname = "char";                  value_size = 1;    break;
						case CV_S2_NON_CHAR_I8: cname = "int8_t";                value_size = 1;    break;
						case CV_S2_NON_CHAR_U8: cname = "uint8_t";               value_size = 1;    break;
						case CV_S2_BOOL32FF:    cname = "variant_bool32";        value_size = 4;    break;
						case CV_S2_BIT:         cname = "sdk::bit /*undefined*/";                   break;
						default:                cname = "/*unspecified special2*/";                 break;
					}
					traits = integral;
					break;
				}
				case CV_INT:
				{
					switch ( CV_SUBT( id ) )
					{
						case CV_RI_INT2:   cname = "int16_t";   value_size = 2;  break;
						case CV_RI_UINT2:  cname = "uint16_t";  value_size = 2;  break;
						case CV_RI_INT4:   cname = "int32_t";   value_size = 4;  break;
						case CV_RI_UINT4:  cname = "uint32_t";  value_size = 4;  break;
						case CV_RI_INT8:   cname = "int64_t";   value_size = 8;  break;
						case CV_RI_UINT8:  cname = "uint64_t";  value_size = 8;  break;
						case CV_RI_INT16:  cname = "int128_t";  value_size = 16; break;
						case CV_RI_UINT16: cname = "uint128_t"; value_size = 16; break;
						case CV_RI_CHAR:   cname = "char";      value_size = 1;  break;
						case CV_RI_WCHAR:  cname = "wchar_t";   value_size = 2;  break;
						case CV_RI_CHAR16: cname = "char16_t";  value_size = 2;  break;
						case CV_RI_CHAR32: cname = "char32_t";  value_size = 4;  break;
						default:           cname = "/*unspecified int*/";        break;
					}
					traits = integral;
					break;
				}
				default: cname = "/*unspecified*/"; break;
			}

			// If name starts with /, it indicates error.
			//
			if ( cname.starts_with( '/' ) )
			{
				cname = "sdk::unknown" + std::move( cname );
				value_size = 1;
			}

			// Handle the modifier.
			//
			if ( CV_MODE( id ) != CV_TM_DIRECT )
			{
				switch ( CV_MODE( id ) )
				{
					case CV_TM_FPTR:    cname += " __far*";          value_size = 8 + 2;  break;
					case CV_TM_HPTR:    cname += " __far /*huge*/*"; value_size = 8;      break;
					case CV_TM_NPTR32:  cname += " __ptr32*";        value_size = 4;      break;
					case CV_TM_FPTR32:  cname += " __far __ptr32*";  value_size = 4 + 2;  break;
					case CV_TM_NPTR128: cname += " __ptr128*";       value_size = 16;     break;
					case CV_TM_NPTR:
					case CV_TM_NPTR64:
					default:            cname += "*";                value_size = 8;      break;
				}
				traits = pointer;
			}
		}

		// Implement interface.
		//
		bool is_signed() const override { return CV_TYP_IS_SIGNED( id ) || CV_TYP_IS_REAL( id ) || CV_TYP_IS_COMPLEX( id ); }
		int32_t size() const override { return value_size; };
		std::string type_name() const override { return std::string{ cname }; }

		// Basic properties.
		//
		bool is_bitfield() const override { return false; }
		bool is_intrinsic() const override { return true; }
		bool is_anonymous() const override { return false; }
		bool is_defn_identical( const leaf_generic* g ) const override
		{
			if ( this == g ) return true;
			if ( auto p = g->as<const leaf_primitive>() )
				return p->id == id;
			return false;
		}
		bool is_decl_identical( const leaf_generic* g ) const override
		{
			if ( this == g ) return true;
			if ( auto p = g->as<const leaf_primitive>() )
			{
				if ( p->id == id ) return true;
				if ( p->traits == traits )
				{
					if ( p->traits == pointer )
					{
						leaf_primitive p1 = id & ~CV_MMASK;
						leaf_primitive p2 = p->id & ~CV_MMASK;
						return p1.value_size == p2.value_size;
					}
					else
					{
						return value_size == p->value_size;
					}
				}
			}
			return false;
		}
	};

	// Bitfield type.
	//
	struct leaf_bitfield final : leaf_generic::specialization<LF_BITFIELD>
	{
		// Underlying type that's being bit selected, and the region selected.
		//
		leaf_ref underlying_type = {};
		uint8_t sel_bit_pos = 0, sel_bit_len = 0;

		// Standalone helper to add the bit size selection modifier. Bit offset cannot be 
		// guaranteed and so is left to the user.
		//
		std::string add_modifiers( std::string_view type_name ) const
		{
			return std::string{ type_name } + " : " + std::to_string( sel_bit_len );
		}

		// Implement interface.
		//
		bool is_signed() const override { return underlying_type->is_signed(); }
		int32_t size() const override { return underlying_type->size(); };
		int32_t bit_size() const override { return sel_bit_len; }
		std::string type_name() const override
		{
			return xstd::fmt::str( "%sint%d_t", underlying_type->is_signed() ? "" : "u", sel_bit_len );
		}
		void enum_subtypes( const leaf_enumerator& fn ) const override
		{
			if ( const leaf_generic* p = underlying_type )
			{
				if ( fn( ( leaf_generic* ) p ) )
					p->enum_subtypes( fn );
			}
		}

		// Basic properties.
		//
		bool is_bitfield() const override { return true; }
		bool is_intrinsic() const override { return true; }
		bool is_anonymous() const override { return false; }
		bool is_defn_identical( const leaf_generic* g ) const override
		{
			if ( this == g ) return true;
			if ( auto p = g->as<const leaf_bitfield>() )
				return sel_bit_pos == p->sel_bit_pos &&
				sel_bit_len == p->sel_bit_len;
			return false;
		}
		bool is_decl_identical( const leaf_generic* g ) const override
		{
			if ( this == g ) return true;
			if ( auto p = g->as<const leaf_bitfield>() )
				return sel_bit_len == p->sel_bit_len;
			return false;
		}

		// Raw parser.
		//
		static std::shared_ptr<leaf_generic> parse( instance* db, const lfBitfield* leaf )
		{
			auto res = std::make_shared<leaf_bitfield>();
			res->underlying_type = { res.get(), db,  leaf->type };
			res->sel_bit_len = leaf->length;
			res->sel_bit_pos = leaf->position;
			return res;
		}
	};

	// Argument list type.
	//
	struct leaf_arglist final : leaf_generic::specialization<LF_ARGLIST>
	{
		// List of argument types.
		//
		std::vector<leaf_ref> types;

		// Implement the interface.
		//
		int32_t size() const override { return std::accumulate( types.begin(), types.end(), 0, [ ] ( int32_t r, const leaf_ref& ref ) { return r + ref->size(); } ); };
		std::string type_name() const override
		{
			std::string str = {};

			// Returns comma seperated type list.
			//
			for ( size_t n = 0; n != types.size(); n++ )
			{
				bool last_arg = ( n + 1 ) == types.size();

				// Declare the type name.
				//
				std::string name;
				auto& arg = types[ n ];
				if ( arg )
					name = arg->type_name();
				else
					name = last_arg ? "..." : "sdk::unknown /*null*/";

				// If at the end:
				//
				if ( last_arg )
				{
					// If special notype, it is vararg.
					//
					if ( auto prim = arg->as<leaf_primitive>(); last_arg && prim && CV_TYPE( prim->id ) == CV_SPECIAL && CV_SUBT( prim->id ) == CV_SP_NOTYPE )
						str += "...";
					else
						str += name;
					break;
				}
				else
				{
					str += name + ", ";
				}
			}
			return str;
		}
		void enum_subtypes( const leaf_enumerator& fn ) const override
		{
			for ( auto& type : types )
			{
				if ( const leaf_generic* p = type )
				{
					if ( fn( ( leaf_generic* ) p ) )
						p->enum_subtypes( fn );
				}
			}
		};

		// Basic properties.
		//
		bool is_bitfield() const override { return false; }
		bool is_intrinsic() const override { return true; }
		bool is_anonymous() const override { return false; }
		bool is_defn_identical( const leaf_generic* g ) const override
		{
			if ( this == g ) return true;
			if ( auto p = g->as<const leaf_arglist>() )
			{
				if ( types.size() != p->types.size() )
					return false;
				for ( size_t n = 0; n != types.size(); n++ )
					if ( !types[ n ]->is_defn_identical( p->types[ n ] ) )
						return false;
				return true;
			}
			return false;
		}
		bool is_decl_identical( const leaf_generic* g ) const override
		{
			if ( this == g ) return true;
			if ( auto p = g->as<const leaf_arglist>() )
			{
				if ( types.size() != p->types.size() )
					return false;
				for ( size_t n = 0; n != types.size(); n++ )
					if ( !types[ n ]->is_decl_identical( p->types[ n ] ) )
						return false;
				return true;
			}
			return false;
		}

		// Raw parser.
		//
		static std::shared_ptr<leaf_generic> parse( instance* db, const lfArgList* leaf )
		{
			auto res = std::make_shared<leaf_arglist>();
			res->types.resize( leaf->count );
			for ( size_t i = 0; i < leaf->count; i++ )
				res->types[ i ] = { res.get(), db,  leaf->arg[ i ] };
			return res;
		}
	};

	// Field list type.
	//
	struct leaf_fieldlist final : leaf_generic::specialization<LF_FIELDLIST>
	{
		struct entry_enumerate
		{
			CV_fldattr_t attributes = {};
			uint64_t value = 0;
			string_ref name = {};
		};
		struct entry_member
		{
			CV_fldattr_t attributes = {};
			leaf_ref type = {};
			uint32_t field_offset = 0;
			string_ref name = {};

			size_t bit_offset() const
			{
				size_t off = field_offset * 8;
				if ( const leaf_bitfield* bf = type )
					off += bf->sel_bit_pos;
				return off;
			}
		};
		std::vector<entry_member> members;  // should be 0 if not struct/unon
		std::vector<entry_enumerate> enums; // should be 0 if not enum

		// Helper to enumerate all variables including anonymous ones.
		// - void(const entry_member&, size_t bit_offset)                                        
		//                                                                    
		template<typename T>
		void enum_variables( T&& f, size_t offset = 0 ) const;

		// Implement interface.
		//
		std::string type_name() const override { return "/* field list */"; }
		void enum_subtypes( const leaf_enumerator& fn ) const override
		{
			for ( auto& leaf : members )
			{
				if ( const leaf_generic* p = leaf.type )
				{
					if ( fn( ( leaf_generic* ) p ) )
						p->enum_subtypes( fn );
				}
			}
		}

		// Basic properties.
		//
		bool is_bitfield() const override { return false; }
		bool is_intrinsic() const override { return true; }
		bool is_anonymous() const override { return false; }
		bool is_defn_identical( const leaf_generic* g ) const override
		{
			if ( this == g ) return true;
			if ( auto p = g->as<const leaf_fieldlist>() )
			{
				if ( members.size() != p->members.size() ||
					  enums.size() != p->enums.size() )
					return false;

				for ( size_t n = 0; n != members.size(); n++ )
				{
					auto& a = members[ n ];
					auto& b = p->members[ n ];

					if ( a.field_offset != b.field_offset ||
						  a.name.resolve() != b.name.resolve() ||
						  !a.type->is_defn_identical( b.type ) )
						return false;
				}
				for ( size_t n = 0; n != enums.size(); n++ )
				{
					auto& a = enums[ n ];
					auto& b = p->enums[ n ];
					if ( a.value != b.value ||
						  a.name.resolve() != b.name.resolve() )
						return false;
				}
				return true;
			}
			return false;
		}
		bool is_decl_identical( const leaf_generic* g ) const override
		{
			if ( this == g ) return true;
			if ( auto p = g->as<const leaf_fieldlist>() )
			{
				if ( members.size() != p->members.size() ||
					  enums.size() != p->enums.size() )
					return false;

				for ( size_t n = 0; n != members.size(); n++ )
				{
					auto& a = members[ n ];
					auto& b = p->members[ n ];

					if ( a.field_offset != b.field_offset ||
						  a.name.resolve() != b.name.resolve() ||
						  !a.type->is_decl_identical( b.type ) )
						return false;
				}
				for ( size_t n = 0; n != enums.size(); n++ )
				{
					auto& a = enums[ n ];
					auto& b = p->enums[ n ];
					if ( a.value != b.value ||
						  a.name.resolve() != b.name.resolve() )
						return false;
				}
				return true;
			}
			return false;
		}

		// Raw parser.
		//
		static std::shared_ptr<leaf_generic> parse( instance* db, const lfFieldList* leaf )
		{
			auto res = std::make_shared<leaf_fieldlist>();

			// Type record stores size before leaf, horrible hack.
			//
			auto num_bytes = ( &leaf->leaf )[ -1 ];

			// Enumerate until we reach the end.
			//
			auto begin = ( const uint8_t* ) &leaf->data[ 0 ];
			auto end = begin + num_bytes - sizeof( uint16_t );

			uint16_t prev_kind = 0;
			for ( auto it = begin; it != end; it++ )
			{
				// Skip if padding.
				//
				if ( LF_PAD0 <= *it && *it < LF_PAD15 )
					continue;

				// Read the type.
				//
				uint16_t leaf_kind = *( const uint16_t* ) it;
				switch ( leaf_kind )
				{
					case LF_MEMBER:
					{
						const lfMember* mem = ( const lfMember* ) it;
						auto& entry = res->members.emplace_back();

						entry.attributes = mem->attr;
						entry.type = { res.get(), db,  mem->index };

						it = ( const uint8_t* ) &mem->offset;
						entry.field_offset = xstd::narrow_cast< uint32_t >( dbi::read_numeric( it ) );

						std::string_view view = ( const char* ) it;
						entry.name = { res.get(), db,  str_field_name, view };
						it += view.size();
						break;
					}
					case LF_ENUMERATE:
					{
						const lfEnumerate* enm = ( const lfEnumerate* ) it;
						auto& entry = res->enums.emplace_back();

						entry.attributes = enm->attr;
						it = ( const uint8_t* ) &enm->value;
						entry.value = dbi::read_numeric( it, true );

						std::string_view view = ( const char* ) it;
						entry.name = { res.get(), db, str_enum_name, view };
						it += view.size();
						break;
					}
					// Skip C++ details.
					//
					case LF_NESTTYPE:
					{
						const lfNestType* nt = ( const lfNestType* ) it;
						it = nt->Name + strlen( ( char* ) nt->Name );
						break;
					}
					case LF_ONEMETHOD:
					{
						const lfOneMethod* om = ( const lfOneMethod* ) it;
						uint8_t* itx = ( uint8_t* ) om->vbaseoff;
						if ( om->attr.mprop == CV_MTintro || om->attr.mprop == CV_MTpureintro )
							itx += 4;
						it = itx + strlen( ( char* ) itx );
						break;
					}
					case LF_METHOD:
					{
						const lfMethod* mt = ( const lfMethod* ) it;
						it = mt->Name + strlen( ( char* ) mt->Name );
						break;
					}
					case LF_STMEMBER:
					{
						const lfSTMember* stmem = ( const lfSTMember* ) it;
						it = stmem->Name + strlen( ( char* ) stmem->Name );
						break;
					}
					case LF_VBCLASS:
					case LF_IVBCLASS:
					{
						const lfVBClass* vbc = ( const lfVBClass* ) it;
						it = vbc->vbpoff;
						dbi::read_numeric( it );
						dbi::read_numeric( it );
						--it;
						break;
					}
					// If base class, add as struct.
					//
					case LF_BCLASS:
					{
						const lfBClass* bc = ( const lfBClass* ) it;
						it = bc->offset;

						auto& entry = res->members.emplace_back();
						entry.attributes = { 0 };
						entry.type = { res.get(), db, bc->index };
						entry.field_offset = xstd::narrow_cast< uint32_t >( dbi::read_numeric( it ) );
						entry.name = string_ref{ "" };

						--it;
						break;
					}
					case LF_VFUNCTAB:
					{
						const lfVFuncTab* vft = ( const lfVFuncTab* ) it;
						it = ( uint8_t* ) ( vft + 1 );
						--it;
						break;
					}
					case LF_INDEX:
						return nullptr;
					default:
						xstd::warning( "unknown field record type %x {<= %x}", *( const uint16_t* ) it, prev_kind );
						return nullptr;
				}
				prev_kind = leaf_kind;
			}
			return res;
		}
	};

	// Modifier type.
	//
	struct leaf_modifier final : leaf_generic::specialization<LF_MODIFIER>
	{
		// Underlying type that's being modified and the modifiers list.
		//
		leaf_ref underlying_type = {};
		CV_modifier_t modifier = { 0, 0, 0, 0 };

		// Standalone helper to add the same modifiers as it's being added to
		// the underlying type to any standalone type name.
		//
		std::string add_modifiers( std::string_view type_name ) const
		{
			std::string list;
			if ( modifier.MOD_unaligned ) list += "__unaligned ";
			if ( modifier.MOD_volatile )  list += "volatile ";
			if ( modifier.MOD_const )     list += "const ";
			list += type_name;
			return list;
		}

		// Implement interface.
		//
		bool is_signed() const override { return underlying_type->is_signed(); }
		int32_t size() const override { return underlying_type->size(); };
		std::string type_name() const override { return add_modifiers( underlying_type->type_name() ); }
		void enum_subtypes( const leaf_enumerator& fn ) const override
		{
			if ( const leaf_generic* p = underlying_type )
			{
				if ( fn( ( leaf_generic* ) p ) )
					p->enum_subtypes( fn );
			}
		}

		// Basic properties.
		//
		bool is_bitfield() const override { return underlying_type->is_bitfield(); }
		bool is_intrinsic() const override { return underlying_type->is_intrinsic(); }
		bool is_anonymous() const override { return underlying_type->is_anonymous(); }
		bool is_defn_identical( const leaf_generic* g ) const override
		{
			if ( this == g ) return true;
			if ( auto p = g->as<const leaf_modifier>() )
			{
				return modifier.MOD_const == p->modifier.MOD_const &&
					modifier.MOD_volatile == p->modifier.MOD_volatile &&
					modifier.MOD_unaligned == p->modifier.MOD_unaligned &&
					underlying_type->is_defn_identical( p->underlying_type );
			}
			return false;
		}
		bool is_decl_identical( const leaf_generic* g ) const override
		{
			if ( this == g ) return true;
			if ( auto p = g->as<const leaf_modifier>() )
				return underlying_type->is_decl_identical( p->underlying_type );
			return false;
		}

		// Raw parser.
		//
		static std::shared_ptr<leaf_generic> parse( instance* db, const lfModifier* leaf )
		{
			auto res = std::make_shared<leaf_modifier>();
			res->underlying_type = { res.get(), db,  leaf->type };
			res->modifier = leaf->attr;
			return res;
		}
	};

	// Pointer type.
	//
	struct leaf_pointer final : leaf_generic::specialization<LF_POINTER>
	{
		// Underlying type that's being pointed at and the attributes of the pointer.
		//
		leaf_ref underlying_type = {};
		lfPointerBody::lfPointerAttr attributes = {};

		// Standalone helper to add the same modifiers as it's being added to
		// the underlying type to any standalone type name.
		//
		std::string add_modifiers( std::string_view type_name ) const
		{
			if ( attributes.ptrtype != CV_PTR_64 || attributes.isflat32 )
			{
				xstd::warning( "Unknown pointer type!" );
				return "sdk::unknown /* unhandled pointer */";
			}
			if ( attributes.ptrmode == CV_PTR_MODE_PMEM ||
				  attributes.ptrmode == CV_PTR_MODE_PMFUNC ||
				  attributes.ptrmode >= CV_PTR_MODE_RESERVED )
			{
				xstd::warning( "Unknown pointer mode." );
				return "sdk::unknown /* unhandled pointer */";
			}
			// Get qualifiers.
			//
			std::string qualifiers;
			if ( attributes.isvolatile )
				qualifiers += "volatile ";
			if ( attributes.isconst )
				qualifiers += "const ";

			// Handle smart pointers.
			//
			if ( attributes.ismocom )
				return ( ( qualifiers += "winrt::com_ptr<" ) += type_name ) += ">";

			// Form partial type name.
			//
			std::string type = std::string{ type_name } + " " + qualifiers;
			type.pop_back();

			if ( attributes.ptrmode == CV_PTR_MODE_LVREF )
				type += "&";
			else if ( attributes.ptrmode == CV_PTR_MODE_RVREF )
				type += "&&";
			else
				type += "*";

			// Apply pointer-only qualifiers.
			//
			if ( attributes.isunaligned )
				type += " __unaligned";
			if ( attributes.isrestrict )
				type += " __restrict";
			return type;
		}

		// Implement interface.
		//
		int32_t size() const override { return attributes.size; };
		std::string type_name() const override { return add_modifiers( underlying_type->type_name() ); }
		void enum_subtypes( const leaf_enumerator& fn ) const override
		{
			if ( const leaf_generic* p = underlying_type )
			{
				if ( fn( ( leaf_generic* ) p ) )
					p->enum_subtypes( fn );
			}
		}

		// Basic properties.
		//
		bool is_bitfield() const override { return false; }
		bool is_intrinsic() const override { return underlying_type->is_intrinsic(); }
		bool is_anonymous() const override { return underlying_type->is_anonymous(); }
		bool is_defn_identical( const leaf_generic* g ) const override
		{
			if ( this == g ) return true;
			if ( auto p = g->as<const leaf_pointer>() )
			{
				return attributes.ptrtype == p->attributes.ptrtype &&
					attributes.ptrmode == p->attributes.ptrmode &&
					attributes.isflat32 == p->attributes.isflat32 &&
					attributes.isconst == p->attributes.isconst &&
					attributes.isvolatile == p->attributes.isvolatile &&
					underlying_type->is_defn_identical( p->underlying_type );
			}
			return false;
		}
		bool is_decl_identical( const leaf_generic* g ) const override
		{
			if ( this == g ) return true;
			if ( auto p = g->as<const leaf_pointer>() )
				return underlying_type->is_decl_identical( p->underlying_type );
			return false;
		}

		// Raw parser.
		//
		static std::shared_ptr<leaf_generic> parse( instance* db, const lfPointer* leaf )
		{
			auto res = std::make_shared<leaf_pointer>();
			res->underlying_type = { res.get(), db,  leaf->utype };
			res->attributes = leaf->attr;
			return res;
		}
	};

	// Class type, encapsulates all of [union, class, struct].
	//
	struct leaf_class final : leaf_generic::specialization<LF_STRUCTURE>
	{
		// Reference to LF_FIELD descriptor list.
		//
		leaf_ref fields = {};

		// Attribute list and the optional unique name.
		//
		CV_prop_t attributes;
		std::string_view unique_name;

		// Length of the structure.
		//
		size_t num_bytes;

		// Kind of the structure.
		//
		uint16_t cv_kind;

		// Standalone function to get the keyword.
		//
		std::string_view keyword() const
		{
			if ( attributes.intrinsic )
				return "";
			if ( cv_kind == LF_UNION )
				return "union";
			if ( cv_kind == LF_STRUCTURE )
				return "struct";
			// interface is ignored.
			return "class";
		}

		// Helper to enumerate all variables including anonymous ones.
		// - void(const entry_member&, size_t bit_offset)                                        
		//                                                                    
		template<typename T>
		void enum_variables( T&& f, size_t offset = 0 ) const
		{
			if ( const leaf_fieldlist* fl = fields->as<leaf_fieldlist>() )
				return fl->enum_variables( std::forward<T>( f ), offset );
		}

		// Implement interface.
		//
		int32_t size() const override { return xstd::narrow_cast< int32_t >( num_bytes ); };
		void enum_subtypes( const leaf_enumerator& fn ) const override
		{
			auto consider = [ & ] ( const leaf_ref& ref )
			{
				if ( const leaf_generic* p = ref )
				{
					if ( fn( ( leaf_generic* ) p ) )
						p->enum_subtypes( fn );
				}
			};
			consider( fields );
		}
		std::string type_name() const override
		{
			std::string str{ keyword() };
			if ( !str.empty() ) str += ' ';
			str += user_defined_name.resolve();
			return str;
		}

		// Basic properties.
		//
		bool is_bitfield() const override { return false; }
		bool is_intrinsic() const override { return attributes.intrinsic; }
		bool is_anonymous() const override { return user_defined_name.empty(); } // Will only work after pdb::instance completes fixing of anon. types.
		bool is_defn_identical( const leaf_generic* g ) const override
		{
			if ( this == g ) return true;
			if ( auto p = g->as<const leaf_class>() )
			{
				return cv_kind == p->cv_kind &&
					num_bytes == p->num_bytes &&
					user_defined_name.resolve() == p->user_defined_name.resolve() &&
					fields ? p->fields && fields->is_defn_identical( fields ) : !p->fields;
			}
			return false;
		}
		bool is_decl_identical( const leaf_generic* g ) const override
		{
			if ( this == g ) return true;
			if ( auto p = g->as<const leaf_class>() )
			{
				return cv_kind == p->cv_kind &&
					user_defined_name.resolve() == p->user_defined_name.resolve();
			}
			return false;
		}

		// Raw parser.
		//
		static std::shared_ptr<leaf_generic> parse( instance* db, const lfEasy* uleaf )
		{
			uint16_t type = uleaf->leaf;
			auto res = std::make_shared<leaf_class>();

			if ( type == LF_UNION )
			{
				auto* leaf = ( const lfUnion* ) uleaf;
				res->attributes = leaf->property;
				res->fields = { res.get(), db,  leaf->field };
				res->cv_kind = leaf->leaf;

				auto* p = ( char* ) leaf->data;
				res->num_bytes = dbi::read_numeric( p );

				std::string_view name = p;
				res->user_defined_name = { res.get(), db,  str_type_name, name };

				if ( leaf->property.hasuniquename )
					res->unique_name = p + name.size() + 1;
			}
			else
			{
				auto* leaf = ( const lfClass* ) uleaf;
				res->attributes = leaf->property;
				res->fields = { res.get(), db,  leaf->field };
				res->cv_kind = leaf->leaf;

				auto* p = ( char* ) leaf->data;
				res->num_bytes = dbi::read_numeric( p );

				std::string_view name = p;
				res->user_defined_name = { res.get(), db,  str_type_name, name };

				if ( leaf->property.hasuniquename )
					res->unique_name = p + name.size() + 1;
			}


			return res;
		}
	};

	// Enumeration type.
	//
	struct leaf_enum final : leaf_generic::specialization<LF_ENUM>
	{
		// Reference to the underlying type.
		//
		leaf_ref underlying_type = {};

		// Reference to LF_FIELD descriptor list.
		//
		leaf_ref fields = {};

		// Attribute list and the optional unique name.
		//
		CV_prop_t attributes;
		std::string_view unique_name;

		// Implement interface.
		//
		bool is_signed() const override { return underlying_type->is_signed(); }
		int32_t size() const override { return underlying_type->size(); };
		std::string type_name() const override
		{
			if ( attributes.intrinsic )
				return user_defined_name.resolve();
			else
				return "enum " + user_defined_name.resolve();
		}
		void enum_subtypes( const leaf_enumerator& fn ) const override
		{
			auto consider = [ & ] ( const leaf_ref& ref )
			{
				if ( const leaf_generic* p = ref )
				{
					if ( fn( ( leaf_generic* ) p ) )
						p->enum_subtypes( fn );
				}
			};
			consider( fields );
			consider( underlying_type );
		}

		// Basic properties.
		//
		bool is_bitfield() const override { return underlying_type->is_bitfield(); }
		bool is_intrinsic() const override { return attributes.intrinsic; }
		bool is_anonymous() const override { return user_defined_name.empty(); } // Will only work after pdb::instance completes fixing of anon. types.
		bool is_defn_identical( const leaf_generic* g ) const override
		{
			if ( this == g ) return true;
			if ( auto p = g->as<const leaf_enum>() )
			{
				return underlying_type->is_defn_identical( p->underlying_type ) &&
					user_defined_name.resolve() == p->user_defined_name.resolve() &&
					fields ? p->fields && fields->is_defn_identical( fields ) : !p->fields;
			}
			return false;
		}
		bool is_decl_identical( const leaf_generic* g ) const override
		{
			if ( this == g ) return true;
			if ( auto p = g->as<const leaf_enum>() )
			{
				return underlying_type->is_decl_identical( p->underlying_type ) &&
					user_defined_name.resolve() == p->user_defined_name.resolve();
			}
			return false;
		}

		// Raw parser.
		//
		static std::shared_ptr<leaf_generic> parse( instance* db, const lfEnum* leaf )
		{
			auto res = std::make_shared<leaf_enum>();
			res->attributes = leaf->property;
			res->fields = { res.get(), db,  leaf->field };
			res->underlying_type = { res.get(), db,  leaf->utype };

			std::string_view name = ( char* ) leaf->Name;
			res->user_defined_name = { res.get(), db,  str_type_name, name };
			if ( leaf->property.hasuniquename )
				res->unique_name = name.data() + name.size() + 1;
			return res;
		}
	};

	// Array type.
	//
	struct leaf_array final : leaf_generic::specialization<LF_ARRAY>
	{
		// Reference to the underlying type.
		//
		leaf_ref underlying_type = {};

		// Number of bytes, sizeof(array_type).
		//
		size_t num_bytes = 0;

		// Standalone helper to add the same modifiers as it's being added to
		// the underlying type to any standalone type name.
		//
		std::string add_modifiers( std::string_view type_name ) const
		{
			size_t c = underlying_type->size();
			size_t n = c ? num_bytes / c : 0;
			if ( n <= 0 ) return "sdk::array<" + std::string{ type_name } + ">";
			return "sdk::array<" + std::string{ type_name } + ", " + std::to_string( n ) + ">";
		}

		// Implement interface.
		//
		int32_t size() const override { return xstd::narrow_cast< int32_t >( num_bytes ); };
		std::string type_name() const override
		{
			if ( user_defined_name ) return user_defined_name;
			return add_modifiers( underlying_type->type_name() );
		}
		void enum_subtypes( const leaf_enumerator& fn ) const override
		{
			if ( const leaf_generic* p = underlying_type )
				if ( fn( ( leaf_generic* ) p ) )
					p->enum_subtypes( fn );
		}

		// Basic properties.
		//
		bool is_bitfield() const override { return false; }
		bool is_intrinsic() const override { return underlying_type->is_intrinsic(); }
		bool is_anonymous() const override { return underlying_type->is_anonymous(); }
		bool is_defn_identical( const leaf_generic* g ) const override
		{
			if ( this == g ) return true;
			if ( auto p = g->as<const leaf_array>() )
			{
				return num_bytes == p->num_bytes &&
					underlying_type->is_defn_identical( p->underlying_type );
			}
			return false;
		}
		bool is_decl_identical( const leaf_generic* g ) const override
		{
			if ( this == g ) return true;
			if ( auto p = g->as<const leaf_array>() )
			{
				return underlying_type->is_decl_identical( p->underlying_type );
			}
			return false;
		}

		// Raw parser.
		//
		static std::shared_ptr<leaf_generic> parse( instance* db, const lfArray* leaf )
		{
			auto res = std::make_shared<leaf_array>();
			res->underlying_type = { res.get(), db,  leaf->elemtype };

			auto* p = ( const char* ) &leaf->data;
			res->num_bytes = dbi::read_numeric( p );
			return res;
		}
	};

	// Procedure type.
	//
	struct leaf_procedure final : leaf_generic::specialization<LF_PROCEDURE>
	{
		// Return and argument types.
		//
		leaf_ref return_type;
		leaf_ref arguments;   // T = leaf_arglist

		// Function attributes.
		//
		CV_funcattr_t attributes;

		// Calling convention.
		//
		CV_call_e convention;

		// Implement interface.
		//
		std::string make_typedef( std::string_view name, bool seal = false ) const
		{
			// Should not invoke seal with name.
			//
			if ( seal && !name.empty() )
				return make_typedef( {}, true ) + std::string( name );

			// Print the return type.
			//
			std::string str;
			if ( seal ) str = "sdk::function<";
			str += return_type ? return_type->type_name() : "void";
			if ( !name.empty() )
			{
				str += ' ';
				str += name;
			}
			str += "(";

			// Print the arguments if relevant.
			//
			if ( arguments )
				str += arguments->type_name();

			// Return after closing the paranthesis.
			//
			str += seal ? ")>" : ")";
			return str;
		}
		std::string type_name() const override
		{
			return make_typedef( {}, true );
		}
		void enum_subtypes( const leaf_enumerator& fn ) const override
		{
			auto consider = [ & ] ( const leaf_ref& ref )
			{
				if ( const leaf_generic* p = ref )
				{
					if ( fn( ( leaf_generic* ) p ) )
						p->enum_subtypes( fn );
				}
			};
			consider( return_type );
			consider( arguments );
		}

		// Basic properties.
		//
		bool is_bitfield() const override { return false; }
		bool is_intrinsic() const override { return false; }
		bool is_anonymous() const override { return false; } /* func typedef can't have anon arguments. */
		bool is_defn_identical( const leaf_generic* g ) const override
		{
			if ( this == g ) return true;
			if ( auto p = g->as<const leaf_procedure>() )
			{
				return convention == p->convention &&
					return_type->is_defn_identical( p->return_type ) &&
					arguments->is_defn_identical( p->arguments );
			}
			return false;
		}
		bool is_decl_identical( const leaf_generic* g ) const override
		{
			if ( this == g ) return true;
			if ( auto p = g->as<const leaf_procedure>() )
			{
				return convention == p->convention &&
					return_type->is_decl_identical( p->return_type ) &&
					arguments->is_decl_identical( p->arguments );
			}
			return false;
		}

		// Raw parser.
		//
		static std::shared_ptr<leaf_generic> parse( instance* db, const lfProc* leaf )
		{
			auto res = std::make_shared<leaf_procedure>();
			res->return_type = { res.get(), db,  leaf->rvtype };
			res->arguments = { res.get(), db,  leaf->arglist };
			res->attributes = leaf->funcattr;
			res->convention = ( CV_call_e ) leaf->calltype;
			return res;
		}
	};

	// Implement deep fieldlist enumeration.
	//
	template<typename T>
	void leaf_fieldlist::enum_variables( T&& f, size_t offset ) const
	{
		for ( auto& field : members )
		{
			if ( field.name.empty() )
			{
				if ( auto* u = field.type.resolve_as<leaf_class>() )
					u->enum_variables( f, offset + field.bit_offset() );
			}
			else
			{
				f( field, offset + field.bit_offset() );
			}
		}
	}

	// Type map.
	//
	namespace impl
	{
		template<CV_typ_t... Vx>
		struct if_equal_t
		{
			constexpr bool operator()( CV_typ_t i ) const noexcept
			{
				return ( ( i == Vx ) || ... );
			}
		};
		struct leaf_null
		{
			static std::shared_ptr<leaf_generic> parse( instance* db, const void* leaf )
			{
				return nullptr;
			}
		};
	};
	using leaf_mapping_t = std::tuple<
		// Redirect each leaf to it's own processor.
		//
		std::tuple<impl::if_equal_t<LF_FIELDLIST>, leaf_fieldlist, lfFieldList>,
		std::tuple<impl::if_equal_t<LF_ARGLIST>, leaf_arglist, lfArgList>,
		std::tuple<impl::if_equal_t<LF_MODIFIER>, leaf_modifier, lfModifier>,
		std::tuple<impl::if_equal_t<LF_POINTER>, leaf_pointer, lfPointer>,
		std::tuple<impl::if_equal_t<LF_BITFIELD>, leaf_bitfield, lfBitfield>,
		std::tuple<impl::if_equal_t<LF_CLASS, LF_STRUCTURE, LF_UNION>, leaf_class, lfEasy>,
		std::tuple<impl::if_equal_t<LF_ENUM>, leaf_enum, lfEnum>,
		std::tuple<impl::if_equal_t<LF_ARRAY>, leaf_array, lfArray>,
		std::tuple<impl::if_equal_t<LF_PROCEDURE>, leaf_procedure, lfProc>,

		// Ignore C++ types.
		//
		std::tuple<impl::if_equal_t<LF_VFTABLE>, impl::leaf_null, lfVftable>,
		std::tuple<impl::if_equal_t<LF_VTSHAPE>, impl::leaf_null, lfVTShape>,
		std::tuple<impl::if_equal_t<LF_MFUNCTION>, impl::leaf_null, lfMFunc>,
		std::tuple<impl::if_equal_t<LF_METHODLIST>, impl::leaf_null, lfMethodList>
	>;

	// Type concepts.
	//
	template<typename T, typename F, typename... Tx>
	concept LeafApplies = requires( F && x ) { x( std::declval<T*>(), std::declval<Tx>()... ); };
	template<typename T> concept ModifierLeaf = std::is_same_v<std::decay_t<T>, leaf_modifier>;
	template<typename T> concept PointerLeaf = std::is_same_v<std::decay_t<T>, leaf_pointer>;
	template<typename T> concept ArgListLeaf = std::is_same_v<std::decay_t<T>, leaf_arglist>;
	template<typename T> concept FieldListLeaf = std::is_same_v<std::decay_t<T>, leaf_fieldlist>;
	template<typename T> concept ClassLeaf = std::is_same_v<std::decay_t<T>, leaf_class>;
	template<typename T> concept ArrayLeaf = std::is_same_v<std::decay_t<T>, leaf_array>;
	template<typename T> concept BitFieldLeaf = std::is_same_v<std::decay_t<T>, leaf_bitfield>;
	template<typename T> concept EnumLeaf = std::is_same_v<std::decay_t<T>, leaf_enum>;
	template<typename T> concept ProcedureLeaf = std::is_same_v<std::decay_t<T>, leaf_procedure>;
	template<typename T> concept PrimitiveLeaf = std::is_same_v<std::decay_t<T>, leaf_primitive>;

	// Implement generic parser.
	//
	template<size_t N = 0>
	std::shared_ptr<leaf_generic> parse( instance* db, const dbi::tpi_record* record )
	{
		if constexpr ( N < std::tuple_size_v<leaf_mapping_t> )
		{
			using mapping_t = std::tuple_element_t<N, leaf_mapping_t>;
			using predicate_t = std::tuple_element_t<0, mapping_t>;
			using leaf_type_t = std::tuple_element_t<1, mapping_t>;
			using cv_type_t = std::tuple_element_t<2, mapping_t>;

			if ( predicate_t{}( record->kind ) )
				return leaf_type_t::parse( db, ( const cv_type_t* ) record->data() );
			return parse<N + 1>( db, record );
		}
		else
		{
			return impl::leaf_null::parse( db, record );
		}
	}

	// Implement type visitor.
	//
	namespace impl
	{
		template<typename P, typename F, typename... Tx>
		static bool visit( P* leaf, F&& fn, Tx&&... args )
		{
			const auto apply = [ & ] <typename T> ( T * p )
			{
				if constexpr ( LeafApplies<T, F, Tx...> )
				{
					using Tc = std::conditional_t<std::is_const_v<P>, const T, T>;
					fn( ( Tc* ) p, std::forward<Tx>( args )... );
					return true;
				}
				return false;
			};

			switch ( leaf ? leaf->dynamic_type_id() : -1 )
			{
				case leaf_modifier::static_type_id:   return apply( ( leaf_modifier* ) leaf );
				case leaf_pointer::static_type_id:    return apply( ( leaf_pointer* ) leaf );
				case leaf_arglist::static_type_id:    return apply( ( leaf_arglist* ) leaf );
				case leaf_fieldlist::static_type_id:  return apply( ( leaf_fieldlist* ) leaf );
				case leaf_class::static_type_id:      return apply( ( leaf_class* ) leaf );
				case leaf_array::static_type_id:      return apply( ( leaf_array* ) leaf );
				case leaf_bitfield::static_type_id:   return apply( ( leaf_bitfield* ) leaf );
				case leaf_enum::static_type_id:       return apply( ( leaf_enum* ) leaf );
				case leaf_procedure::static_type_id:  return apply( ( leaf_procedure* ) leaf );
				case leaf_primitive::static_type_id:  return apply( ( leaf_primitive* ) leaf );
				default:                              return false;
			}
		}
	};
	template<typename F, typename... Tx>
	static bool visit( std::shared_ptr<leaf_generic>& leaf, F&& fn, Tx&&... args )
	{
		return impl::visit<leaf_generic>( leaf.get(), std::forward<F>( fn ), std::forward<Tx>( args )... );
	}
	template<typename F, typename... Tx>
	static bool visit( const std::shared_ptr<leaf_generic>& leaf, F&& fn, Tx&&... args )
	{
		return impl::visit<const leaf_generic>( leaf.get(), std::forward<F>( fn ), std::forward<Tx>( args )... );
	}
	template<typename F, typename... Tx>
	static bool visit( leaf_generic* leaf, F&& fn, Tx&&... args )
	{
		return impl::visit<leaf_generic>( leaf, std::forward<F>( fn ), std::forward<Tx>( args )... );
	}
	template<typename F, typename... Tx>
	static bool visit( const leaf_generic* leaf, F&& fn, Tx&&... args )
	{
		return impl::visit<const leaf_generic>( leaf, std::forward<F>( fn ), std::forward<Tx>( args )... );
	}

	// Implement singular PDB instance store.
	//
	struct instance
	{
		// Original streams presisting as is.
		//
		const dbi::tpi_stream tpi, ipi;
		const dbi::dbi_stream dbi;
		const dbi::sym_stream sym;
		const std::filesystem::path source;

		// Type/String tables.
		//
		type_map_t type_map;
		string_map_t string_map;

		// Alias table.
		//
		std::unordered_map<CV_typ_t, std::vector<std::string>> aliases;

		// Publics table.
		//
		struct public_record
		{
			std::unordered_set<CV_typ_t> types;
			std::unordered_set<dbi::pointer> addresses;
		};
		std::unordered_map<std::string, public_record> public_map;

		instance() {}
		instance( const msf::stream& stream ) :
			tpi( stream.get_stream( dbi::tpi_stream_idx ) ),
			ipi( stream.get_stream( dbi::ipi_stream_idx ) ),
			dbi( stream, stream.get_stream( dbi::dbi_stream_idx ) ),
			sym( stream.get_stream( dbi.hdr.sym_recs_stream_idx ) ),
			source( stream.path )
		{
			std::unordered_map<const leaf_generic*, std::vector<CV_typ_t>> index_list;
			index_list.reserve( tpi.hdr.ti_max );

			// Parse the whole type stream.
			//
			type_map.resize( tpi.hdr.ti_max );
			for ( uint32_t n = 0; n != std::min<uint32_t>( CV_FIRST_NONPRIM, tpi.hdr.ti_min ); n++ )
				type_map[ xstd::narrow_cast< uint16_t >( n ) ] = { std::make_shared<leaf_primitive>( n ), {} };

			for ( uint32_t n = tpi.hdr.ti_min; n != tpi.hdr.ti_max; n++ )
			{
				std::shared_ptr<leaf_generic> ptr = parse( this, tpi.records[ n - tpi.hdr.ti_min ] );
				index_list[ ptr.get() ].emplace_back( n );
				if ( ptr ) ptr->order_dagt = n, ptr->instance_src = this;
				type_map[ n ] = { std::move( ptr ), {} };
			}

			// Remove anon names, purge types with invaild C names, fix forward references.
			//
			std::vector<leaf_generic*> deferred_anon;
			std::unordered_set<CV_typ_t> purge_list;
			for ( auto& entry : type_map )
			{
				auto& [type, ref] = entry;
				CV_typ_t idx = xstd::narrow_cast< CV_typ_t >( &entry - &*type_map.begin() );

				// If not parsed, purge references.
				//
				if ( !type )
				{
					purge_list.insert( idx );
					continue;
				}

				// If named leaf:
				//
				auto& name = type->user_defined_name.resolve_original();
				if ( !name.empty() )
				{
					// If invalid name, purge.
					//
					bool is_anon = impl::is_anonymous_type( name );
					if ( !is_anon && !impl::is_valid_c_name( name ) )
					{
						purge_list.insert( idx );
						continue;
					}

					// Fix forward references.
					//
					std::shared_ptr<leaf_generic> forwarded = {};
					visit( type, [ & ] <typename T> ( T * leaf )
					{
						if constexpr ( EnumLeaf<T> || ClassLeaf<T> )
						{
							if ( leaf->attributes.fwdref )
							{
								auto& [_name, refs] = string_map[ str_type_name ].find( name )->second;

								T* def = nullptr;
								for ( auto& type : refs )
								{
									T* other = type->as<T>();
									if ( other && !other->attributes.fwdref && other->unique_name == leaf->unique_name )
									{
										def = other;
										break;
									}
								}

								if ( def )
									forwarded = type_map[ index_list[ def ].front() ].first;
								else if ( is_anon )
									purge_list.insert( idx ), is_anon = false;
							}
						}
					} );

					if ( forwarded )
						type = std::move( forwarded );
					else if ( is_anon )
						deferred_anon.emplace_back( type.get() );
				}
			}

			// Purge the anon names.
			//
			for ( auto& p : deferred_anon )
				p->user_defined_name = {};

			// Purge all types dependent on non-C types until we reach the end.
			//
			while ( !purge_list.empty() )
			{
				auto tmp = std::exchange( purge_list, {} );
				for ( auto& itype : tmp )
				{
					auto& [inv_type, inv_type_refs] = type_map[ itype ];

					for ( auto& ref : xstd::make_copy( inv_type_refs ) )
					{
						if ( auto cl = ref->as<pdb::leaf_fieldlist>() )
						{
							std::erase_if( cl->members, [ &, i = &inv_type ] ( auto& mem )
							{
								return mem.type.resolve() == i->get();
							} );
							continue;
						}

						for ( auto& refi : index_list[ ref ] )
							purge_list.insert( refi );
					}
					inv_type = type_map[ T_NOTYPE ].first;
				}
			}

			// Big meme.
			//
			auto demangle_simple = [ ] ( const char* ptr ) -> std::string
			{
				if ( ptr[ 0 ] == '?' )
				{
					std::string_view v = ptr + 1;
					if ( v.length() && ( isalpha( v[ 0 ] ) || v[ 0 ] == '_' ) )
					{
						if ( size_t n = v.find( "@@" ); n != std::string::npos )
							return std::string{ v.substr( 0, n ) };
					}
				}
				return ptr;
			};

			// Extract the knowledge we have from IPI.
			//
			for ( auto& type : ipi.records )
			{
				if ( type->kind == LF_BUILDINFO )        continue;
				if ( type->kind == LF_MFUNC_ID )         continue;
				if ( type->kind == LF_STRING_ID )        continue;
				if ( type->kind == LF_UDT_SRC_LINE )     continue;
				if ( type->kind == LF_UDT_MOD_SRC_LINE ) continue;
				if ( type->kind == LF_SUBSTR_LIST )      continue;
				if ( type->kind == S_MANREGREL )         continue;
				if ( type->kind == LF_FUNC_ID )
				{
					lfFuncId* fun = ( lfFuncId* ) type->data();
					public_map[ demangle_simple( ( const char* ) &fun->name[ 0 ] ) ].types.emplace( fun->type );
					continue;
				}
			}

			//for ( auto& [_, __, mod] : this->dbi.module_info ) {
			//	dbi::sym_stream lsym{ stream.get_stream( mod->local_sym_stream_idx ) };
			//}

			// Extract the knowledge we have from symbols.
			//
			for ( auto& symbol : sym.records )
			{
				if ( symbol->kind == S_CONSTANT )        continue;
				if ( symbol->kind == S_PROCREF )         continue;
				if ( symbol->kind == S_LPROCREF )        continue;
				if ( symbol->kind == S_ANNOTATIONREF )   continue;
				if ( symbol->kind == S_ANNOTATION )      continue;
				if ( symbol->kind == LF_SUBSTR_LIST )    continue;
				if ( symbol->kind == S_MANREGREL )       continue;
				if ( symbol->kind == S_LTHREAD32 )       continue;
				if ( symbol->kind == S_GTHREAD32 )       continue;
				if ( symbol->kind == S_PUB32 )
				{
					PUBSYM32* pub = ( PUBSYM32* ) symbol->data();
					public_map[ demangle_simple( ( const char* ) &pub->name[ 0 ] ) ].addresses.insert( { pub->seg, pub->off } );
					continue;
				}
				else if ( symbol->kind == S_GDATA32 || symbol->kind == S_LDATA32 )
				{
					DATASYM32* pub = ( DATASYM32* ) symbol->data();
					auto& dt = public_map[ demangle_simple( ( const char* ) &pub->name[ 0 ] ) ];
					dt.addresses.insert( { pub->seg, pub->off } );
					dt.types.emplace( pub->typind );
					continue;
				}
				else if ( symbol->kind == S_UDT )
				{
					UDTSYM* udt = ( UDTSYM* ) symbol->data();
					aliases[ udt->typind ].emplace_back( ( const char* ) &udt->name[ 0 ] );
					continue;
				}
			}
		}

		// Handle deletion of types before references are substracted.
		//
		void prereset()
		{
			for ( auto& [t, refs] : type_map )
				t.reset();
		}
		~instance() { prereset(); }
	};

	// Resolves the type reference.
	//
	inline const leaf_generic* leaf_ref::resolve() const
	{
		if ( value.index() == 1 )
		{
			auto& [db, index, _r] = std::get<1>( value );
			xstd::assert_that( db && db->type_map.size() > index, "Invalid type reference." );
			return db->type_map[ index ].first.get();
		}
		else if ( value.index() == 2 )
		{
			auto& p = std::get<2>( value );
			return p.get();
		}
		return nullptr;
	}

	// Referencing constructor uses an already existing entry into the table.
	//
	inline leaf_ref::leaf_ref( leaf_generic* _self, instance* inst, CV_typ_t leafi )
	{
		auto& [_, __, ref] = value.emplace<1>( inst, leafi, nullptr );
		if ( leafi >= inst->tpi.hdr.ti_min )
			ref = { &inst->type_map[ leafi ].second, _self };
	}

	// Emplacing constructor uses an already existing entry where possible, or emplaces a new entry.
	//
	inline string_ref::string_ref( leaf_generic* _self, instance* inst, string_type type, std::string_view str )
	{
		if ( !str.empty() )
		{
			auto [it, emp] = inst->string_map[ type ].emplace( str, string_map_t::value_type::value_type::second_type{} );
			if ( emp ) it->second.first = str;

			auto& [db, vp, ref] = value.emplace<1>();
			vp = &*it;
			ref = { &it->second.second, _self };
			db = inst;
		}
	}
};