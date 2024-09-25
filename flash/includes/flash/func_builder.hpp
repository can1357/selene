#pragma once
#include <flash/shellcode.hpp>

namespace flash {
	// Monotonic counter for generating unique tags.
	//
	inline std::atomic<uint32_t> monotonic_counter = 0;

	struct basic_block : shellcode {
		std::vector<basic_block*> successors;
		std::vector<basic_block*> predecessors;

		xed::iclass_t branch_type = XED_ICLASS_INVALID;
		xed::reg_t    switch_reg =  XED_REG_INVALID;

		mutable uint32_t current_tag = 0;
		mutable uintptr_t temporary = 0;

		uint32_t rva = 0;
		std::vector<uint8_t> codegen;
		xstd::exception      codegen_error = std::nullopt;
		size_t               codegen_offset = std::string::npos;
		std::vector<std::pair<size_t, basic_block*>> relocs; // null target = epilogue

		basic_block( uint32_t rva, const shellcode& block ) : shellcode( block ), rva( rva ) {}

		// Enumerates each successor block.
		//
		template<typename F>
		void recurse( F&& fn, bool dfs, uint32_t tag = monotonic_counter++ ) const {
			for ( auto& succ : successors ) {
				if ( succ->current_tag == tag ) continue; // Skip visited blocks.
				succ->current_tag = tag;
				fn(succ);
				if ( dfs ) succ->recurse( fn, dfs, tag );
			}
			if ( !dfs ) {
				for ( auto& succ : successors )
					succ->recurse( fn, dfs, tag );
			}
		}
		template<typename F>
		void dfs( F&& fn, uint32_t tag = monotonic_counter++ ) const { recurse( fn, true, tag ); }
		template<typename F>
		void bfs( F&& fn, uint32_t tag = monotonic_counter++ ) const { recurse( fn, false, tag ); }

		// Helpers for assembling.
		//
		template<typename... Tx>
		void assemble( xed::iclass_t icl, Tx&&...args ) {
			if ( auto res = xed::encode64( icl, std::forward<Tx>( args )... ).encode() ) {
				codegen.append_range( *res );
			} else if ( !codegen_error.has_value() ) {
				codegen_error = xstd::exception( "Failed assembling %d: %s", icl, res.status.to_string().c_str() );
			}
		}
		template<typename... Tx>
		void assemble_at( size_t pos, xed::iclass_t icl, Tx&&... args ) {
			if ( auto res = xed::encode64( icl, std::forward<Tx>( args )... ).encode() ) {
				pos = std::min( pos, codegen.size() );
				codegen.insert_range( codegen.begin() + pos, *res );
			} else if ( !codegen_error.has_value() ) {
				codegen_error = xstd::exception( "Failed assembling %d: %s", icl, res.status.to_string().c_str() );
			}
		}
	};
	struct func_builder {
		std::vector<std::unique_ptr<basic_block>> basic_blocks;
		uint64_t used_registers = 0;

		// Finds a basic block by RVA.
		//
		basic_block* find_block( uint32_t rva ) {
			for ( auto& bb : basic_blocks ) {
				if ( bb->rva == rva ) return bb.get();
			}
			return nullptr;
		}

		// Enumerates each preserved register.
		//
		void for_each_preserved( auto&& fn ) {
			for ( size_t i = 0; i != 16; i++ ) {
				if ( msabi_is_nonvolatile( i ) && ( ( used_registers >> ( i * 4 ) ) & 0b1111 ) ) {
					fn( xed::reg_t( i + XED_REG_GPR64_FIRST ) );
				}
			}
		}

		// Attempts to allocate a global GPR.
		//
		xed::reg_t allocate_global_gpr_with_allow_mask( uint64_t mask_allowed ) {
			xed::reg_t reg = alloc_reg_with_mask( mask_allowed & ~used_registers );
			if ( reg != XED_REG_INVALID ) {
				used_registers |= make_reg_mask( reg );
			}
			return reg;
		}
		xed::reg_t allocate_global_gpr() {
			if ( auto reg = allocate_global_gpr_with_allow_mask( msabi_volatile_mask ); reg != XED_REG_INVALID )
				return reg;
			if ( auto reg = allocate_global_gpr_with_allow_mask( msabi_nonvolatile_mask ); reg != XED_REG_INVALID )
				return reg;
			return XED_REG_INVALID;
		}

		// Adds a basic block.
		//
		bool add_block( uint32_t rva, const shellcode& block, xed::iclass_t branch, xed::reg_t switch_reg ) {
			auto bb = find_block( rva );
			if ( bb ) return false;
			bb = basic_blocks.emplace_back( std::make_unique<basic_block>( rva, block ) ).get();
			bb->branch_type = branch;
			bb->switch_reg = switch_reg;
			used_registers |= bb->used_registers();
			return true;
		}

		// Adds an edge between two blocks.
		//
		bool add_edge( uint32_t from, uint32_t to ) {
			auto from_bb = find_block( from );
			auto to_bb = find_block( to );
			if ( !from_bb || !to_bb ) return false;
			from_bb->successors.push_back( to_bb );
			to_bb->predecessors.push_back( std::move( from_bb ) );
			return true;
		}

		// Builds the function.
		//
		xstd::result<std::vector<uint8_t>> build( uint32_t entry );
	};
}