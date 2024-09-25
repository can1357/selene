#pragma once
#include <xstd/intrinsics.hpp>
#include <xstd/type_helpers.hpp>
#include <xstd/assert.hpp>
#include <xedpp.hpp>
#include <vector>
#include <unordered_map>
#include <unordered_set>

namespace xxed
{
	using namespace xed;

	// Rounds the given region down/up based on the instruction boundaries.
	//
	inline size_t round_ins_boundary( const uint8_t* target, size_t length, bool up )
	{
		size_t n = 0;
		while ( true )
		{
			auto ins = decode64( target + n );
			if ( !ins )
				return 0;
			n += ins->length();
			if ( n >= length )
				return up ? n : n - ins->length();
		}
	}

	// Relocates a given code region to a new address, returns empty vector on failure.
	//
	inline std::vector<uint8_t> relocate_code( const uint8_t* from, const uint8_t* to, size_t length )
	{
		std::vector<uint8_t> result = {};
		std::unordered_map<size_t, size_t, xstd::hasher<>> ins_mapping;
		std::unordered_map<size_t, size_t, xstd::hasher<>> reloc_requests;

		// Enumerate each instruction:
		//
		for ( size_t rip = 0; rip < length; )
		{
			// Decode the instruction, insert the mapping, update rip.
			//
			auto ins = decode64( from + rip );
			if ( !ins )
				return {};
			ins_mapping[ rip ] = result.size();
			rip += ins->length();

			// If relative jump/call:
			//
			auto cl = ins->iclass();
			if ( ( cl == XED_ICLASS_JMP || cl == XED_ICLASS_CALL_NEAR ) && ins->has_relbr() != 0 )
			{
				// Convert into:
				// - JMP/CALL [rip] 
				result.resize( result.size() + 6 + 2 + 8, 0 );
				uint8_t* begin = result.data() + result.size() - ( 6 + 2 + 8 );
				begin[ 0 ] = 0xFF;
				begin[ 1 ] = cl == XED_ICLASS_JMP ? 0x25 : 0x15;
				begin[ 2 ] = 2;
				begin[ 6 ] = 0xEB;
				begin[ 7 ] = 0x08;

				// - db &loc
				//
				reloc_requests.emplace(
					result.size() - 8,
					rip + ins->relbr()
				);
				continue;
			}
			// If special jmp [rip+0]:
			//
			if ( cl == XED_ICLASS_JMP && ins->length() == 6 && !memcmp( from + rip - 6, "\xFF\x25\x00\x00\x00\x00", 6 ) )
			{
				// Read the address and increment RIP by another 8.
				uint64_t adr = *( uint64_t* ) ( from + rip );
				rip += 8;
				// - JMP [rip] 
				result.resize( result.size() + 6 + 8, 0 );
				uint8_t* begin = result.data() + result.size() - ( 6 + 8 );
				begin[ 0 ] = 0xFF;
				begin[ 1 ] = 0x25;
				// - db &loc
				//
				reloc_requests.emplace( result.size() - 8, adr );
				continue;
			}
			// If conditional jump:
			//
			if ( is_jcc( cl ) )
			{
				// Convert into:
				// - JCC b
				auto rb = ins->relbr();
				ins->set_relbr( 6 );
				auto cpy = *encoding{ *ins }.encode();
				result.insert( result.end(), cpy.begin(), cpy.end() );
				// - a: JMP [rip+store]
				// - b: JMP [rip+store+8]
				result.resize( result.size() + 6 * 2 + 8 * 2, 0 );
				uint8_t* begin = result.data() + result.size() - 6 * 2 - 8 * 2;
				begin[ 0 ] = 0xFF;
				begin[ 1 ] = 0x25;
				*( int32_t* ) &begin[ 2 ] = 6;
				begin[ 6 ] = 0xFF;
				begin[ 7 ] = 0x25;
				*( int32_t* ) &begin[ 8 ] = 8;
				// - store: { db &not_taken, db &taken }
				//
				reloc_requests.emplace(
					result.size() - 8 * 2,
					rip
				);
				reloc_requests.emplace(
					result.size() - 8,
					rip + rb
				);
				continue;
			}

			// Get a list of used registers.
			//
			uint32_t   used_reg_mask = 0;
			xed::reg_t used_reg_repl[ 16 ] = {};

			static constexpr auto reg_to_id = [ ] ( xed::reg_t k ) FORCE_INLINE -> int {
				if ( XED_REG_GPR64_FIRST <= k && k <= XED_REG_GPR64_LAST ) {
					return k - XED_REG_GPR64_FIRST;
				} else if ( k == XED_REG_RIP ) {
					return 17;
				} else {
					return -1;
				}
			};

			auto find_used_reg = [ & ]( xed::reg_t kr ) FORCE_INLINE -> xed::reg_t* {
				int k = reg_to_id( kr );
				if ( k > 0 && xstd::bit_test( used_reg_mask, k ) ) {
					return &used_reg_repl[ k ];
				}
				return nullptr;
			};
			auto set_used_reg = [ & ]( xed::reg_t kr, xed::reg_t v ) FORCE_INLINE {
				int k = reg_to_id( kr );
				if ( k < 0 ) return;
				if ( v == XED_REG_INVALID ) {
					xstd::bit_reset( used_reg_mask, k );
				} else {
					xstd::bit_set( used_reg_mask, k );
					used_reg_repl[ k ] = v;
				}
			};

			for ( auto operand : ins->operands() )
			{
				auto operand_name = operand->name();
				switch ( operand_name )
				{
					// Register types:
					//
					case XED_OPERAND_REG0 ... XED_OPERAND_REG8:
					{
						auto reg = ins->reg( operand_name );

						// Skip suppressed RIP.
						//
						if ( operand->is_suppressed() && reg == XED_REG_RIP )
							continue;

						reg = extend_register( reg );
						set_used_reg( reg, reg );
						break;
					}
					// Memory types:
					//
					case XED_OPERAND_MEM0:
					case XED_OPERAND_MEM1:
					case XED_OPERAND_AGEN:
					{
						size_t memop_idx = operand_name == XED_OPERAND_MEM1 ? 1 : 0;
						auto base = extend_register( ins->mem_base( memop_idx ) );
						auto index = extend_register( ins->mem_index( memop_idx ) );
						set_used_reg( base,  base );
						set_used_reg( index, index );
						break;
					}
					default:
						break;
				}
			}

			// If RIP is not used, do not modify the code.
			//
			if ( !find_used_reg( XED_REG_RIP ) )
			{
				result.insert(
					result.end(),
					from + rip - ins->length(),
					from + rip
				);
				continue;
			}

			// Determine the registers we have left.
			//
			uint32_t free_reg_mask = xstd::fill_bits( 16 ) & ~used_reg_mask;
			xstd::bit_reset( free_reg_mask, reg_to_id( XED_REG_RSP ) );
			auto pop_free_reg = [ & ] () FORCE_INLINE -> xed::reg_t {
				auto first_set = xstd::lsb( free_reg_mask );
				if ( first_set == xstd::bit_npos ) return XED_REG_INVALID;
				xstd::bit_reset( free_reg_mask, first_set );
				return xed::reg_t( XED_REG_GPR64_FIRST + first_set );
			};

			// Handle JMP [RIP+X] and CALL [RIP+X] specially:
			//
			if ( cl == XED_ICLASS_JMP || cl == XED_ICLASS_CALL_NEAR )
			{
				auto tmp = pop_free_reg();

				// push tmp
				auto p = encode64( XED_ICLASS_PUSH, xed::reg{ tmp } ).encode();
				if ( !p ) return {};
				result.insert( result.end(), p->begin(), p->end() );

				// if call:
				if ( cl == XED_ICLASS_CALL_NEAR )
				{
					// push [rsp]
					result.insert( result.end(), { 0xFF, 0x34, 0x24 } );

					// mov reg, TX(#rip)
					auto s = encode64( XED_ICLASS_MOV, xed::reg{ tmp }, xed::imm0u{ ( uint64_t ) from + rip, 64 } ).encode();
					if ( !s ) return {};
					result.insert( result.end(), s->begin(), s->end() );
					fassert( s->size() >= 9 );
					reloc_requests.emplace(
						result.size() - 8,
						rip + ins->relbr()
					);

					// mov [rsp+8], reg
					auto x = encode64( XED_ICLASS_XCHG, xed::qword_ptr{ XED_REG_RSP } + 8, xed::reg{ tmp } ).encode();
					if ( !x ) return {};
					result.insert( result.end(), x->begin(), x->end() );
				}

				// mov reg, #rip
				auto s = encode64( XED_ICLASS_MOV, xed::reg{ tmp }, xed::imm0u{ ( uint64_t ) from + rip, 64 } ).encode();
				if ( !s ) return {};
				result.insert( result.end(), s->begin(), s->end() );

				// mov reg, [reg+X]
				auto mem = ins->mem( 0 );
				fassert( mem.base() == XED_REG_RIP && mem.width() == 8 );
				mem.set_base( tmp );
				auto m = encode64( XED_ICLASS_MOV, xed::reg{ tmp }, mem ).encode();
				if ( !m ) return {};
				result.insert( result.end(), m->begin(), m->end() );

				// xchg reg, [rsp]
				auto x = encode64( XED_ICLASS_XCHG, xed::reg{ tmp }, xed::qword_ptr{ XED_REG_RSP } ).encode();
				if ( !x ) return {};
				result.insert( result.end(), x->begin(), x->end() );

				// retn
				result.push_back( 0xC3 );
				continue;
			}
			// Handle POP [RIP+X] and PUSH [RIP+X] specially:
			//
			else if ( cl == XED_ICLASS_PUSH )
			{
				auto tmp = pop_free_reg();

				// push reg
				auto p = encode64( XED_ICLASS_PUSH, xed::reg{ tmp } ).encode();
				if ( !p ) return {};
				result.insert( result.end(), p->begin(), p->end() );

				// mov reg, #rip
				auto s = encode64( XED_ICLASS_MOV, xed::reg{ tmp }, xed::imm0u{ ( uint64_t ) from + rip, 64 } ).encode();
				if ( !s ) return {};
				result.insert( result.end(), s->begin(), s->end() );

				// mov reg, [reg+X]
				auto mem = ins->mem( 0 );
				fassert( mem.base() == XED_REG_RIP );
				fassert( mem.width() == 8 /*TODO: FIXME FOR PUSH WORD PTR [RIP+X]*/ );
				mem.set_base( tmp );
				auto val_reg = remap_register( tmp, 0, mem.width() );
				auto m = encode64( XED_ICLASS_MOV, xed::reg{ val_reg }, mem ).encode();
				if ( !m ) return {};
				result.insert( result.end(), m->begin(), m->end() );

				// xchg reg, [rsp]
				auto x = encode64( XED_ICLASS_XCHG, xed::reg{ tmp }, xed::qword_ptr{ XED_REG_RSP } ).encode();
				if ( !x ) return {};
				result.insert( result.end(), x->begin(), x->end() );
				continue;
			}
			else if ( cl == XED_ICLASS_POP )
			{
				auto tmp = pop_free_reg();
				auto mem = ins->mem( 0 );
				fassert( mem.width() == 8 /*TODO: FIXME FOR POP WORD PTR [RIP+X]*/ );

				// xchg reg, [rsp]
				auto x = encode64( XED_ICLASS_XCHG, xed::reg{ tmp }, xed::qword_ptr{ XED_REG_RSP } ).encode();
				if ( !x ) return {};
				result.insert( result.end(), x->begin(), x->end() );

				// push reg
				auto p = encode64( XED_ICLASS_PUSH, xed::reg{ tmp } ).encode();
				if ( !p ) return {};
				result.insert( result.end(), p->begin(), p->end() );

				// mov reg, #rip
				auto s = encode64( XED_ICLASS_MOV, xed::reg{ tmp }, xed::imm0u{ ( uint64_t ) from + rip, 64 } ).encode();
				if ( !s ) return {};
				result.insert( result.end(), s->begin(), s->end() );

				// pop [reg+X]
				fassert( mem.base() == XED_REG_RIP );
				mem.set_base( tmp );
				auto m = encode64( XED_ICLASS_POP, xed::reg{ tmp }, mem ).encode();
				if ( !m ) return {};
				result.insert( result.end(), m->begin(), m->end() );

				// pop reg
				auto c = encode64( XED_ICLASS_POP, xed::reg{ tmp } ).encode();
				if ( !c ) return {};
				result.insert( result.end(), c->begin(), c->end() );
				continue;
			}

			// Allocate space for RSP and RIP on demand.
			//
			xed::reg new_rsp = {};
			xed::reg new_rip = {};
			for ( auto reg : { XED_REG_RSP, XED_REG_RIP } )
			{
				if ( auto it = find_used_reg( reg ) )
				{
					// Pop a register and assign it to be a shadow counterpart for current one.
					//
					xed::reg_t reg_new = pop_free_reg();
					fassert( reg_new != XED_REG_INVALID );
					*it = reg_new;

					// Push the register.
					//
					auto p = encode64( XED_ICLASS_PUSH, xed::reg{ reg_new } ).encode();
					if ( !p ) return {};
					result.insert( result.end(), p->begin(), p->end() );

					// Set the value.
					//
					xed::result<xstd::small_vector<uint8_t, max_ins_len>> s;
					if ( reg == XED_REG_RSP )
					{
						new_rsp = reg_new;
						s = encode64( XED_ICLASS_LEA, xed::reg{ reg_new }, xed::qword_ptr{ XED_REG_RSP } + 8 ).encode();
					}
					else
					{
						new_rip = reg_new;
						s = encode64( XED_ICLASS_MOV, xed::reg{ reg_new }, xed::imm0u{ ( uint64_t ) from + rip, 64 } ).encode();
					}
					if ( !s ) return {};
					result.insert( result.end(), s->begin(), s->end() );
				}
			}

			// Convert the operands:
			//
			bool rsp_changed = false;
			auto cvt_reg = [ & ] ( xed::reg_t reg, bool written = false )
			{
				auto [base, off, sz] = resolve_mapping( reg );

				if ( written && xed::is_sp( base ) )
					rsp_changed = true;

				auto it = find_used_reg( base );
				if ( it && *it != base )
					return remap_register( *it, off, sz );
				else
					return reg;
			};

			xed::encoding enc = { *ins };
			for ( const xed::operand* operand : enc.operands() )
			{
				if ( operand->is_suppressed() ) continue;

				xed::op_name_t operand_name = operand->name();
				if ( XED_OPERAND_REG0 <= operand_name && operand_name <= XED_OPERAND_REG8 )
				{
					enc.set_reg( operand->name(), cvt_reg( enc.reg( operand_name ), operand->written() ) );
				}
				else if ( operand_name == XED_OPERAND_MEM0 || operand_name == XED_OPERAND_MEM1 || operand_name == XED_OPERAND_AGEN )
				{
					size_t idx = operand_name == XED_OPERAND_MEM1 ? 1 : 0;
					
					auto mem = enc.mem( idx );
					mem.set_base( cvt_reg( mem.base(), false ) );
					mem.set_index( cvt_reg( mem.index(), false ) );
					enc.set_mem( idx, mem );
				}
			}

			// Create the new instruction and insert it.
			//
			auto cd = enc.encode();
			if ( !cd ) return {};
			result.insert( result.end(), cd->begin(), cd->end() );

			// Cleanup.
			//
			if ( new_rip.value() != XED_REG_INVALID )
			{
				auto p = encode64( XED_ICLASS_POP, new_rip ).encode();
				if ( !p ) return {};
				result.insert( result.end(), p->begin(), p->end() );
			}
			if ( new_rsp.value() != XED_REG_INVALID )
			{
				if ( rsp_changed )
				{
					auto p = encode64( XED_ICLASS_XCHG, new_rsp, xed::qword_ptr{ XED_REG_RSP } ).encode();
					if ( !p ) return {};
					result.insert( result.end(), p->begin(), p->end() );
					result.push_back( 0x5C ); // POP RSP
				}
				else
				{
					auto p = encode64( XED_ICLASS_POP, new_rsp ).encode();
					if ( !p ) return {};
					result.insert( result.end(), p->begin(), p->end() );
				}
			}
		}

		// Handle relocations:
		//
		for ( auto& [dst, src] : reloc_requests )
		{
			const void** p = ( const void** ) ( dst + result.data() );
			if ( auto it = ins_mapping.find( src ); it != ins_mapping.end() )
				*p = to + it->second;
			else
				*p = from + src;
		}

		// Return the result.
		//
		return result;
	}
};