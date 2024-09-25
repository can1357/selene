#include <flash/image.hpp>
#include <flash/deobf.hpp>
#include <nt/image.hpp>

namespace flash
{
	// Converts from unwind register id to XED register id.
	//
	static xed::reg_t from_unwind_id( win::unwind_register_id reg )
	{
		// Handle XMM:
		//
		if ( win::unwind_register_id::amd64_xmm0 <= reg && reg <= win::unwind_register_id::amd64_xmm15 )
		{
			size_t xmm_idx = ( size_t ) reg - ( size_t ) win::unwind_register_id::amd64_xmm0;
			return ( xed::reg_t ) ( XED_REG_XMM0 + xmm_idx );
		}

		// Handle GP:
		//
		switch ( reg )
		{
			case win::unwind_register_id::amd64_rax:    return XED_REG_RAX;
			case win::unwind_register_id::amd64_rcx:    return XED_REG_RCX;
			case win::unwind_register_id::amd64_rdx:    return XED_REG_RDX;
			case win::unwind_register_id::amd64_rbx:    return XED_REG_RBX;
			case win::unwind_register_id::amd64_rsp:    return XED_REG_RSP;
			case win::unwind_register_id::amd64_rbp:    return XED_REG_RBP;
			case win::unwind_register_id::amd64_rsi:    return XED_REG_RSI;
			case win::unwind_register_id::amd64_rdi:    return XED_REG_RDI;
			case win::unwind_register_id::amd64_r8:     return XED_REG_R8;
			case win::unwind_register_id::amd64_r9:     return XED_REG_R9;
			case win::unwind_register_id::amd64_r10:    return XED_REG_R10;
			case win::unwind_register_id::amd64_r11:    return XED_REG_R11;
			case win::unwind_register_id::amd64_r12:    return XED_REG_R12;
			case win::unwind_register_id::amd64_r13:    return XED_REG_R13;
			case win::unwind_register_id::amd64_r14:    return XED_REG_R14;
			case win::unwind_register_id::amd64_r15:    return XED_REG_R15;
			case win::unwind_register_id::amd64_rip:    return XED_REG_RIP;
			case win::unwind_register_id::amd64_eflags: return XED_REG_RFLAGS;
			case win::unwind_register_id::amd64_seg_cs: return XED_REG_CS;
			case win::unwind_register_id::amd64_seg_ss: return XED_REG_SS;
			default:                                    return XED_REG_INVALID;
		}
	}

	// Loads an image, input must have been remapped using flash::dump.
	//
	image image::load( std::span<uint8_t> img_data, std::string_view deobfuscator )
	{
		image result = {};
		result.data = img_data;

		auto* img = ( const win::image_x64_t* ) result.data.data();
		result.base_address = img->get_nt_headers()->optional_header.image_base;

		// Collect each section:
		//
		for ( const win::section_header_t& scn : img->get_nt_headers()->sections() )
		{
			// Create the section.
			//
			auto& sscn = result.section_list.emplace_back();
			sscn.name = scn.name.to_string();
			sscn.rva =  scn.virtual_address;
			sscn.rva_limit = scn.virtual_address + scn.virtual_size;
			if ( scn.characteristics.mem_execute )
				sscn.type = section::text;
			else if ( !scn.characteristics.mem_write )
				sscn.type = section::rdata;
			else
				sscn.type = section::unknown;

			// Invalidate VM sections.
			//
			if ( scn.name.to_string().starts_with( ".UBX" ) ||
				  scn.name.to_string().starts_with( ".v" ) ||
				  scn.name.to_string().starts_with( ".V" ) ||
				  scn.name.to_string().starts_with( ".stub" ) ||
				  !isalpha( scn.name.short_name[ 1 ] ) )
				sscn.type = section::unknown;
		}

		// Run deobfuscator.
		//
		result.deobfuscate( deobfuscator );

		// Run section analysis.
		//
		for ( auto& scn : result.section_list )
			scn.analyze( &result );

		// Sort section list by RVA.
		//
		std::sort( result.section_list.begin(), result.section_list.end(), [ ] ( const section& a, const section& b ) { return a.rva < b.rva; } );
		return result;
	}

	// Deobfuscation entry point.
	//
	bool image::deobfuscate( std::string_view kind ) {
	   // ...
		return true;
	}

	// Gets information about a function.
	//
	std::optional<function_info> image::query_function( uint32_t rva ) const {
		auto [fn, uw] = get_unwind_info( rva );
		if ( !fn || !uw ) return std::nullopt;

		function_info result = {
			.rva_begin = fn->rva_begin,
			.rva_end =   fn->rva_end,
		};
		for ( auto it = 0; it != uw->num_uw_codes; ) {
			auto& uwi = uw->unwind_code[ it ];
			if ( !can_read( &uwi ) ) {
				return std::nullopt;
			}

			// Skip epilogue information.
			//
			if ( uwi.unwind_op == win::unwind_opcode::epilog ) {
				++it;
				continue;
			}


			bool success = true;
			success &= win::visit_amd64_unwind( uwi, [ & ] <typename T> ( const T * code ) {
				// Forward the iterator, if skip flag is set return.
				//
				it += code->get_size();

				// Handled cases:
				//
				if constexpr ( std::is_same_v<T, win::amd64_unwind_push_t> ) {
					result.slots.emplace_back( result.sp, from_unwind_id( code->get_register() ) );
					result.sp += 8;
				} else if constexpr ( std::is_same_v<T, win::amd64_unwind_alloc_t> ) {
					result.sp += code->get_allocation_size();
				} else if constexpr ( std::is_same_v<T, win::amd64_unwind_set_frame_t> ) {
					result.frame_reg = from_unwind_id( uw->frame_register );
					result.frame_offset = result.sp + uw->get_frame_offset();
				} else if constexpr ( std::is_same_v<T, win::amd64_unwind_save_gp_t> ) {
					result.slots.emplace_back( result.sp + code->get_sp_offset(), from_unwind_id( code->get_register() ) );
				} else if constexpr ( std::is_same_v<T, win::amd64_unwind_save_xmm_t> ) {
					result.slots.emplace_back( result.sp + code->get_sp_offset(), from_unwind_id( code->get_register() ) );
				}
				// Ignored cases:
				//
				else if constexpr ( std::is_same_v<T, win::amd64_unwind_nop_t> ) {
				}
				// Unexpected cases:
				// - Machine frame is included since it should not be a part of the prologue region.
				//
				else {
					success = false;
				}
			} );
			if ( !success ) return std::nullopt;
		}
		return result;
	}

	// Gets the unwind information given an RVA.
	//
	std::pair<const win::runtime_function_t*, const win::unwind_info_t*> image::get_unwind_info( uint32_t rva ) const {
		auto* img = (const win::image_x64_t*) data.data();
		if ( auto& pdata = img->get_nt_headers()->optional_header.data_directories.exception_directory; pdata.present() ) {
			win::exception_directory exdir{ data.data() + pdata.rva, pdata.size };
			if ( auto it = exdir.find_overlapping( rva ); it != exdir.end() ) {
				auto uw = (const win::unwind_info_t*) ( data.data() + it->rva_unwind_info );
				if ( !can_read( uw ) ) {
					return {};
				} else if ( !uw->chained ) {
					return { it, uw };
				}

				for ( size_t i = 0; i != 16; i++ ) {
					auto* it2 = &uw->chained_function_entry();
					if ( !can_read( it2 ) ) {
						break;
					}
					uw = (const win::unwind_info_t*) ( data.data() + it2->rva_unwind_info );
					if ( can_read( uw ) && !uw->chained ) {
						return { it2, uw };
					}
				}
			}
		}
		return {};
	}

	// Attempts to find function prologue.
	//
	std::optional<uint32_t> image::find_prologue( uint32_t rva ) const
	{
		// Try to find the prologue using .pdata.
		//
		if ( auto [fn, uw] = get_unwind_info( rva ); fn ) {
			return fn->rva_begin;
		}

		// Try to find the prologue using references.
		//
		{
			uint32_t max = 0;
			for ( auto* map : { &xref_map_code_call, &xref_map_data } )
			{
				auto it = map->upper_bound( rva );
				while ( it != map->begin() )
				{
					--it;
					if ( it->first & 0xF )
						continue;
					max = std::max( it->first, max );
					break;
				}
			}
			if ( max != rva )
				return max;
		}
		return std::nullopt;
	}
};
