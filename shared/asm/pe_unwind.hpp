#pragma once
#include <xstd/intrinsics.hpp>
#include <xstd/type_helpers.hpp>
#include <xedpp.hpp>
#include <optional>
#include <vector>
#include <nt/directories/dir_exceptions.hpp>

namespace xxed
{
	// Converts from unwind register id to XED register id.
	//
	inline xed::reg from_unwind_id( win::unwind_register_id reg )
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

	// Creates a prologue or epilogue based on the unwind information range given.
	//
	template<bool is_prologue>
	inline std::optional<std::vector<uint8_t>> generate_unwind_code( const win::unwind_info_t* info, size_t offset )
	{
		// Fail if chained.
		//
		if ( info->chained )
			return std::nullopt;

		// Iterate the unwind opcodes:
		//
		std::vector<uint8_t> output;
		for ( auto it = 0; it != info->num_uw_codes; )
		{
			// Skip epilogue information.
			//
			if ( info->unwind_code[ it ].unwind_op == win::unwind_opcode::epilog )
			{
				++it;
				continue;
			}

			// Skip if opcode is after the offset we care about.
			//
			uint16_t off = info->unwind_code[ it ].code_offset;
			bool skip = off > offset;
			if ( !off ) return output;

			// Declare the handler:
			//
			bool success = true;
			encoding req = {};
			auto visitor = [ & ] <typename T> ( const T* code )
			{
				// Forward the iterator, if skip flag is set return.
				//
				it += code->get_size();
				if ( skip ) return;

				// Handled cases:
				//
				if constexpr ( std::is_same_v<T, win::amd64_unwind_push_t> )
				{
					if constexpr( is_prologue )
						req = xed::encode64( XED_ICLASS_PUSH, from_unwind_id( code->get_register() ) );
					else
						req = xed::encode64( XED_ICLASS_POP, from_unwind_id( code->get_register() ) );
				}
				else if constexpr ( std::is_same_v<T, win::amd64_unwind_alloc_t> )
				{
					if constexpr ( is_prologue )
						req = xed::encode64( XED_ICLASS_SUB, xed::reg{ XED_REG_RSP }, xed::imm0{ code->get_allocation_size() } );
					else
						req = xed::encode64( XED_ICLASS_ADD, xed::reg{ XED_REG_RSP }, xed::imm0{ code->get_allocation_size() } );
				}
				else if constexpr ( std::is_same_v<T, win::amd64_unwind_set_frame_t> )
				{
					if constexpr ( is_prologue )
						req = xed::encode64( XED_ICLASS_LEA, from_unwind_id( info->frame_register ), xed::qword_ptr( xed::reg{ XED_REG_RSP } + info->get_frame_offset() ) );
					else
						req = xed::encode64( XED_ICLASS_LEA, xed::reg{ XED_REG_RSP }, xed::qword_ptr( from_unwind_id( info->frame_register ) - info->get_frame_offset() ) );
				}
				else if constexpr ( std::is_same_v<T, win::amd64_unwind_save_gp_t> )
				{
					if constexpr ( is_prologue )
						req = xed::encode64( XED_ICLASS_MOV, xed::qword_ptr( XED_REG_RSP ) + code->get_sp_offset(), from_unwind_id( code->get_register() ) );
					else
						req = xed::encode64( XED_ICLASS_MOV, from_unwind_id( code->get_register() ), xed::qword_ptr( XED_REG_RSP ) + code->get_sp_offset() );
				}
				else if constexpr ( std::is_same_v<T, win::amd64_unwind_save_xmm_t> )
				{
					if constexpr ( is_prologue )
						req = xed::encode64( XED_ICLASS_MOVUPS, xed::xmmword_ptr( XED_REG_RSP ) + code->get_sp_offset(), from_unwind_id( code->get_register() ) );
					else
						req = xed::encode64( XED_ICLASS_MOVUPS, from_unwind_id( code->get_register() ), xed::xmmword_ptr( XED_REG_RSP ) + code->get_sp_offset() );
				}
				// Ignored cases:
				// - XMM is ignored since it shouldn't be clobbered by prologue code.
				//
				else if constexpr ( std::is_same_v<T, win::amd64_unwind_nop_t> )
				{
					skip = true;
				}
				// Unexpected cases:
				// - Machine frame is included since it should not be a part of the prologue region.
				//
				else
				{
					success = false;
				}
			};
		
			// Process the opcode, fail on unexpected case.
			//
			success &= win::visit_amd64_unwind( info->unwind_code[ it ], visitor );
			if ( !success ) return std::nullopt;

			// Encode the reversed instruction if not skipped.
			//
			if ( skip ) continue;
			auto vec = req.encode();
			if ( !vec ) return std::nullopt;
			output.insert( is_prologue ? output.begin() : output.end(), vec->begin(), vec->end() );
		}
		return output;
	}
	static std::optional<std::vector<uint8_t>> generate_prologue( const win::unwind_info_t* info, size_t offset ) { return generate_unwind_code<true>( info, offset ); }
	static std::optional<std::vector<uint8_t>> generate_epilogue( const win::unwind_info_t* info, size_t offset ) { return generate_unwind_code<false>( info, offset ); }
};