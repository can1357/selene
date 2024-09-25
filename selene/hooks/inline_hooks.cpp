#include "inline_hooks.hpp"
#include "patch_manager.hpp"
#include "../utility/memory.hpp"
#include <asm/code_relocation.hpp>
#include <asm/pe_unwind.hpp>
#include <xstd/random.hpp>
#include <xstd/narrow_cast.hpp>
#include <xstd/finally.hpp>
#include <xstd/spinlock.hpp>
#include <sdk/rtl/api.hpp>
#include <nt/image.hpp>
#include <ia32.hpp>
#include <list>
#include <ntpp.hpp>

namespace hook
{
	// Internally maintained record list for hook chaining.
	//
	static xstd::spinlock rec_map_lock;
	static std::unordered_map<uint64_t, std::list<record*>, xstd::hasher<>> rec_map;

	// Returns the computed rel32 if it's viable from source to destination.
	//
	static std::optional<int32_t> get_rel32( const void* src, const void* dst, int offset = 5 )
	{
		int64_t delta = intptr_t( dst ) - intptr_t( src ) - offset;
		if ( INT32_MIN <= delta && delta <= INT32_MAX )
			return delta;
		else
			return std::nullopt;
	}

	// Finds the unwind info for the given address.
	//
	static win::unwind_info_t* find_unwind( const void* ptr )
	{
		// Find image.
		//
		win::image_x64_t* img;
		if ( ntpp::ntoskrnl_range.contains( ptr ) )
		{
			img = ntpp::get_ntoskrnl();
		}
		else
		{

			auto list = ntpp::module_list{} 
				| std::views::filter( [ & ] ( auto* entry ) { return entry->dll_base <= ptr && ptr < xstd::ptr_at( entry->dll_base, entry->size_of_image ); } )
				| std::views::transform( [ & ] ( auto* entry ) { return ( win::image_x64_t* ) entry->dll_base; } );
			if ( !list )
				return nullptr;
			img = list.front();
		}

		// Find pdata and thus the runtime function table.
	  //
		auto pdata = img->get_directory( win::directory_entry_exception );
		if ( !pdata ) return nullptr;

		// Try to find a valid entry.
		//
		win::exception_directory ex{ img->raw_to_ptr( pdata->rva ), pdata->size };
		auto it = ex.find( xstd::narrow_cast< uint32_t >( xstd::distance( img, ptr ) ) );
		if ( it != ex.end() && it->rva_unwind_info )
			return xstd::ptr_at<win::unwind_info_t>( img, it->rva_unwind_info );
		return nullptr;
	}

	// Initializes the record, relocates the code for the continuation stub and creates the patch entry.
	//
	static void init_hook( record* rec, const uint8_t* src, const uint8_t* stub, size_t stub_size )
	{
		// Calculate the relocation length.
		//
		size_t reloc_len = xxed::round_ins_boundary( src, stub_size, true );
		if ( !reloc_len )
			xstd::error( "Failed decoding target instructions."_es );

		// Relocate the code and write the continue stub.
		//
		auto vec = xxed::relocate_code( src, rec->alloc_continue( 0 ), reloc_len );
		if ( vec.empty() )
			xstd::error( "Failed relocating target instructions."_es );
		auto cnt = rec->alloc_continue( vec.size() + 6 + 8 );
		if ( !cnt )
			xstd::error( "Continuation stub is too small."_es );

		memcpy( cnt, vec.data(), vec.size() );
		cnt += vec.size();
		*cnt++ = 0xFF; // jmp [rip]; &continue_pos
		*cnt++ = 0x25;
		*( ( uint32_t*& ) cnt )++ = 0;
		*( ( const void**& ) cnt )++ = src + reloc_len;

		// Add the patch.
		//
		patch( src, { stub, stub_size } );
	}

	// Adds an inline hook to the function specified [src] redirecting it to [dst].
	// - TODO: If past epilogue contains [SUB RSP, N] convert CALL|JMP into JNZ
	//
	void add_br( record* rec, const void* src, const void* dst, config cfg )
	{
		// Protect against double-initialization.
		//
		fassert( !rec->source );

		// Enter the session if relevant.
		//
		nt::kapc_state_t apc_state;
		auto ss = mem::enter_session_for( src, &apc_state );
		xstd::finally _f{ [ & ] { mem::detach_session( ss, &apc_state ); } };

		// Write basic record properties.
		//
		rec->source = src;
		rec->destination = dst;
		rec->continue_pos = &rec->continue_stub[ 0 ];

		// Append into the list, if already hooked chain onto it.
		//
		{
			std::lock_guard _g{ rec_map_lock };

			// If list is not empty:
			//
			auto& list = rec_map[ ( uint64_t ) src ];
			if ( !list.empty() )
			{
				// If priority hook:
				//
				if ( cfg.priority )
				{
					// Chain the redirection pointer.
					//
					auto* link = list.front();
					rec->redirect_addr = std::exchange( link->redirect_addr, nullptr );
					rec->continue_pos = *rec->redirect_addr;
					ia32::sfence();
					*rec->redirect_addr = dst;
					list.emplace_front( rec );
				}
				else
				{
					// Chain the continue pointer.
					//
					auto* link = list.back();
					rec->continue_pos = link->continue_pos;
					ia32::sfence();
					link->continue_pos = dst;
					list.emplace_back( rec );
				}
				return;
			}
			// Else append into the list and continue.
			//
			else
			{
				list.emplace_back( rec );
			}
		}

		// If mid-hook candidate:
		//
		size_t redirection_offset = 0;
		std::vector<uint8_t> redirection_stub;
		if ( cfg.pos_type == config::mid_hook || ( cfg.pos_type == config::pos_any && !cfg.strict ) )
		{
			// Get the unwind information.
			//
			win::unwind_info_t* uw = find_unwind( src );
			if ( uw && !uw->chained && uw->num_uw_codes )
			{
				// Pick a position within the prologue limits.
				//
				size_t offset = 0;
				for ( size_t n = 0; n != uw->num_uw_codes; n++ ) {
					auto& u = uw->unwind_code[ n ];
					if ( u.unwind_op == win::unwind_opcode::epilog ) {
						continue;
					}
					if ( u.unwind_op == win::unwind_opcode::alloc_large ||
						  u.unwind_op == win::unwind_opcode::alloc_small ||
						  u.unwind_op == win::unwind_opcode::push_nonvol ||
						  u.unwind_op == win::unwind_opcode::save_nonvol ||
						  u.unwind_op == win::unwind_opcode::set_frame )
					{
						offset = u.code_offset;
						break;
					}
				}
				offset = std::min( offset, ( size_t ) uw->size_prologue );
				if ( offset )
				{
					// Try generating the epilogue to reverse the changes.
					//
					if ( auto ep = xxed::generate_epilogue( uw, offset ) )
					{
						// Relocate prologue for continuation stub.
						//
						if ( auto pr = xxed::relocate_code( ( uint8_t* ) src, rec->alloc_continue( 0 ), offset ); !pr.empty() )
						{
							// Write the details.
							//
							redirection_offset = offset;
							redirection_stub = std::move( ep ).value();
							std::copy( pr.begin(), pr.end(), rec->alloc_continue( pr.size() ) );
						}
					}
				}
			}
		}

		// Handle the positioning options.
		//
		if ( cfg.pos_type == config::mid_hook )
		{
			if ( redirection_offset < 5 )
				xstd::error( "Strict mid-hook failed."_es );
		}
		else if ( cfg.pos_type == config::pos_any )
		{
			cfg.pos_type = redirection_offset ? config::mid_hook : config::exact;
		}

		// Determine whether or not rel32 is viable.
		//
		bool rel32_viable = get_rel32( src, dst, +0x200 ) && get_rel32( src, dst, -0x200 );

		// Pick or validate the gadget type and initialize the redirection iterator
		//
		switch ( cfg.gadget_type )
		{
			case config::gadget_any:
			{
				// If not rel32 viable, use long branches and default the redirection iterator.
				//
				if ( !rel32_viable )
				{
					cfg.gadget_type = config::jmp_long;
					break;
				}
				// Otherwise use short branches and fallthrough to short redirection iterator initialization logic.
				//
				cfg.gadget_type = cfg.strict ? config::jmp_short : config::call_short;
				[[fallthrough]];
			}
			case config::call_short:
			case config::jmp_short:
			{
				if ( !rel32_viable )
					xstd::error( "Short branch requested where target is not rel32-viable."_es );
				break;
			}
			case config::jmp_long:
				break;
		}

		// If gadget is of type CALL, fix the stack at the beginning of redirection stub.
		//
		if ( cfg.gadget_type == config::call_short )
			redirection_stub.insert( redirection_stub.begin(), { 0x58 } );

		// Append the jump to destination from redirection stub.
		//
		{
			size_t p = redirection_stub.size();
			redirection_stub.resize( p + 6 + 8 );
			uint8_t* jmp_pos = p + redirection_stub.data();
			*jmp_pos++ = 0xFF; // jmp [rip]; &dst
			*jmp_pos++ = 0x25;
			*( ( uint32_t*& ) jmp_pos )++ = 0;
			*( ( const void**& ) jmp_pos )++ = dst;
		}

		// If short jump/call, try to hack it so that we have to patch x?xxx instead of xxxxx.
		//
		auto* src_r = ( uint8_t* ) src + redirection_offset;
		auto* dst_r = ( uint8_t* ) std::begin( rec->redirect_stub );
		if ( cfg.gadget_type == config::call_short || cfg.gadget_type == config::jmp_short )
		{
			// For each possible point:
			//
			for ( auto pos : { get_rel32( src_r, std::begin( rec->redirect_stub ) ),
									 get_rel32( src_r, rec->redirect_stub + std::size( rec->redirect_stub ) / 2 ),
									 get_rel32( src_r, std::end( rec->redirect_stub ) - redirection_stub.size() ) } )
			{
				// If not viable, skip, else patch the first byte to be same.
				//
				if ( !pos ) continue;
				int32_t& rel = pos.value();
				*( uint8_t* ) &rel = *( uint8_t* ) &src_r[ 1 ];

				// Check if stil within the boundaries of redirection stub.
				//
				auto p = src_r + 5 + rel;
				if ( std::begin( rec->redirect_stub ) <= p && ( p + redirection_stub.size() ) <= std::end( rec->redirect_stub ) )
				{
					// If so, replace dst_r and break.
					//
					dst_r = p;
					break;
				}
			}
		}

		// Write the redirection stub.
		//
		rec->redirect_begin = dst_r;
		rec->redirect_addr = any_ptr{ dst_r + redirection_stub.size() - 8 };
		if ( std::begin( rec->redirect_stub ) > dst_r || ( dst_r + redirection_stub.size() ) > std::end( rec->redirect_stub ) )
			xstd::error( "Overflowing redirection stub."_es );
		std::copy( redirection_stub.begin(), redirection_stub.end(), dst_r );

		// Continue onto hook logic based on gadget type:
		//
		switch ( cfg.gadget_type )
		{
			case config::jmp_short:
			case config::call_short:
			{
				// Compute rel32.
				//
				auto rel = get_rel32( src_r, dst_r );
				if ( !rel )
					xstd::error( "Computed short branch is not rel32-viable."_es );

				// JMP/CALL rel32
				//
				uint8_t stub[ 5 ] = {};
				stub[ 0 ] = cfg.gadget_type == config::call_short ? 0xE8 : 0xE9;
				*( int32_t* ) ( stub + 1 ) = *rel;
				return init_hook( rec, src_r, stub, sizeof( stub ) );
			}
			case config::jmp_long:
			{
				// JMP qword ptr [rip]
				//
				uint8_t stub[ 6 + 8 ] = { 0xFF, 0x25, 0x00, 0x00, 0x00, 0x00 };
				*( const void** ) ( stub + 6 ) = dst_r;
				return init_hook( rec, src_r, stub, sizeof( stub ) );
			}
			default:
				unreachable();
		}
	}
};
