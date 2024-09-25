#include <flash/engine.hpp>
#include <flash/section.hpp>
#include <flash/rule_instruction.hpp>
#include <flash/rule_pattern.hpp>
#include <flash/rule_filters.hpp>
#include <flash/shellcode.hpp>
#include <flash/format.hpp>
#include <flash/hex.hpp>
#include <flash/vcpu.hpp>
#include <flash/func_builder.hpp>
#include <xstd/utf.hpp>
#include <xstd/narrow_cast.hpp>

#if !__private_binary__
	#include <cfw/library.hpp>
#endif

extern "C" {
	#include <lj_debug.h>
	#include <lj_frame.h>
};

namespace flash
{
	// Wrappers for lua.
	//
	struct rule_wrapper
	{
		std::shared_ptr<flash::rule> rule;
		float get_quality() const { return rule->quality; }
		std::string to_string() const { return rule->to_string(); }
	};
	struct func_builder_wrapper {
		std::shared_ptr<func_builder> fb;
		func_builder* operator->() const { return fb.get(); }
	};
	struct image_wrapper
	{
		image* img;

		// Read immediate at RVA.
		//
		template<typename T>
		std::optional<T> read_i( uint32_t rva ) const
		{
			auto& data = img->data;
			if ( data.size() >= ( rva + sizeof( T ) ) )
				return *( const T* ) &data[ rva ];
			return std::nullopt;
		}
		std::optional<xed::decoding> decode( uint32_t rva )
		{
			if ( auto scn = img->get_section( rva ) )
				if ( auto res = scn->decode( img, rva ) )
					return *res;
			return std::nullopt;
		}
		auto stream( ulua::state_view, uint32_t rva, uint32_t rva_end )
		{
			return [ rva, rva_end, img = this->img ] () mutable -> std::optional<std::tuple<uint32_t, xed::decoding>> {
				if ( auto scn = img->get_section( rva ) ) {
					if ( rva < rva_end ) {
						uint32_t rvai = rva;
						auto ins = scn->decode( img, rva );
						if ( !ins ) return std::nullopt;
						rva += ins->length();
						if ( rva > rva_end ) return std::nullopt;
						return std::tuple{ rvai, *ins };
					}
				}
				return std::nullopt;
			};
		}
		uint32_t decode_len( uint32_t rva )
		{
			if ( auto scn = img->get_section( rva ) )
				return scn->decode_len( img, rva );
			return 0;
		}

		// Read string at RVA.
		//
		std::optional<std::string> read_utf16( uint32_t rva ) const
		{
			auto& data = img->data;
			if ( data.size() >= rva )
			{
				auto* start = ( const wchar_t* ) &data[ rva ];
				size_t max_count = ( data.size() - rva ) / sizeof( wchar_t );
				return xstd::utf_convert<char>( std::wstring_view{ start, wcsnlen( start, max_count ) } );
			}
			return std::nullopt;
		}
		std::optional<std::string_view> read_utf8( uint32_t rva ) const
		{
			auto& data = img->data;
			if ( data.size() >= rva )
			{
				auto* start = ( const char* ) &data[ rva ];
				size_t max_count = ( data.size() - rva ) / sizeof( char );
				return std::string_view{ start, strnlen( start, max_count ) };
			}
			return std::nullopt;
		}

		// Finders.
		//
		template<bool Forward>
		struct query
		{
			std::shared_ptr<flash::rule>      rule;
							      
			image*                            img;
			section*                          section_it;
			section*                          section_it_end;
							                      
			uint32_t                          rva_it;
			uint32_t                          rva_end;
								                   
			uint8_t                           type_mask;
			
			std::optional<std::pair<uint32_t, uint32_t>> operator()() 
			{
				// Initial range check.
				//
				if ( Forward ? rva_it >= rva_end : rva_it <= rva_end )
					return std::nullopt;

				// While we did not reach the last section:
				//
				for ( ; section_it != section_it_end; section_it += ( Forward ? 1 : -1 ) )
				{
					// If mismatching section type, skip to the next section.
					//
					if ( type_mask && !( section_it->type & type_mask ) )
						continue;

					// Validate RVA range.
					//
					if constexpr ( Forward )
					{
						// Skip if we reached the end.
						//
						if ( rva_it >= section_it->rva_limit )
							continue;

						// Fix if we are below the beginning.
						//
						if ( rva_it < section_it->rva )
						{
							// Skip forward, if we hit the limit, break.
							//
							rva_it = section_it->rva;
							if ( rva_it >= rva_end )
								return std::nullopt;
						}
					}
					else
					{
						// Skip if we reached the end.
						//
						if ( rva_it <= section_it->rva )
							continue;

						// Fix if we are above the end.
						//
						if ( rva_it > section_it->rva_limit )
						{
							// Skip forward, if we hit the limit, break.
							//
							rva_it = section_it->rva_limit;
							if ( rva_it <= rva_end )
								return std::nullopt;
						}
					}

					// Do the search, if we found a result, return it.
					//
					if constexpr ( Forward )
					{
						uint32_t min_rva = rva_it;
						uint32_t max_rva = std::min( section_it->rva_limit, rva_end );

						if ( auto result = rule->find( img, section_it, min_rva, max_rva ) )
						{
							rva_it = result.position + 1;
							return std::pair{ result.position, result.length };
						}
					}
					else
					{
						uint32_t min_rva = std::max( rva_end, section_it->rva );
						uint32_t max_rva = rva_it;
						if ( auto result = rule->rfind( img, section_it, min_rva, max_rva ) )
						{
							rva_it = result.position;
							return std::pair{ result.position, result.length };
						}
					}
				}
				return std::nullopt;
			}
		};
		auto find( uint8_t type_mask, rule_wrapper rule, std::optional<uint32_t> rva_0, std::optional<uint32_t> max_dist ) const
		{
			return query<true>{
				std::move( rule.rule ),
				img,
				img->section_list.data(),
				img->section_list.data() + img->section_list.size(),
				rva_0.value_or( 0 ),
				max_dist ? rva_0.value_or( 0 ) + max_dist.value() : ( uint32_t ) img->data.size(),
				type_mask
			};
		}
		auto rfind( uint8_t type_mask, const rule_wrapper& rule, std::optional<uint32_t> rva_0, std::optional<uint32_t> max_dist ) const
		{
			return query<false>{
				rule.rule,
				img,
				img->section_list.data() + img->section_list.size() - 1,
				img->section_list.data() - 1,
				rva_0.value_or( ( uint32_t ) img->data.size() ),
				max_dist ? rva_0.value_or( 0 ) - max_dist.value() : 0,
				type_mask
			};
		}

		// Raw finders.
		//
		auto find_raw( uint8_t type_mask, const void* data, size_t n, std::optional<uint32_t> rva_0, std::optional<uint32_t> max_dist ) const
		{
			auto* beg = ( const uint8_t* ) data;
			return find( type_mask, rule_wrapper{ std::make_shared<pattern>( std::vector<uint8_t>{ beg, beg + n } ) }, rva_0, max_dist );
		}
		auto rfind_raw( uint8_t type_mask, const void* data, size_t n, std::optional<uint32_t> rva_0, std::optional<uint32_t> max_dist ) const
		{
			auto* beg = ( const uint8_t* ) data;
			return rfind( type_mask, rule_wrapper{ std::make_shared<pattern>( std::vector<uint8_t>{ beg, beg + n } ) }, rva_0, max_dist );
		}
	};

	// Filter rule.
	//
	struct filter : rule
	{
		// Constructed by a Lua function.
		//
		ulua::function fn;
		filter( ulua::function fn ) : rule( 0, -1 ), fn( std::move( fn ) ) {}
		int32_t match( image* img, section*, uint32_t rva_0, uint32_t rva_1, bool forward = true ) override
		{
			auto res = fn( image_wrapper{ img }, forward ? rva_0 : rva_1 );
			if ( res.is_error() ) [[unlikely]]
				ulua::error( fn.state(), "Error during filter: %s", res.error().c_str() );

			if ( res.is<int64_t>() )
				return res.as<int64_t>();
			else if ( res.is<bool>() )
				return res.as<bool>() ? 0 : -1;
			else
				return 0;
		}
		std::string to_string() const override {
			return xstd::fmt::str( "ScriptFilter{}" );
		}
	};
};

namespace ulua
{
	using namespace flash;

	template<>
	struct user_traits<flash::func_builder_wrapper> {
		static constexpr std::string_view name = "FunctionBuilder";

		static constexpr std::tuple fields = {
			static_member( "addBlock", []( const flash::func_builder_wrapper& fb, uint32_t rva, const shellcode& block, std::optional<const char*> branch_icl, std::optional<const char*> switch_reg ) {
				auto icl = XED_ICLASS_INVALID;
				if ( branch_icl ) icl = str2xed_iclass_enum_t( *branch_icl );
				auto reg = XED_REG_INVALID;
				if ( switch_reg ) reg = str2xed_reg_enum_t( *switch_reg );
				fb->add_block( rva, block, icl, reg );
			} ),
			static_member( "addEdge", []( const flash::func_builder_wrapper& fb, uint32_t from, uint32_t to ) {
				fb->add_edge( from, to );
			} ),
			static_member( "build", []( ulua::state_view L, const flash::func_builder_wrapper& fb, uint32_t entry_rva ) {
				auto result = fb->build( entry_rva );
				if ( !result )
					error( L, result.status.c_str() );
				return to_hex( *result );
			} )
		};
	};

	template<>
	struct user_traits<flash::function_info> {
		static constexpr std::string_view name = "FunctionInfo";
		static constexpr std::tuple fields = {
			property( "rvaBegin",       [ ] ( const flash::function_info& i ) { return i.rva_begin; } ),
			property( "rvaEnd",         [ ] ( const flash::function_info& i ) { return i.rva_end; } ),
			property( "frameRegister",  [ ] ( const flash::function_info& i ) { return xstd::try_name_enum( i.frame_reg ); } ),
			property( "frameOffset",    [ ] ( const flash::function_info& i ) { return i.frame_offset; } ),
			property( "stackSize",      [ ] ( const flash::function_info& i ) { return i.sp; } ),
			property( "registers",      [ ] ( ulua::state_view L, const flash::function_info& i ) {
				auto tbl = L.make_table();
				for ( size_t j = 0; j < i.slots.size(); j++ )
					tbl.at( i.slots[ j ].first, ulua::raw_t{} ) = xstd::try_name_enum( i.slots[ j ].second );
				return tbl;
			} ),
		};
	};

	template<>
	struct user_traits<xed::decoding>
	{
		static constexpr std::string_view name = "Instruction";

		static constexpr std::tuple fields = {
			property( "iclass",    [ ] ( const xed::decoding& i ) { return xstd::try_name_enum( i.iclass() ); } ),
			property( "iform",     [ ] ( const xed::decoding& i ) { return i.iform(); } ),
			property( "numPrefix", [ ] ( const xed::decoding& i ) { return i.num_prefixes(); } ),
			property( "numOps",    [ ] ( const xed::decoding& i ) { return i.num_operands(); } ),
			property( "numMem",    [ ] ( const xed::decoding& i ) { return i.num_mem_operands(); } ),
			property( "numRegs",   [ ] ( const xed::decoding& i ) { return i.num_reg_operands(); } ),
			property( "op0",       [ ] ( const xed::decoding& i ) { return i.num_operands() > 0 ? xstd::try_name_enum( i.operand( 0 )->name() ) : std::optional<std::string_view>{}; } ),
			property( "op1",       [ ] ( const xed::decoding& i ) { return i.num_operands() > 1 ? xstd::try_name_enum( i.operand( 1 )->name() ) : std::optional<std::string_view>{}; } ),
			property( "op2",       [ ] ( const xed::decoding& i ) { return i.num_operands() > 2 ? xstd::try_name_enum( i.operand( 2 )->name() ) : std::optional<std::string_view>{}; } ),
			property( "op3",       [ ] ( const xed::decoding& i ) { return i.num_operands() > 3 ? xstd::try_name_enum( i.operand( 3 )->name() ) : std::optional<std::string_view>{}; } ),

			property( "op0w",      [ ] ( const xed::decoding& i ) { return i.num_operands() > 0 ? i.operand( 0 )->width( i.eff_op_width() ) : std::optional<size_t>{}; } ),
			property( "op1w",      [ ] ( const xed::decoding& i ) { return i.num_operands() > 1 ? i.operand( 1 )->width( i.eff_op_width() ) : std::optional<size_t>{}; } ),
			property( "op2w",      [ ] ( const xed::decoding& i ) { return i.num_operands() > 2 ? i.operand( 2 )->width( i.eff_op_width() ) : std::optional<size_t>{}; } ),
			property( "op3w",      [ ] ( const xed::decoding& i ) { return i.num_operands() > 3 ? i.operand( 3 )->width( i.eff_op_width() ) : std::optional<size_t>{}; } ),
			
			static_member( "operandName", []( const xed::decoding& i, size_t n ) -> std::optional<std::string_view> {
				if ( n >= i.num_operands() ) return std::nullopt;
				return xstd::try_name_enum( i.operand( n )->name() );
			} ),
			static_member( "operandWidth", []( const xed::decoding& i, size_t n ) -> size_t {
				if ( n >= i.num_operands() ) return 0;
				return i.operand( n )->width( i.eff_op_width() );
			} ),
			static_member( "operandAction", []( const xed::decoding& i, size_t n ) -> std::optional<std::string_view> {
				if ( n >= i.num_operands() ) return std::nullopt;
				return xstd::try_name_enum( i.operand( n )->action() );
			} ),
			static_member( "operandVisibility", []( const xed::decoding& i, size_t n ) -> std::optional<std::string_view> {
				if ( n >= i.num_operands() ) return std::nullopt;
				return xstd::try_name_enum( i.operand( n )->visibility() );
			} ),

			// Immediates.
			//
			property( "imm0u",
				[ ] ( const xed::decoding& i ) { return ulua::ctypes::wrap<uint64_t>( i.imm0u_value() ); },
				[ ] ( xed::decoding& i, uint64_t v ) {
					if ( uint8_t( v ) == v ) {
						if ( i._operands.imm_width < 8 ) i._operands.imm_width = 8;
						*( uint64_t* ) &i._operands.uimm0 = v;
					} else if ( uint16_t( v ) == v ) {
						if ( i._operands.imm_width < 16 ) i._operands.imm_width = 16;
						*( uint64_t* ) &i._operands.uimm0 = v;
					} else if ( uint32_t( v ) == v ) {
						if ( i._operands.imm_width < 32 ) i._operands.imm_width = 32;
						*( uint64_t* ) &i._operands.uimm0 = v;
					} else {
						if ( i._operands.imm_width < 64 ) i._operands.imm_width = 64;
						*( uint64_t* ) &i._operands.uimm0 = v;
					}
				}
			),
			property( "imm0l",
				[ ] ( const xed::decoding& i ) { return ulua::ctypes::wrap<int64_t>( i.imm0().value() ); },
				[ ] ( xed::decoding& i, int64_t n ) {
					if ( i._operands.imm0signed ) {
						if ( int8_t( n ) == n ) {
							if ( i._operands.imm_width < 8 ) i._operands.imm_width = 8;
							*( int64_t* ) &i._operands.uimm0 = n;
						} else if ( int16_t( n ) == n ) {
							if ( i._operands.imm_width < 16 ) i._operands.imm_width = 16;
							*( int64_t* ) &i._operands.uimm0 = n;
						} else if ( int32_t( n ) == n ) {
							if ( i._operands.imm_width < 32 ) i._operands.imm_width = 32;
							*( int64_t* ) &i._operands.uimm0 = n;
						} else {
							if ( i._operands.imm_width < 64 ) i._operands.imm_width = 64;
							*( int64_t* ) &i._operands.uimm0 = n;
						}
					} else {
						uint64_t v = ( uint64_t ) n;
						if ( uint8_t( v ) == v ) {
							if ( i._operands.imm_width < 8 ) i._operands.imm_width = 8;
							*( uint64_t* ) &i._operands.uimm0 = v;
						} else if ( uint16_t( v ) == v ) {
							if ( i._operands.imm_width < 16 ) i._operands.imm_width = 16;
							*( uint64_t* ) &i._operands.uimm0 = v;
						} else if ( uint32_t( v ) == v ) {
							if ( i._operands.imm_width < 32 ) i._operands.imm_width = 32;
							*( uint64_t* ) &i._operands.uimm0 = v;
						} else {
							if ( i._operands.imm_width < 64 ) i._operands.imm_width = 64;
							*( uint64_t* ) &i._operands.uimm0 = v;
						}
					}
				}
			),
			property( "imm0",
				[ ] ( const xed::decoding& i ) { return i.imm0().value(); },
				[ ] ( xed::decoding& i, int64_t n ) {
					if ( i._operands.imm0signed ) {
						if ( int8_t( n ) == n ) {
							if ( i._operands.imm_width < 8 ) i._operands.imm_width = 8;
							*( int64_t* ) &i._operands.uimm0 = n;
						} else if ( int16_t( n ) == n ) {
							if ( i._operands.imm_width < 16 ) i._operands.imm_width = 16;
							*( int64_t* ) &i._operands.uimm0 = n;
						} else if ( int32_t( n ) == n ) {
							if ( i._operands.imm_width < 32 ) i._operands.imm_width = 32;
							*( int64_t* ) &i._operands.uimm0 = n;
						} else {
							if ( i._operands.imm_width < 64 ) i._operands.imm_width = 64;
							*( int64_t* ) &i._operands.uimm0 = n;
						}
					} else {
						uint64_t v = ( uint64_t ) n;
						if ( uint8_t( v ) == v ) {
							if ( i._operands.imm_width < 8 ) i._operands.imm_width = 8;
							*( uint64_t* ) &i._operands.uimm0 = v;
						} else if ( uint16_t( v ) == v ) {
							if ( i._operands.imm_width < 16 ) i._operands.imm_width = 16;
							*( uint64_t* ) &i._operands.uimm0 = v;
						} else if ( uint32_t( v ) == v ) {
							if ( i._operands.imm_width < 32 ) i._operands.imm_width = 32;
							*( uint64_t* ) &i._operands.uimm0 = v;
						} else {
							if ( i._operands.imm_width < 64 ) i._operands.imm_width = 64;
							*( uint64_t* ) &i._operands.uimm0 = v;
						}
					}
				}
			),
			property( "imm1",
				[ ] ( const xed::decoding& i ) { return i.imm1().value(); },
				[ ] ( xed::decoding& i, uint8_t n ) { i.set_imm1( n ); }
			),
			property( "relbr",
				[ ] ( const xed::decoding& i ) { return i.relbr().value(); },
				[ ] ( xed::decoding& i, int64_t n ) { i.set_relbr( n ); }
			),

			// Memory operands.
			//
			property( "memDisp",
				[ ] ( const xed::decoding& i ) { return i.mem_disp_value( 0 ); },
				[ ] ( xed::decoding& i, int64_t n ) { i.set_mem_disp( 0, n ); }
			),
			property( "memSeg0",   
				[ ] ( const xed::decoding& i ) { return xstd::try_name_enum( i.mem_seg( 0 ) ); },
				[ ] ( xed::decoding& i, const char* n ) { i.set_mem_seg( 0, str2xed_reg_enum_t( n ) ); }
			),
			property( "memBase0",
				[ ] ( const xed::decoding& i ) { return xstd::try_name_enum( i.mem_base( 0 ) ); },
				[ ] ( xed::decoding& i, const char* n ) { i.set_mem_base( 0, str2xed_reg_enum_t( n ) ); }
			),
			property( "memIndex0",
				[ ] ( const xed::decoding& i ) { return xstd::try_name_enum( i.mem_index( 0 ) ); },
				[ ] ( xed::decoding& i, const char* n ) { i.set_mem_index( 0, str2xed_reg_enum_t( n ) ); }
			),
			property( "memScale0",
				[ ] ( const xed::decoding& i ) { return i.mem_scale( 0 ); },
				[ ] ( xed::decoding& i, size_t n ) { i.set_mem_scale( 0, n ); }
			),
			property( "memSeg1",   
				[ ] ( const xed::decoding& i ) { return xstd::try_name_enum( i.mem_seg( 1 ) ); },
				[ ] ( xed::decoding& i, const char* n ) { i.set_mem_seg( 1, str2xed_reg_enum_t( n ) ); }
			),
			property( "memBase1",
				[ ] ( const xed::decoding& i ) { return xstd::try_name_enum( i.mem_base( 1 ) ); },
				[ ] ( xed::decoding& i, const char* n ) { i.set_mem_base( 1, str2xed_reg_enum_t( n ) ); }
			),
			property( "memIndex1",
				[ ] ( const xed::decoding& i ) { return xstd::try_name_enum( i.mem_index( 1 ) ); },
				[ ] ( xed::decoding& i, const char* n ) { i.set_mem_index( 1, str2xed_reg_enum_t( n ) ); }
			),
			property( "memScale1",
				[ ] ( const xed::decoding& i ) { return i.mem_scale( 1 ); },
				[ ] ( xed::decoding& i, int n ) { i.set_mem_scale( 1, n ); }
			),
			static_member( "mem", [ ] ( ulua::state_view L, const xed::decoding& i, size_t n ) -> std::optional<ulua::table> {
				if ( n >= i.num_mem_operands() ) return std::nullopt;
				auto tbl = L.make_table();

				tbl.at( "disp", ulua::raw_t{} ) = i.mem_disp_value( n );
				tbl.at( "seg",  ulua::raw_t{} ) = xstd::try_name_enum( i.mem_seg( n ) );
				tbl.at( "base", ulua::raw_t{} ) = xstd::try_name_enum( i.mem_base( n ) );
				tbl.at( "idx",ulua::raw_t{} ) = xstd::try_name_enum( i.mem_index( n ) );
				tbl.at( "scale",ulua::raw_t{} ) = i.mem_scale( n );
				tbl.at( "width", ulua::raw_t{} ) = i.mem_width( n );
				return tbl;
			} ),
			property( "bytes",
				[ ] ( const xed::decoding& i ) { 
					std::span<const uint8_t> bytes = { &i[ 0 ], &i[ i.length() ] };
					return to_hex( bytes );
				}
			),
			
			// Register operands.
			//
			property( "reg0",
				[ ] ( const xed::decoding& i ) { return xstd::try_name_enum( i.reg( 0 ) ); },
				[ ] ( xed::decoding& i, const char* n ) { i.set_reg( 0, str2xed_reg_enum_t( n ) ); }
			),
			property( "reg1",
				[ ] ( const xed::decoding& i ) { return xstd::try_name_enum( i.reg( 1 ) ); },
				[ ] ( xed::decoding& i, const char* n ) { i.set_reg( 1, str2xed_reg_enum_t( n ) ); }
			),
			property( "reg2",
				[ ] ( const xed::decoding& i ) { return xstd::try_name_enum( i.reg( 2 ) ); },
				[ ] ( xed::decoding& i, const char* n ) { i.set_reg( 2, str2xed_reg_enum_t( n ) ); }
			),
		};

		static constexpr std::tuple metatable = {
			property( meta::tostring, [ ] ( const xed::decoding& i ) { return i.to_string(); } ),
			property( meta::len,      [ ] ( const xed::decoding& i ) { return i.length(); } ),
		};
	};
	template<>
	struct user_traits<rule_wrapper>
	{
		static constexpr std::string_view name = "Rule";
		static constexpr std::tuple fields = {
			property( "quality",    [ ] ( const rule_wrapper& w ) { return w.get_quality(); } ),

			// Matcher.
			//
			static_member( "Match", [ ] ( const rule_wrapper& rule, image_wrapper w, uint32_t rva_0, std::optional<bool> bwd ) -> std::optional<uint32_t>
			{
				auto s = w.img->get_section( rva_0 );
				if ( !s ) return std::nullopt;

				int64_t result;
				if ( bwd && *bwd )
					result = rule.rule->match( w.img, s, s->rva, rva_0, false );
				else
					result = rule.rule->match( w.img, s, rva_0, s->rva_limit, true );
				if ( result < 0 )
					return std::nullopt;
				else
					return uint32_t( result );
			} ),
		};
	};
	template<>
	struct user_traits<image_wrapper>
	{
		static constexpr std::string_view name = "Image";
		static constexpr std::tuple fields = {

			// RVA limits.
			//
			property( "size",           [ ] ( image_wrapper w ) { return w.img->data.size(); } ),
			property( "base",           [ ] ( image_wrapper w ) { return w.img->base_address; } ),

			// Read immediate.
			//
			static_member( "ReadI8",    [ ] ( image_wrapper w, uint32_t rva ) { return w.template read_i<int8_t>( rva ); } ),
			static_member( "ReadU8",    [ ] ( image_wrapper w, uint32_t rva ) { return w.template read_i<uint8_t>( rva ); } ),
			static_member( "ReadI16",   [ ] ( image_wrapper w, uint32_t rva ) { return w.template read_i<int16_t>( rva ); } ),
			static_member( "ReadU16",   [ ] ( image_wrapper w, uint32_t rva ) { return w.template read_i<uint16_t>( rva ); } ),
			static_member( "ReadI32",   [ ] ( image_wrapper w, uint32_t rva ) { return w.template read_i<int32_t>( rva ); } ),
			static_member( "ReadU32",   [ ] ( image_wrapper w, uint32_t rva ) { return w.template read_i<uint32_t>( rva ); } ),
			static_member( "ReadF32",   [ ] ( image_wrapper w, uint32_t rva ) { return w.template read_i<float>( rva ); } ),
			static_member( "ReadF64",   [ ] ( image_wrapper w, uint32_t rva ) { return w.template read_i<double>( rva ); } ),
			static_member( "ReadU64",    []( image_wrapper w, uint32_t rva ) -> std::optional<ulua::ctypes::u64> {
				auto value = w.template read_i<uint64_t>( rva );
				if ( !value ) return std::nullopt;
				return *value;
			} ),
			static_member( "ReadVA",    [ ] ( image_wrapper w, uint32_t rva ) -> std::optional<uint32_t> {
				auto value = w.template read_i<uint64_t>( rva );
				if ( !value ) return std::nullopt;
				uint64_t rva2 = *value - w.img->base_address;
				if ( rva2 < w.img->data.size() )
					return ( uint32_t ) rva2;
				return std::nullopt;
			} ),

			// Read string.
			//
			static_member( "ReadUTF8",  [ ] ( image_wrapper w, uint32_t rva ) { return w.read_utf8( rva ); } ),
			static_member( "ReadUTF16", [ ] ( image_wrapper w, uint32_t rva ) { return w.read_utf16( rva ); } ),

			// Read instruction.
			//
			static_member( "Decode",      [ ] ( image_wrapper w, uint32_t rva ) { return w.decode( rva ); } ),
			static_member( "Stream", [ ] ( ulua::state_view L, image_wrapper w, uint32_t rva, uint32_t rva_end ) {
				return w.stream( L, rva, rva_end );
			} ),
			static_member( "DecodeLen",   [ ] ( image_wrapper w, uint32_t rva ) { return w.decode_len( rva ); } ),

			// Finders.
			//
			static_member( "Find",          [ ] ( image_wrapper w, const rule_wrapper& rule, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.find( section::text, rule, rva_0, dst ); } ),
			static_member( "FindBwd",       [ ] ( image_wrapper w, const rule_wrapper& rule, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.rfind( section::text, rule, rva_0, dst ); } ),
			static_member( "FindEx",        [ ] ( image_wrapper w, uint8_t scn, const rule_wrapper& rule, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.find( scn, rule, rva_0, dst ); } ),
			static_member( "FindBwdEx",     [ ] ( image_wrapper w, uint8_t scn, const rule_wrapper& rule, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.rfind( scn, rule, rva_0, dst ); } ),
			static_member( "FindI8",        [ ] ( image_wrapper w, int8_t value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.find_raw( section::unknown, &value, sizeof( value ), rva_0, dst ); } ),
			static_member( "FindI8Bwd",     [ ] ( image_wrapper w, int8_t value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.rfind_raw( section::unknown, &value, sizeof( value ), rva_0, dst ); } ),
			static_member( "FindU8",        [ ] ( image_wrapper w, uint8_t value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.find_raw( section::unknown, &value, sizeof( value ), rva_0, dst ); } ),
			static_member( "FindU8Bwd",     [ ] ( image_wrapper w, uint8_t value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.rfind_raw( section::unknown, &value, sizeof( value ), rva_0, dst ); } ),
			static_member( "FindI16",       [ ] ( image_wrapper w, int16_t value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.find_raw( section::unknown, &value, sizeof( value ), rva_0, dst ); } ),
			static_member( "FindI16Bwd",    [ ] ( image_wrapper w, int16_t value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.rfind_raw( section::unknown, &value, sizeof( value ), rva_0, dst ); } ),
			static_member( "FindU16",       [ ] ( image_wrapper w, uint16_t value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.find_raw( section::unknown, &value, sizeof( value ), rva_0, dst ); } ),
			static_member( "FindU16Bwd",    [ ] ( image_wrapper w, uint16_t value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.rfind_raw( section::unknown, &value, sizeof( value ), rva_0, dst ); } ),
			static_member( "FindI32",       [ ] ( image_wrapper w, int32_t value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.find_raw( section::unknown, &value, sizeof( value ), rva_0, dst ); } ),
			static_member( "FindI32Bwd",    [ ] ( image_wrapper w, int32_t value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.rfind_raw( section::unknown, &value, sizeof( value ), rva_0, dst ); } ),
			static_member( "FindU32",       [ ] ( image_wrapper w, uint32_t value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.find_raw( section::unknown, &value, sizeof( value ), rva_0, dst ); } ),
			static_member( "FindU32Bwd",    [ ] ( image_wrapper w, uint32_t value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.rfind_raw( section::unknown, &value, sizeof( value ), rva_0, dst ); } ),
			static_member( "FindI64",       [ ] ( image_wrapper w, int64_t value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.find_raw( section::unknown, &value, sizeof( value ), rva_0, dst ); } ),
			static_member( "FindI64Bwd",    [ ] ( image_wrapper w, int64_t value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.rfind_raw( section::unknown, &value, sizeof( value ), rva_0, dst ); } ),
			static_member( "FindU64",       [ ] ( image_wrapper w, uint64_t value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.find_raw( section::unknown, &value, sizeof( value ), rva_0, dst ); } ),
			static_member( "FindU64Bwd",    [ ] ( image_wrapper w, uint64_t value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.rfind_raw( section::unknown, &value, sizeof( value ), rva_0, dst ); } ),
			static_member( "FindF32",       [ ] ( image_wrapper w, float value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.find_raw( section::unknown, &value, sizeof( value ), rva_0, dst ); } ),
			static_member( "FindF32Bwd",    [ ] ( image_wrapper w, float value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.rfind_raw( section::unknown, &value, sizeof( value ), rva_0, dst ); } ),
			static_member( "FindF64",       [ ] ( image_wrapper w, double value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.find_raw( section::unknown, &value, sizeof( value ), rva_0, dst ); } ),
			static_member( "FindF64Bwd",    [ ] ( image_wrapper w, double value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.rfind_raw( section::unknown, &value, sizeof( value ), rva_0, dst ); } ),
			static_member( "FindUTF8",      [ ] ( image_wrapper w, std::string_view value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.find_raw( section::unknown, value.data(), value.size(), rva_0, dst ); } ),
			static_member( "FindUTF8Bwd",   [ ] ( image_wrapper w, std::string_view value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.rfind_raw( section::unknown, value.data(), value.size(), rva_0, dst ); } ),
			static_member( "FindUTF8Z",     [ ] ( image_wrapper w, std::string_view value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.find_raw( section::unknown, value.data(), value.size() + 1, rva_0, dst ); } ),
			static_member( "FindUTF8ZBwd",  [ ] ( image_wrapper w, std::string_view value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { return w.rfind_raw( section::unknown, value.data(), value.size() + 1, rva_0, dst ); } ),
			static_member( "FindUTF16",     [ ] ( image_wrapper w, std::string_view value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { auto v = xstd::utf_convert<wchar_t>( value ); return w.find_raw( section::unknown, v.data(), v.size() * sizeof( wchar_t ), rva_0, dst ); } ),
			static_member( "FindUTF16Bwd",  [ ] ( image_wrapper w, std::string_view value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { auto v = xstd::utf_convert<wchar_t>( value ); return w.rfind_raw( section::unknown, v.data(), v.size() * sizeof( wchar_t ), rva_0, dst ); } ),
			static_member( "FindUTF16Z",    [ ] ( image_wrapper w, std::string_view value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { auto v = xstd::utf_convert<wchar_t>( value ); return w.find_raw( section::unknown, v.data(), ( v.size() + 1 ) * sizeof( wchar_t ), rva_0, dst ); } ),
			static_member( "FindUTF16ZBwd", [ ] ( image_wrapper w, std::string_view value, std::optional<uint32_t> rva_0, std::optional<uint32_t> dst ) { auto v = xstd::utf_convert<wchar_t>( value ); return w.rfind_raw( section::unknown, v.data(), ( v.size() + 1 ) * sizeof( wchar_t ), rva_0, dst ); } ),

			// Code helpers.
			//
			static_member( "FindPrologue",  [ ] ( image_wrapper w, uint32_t rva ) { return w.img->find_prologue( rva ); } ),
			static_member( "QueryFunction",  []( image_wrapper w, uint32_t rva ) { return w.img->query_function( rva ); } ),
			static_member( "PrevInsn",  [ ] ( image_wrapper w, uint32_t rva, std::optional<size_t> n ) -> std::optional<uint32_t>
			{
				if ( n == 0 ) return rva;
				if ( auto* scn = w.img->get_section( rva ) )
					return scn->find_prev( w.img, rva, n.value_or( 1 ) );
				return std::nullopt;
			} ),
			static_member( "NextInsn",  [ ] ( image_wrapper w, uint32_t rva, std::optional<size_t> n ) -> std::optional<uint32_t>
			{
				if ( n == 0 ) return rva;
				if ( auto* scn = w.img->get_section( rva ) )
					return scn->find_next( w.img, rva, n.value_or( 1 ) - 1 );
				return std::nullopt;
			} ),

			// XREF helpers.
			//
			static_member( "XrefsTo",  [ ] ( ulua::state_view L, image_wrapper w, uint32_t rva )
			{
				auto tbl = L.make_table();

				size_t tbl_it = 1;

				for ( auto* map : { &w.img->xref_map_code_disp, &w.img->xref_map_code_call, &w.img->xref_map_data } )
					if ( auto it = map->find( rva ); it != map->end() )
						for ( auto& e : it->second )
							tbl.at( tbl_it++, ulua::raw_t{} ) = e;
				return tbl;
			} ),
			
			// Validation state.
			//
			static_member( "SetValidation",  [ ] ( image_wrapper w, uint32_t flags )
			{
				w.img->validation_disabled = (flags & 1)==0;
			} ),

			// Follows any instruction with a displacement.
			//
			static_member( "Follow",  [ ] ( image_wrapper w, uint32_t rva ) -> std::optional<uint32_t>
			{
				auto ins = w.decode( rva );
				if ( !ins ) return std::nullopt;

				uint64_t va = w.img->base_address + rva + ins->length();
				if ( ins->has_relbr() )
					va += ins->relbr();
				else if ( ins->has_mem_disp() && ins->mem_base( 0 ) == XED_REG_RIP )
					va += ins->mem_disp_value( 0 );
				else if ( ins->has_imm() )
					va = ins->imm0_value();
				else
					return std::nullopt;
				va -= w.img->base_address;
				if ( va < w.img->data.size() )
					return va;
				return std::nullopt;
			} ),
		};
	};
	template<>
	struct user_traits<shellcode>
	{
		static constexpr std::string_view name = "Code";
		static constexpr std::tuple fields = {
			// Setup.
			//
			static_member( "PushFrontAll", [ ] ( shellcode& sh, image_wrapper w, uint32_t rva_0, uint32_t rva_1 ) { sh.push_front( w.img, rva_0, rva_1 ); } ),
			static_member( "PushFront", [ ] ( shellcode& sh, const xed::decoding& d, std::optional<uint32_t> rva ) 
			{ 
				sh.instructions.emplace( sh.instructions.begin(), rva.value_or( 0 ), d );
			} ),
			static_member( "PushBackAll", [ ] ( shellcode& sh, image_wrapper w, uint32_t rva_0, uint32_t rva_1 ) { sh.push_back( w.img, rva_0, rva_1 ); } ),
			static_member( "PushBack", [ ] ( shellcode& sh, const xed::decoding& d, std::optional<uint32_t> rva ) 
			{ 
				sh.instructions.emplace_back( rva.value_or( 0 ), d );
			} ),
			static_member( "PushAtAll", [ ] ( shellcode& sh, image_wrapper w, size_t idx, uint32_t rva_0, uint32_t rva_1 ) { sh.push_at( w.img, idx, rva_0, rva_1 ); } ),
			static_member( "PushAt", [ ] ( shellcode& sh, size_t idx, const xed::decoding& d, std::optional<uint32_t> rva )
			{
				idx = std::min( idx, sh.instructions.size() );
				sh.instructions.emplace( sh.instructions.begin() + idx, rva.value_or( 0 ), d );
			} ),
			static_member( "At", [ ] ( const shellcode& sh, size_t idx ) -> std::optional<std::pair<uint32_t, xed::decoding>>
			{
				if ( idx >= sh.instructions.size() )
					return std::nullopt;
				return std::make_pair( sh.instructions[ idx ].rva, sh.instructions[ idx ].dec );
			} ),
			static_member( "ReplaceAt", [ ] ( shellcode& sh, size_t idx, std::optional<xed::decoding> d ) -> bool
			{
				if ( idx >= sh.instructions.size() )
					return false;
				if ( d )
					sh.instructions[ idx ].dec = *d;
				else
					sh.instructions.erase( sh.instructions.begin() + idx );
				return true;
			} ),
			static_member( "Replace", []( ulua::state_view L, shellcode& sh, uint32_t rva, std::optional<xed::decoding> d ) {
				for ( auto it = sh.instructions.begin(); it != sh.instructions.end(); it++ ) {
					if ( it->rva == rva ) {
						if ( d )
							it->dec = *d;
						else
							sh.instructions.erase( it );
						return true;
					}
				}
				return false;
			} ),
			static_member( "SetOutput", [ ] ( shellcode& sh, const char* str, bool ignore_side_effects )
			{
				sh.set_output( str2xed_reg_enum_t( str ), ignore_side_effects );
			} ),
			static_member( "SetupFrame", [ ] ( shellcode& sh, const char* reg, int32_t offset )
			{
				sh.setup_frame( str2xed_reg_enum_t( reg ), offset );
			} ),
			static_member( "AddRegArg", [ ] ( shellcode& sh, const char* str )
			{ 
				sh.add_argument( str2xed_reg_enum_t( str ) );
			} ),
			static_member( "AddStackArg", [ ] ( shellcode& sh, int32_t slot, uint8_t size )
			{
				sh.add_argument( slot, size );
			} ),
			static_member( "Optimize", [ ] ( shellcode& sh )
			{
				sh.optimize();
			} ),
			static_member( "RepairPushes", [ ] ( shellcode& sh )
			{
				return sh.repair_pushes();
			} ),
			static_member( "Equals", []( const shellcode& sh, const shellcode& other ) -> bool {
				return sh.instructions == other.instructions;
			} ),
			static_member( "IndexOf", []( const shellcode& sh, uint32_t rva ) -> int64_t {
				if ( auto idx = sh.index_of( rva ) ) {
					return int64_t( *idx );
				} else {
					return -1;
				}
			} ),
			static_member( "OptimizeFor", []( ulua::state_view L, shellcode& sh, ulua::table required, std::optional<uint32_t> flags, std::optional<bool> dry ) {
				uint64_t required_registers = 0;
				robin_hood::unordered_flat_set<int32_t> required_stack_slots;
				uint32_t required_flags = flags.value_or( 0 );

				size_t len = ulua::length( required );
				for ( size_t i = 1; i <= len; i++ ) {
					auto&& key = required.at( i, ulua::raw_t{} );
					if ( key.is<int32_t>() ) {
						required_stack_slots.insert( key.as<int32_t>() );
					} else if ( key.is<const char*>() ) {
						if (auto reg = str2xed_reg_enum_t( key.as<const char*>() ); reg != XED_REG_INVALID)
							required_registers |= flash::make_reg_mask( reg );
					}
				}

				bool useful = sh.optimize_for( required_registers, required_stack_slots, required_flags, dry.value_or( false ) );

				size_t at = 1;
				for ( size_t r = 0; r != 16; r++ )
					if ( ( required_registers >> ( r * 4 ) ) & 0b1111 )
						required.at( at++, ulua::raw_t{} ) = xstd::try_name_enum( xed::reg_t( XED_REG_GPR64_FIRST + r ) );
				for ( auto offset : required_stack_slots )
					required.at( at++, ulua::raw_t{} ) = offset;
				while ( at <= len )
					required.at( at++, ulua::raw_t{} ) = std::nullopt;
				std::optional<uint32_t> result = required_flags;
				if ( !useful ) result.reset();
				return result;
			} ),
			static_member( "Concat", [ ] ( shellcode& sh, const shellcode& other )
			{
				sh.instructions.insert( sh.instructions.end(), other.instructions.begin(), other.instructions.end() );
			} ),
			static_member( "ForEach", [ ] ( shellcode& sh, ulua::function f )
			{
				for ( auto& ins : sh.instructions ) {
					auto res = f( ins.rva, ins.dec );
					if ( res.is<bool>() && res.as<bool>() )
						break;
				}
			} ),
			static_member( "Dump", [ ] ( const shellcode& sh, std::optional<bool> output )
			{
				std::string dump = {};

				if ( output.value_or( false ) ) {
					auto result = sh.generate();
					if ( !result ) {
						dump = result.status.c_str();
					} else {
						auto& vec = *result;
						auto it = vec.data();
						while ( auto ins = xed::decode64( it, vec.data() + vec.size() - it ) )
						{
							dump += xstd::fmt::str( "%04x: %s\n", it - vec.data(), ins->to_string( it - vec.data() ) );
							it += ins->length();
						}
					}
				} else {
					for ( auto& ins : sh.instructions ) {
						dump += ins.dec.to_string();
						dump += '\n';
					}
				}
				return dump;
			} ),
			property( "error", [ ] ( const shellcode& sh ) -> std::optional<std::string>
			{
				auto res = sh.validate_for_codegen();
				if ( !res )
					return res.message();
				else
					return std::nullopt;
			} ),
			property( "undefinedRegisters", []( ulua::state_view L, const shellcode& sh ) {
				uint64_t mask = sh.analyze_registers().required;
				uint32_t i = 1;
				auto tbl_result = L.make_table();
				for ( size_t r = 0; r != 16; r++ )
					if ( ( mask >> ( r * 4 ) ) & 0b1111 )
						tbl_result.at( i++, raw_t{} ) = xstd::try_name_enum( xed::reg_t( XED_REG_GPR64_FIRST + r ) );
				return tbl_result;
			} ),
			property( "undefinedStackSlots", []( ulua::state_view L, const shellcode& sh ) {
				uint32_t i = 1;
				auto tbl_result = L.make_table();
				for ( auto offset : sh.analyze_stack().required )
					tbl_result.at( i++, raw_t{} ) = offset;
				return tbl_result;
			} ),
			property( "writtenRegisters", []( ulua::state_view L, const shellcode& sh ) {
				uint64_t mask = sh.analyze_registers().written;
				uint32_t i = 1;
				auto tbl_result = L.make_table();
				for ( size_t r = 0; r != 16; r++ )
					if ( ( mask >> ( r * 4 ) ) & 0b1111 )
						tbl_result.at( i++, raw_t{} ) = xstd::try_name_enum( xed::reg_t( XED_REG_GPR64_FIRST + r ) );
				return tbl_result;
			} ),
			property( "writtenStackSlots", []( ulua::state_view L, const shellcode& sh ) {
				uint32_t i = 1;
				auto tbl_result = L.make_table();
				for ( auto offset : sh.analyze_stack().written )
					tbl_result.at( i++, raw_t{} ) = offset;
				return tbl_result;
			} ),
			static_member( "Generate", [ ] ( ulua::state_view L, const shellcode& sh )
			{
				auto result = sh.generate();
				if ( !result )
					error( L, result.status.c_str() );
				return to_hex( *result );
			} ),
			property( "clone", []( const shellcode& sh ) { return sh; } )
		};
		static constexpr std::tuple metatable = {
			property( meta::len,      []( const shellcode& sh ) { return sh.instructions.size(); } ),
		};
	};
	template<>
	struct user_traits<vm::vcpu> {
		static constexpr std::string_view name = "VM";
		static constexpr std::tuple fields = {
			member<&vm::vcpu::step_tokens>( "stepTokens" ),
			member<&vm::vcpu::call_tokens>( "callTokens" ),
			member<&vm::vcpu::rdata_enable>( "enableRdata" ),
			member<&vm::vcpu::ss_enable>( "enableSymStack" ),
			member<&vm::vcpu::cmov_lax>( "relaxedCmovs" ),
			member<&vm::vcpu::branch_store>( "branchStore" ),
			member<&vm::vcpu::branch_store_cc>( "branchStoreCc" ),
			member<&vm::vcpu::shadow_rip>( "shadowRip" ),
			member<&vm::vcpu::tracing_enable>( "enableTracing" ),
			member<&vm::vcpu::tracing_propagate>( "tracingPropagate" ),

			
			member<&vm::vcpu::rip>( "rip" ),
			property( "rrip",
				[]( const vm::vcpu& vcpu ) { return vcpu.to_rva( vcpu.rip ); },
				[]( vm::vcpu& vcpu, uint32_t rva ) { vcpu.rip = vcpu.to_va( rva ); }
			),

			property( "state", []( const vm::vcpu& vcpu ) { return xstd::name_enum( vcpu.state ); } ),
			property( "clone", []( const vm::vcpu& vcpu ) { return vcpu; } ),


			static_member( "toCode", []( const vm::vcpu& vcpu ) { 
				shellcode shell{};
				for ( auto& [va, dec] : vcpu.history ) {
					shell.instructions.emplace_back( vcpu.to_rva( va ).value_or( 0 ), dec );
				}
				return shell; 
			} ),

			static_member( "setRetptr", []( vm::vcpu& vcpu, uint64_t rva, std::optional<int64_t> sp_offset ) {
				if ( rva ) {
					rva = vcpu.to_va( rva );
				}
				vcpu.set_retptr( rva, sp_offset.value_or( 0 ) );
			} ),

			static_member( "dump", []( const vm::vcpu& vcpu ) { return vcpu.dump(); } ),
			
			static_member( "bp", []( vm::vcpu& vcpu, uint64_t rva, std::optional<bool> enabled ) {
				return vcpu.ctl_breakpoint( vcpu.to_va( rva ), enabled.value_or( true ) );
			} ),
			static_member( "clearBp", []( vm::vcpu& vcpu ) {
				for ( auto& e : vcpu.breakpoints ) e = 0;
			} ),

			static_member( "cc", []( vm::vcpu& vcpu, uint64_t rva, std::optional<bool> cc ) {
				return vcpu.ctl_branch( vcpu.to_va( rva ), cc );
			} ),
			static_member( "clearCc", []( vm::vcpu& vcpu ) {
				for ( auto& e : vcpu.forced_branches ) e = {0, false};
				if ( vcpu.state == vm::status::branch )
					vcpu.state = vm::status::ok;
			} ),

			static_member( "run", []( vm::vcpu& vcpu ) {
				return xstd::try_name_enum( vcpu.run() );
			} ),
			static_member( "stepBlock", []( vm::vcpu& vcpu ) {
				return xstd::try_name_enum( vcpu.step_block() );
			} ),
			static_member( "step", []( vm::vcpu& vcpu ) {
				return xstd::try_name_enum( vcpu.step() );
			} ),
			static_member( "stepAs", []( vm::vcpu& vcpu, const xed::decoding& ins ) {
				return xstd::try_name_enum( vcpu.step( ins ) );
			} ),
			static_member( "reg", []( vm::vcpu& vcpu, const char* rname, std::optional<uint64_t> value ) -> std::optional<ulua::ctypes::u64> {
				auto r = str2xed_reg_enum_t( rname );
				if ( value ) {
					vcpu.write_reg<uint64_t>( str2xed_reg_enum_t( rname ), value );
					return std::nullopt;
				} else {
					return vcpu.read_reg<uint64_t>( r );
				}
			} ),
			static_member( "memU64", []( vm::vcpu& vcpu, uint64_t addr, std::optional<uint64_t> value ) -> std::optional<ulua::ctypes::u64> {
				if ( value ) {
					vcpu.mem_write<uint64_t>( addr, value );
					return std::nullopt;
				} else {
					return vcpu.mem_read<uint64_t>( addr );
				}
			} ),
			static_member( "memU32", []( vm::vcpu& vcpu, uint64_t addr, std::optional<uint32_t> value ) -> std::optional<uint32_t> {
				if ( value ) {
					vcpu.mem_write<uint32_t>( addr, value );
					return std::nullopt;
				} else {
					return vcpu.mem_read<uint32_t>( addr );
				}
			} ),
			static_member( "memU16", []( vm::vcpu& vcpu, uint64_t addr, std::optional<uint16_t> value ) -> std::optional<uint16_t> {
				if ( value ) {
					vcpu.mem_write<uint16_t>( addr, value );
					return std::nullopt;
				} else {
					return vcpu.mem_read<uint16_t>( addr );
				}
			} ),
			static_member( "memU8", []( vm::vcpu& vcpu, uint64_t addr, std::optional<uint8_t> value ) -> std::optional<uint8_t> {
				if ( value ) {
					vcpu.mem_write<uint8_t>( addr, value );
					return std::nullopt;
				} else {
					return vcpu.mem_read<uint8_t>( addr );
				}
			} ),
		};
	};
};

namespace flash
{
	static void assign_result( image*, results& r, results::entry& e, ulua::stack_object& res )
	{
		switch ( e.type )
		{
			case results::none:
				e.state = results::complete;
				return;
			case results::imm:
			case results::data:
			case results::func:
			{
				if ( !res.is<int64_t>() )
				{
					r.error_log += xstd::fmt::str( "[%s] Failed: Expected integer\n", e.name.c_str() );
					return;
				}
				e.value_imm = res.as<int64_t>();
				e.state = results::complete;
				if ( e.type != results::imm )
					if ( r.labels.find( e.value_imm ) == r.labels.end() )
						r.labels[ e.value_imm ] = e.name;
				break;
			}
			case results::code:
			{
				if ( !res.is<std::string>() )
				{
					r.error_log += xstd::fmt::str( "[%s] Failed: Expected code\n", e.name.c_str() );
					return;
				}

				e.value_raw = from_hex( res.as<std::string_view>() );
				e.state = results::complete;
				break;
			}
			case results::arr:
			{
				if ( !ulua::stack::type_check<ulua::value_type::table>( res.L, res.slot() ) )
				{
					r.error_log += xstd::fmt::str( "[%s] Failed: Expected table of integers\n", e.name.c_str() );
					return;
				}
				size_t len = ulua::length( res );
				for ( size_t i = 1; i <= len; i++ )
				{
					auto subres = res.at( i, ulua::raw_t{} );
					if ( !subres.is<int64_t>() )
					{
						r.error_log += xstd::fmt::str( "[%s] Failed: Expected table of integers\n", e.name.c_str() );
						return;
					}
					int64_t r = subres.as<int64_t>();
					e.value_raw.insert( e.value_raw.end(), ( uint8_t* ) &r, ( uint8_t* ) std::next( &r ) );
				}
				e.state = results::complete;
				break;
			}
		}
	}
	static bool run_result( image* i, results& r, results::entry& e, const ulua::function& fn ) {
		e.state = results::running;
		std::string prev_pattern = std::exchange( r.current_pattern, e.name );
		bool prev_validation = std::exchange( i->validation_disabled, false );
		ulua::function_result res = fn();
		i->validation_disabled = prev_validation;
		r.current_pattern = std::move( prev_pattern );
		e.state = results::failed;

		if ( res.is_error() ) {
			r.error_log += xstd::fmt::str( "[%s] Failed: %s\n", e.name.c_str(), res.error().c_str() );
			return false;
		}
		ulua::stack_object stack_ref{ res.L, res.first, ulua::weak_t{} };
		assign_result( i, r, e, stack_ref );
		return e.state == results::complete;
	}
	static void request_result( image* i, results& r, results::entry& e ) {
		if ( e.state == results::pending ) {
			run_result( i, r, e, e.fn );
		}
	}

	static void rewrite_proto( GCproto* pt, GCRef chunk_name, const ulua::table& tbl ) {
		// Recursively rewrite children of prototype.
		if ( ( pt->flags & PROTO_CHILD ) ) {
			ptrdiff_t i, n = pt->sizekgc;
			GCRef* kr = mref( pt->k, GCRef ) - 1;
			for ( i = 0; i < n; i++, kr-- ) {
				GCobj* o = gcref( *kr );
				if ( o->gch.gct == ~LJ_TPROTO )
					rewrite_proto( gco2pt( o ), chunk_name, tbl );
			}
		}
		// Replace function name.
		pt->chunkname = chunk_name;

		// Fix lines.
		auto fix_lines = [ & ] <typename T> ( T * lineinfo ) {
			// Find new function start pos.
			uint32_t new_first_line = pt->firstline;
			for ( int i = 0; i != 8; i++ ) {
				if ( auto e = tbl[ pt->firstline + i ] ) {
					new_first_line = e.as<uint32_t>();
					break;
				} else if ( auto e = tbl[ pt->firstline - i ] ) {
					new_first_line = e.as<uint32_t>();
					break;
				}
			}

			// Replace all lines.
			for ( size_t i = 0; i != ( pt->sizebc - 1 ); i++ ) {
				uint32_t line = pt->firstline + lineinfo[ i ];
				if ( auto res = tbl[ line ] )
					lineinfo[ i ] = (T) ( uint32_t( res ) - new_first_line );
				else if ( i != 0 )
					lineinfo[ i ] = lineinfo[ i - 1 ];
			}

			// Replace start.
			pt->firstline = new_first_line;
		};
		const void* lineinfo = proto_lineinfo( pt );
		if ( lineinfo && pt->sizebc > 1 ) {
			if ( pt->numline < 256 )
				fix_lines( (uint8_t*) lineinfo );
			else if ( pt->numline < 65536 )
				fix_lines( (uint16_t*) lineinfo );
			else
				fix_lines( (uint32_t*) lineinfo );
		}
	}

	// Default construction.
	//
	engine::engine( bool is_dev_mode )
	{
		// Initialize lua state.
		//
		lua.open_libraries(
			ulua::lib::base,
			ulua::lib::string,
			ulua::lib::math,
			ulua::lib::bit,
			ulua::lib::table,
			ulua::lib::jit,
			ulua::lib::ffi,
			ulua::lib::debug
		);
		lua[ "DEV" ] = is_dev_mode;
		lua[ "__debug_replace" ] = []( std::string_view newext, ulua::table tbl ) {
			int size = 0;
			auto fr = lj_debug_frame( tbl.state(), 1, &size );
			auto pt = funcproto( frame_func( fr ) );
			setgcref( pt->chunkname, obj2gco( lj_str_new( tbl.state(), newext.data(), newext.size() ) ) );
			rewrite_proto( pt, pt->chunkname, tbl );
		};

		// Validation flags.
		//
		lua[ "V_STREAM" ] = 1;

		// Section types.
		//
		lua[ "S_ANY" ] =   section::unknown;
		lua[ "S_CODE" ] =  section::text;
		lua[ "S_CONST" ] = section::rdata;

		// Matching flags.
		//
		lua[ "M_INSN" ] =  0;
		lua[ "M_DISP" ] =  instruction::match_disp;
		lua[ "M_IMM" ] =   instruction::match_imm;
		lua[ "M_SCALE" ] = instruction::match_scale;
		lua[ "M_REG0" ] =  instruction::match_reg0;
		lua[ "M_TMPL" ] =  instruction::match_tmpl;
		lua[ "M_MRLX" ] =  instruction::match_mrelax;

		// Result types.
		//
		lua[ "R_NONE" ] =  results::none;
		lua[ "R_IMM" ] =   results::imm;
		lua[ "R_ARR" ] =   results::arr;
		lua[ "R_DATA" ] =  results::data;
		lua[ "R_FUNC" ] =  results::func;
		lua[ "R_CODE" ] =  results::code;

		// Operand utils.
		//
		static constexpr auto to_operand = [ ] ( ulua::object& obj ) -> std::optional<xed::encoder_operand> {
			// imm
			if ( obj.is<int64_t>() ) {
				return xed::imm0( obj.as<int64_t>() );
			}
			// str -> reg
			if ( obj.is<const char*>() ) {
				auto reg = str2xed_reg_enum_t( obj.as<const char*>() );
				if ( reg != XED_REG_INVALID )
					return xed::reg( reg );
			}
			// table -> mem/strong-imm
			if ( obj.is<ulua::table>() ) {
				auto tbl = obj.as<ulua::table>();

				bitcnt_t width_bits = 0, scale = 0, disp = 0;
				xed::reg_t seg = XED_REG_INVALID, base = XED_REG_INVALID, index = XED_REG_INVALID;

				if ( auto owidth = tbl[ "width" ]; owidth.is<int32_t>() ) {
					width_bits = owidth.as<int32_t>() * 8;
				}
				if ( auto oimm = tbl[ "value" ]; oimm.is<int64_t>() ) {
					xed::imm0 i = xed::imm0( oimm.as<int64_t>() );
					if ( auto otype = tbl["type"]; otype.is<std::string_view>() ) {
						auto sv = otype.as<std::string_view>();
						if ( sv == "brdisp" ) {
							i.type = XED_ENCODER_OPERAND_TYPE_BRDISP;
							if ( i.width_bits() == 16 ) {
								i.set_width_bits( 32 );
							}
						} else if ( sv == "imm0u" ) {
							i.type = XED_ENCODER_OPERAND_TYPE_IMM0;
						} else if ( sv == "imm0s" ) {
							i.type = XED_ENCODER_OPERAND_TYPE_SIMM0;
						} else if ( sv == "imm1" ) {
							i.type = XED_ENCODER_OPERAND_TYPE_IMM1;
							i.set_width_bits( 8 );
						} else if ( sv == "ptr" ) {
							i.type = XED_ENCODER_OPERAND_TYPE_PTR;
							if ( i.width_bits() == 16 ) {
								i.set_width_bits( 32 );
							}
						}
					}
					if ( width_bits ) {
						i.set_width_bits( width_bits );
					}
					return i;
				}

				if ( auto oseg = tbl[ "seg" ]; oseg.is<const char*>() ) {
					seg = str2xed_reg_enum_t( oseg.as<const char*>() );
				}
				if ( auto obase = tbl[ "base" ]; obase.is<const char*>() ) {
					base = str2xed_reg_enum_t( obase.as<const char*>() );
				}
				if ( auto oidx = tbl[ "idx" ]; oidx.is<const char*>() ) {
					index = str2xed_reg_enum_t( oidx.as<const char*>() );
					scale = 1;
				}
				if ( auto odisp = tbl[ "disp" ]; odisp.is<int32_t>() ) {
					disp = odisp.as<int32_t>();
				}
				if ( auto oscale = tbl[ "scale" ]; oscale.is<int32_t>() ) {
					scale = oscale.as<int32_t>();
				}
				return xed::mem( width_bits, seg, base, index, scale, disp );
			}
			return std::nullopt;
		};

		{
			auto tbl = lua.make_table();
			tbl[ "Parse" ] = [ ] ( std::string_view hex )  -> std::optional<xed::decoding>
			{ 
				if ( auto res = xed::decode64( from_hex( hex ) ) )
					return *res;
				else
					return std::nullopt;
			};
			tbl[ "ParseAll" ] = [ ] ( ulua::state_view L, std::string_view hex )
			{ 
				auto tbl = L.make_table();
				uint32_t tbl_it = 1;

				auto vec = from_hex( hex );

				auto it = vec.data();
				while ( auto ins = xed::decode64( it, vec.data() + vec.size() - it ) )
				{
					it += ins->length();
					tbl.at( tbl_it++, ulua::raw_t{} ) = *ins;
				}
				return tbl;
			};

			tbl[ "Dump" ] = [] ( std::string_view hex )
			{
				std::string res = {};
				auto vec = from_hex( hex );
				auto it = vec.data();
				while ( auto ins = xed::decode64( it, vec.data() + vec.size() - it ) )
				{
					res += xstd::fmt::str( "%04x: %s\n", it - vec.data(), ins->to_string( it - vec.data() ) );
					it += ins->length();
				}
				return res;
			};
			tbl[ "DumpFrom" ] = [] ( image_wrapper i, uint32_t a, uint32_t b )
			{
				std::string res = {};
				while ( a < b )
				{
					if ( auto ins = i.decode( a ) )
					{
						res += xstd::fmt::str( "%16llx: %s\n", i.img->base_address + a, ins->to_string( i.img->base_address + a ) );
						a += ins->length();
					}
					else
					{
						res += xstd::fmt::str( "%16llx: ???\n", i.img->base_address + a );
						break;
					}
				}
				return res;
			};
			tbl[ "IsJcc" ] = [ ] ( const char* n )
			{
				return xed::is_jcc( str2xed_iclass_enum_t( n ) );
			};
			tbl[ "new" ] = [ ] ( const char* icl, std::optional<ulua::object> o1, std::optional<ulua::object> o2, std::optional<ulua::object> o3 ) -> std::optional<xed::decoding>
			{
				auto op1 = o1.and_then( to_operand ), op2 = o2.and_then( to_operand ), op3 = o3.and_then( to_operand );
				auto cls = str2xed_iclass_enum_t( icl );

				xed::result<xstd::small_vector<uint8_t, xed::max_ins_len>> res;

				if ( !op1 ) {
					res = xed::encode64( cls ).encode();
				} else if ( !op2 ) {
					res = xed::encode64( cls, *op1 ).encode();
				} else if ( !op3 ) {
					res = xed::encode64( cls, *op1, *op2 ).encode();
				} else {
					res = xed::encode64( cls, *op1, *op2, *op3 ).encode();
				}

				if ( res ) {
					return *xed::decode64( *res );
				}
				return std::nullopt;
			};
			lua[ "Instruction" ] = std::move( tbl );
		}
		{
			auto tbl = lua.make_table();
			tbl[ "Remap" ] = [ ] ( const char* n, size_t offset, size_t length ) -> std::optional<std::string_view>
			{
				auto r = xed::remap_register( str2xed_reg_enum_t( n ), offset, length );
				if ( r != XED_REG_INVALID )
					return xstd::try_name_enum( r );
				else
					return std::nullopt;
			};
			tbl[ "Base" ] = [ ] ( const char* n ) -> std::optional<std::string_view>
			{
				auto r = xed::resolve_mapping( str2xed_reg_enum_t( n ) ).base_register;
				if ( r != XED_REG_INVALID )
					return xstd::try_name_enum( r );
				else
					return std::nullopt;
			};
			tbl[ "Offset" ] = [ ] ( const char* n ) -> std::optional<uint32_t>
			{
				auto r = xed::resolve_mapping( str2xed_reg_enum_t( n ) );
				if ( r.base_register != XED_REG_INVALID )
					return r.offset;
				else
					return std::nullopt;
			};
			tbl[ "Width" ] = [ ] ( const char* n ) -> std::optional<uint32_t>
			{
				auto r = xed::resolve_mapping( str2xed_reg_enum_t( n ) );
				if ( r.base_register != XED_REG_INVALID )
					return r.size;
				else
					return std::nullopt;
			};
			lua[ "Reg" ] = std::move( tbl );
		}
		{
			auto tbl = lua.make_table();
			tbl[ "new" ] = [ ] () { return shellcode{}; };
			tbl[ "Builder" ] = []() { return func_builder_wrapper{ std::make_shared<func_builder>() }; };
			tbl[ "From" ] = [ ] ( image_wrapper i, uint32_t rva_0, uint32_t rva_1 ) { return shellcode{ i.img, rva_0, rva_1 }; };
			lua[ "Code" ] = std::move( tbl );
		}
		{
			auto tbl = lua.make_table();
			tbl[ "crc32" ] = []( std::string_view str ) {
				xstd::crc32 hash = {};
				hash.add_bytes( (uint8_t*) str.data(), str.size() );
				return hash.digest();
			};
			lua[ "Util" ] = std::move( tbl );
		}
		{
			auto tbl = lua.make_table();
			tbl[ "new" ] = []( std::optional<image_wrapper> i ) { 
				vm::vcpu res{};
				if ( i ) res.img = i->img;
				return res;
			};
			lua[ "VM" ] = std::move( tbl );
		}
		{
			auto tbl = lua.make_table();
			tbl[ "ReadMarker" ] = [ ] ( const rule_wrapper& r ) -> uint32_t
			{
				if ( r.rule->traits & rule::s_marker )
					return ( ( marker* ) r.rule.get() )->last_seen_rva;
				else
					return 0;
			};
			tbl[ "Marker" ] = [ ] () -> rule_wrapper
			{
				return { std::make_shared<marker>() };
			};
			tbl[ "Pattern" ] = [ ] ( std::string_view value, std::optional<std::string_view> mask ) -> rule_wrapper
			{
				if ( mask )
					return { std::make_shared<pattern>( from_hex( value ), from_hex( *mask ) ) };
				else
					return { std::make_shared<pattern>( pattern::from( value ) ) };
			};
			tbl[ "Pad" ] = [ ] ( uint32_t count, std::optional<uint32_t> upperbound ) -> rule_wrapper
			{
				uint32_t a = upperbound ? count : 0;
				uint32_t b = upperbound ? upperbound.value() : count;
				return { std::make_shared<padding>( padding{ a, b } ) };
			};
			tbl[ "Filter" ] = [ ] ( ulua::function f ) -> rule_wrapper
			{
				return { std::make_shared<filter>( filter{ std::move( f ) } ) };
			};
			tbl[ "Aligned" ] = [ ] ( std::optional<uint32_t> boundary ) -> rule_wrapper
			{
				return { std::make_shared<aligned>( aligned{ boundary.value_or( 0x10 ) } ) };
			};
			tbl[ "Refs" ] = [ ] ( std::variant<uint32_t, rule_wrapper*, std::string_view> t, std::optional<std::string_view> format ) -> rule_wrapper
			{
				if ( t.index() == 0 ) {
					return { std::make_shared<refs_rva>( refs_rva{ std::get<0>( t ) } ) };
				} else if ( t.index() == 1 ) {
					return { std::make_shared<refs_pattern>( refs_pattern{ std::get<1>( t )->rule } ) };
				} else {
					auto text = std::get<2>( t );

					if ( format && *format == "utf16" ) {
						auto utf16 = xstd::utf_convert<wchar_t>( text );
						return { std::make_shared<refs_pattern>( refs_pattern{ std::make_shared<pattern>( std::span<const uint8_t>{( const uint8_t* ) utf16.data(), utf16.size() * 2} )} ) };
					} else {
						return { std::make_shared<refs_pattern>( refs_pattern{ std::make_shared<pattern>( std::span<const uint8_t>{( const uint8_t* ) text.data(), text.size() } )} ) };
					}
				}
			};
			tbl[ "Instruction" ] = [ ] ( std::variant<std::string_view, std::reference_wrapper<const xed::decoding>> ins, std::optional<uint8_t> extended_flags ) -> rule_wrapper
			{
				if ( ins.index() == 0 )
					return { std::make_shared<instruction>( instruction::from( std::get<0>( ins ), extended_flags.value_or( 0 ) ) ) };
				else
					return { std::make_shared<instruction>( std::get<1>( ins ), extended_flags.value_or( 0 ) ) };
			};
			tbl[ "AllImpl" ] = [ ] ( const ulua::stack_table& a ) -> rule_wrapper
			{
				auto result = std::make_shared<rule::all>();
				size_t max = ulua::length( a );
				for ( size_t i = 0; i != max; i++ )
					result->rule_list.emplace_back( a.at( i + 1, ulua::raw_t{} ).as<rule_wrapper>().get().rule );
				result->update();
				return rule_wrapper{ std::move( result ) };
			};
			tbl[ "AnyImpl" ] = [ ] ( const ulua::stack_table& a ) -> rule_wrapper
			{
				auto result = std::make_shared<rule::any>();
				size_t max = ulua::length( a );
				for ( size_t i = 0; i != max; i++ )
					result->rule_list.emplace_back( a.at( i + 1, ulua::raw_t{} ).as<rule_wrapper>().get().rule );
				result->update();
				return rule_wrapper{ std::move( result ) };
			};
			lua[ "Rule" ] = std::move( tbl );
		}

		// Log implementation.
		//
		lua[ "Log" ] = [&]( ulua::state_view L, std::string_view msg ) {
			if ( msg.ends_with( '\n' ) ) {
				msg.remove_suffix( 1 );
			}
			if ( !res.current_pattern.empty() ) {
				res.log += '[';
				res.log += res.current_pattern;
				res.log += "] ";
			}
			res.log += msg;
			res.log += '\n';
		};

		// Labels for debug.
		//
		if ( is_dev_mode ) {
			lua[ "AddLabel" ] = [ & ] ( uint64_t rva, std::string str ) {
				res.labels[ rva ] = std::move( str );
			};
			lua[ "AutoLabel" ] = [ & ] ( shellcode& code, std::string_view str ) {
				for ( auto& c : code.instructions ) {
					if ( c.dec.mem_base( 0 ) == XED_REG_RIP ) {
						uint32_t rva = c.rva + c.dec.mem_disp( 0 ).value() + c.dec.length();
						res.auto_labels[ rva ].emplace_back( str );
					}
				}
			};
		} else {
			lua[ "AddLabel" ] = [ ] () {};
			lua[ "AutoLabel" ] = [ ] () {};
		}
		lua["GetCurrentPattern"] = [ & ]() { return res.current_pattern; };

		// Result interface.
		//
		lua[ "Register" ] = [ & ] ( ulua::state_view L, std::string name, results::type_id type, ulua::function func, std::optional<std::string> type_details )
		{
			for( auto& e : res.entries )
				if ( e.name == name )
					ulua::error( L, "Duplicate registration for '%s'.", name.data() );

			auto& entry = res.entries.emplace_back();
			entry.name = std::move( name );
			entry.type_details = type_details.value_or( std::string{} );
			entry.type = type;
			entry.fn = std::move( func );
		};
		lua[ "Defer" ] = [ & ] ( ulua::state_view L, std::string name, results::type_id type, std::optional<std::string> type_details )
		{
			for( auto& e : res.entries )
				if ( e.name == name )
					ulua::error( L, "Duplicate registration for '%s'.", name.data() );
			auto& entry = res.entries.emplace_back();
			entry.name = std::move( name );
			entry.type_details = type_details.value_or( std::string{} );
			entry.type = type;
			entry.state = results::running;
		};
		lua[ "Assign" ] = [ & ] ( ulua::state_view L, std::string name, ulua::stack_object value )
		{
			auto it = std::find_if( res.entries.begin(), res.entries.end(), [ & ] ( auto& e ) { return e.name == name; } );
			if ( it == res.entries.end() )
				ulua::error( L, "No registered result '%s'.", name.data() );
			assign_result( &target, res, *it, value );
		};
		lua[ "runas" ] = [&]( ulua::state_view L, std::string_view name, ulua::function fn ) {
			auto it = std::find_if( res.entries.begin(), res.entries.end(), [&]( auto& e ) { return e.name == name; } );
			if ( it == res.entries.end() )
				ulua::error( L, "No registered result '%s'.", name.data() );
			return run_result( &target, res, *it, fn );
		};
		lua[ "request" ] = [ & ] ( ulua::state_view L, std::string_view name ) 
			-> std::variant<std::string, int64_t, ulua::table>
		{
			auto it = std::find_if( res.entries.begin(), res.entries.end(), [ & ] ( auto& e ) { return e.name == name; } );
			if ( it == res.entries.end() )
				ulua::error( L, "No registered result '%s'.", name.data() );
			
			if ( it->state == results::running )
				ulua::error( L, "Recursive dependency '%s'.", name.data() );
			if ( it->state == results::pending )
				request_result( &target, res, *it );
			if ( it->state == results::complete )
			{
				switch ( it->type )
				{
					case results::none:
					{
						return 0ll;
					}
					case results::code:
					{
						return to_hex( it->value_raw );
					}
					case results::arr:
					{
						ulua::table tbl = {};
						for ( size_t i = 0; ( i + 8 ) < it->value_raw.size(); i += 8 )
							tbl.at( ( i / 8 ) + 1, ulua::raw_t{} ) = *( const int64_t* ) &it->value_raw[ i ];
						return tbl;
					}
					default:
						return it->value_imm;
				}
			}
			else
			{
				ulua::error( L, "Requesting failed result '%s'.", name.data() );
			}
		};

		// Numeric helpers.
		//
		lua[ "popcnt" ] = [ ] ( uint32_t u ) { return xstd::popcnt( u ); };
	}
	
	// Loads a script.
	//
	void engine::load_script( std::string_view data, const char* name )
	{
		std::string tmp;
		if ( data.starts_with( "--F:" ) ) {
			if ( auto end = data.find( '\n' ); end != std::string::npos ) {
				auto file = data.substr( 4, end - 4 );
				tmp = std::string{ file };
				name = tmp.c_str();
				data = data.substr( end + 1 );
			}
		}
		
		if ( auto r = lua.script( data, name ); r.is_error() )
			res.error_log += xstd::fmt::str( "Error while loading '%s': %s\n", name, r.error().c_str() );
	}

	// Loads a package.
	//
	void engine::load_package( const package* pkg )
	{
		ulua::table module_tbl;
		if ( lua[ "____modules" ].is<std::nullopt_t>() ) {
			module_tbl = lua.make_table();
			lua[ "____modules" ] = module_tbl;
		} else {
			module_tbl = lua[ "____modules" ];
		}
		size_t i = 1;
		ulua::table package_tbl = lua.make_table();
		lua[ "__requestedPackage" ] = package_tbl;

		std::vector<std::pair<std::string_view, std::string>> scripts;
		pkg->for_each( [&]( std::string_view data ) {
			std::string name;
			if ( data.starts_with( "--F:" ) ) {
				if ( auto end = data.find( '\n' ); end != std::string::npos ) {
					auto file = data.substr( 4, end - 4 );
					name = std::string{ file };
					data = data.substr( end + 1 );
				}
			}
			if ( name.empty() ) {
				load_script( data );
			} else {
				if ( auto r = lua.load( data, name.c_str() ); r.is_error() ) {
					res.error_log += xstd::fmt::str( "[%s] Loading script failed: %s\n", name, r.error() );
				} else {
					module_tbl.at( name, ulua::raw_t{} ) = std::move( r );
					package_tbl.at( i++, ulua::raw_t{} ) = name;
				}
			}
		} );

		auto org_require = lua[ "request" ].as<ulua::object>();
		if ( auto load_pending = lua[ "__loadPending" ]; load_pending.is<ulua::function>() ) {
			if ( auto r = load_pending(); r.is_error() ) {
				res.error_log += xstd::fmt::str( "Loading package failed: %s\n", r.error().c_str() );
			}
		}
		lua[ "require" ] = org_require;
	}

	// Sets the target image.
	//
	void engine::set_target( std::span<uint8_t> dump ) 
	{
		// Create the image.
		//
		std::string deobfuscator = {};
		if ( auto&& dobf = lua[ "DEOBFUSCATOR" ]; dobf.is<std::string>() )
			deobfuscator = dobf.as<std::string>();
		target = image::load( dump, deobfuscator );
	}

	// Runs all scripts and returns the final results.
	//
	results& engine::run()
	{
		// If there is an error already, fast return.
		//
		if ( !res.success() )
			return res;

		// Set the main image, undefine import and Register.
		//
		lua[ "Image" ] =    image_wrapper{ &target };
		lua[ "Register" ] = ulua::nil;

		// Request every result.
		//
		for ( auto& r : res.entries )
		{
			if ( r.state != results::running )
				request_result( &target, res, r );
			r.fn.reset();
		}
		for ( auto& r : res.entries )
		{
			if ( r.state == results::running )
			{
				r.state = results::failed;
				res.error_log += xstd::fmt::str( "[%s] Deferred result was not set.\n", r.name );
			}
		}

		
		// Close the lua state to make sure it is not accessed again.
		//
		lua.close();
		return res;
	}
};