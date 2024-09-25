#include "shellcode_dumper.hpp"
#include "../utility/thread.hpp"
#include "../utility/safe_wrappers.hpp"
#include "../hooks/inline_hooks.hpp"
#include <sdk/nt/subsection_t.hpp>
#include <sdk/nt/control_area_t.hpp>
#include <sdk/image/info_ex_t.hpp>
#include <xstd/async.hpp>
#include <trace/client.hpp>
#include <xedpp.hpp>

namespace shellcode_dumper
{
	static constexpr size_t max_traced_shellcode_size = 4_mb;
	static constexpr bool shellcode_dumper_debug =   is_debug_build() && false;
	static constexpr bool shellcode_dumper_disable = true;

	// Hook records.
	//
	alignas( 64 ) static hook::record nt_protect_virtual_memory_hook = {};
	alignas( 64 ) static hook::record nt_allocate_virtual_memory_hook = {};
	alignas( 64 ) static hook::record ps_call_image_notify_routines_hook = {};

	// Makes the given WIN protection executable/no-execute.
	//
	FORCE_INLINE static constexpr uint32_t change_win_protx( uint32_t prot, bool exec )
	{
		uint8_t fl = ( prot | ( prot >> 4 ) ) & 0xF;
		prot &= ~0xFF;
		prot |= fl << ( exec ? 4 : 0 );
		return prot;
	}

	// Position independent shellcode hasher.
	//
	static xstd::fnv64 position_independent_hash( std::span<const uint8_t> data, int32_t entry_point_offset )
	{
		xstd::fnv64 result = {};

		// Hash the entry point recursively traversing into it.
		//
		xstd::small_vector<int32_t, 64> visit_list = {};
		xed::result<xed::decoding> dis; // Temporary in shared space for reducing stack use.
		auto rec_code = [ & ] ( auto&& self, int32_t offset ) -> void
		{
			// If outside the boundaries, return.
			//
			if ( offset < 0 || size_t( offset ) >= data.size() ) [[unlikely]]
				return;

			// If already visited, return.
			//
			auto visit_id = ( offset - entry_point_offset );
			if ( std::find( visit_list.rbegin(), visit_list.rend(), visit_id ) != visit_list.rend() ) [[unlikely]]
				return;

			// If we reached max traversal depth, return.
			//
			if ( !visit_list.push_back( visit_id ) ) [[unlikely]]
				return;

			while ( true )
			{
				// If outside the boundaries, break.
				//
				auto max_read = int64_t( data.size() ) - offset;
				if ( max_read <= 0 ) [[unlikely]]
					return;

				// Disassemble the instruction, break on failure.
				//
				[ & ]() NO_INLINE{ dis = xed::decode64( data.data() + offset, ( size_t ) max_read ); }( );
				if ( !dis ) [[unlikely]]
					return;

				// Increment the rip, insert the instruction length and the class into the hash.
				//
				offset += dis->length();
				result.add_bytes( ( uint8_t ) dis->length() );
				result.add_bytes( ( uint16_t ) dis->iclass() );

				// Hash each register.
				//
				for ( size_t n = 0; n != dis->num_reg_operands(); n++ )
					result.add_bytes( ( uint8_t ) dis->reg( n ) );

				// If jump:
				//
				if ( xed::is_jmp( dis->iclass() ) )
				{
					if ( dis->has_relbr() )
						return self( self, offset + dis->relbr() );
					return;
				}
				// If Jcc / Call:
				//
				else if ( xed::is_jcc( dis->iclass() ) || xed::is_call( dis->iclass() ) )
				{
					if ( dis->has_relbr() )
						self( self, offset + dis->relbr() );
				}
				// If ret:
				//
				else if ( xed::is_ret( dis->iclass() ) )
				{
					return;
				}
			}
		};
		rec_code( rec_code, entry_point_offset );

		// Hash the visit list.
		// - TODO: Maybe remove?
		result.add_bytes( ( uint8_t* ) visit_list.data(), visit_list.size() * sizeof( int32_t ) );
		return result;
	}

	// Changes the protection of the given range.
	//
	static nt::result<uint32_t> protect_va( nt::eprocess_t* prc, any_ptr& base, size_t& size, uint32_t new_prot )
	{
		ntpp::scope_process _p{prc};
		return ntpp::protect_memory( base, size, new_prot );
	}

	// Global record storage.
	//
	struct temporal_address_range
	{
		// VPN of the ranges [start, end).
		//
		uint64_t      start_vpn = 0;
		uint64_t      end_vpn = 0;

		// Previous protection.
		//
		uint32_t      old_protection = 0;

		// Helpers.
		//
		inline constexpr bool is_valid() const noexcept { return start_vpn < end_vpn; }
		inline constexpr bool disjunct( uint64_t s, uint64_t e ) { return start_vpn >= e || end_vpn <= s; }
	};
	struct tracing_context
	{
		// Address range list and the lock.
		//
		xstd::spinlock                      list_lock;
		std::vector<temporal_address_range> ranges;

		// Base of BEClient.
		//
		any_ptr                             beclient_base = nullptr;

		void dump() const {
			if constexpr ( shellcode_dumper_debug ) {
				for ( auto& r : ranges )
					xstd::log( "[%llx-%llx | %x]\n", r.start_vpn, r.end_vpn, r.old_protection );
			}
		}
	};
	static xstd::spinlock trace_list_lock = {};
	static constexpr size_t trace_list_capacity = 8;
	static tracing_context trace_list_values[ trace_list_capacity ] = {};
	static ntpp::ref<nt::eprocess_t> trace_list_keys[ trace_list_capacity ] = {};

	// Adds a new process to the trace list.
	//
	static void add_to_trace_entry( nt::eprocess_t* proc, any_ptr beclient_base )
	{
		std::unique_lock _g{ trace_list_lock };

		size_t first_empty_slot = trace_list_capacity;
		for ( size_t it = 0; it != trace_list_capacity; it++ )
		{
			// If we're already in the list, return.
			//
			if ( trace_list_keys[ it ] == proc )
				return;

			// If key is non-null:
			//
			if ( trace_list_keys[ it ] )
			{
				// If it isn't exiting either, continue, else reset the reference.
				//
				if ( !ntpp::is_exiting( trace_list_keys[ it ] ) )
					continue;
				trace_list_keys[ it ].reset();
			}

			// Update the first empty slot.
			//
			first_empty_slot = std::min( first_empty_slot, it );
		}

		// If list was not full, replace the slot.
		//
		if ( first_empty_slot != trace_list_capacity ) [[likely]]
		{
			std::unique_lock _g2{ trace_list_values[ first_empty_slot ].list_lock };
			trace_list_values[ first_empty_slot ].ranges.clear();
			trace_list_values[ first_empty_slot ].beclient_base = beclient_base;
			trace_list_keys[ first_empty_slot ].reset( proc );
		}
	}

	// Returns true if process is traced.
	//
	bool is_traced( nt::eprocess_t* proc )
	{
		if constexpr ( shellcode_dumper_disable )
			return false;

		bool traced = false;
		for ( auto& entry : trace_list_keys )
			traced |= ( entry.object == proc );
		return traced;
	}

	// Finds a process in the trace list and returns the entry with the list lock.
	//
	static tracing_context* find_trace_entry( nt::eprocess_t* proc )
	{
		// Find the entry again but with the lock held.
		//
		std::unique_lock _g{ trace_list_lock };
		for( size_t it = 0; it != trace_list_capacity; it++ )
		{
			if ( trace_list_keys[ it ] == proc )
			{
				// Acquire the lock and return the context.
				//
				trace_list_values[ it ].list_lock.lock();
				return &trace_list_values[ it ];
			}
		}
		return nullptr;
	}

	// Handlers for overlapping entries.
	//
	static void delete_overlaps( tracing_context* ctx, any_ptr base, size_t size )
	{
		auto svpn = ( base ) >> 12;
		auto evpn = ( base + size ) >> 12;
		std::erase_if( ctx->ranges, [ & ] ( auto& r ) { return !r.disjunct( svpn, evpn ); } );
	}
	static void reshape_overlaps( tracing_context* ctx, any_ptr base, size_t size, uint32_t* old_protection )
	{
		auto svpn = ( base ) >> 12;
		auto evpn = ( base + size ) >> 12;

		bool overlaps = false;
		size_t count = ctx->ranges.size();
		for ( size_t it = 0; it != count; it++ )
		{
			// Skip if disjunct.
			//
			auto& entry = ctx->ranges[ it ];
			if ( entry.disjunct( svpn, evpn ) ) [[likely]]
				continue;
			overlaps = true;

			// Inherit old protection.
			//
			if ( auto p = std::exchange( old_protection, nullptr ) )
				*p = entry.old_protection;

			// Split into two halfs and rewrite.
			//
			temporal_address_range second_half = entry;
			entry.end_vpn = std::min( entry.end_vpn, svpn );
			second_half.start_vpn = std::max( second_half.start_vpn, evpn );
			if ( second_half.is_valid() )
				ctx->ranges.push_back( second_half );
		}

		// If there were any overlapping entries, clear invalid entries.
		//
		if ( overlaps ) [[unlikely]]
			std::erase_if( ctx->ranges, [ ] ( auto& r ) { return !r.is_valid(); });
	}

	// Handles page execution, dumps and restores the protection flags of a given page.
	//
	static void handle_page_execution( nt::eprocess_t* prc, any_ptr address, nt::trapframe* tf )
	{
		// Find the trace entry.
		//
		auto* trace = find_trace_entry( prc );
		if ( !trace ) [[unlikely]]
			return;
		std::unique_lock lock{ trace->list_lock, std::adopt_lock_t{} };
		any_ptr beclient_base = trace->beclient_base;
		if constexpr ( shellcode_dumper_debug ) {
			xstd::log( "Handling nx execution @ VPN (%p)...\n", address >> 12 );
			trace->dump();
		}

		// Find the last overlapping range.
		//
		auto it = trace->ranges.rbegin();
		while ( true )
		{
			if ( it == trace->ranges.rend() ) {
				if constexpr ( shellcode_dumper_debug )
					xstd::log( "-> Couldn't find\n" );
				return;
			}
			if ( !it->disjunct( address >> 12, ( address >> 12 ) + 1 ) )
				break;
			it++;
		}

		// Copy and delete the entry, unlock the lock.
		//
		auto range = *it;
		trace->ranges.erase( std::next( it ).base() );
		lock.unlock();

		// Revert the protection change we've made.
		//
		any_ptr base = range.start_vpn << 12;
		size_t size = ( range.end_vpn - range.start_vpn ) << 12;
		{
			auto tbase = base;
			auto tsize = size;
			auto pva = protect_va( prc, tbase, tsize, range.old_protection );
			if constexpr ( shellcode_dumper_debug ) {
				xstd::log( "protect_va => %s [%p+%llx] -> [%p+%llx] (old:%x)\n", pva, base, size, tbase, tsize, range.old_protection );
			}
		}

		// Read the shellcode into memory.
		//
		auto shellcode = std::make_unique<uint8_t[]>( size );
		memset( shellcode.get(), 0xCC, size );
		size_t max_read = 0;
		for ( size_t i = 0; i != size; i += 0x1000 )
		{
			if ( size_t bytes_read = 0x1000 - safe::copy( &shellcode[ i ], base + i, 0x1000 ) )
				max_read = i + bytes_read;
		}

		// Count non-zero bytes, skip if it looks irrelevant.
		//
		size_t non_zero = 0;
		for ( size_t i = 0; i < size && non_zero < 0x400; i++ ) {
			if ( shellcode[ i ] && shellcode[ i ] != 0xCC ) {
				non_zero++;
			}
		}
		if ( non_zero < 0x400 || !max_read ) {
			return;
		}

		// Skip if it looks like a C# JIT page.
		// 49 BB [?? x8] 41 FF D3
		// mov r11 & call r11
		//
		size_t r11_counter = 0;
		for ( size_t i = 0; ( i + 2 + 8 + 3 ) < size; i++ ) {
			if ( *( const uint16_t* ) &shellcode[ i ] == 0xBB49 ) {
				if ( !memcmp( &shellcode[ i + 2 + 8 ], "\x41\xff\xd3", 3 ) ) {
					r11_counter++;
				}
			}
		}
		if ( r11_counter > 2 ) {
			return;
		}

		// Skip if it looks like (JS?) JIT PAGE.
		// 49 8D [?? x5] FF D0
		// lea rax & call rax
		//
		size_t rax_counter = 0;
		for ( size_t i = 0; ( i + 2 + 5 + 2 ) < size; i++ ) {
			if ( *( const uint16_t* ) &shellcode[ i ] == 0x8D49 ) {
				if ( !memcmp( &shellcode[ i + 2 + 5 ], "\xff\xd0", 2 ) ) {
					rax_counter++;
				}
			}
		}
		if ( rax_counter > 2 ) {
			return;
		}

		// Skip if it looks like a .NET JIT page.
		// 49 BA [?? x8] FF 50
		// mov r10, call rax
		size_t r10_counter = 0;
		for ( size_t i = 0; ( i + 2 + 8 + 2 ) < size; i++ ) {
			if ( *(const uint16_t*) &shellcode[ i ] == 0xBA49 ) {
				if ( !memcmp( &shellcode[ i + 2 + 8 ], "\xff\x50", 2 ) ) {
					r10_counter++;
				}
			}
		}
		if ( r10_counter > 5 ) {
			return;
		}

		// Read caller address and first 4 arguments.
		//
		uint64_t retptr = safe::read<uint64_t>( tf->rsp ).value_or( 0 );
		std::array<uint64_t, 4> args = {
			tf->rcx, tf->rdx, tf->r8, tf->r9
		};
		sjson::object_t context = {
			{ "beclient"_ss, uint64_t( beclient_base ) },
			{ "retptr"_ss, retptr },
			{ "a0"_ss, args[ 0 ] },
			{ "a1"_ss, args[ 1 ] },
			{ "a2"_ss, args[ 2 ] },
			{ "a3"_ss, args[ 3 ] }
		};

		// Submit the shellcode to the server.
		//
		constexpr auto worker = [ ] (
			std::wstring process_name,
			std::unique_ptr<uint8_t[]> data,
			size_t max_length,
			uint64_t base_address,
			uint64_t entry_point,
			sjson::object_t context ) -> xstd::async_task
		{
			co_await xstd::yield{};

			// Create the PI hash.
			//
			auto offset = int32_t( entry_point - base_address );
			auto hash = position_independent_hash( { &data[ 0 ], &data[ max_length ] }, offset ).to_string();

			// Check if the server has the shellcode already.
			//
			auto query_result = co_await request<"queryShellcode">( {
				{ "hash"_ss,    hash },
				{ "process"_ss, process_name },
				{ "context"_ss, std::move( context ) }
			} );
			if ( !query_result || !query_result->coerce_boolean() ) {
				// Submit to the server.
				//
				auto result = co_await request<"submitShellcode">( {
					{ "data"_ss,   std::vector<uint8_t>( &data[ 0 ], &data[ max_length ] ) },
					{ "base"_ss,   base_address },
					{ "offset"_ss, offset },
					{ "hash"_ss,   hash },
					{ "process"_ss, std::move( process_name ) }
				} );
			}
		};
		worker( std::wstring{ ntpp::get_image_name( prc ) }, std::move( shellcode ), max_read, base, address, std::move( context ) );
	}

	// Syscall hooks.
	//
	MS_SSE2AVX static uint32_t hk_nt_protect_virtual_memory( void* handle, void** base_address, size_t* region_size, uint32_t protection, uint32_t* old_protection )
	{
		// If range in current process is being made executable:
		//
		if ( handle == ob::current_process() && ( protection & 0xF0 ) )
		{
			// If process is traced:
			//
			auto* ethr = ke::get_ethread();
			auto* prc = ke::get_eprocess( ethr );
			if ( is_traced( prc ) ) [[unlikely]]
			{
				thread::shadow_guard guard{ thread::get_context( ethr ) };
				ntpp::critical_region _c{};
				if ( auto* trace = find_trace_entry( prc ) )
				{
					std::unique_lock lock{ trace->list_lock, std::adopt_lock_t{} };

					// Read the ranges.
					//
					auto base = safe::read<any_ptr>( base_address );
					if ( !base ) return STATUS_ACCESS_VIOLATION;
					auto size = safe::read( region_size );
					if ( !size ) return STATUS_ACCESS_VIOLATION;

					// If appropriate length:
					//
					if ( *size < max_traced_shellcode_size && *size )
					{
						// If the VADs being made executable are dynamic code:
						//
						bool is_dyn_code = true;
						is_dyn_code &= ntpp::enum_vads( prc, *base, *size, [ & ] ( nt::mmvad_t* vad )
						{
							ntpp::mm_protection prot = { .flags = vad->core.vad_flags.protection };
							is_dyn_code &= vad->core.vad_flags.vad_type != VadImageMap && prot.writable && !prot.executable;
						} );
						if ( is_dyn_code )
						{
							// Strip the execution rights of the specified protection and try invoking the function.
							//
							uint32_t new_protection_applied = change_win_protx( protection, false );
							auto old_p = protect_va( prc, *base, *size, new_protection_applied );
							if ( !old_p ) return old_p.status;

							if constexpr ( shellcode_dumper_debug ) {
								xstd::log( "Protecting dynamic code [%p, +%llx]...\n", *base, *size );
								trace->dump();
							}

							// Rehape any overlapping range.
							//
							reshape_overlaps( trace, *base, *size, &*old_p );

							// Insert into the range list.
							//
							auto& rentry = trace->ranges.emplace_back();
							rentry.start_vpn = *base >> 12;
							rentry.end_vpn = ( *base + *size ) >> 12;
							rentry.old_protection = protection;

							if constexpr ( shellcode_dumper_debug ) {
								xstd::log( "-->\n" );
								trace->dump();
							}

							lock.unlock();

							// Write back the data.
							//
							if ( !safe::write( base_address, *base ) )
								return STATUS_ACCESS_VIOLATION;
							if ( !safe::write( region_size, *size ) )
								return STATUS_ACCESS_VIOLATION;
							if ( !safe::write( old_protection, *old_p ) )
								return STATUS_ACCESS_VIOLATION;
							return STATUS_SUCCESS;
						}
					}
				}
			}
		}
		[[clang::musttail]] return nt_protect_virtual_memory_hook.next<decltype( &hk_nt_protect_virtual_memory )>()( handle, base_address, region_size, protection, old_protection );
	}

	MS_SSE2AVX static uint32_t hk_nt_allocate_virtual_memory( void* handle, void** base_address, size_t zero_bits, size_t* region_size, uint32_t alloc_type, uint32_t protection )
	{
		{
			auto* ethr = ke::get_ethread();
			thread::shadow_guard guard{ thread::get_context( ethr ) };
			if ( handle == ob::current_process() && ( protection & PAGE_EXECUTE_READWRITE ) )
			{
				// If process is traced:
				//
				auto* prc = ke::get_eprocess( ethr );
				if ( is_traced( prc ) ) [[unlikely]]
				{
					ntpp::critical_region _c{};
					if ( auto* trace = find_trace_entry( prc ) )
					{
						std::unique_lock _g{ trace->list_lock, std::adopt_lock_t{} };

						// If appropriate length:
						//
						auto size = safe::read( region_size );
						if ( !size ) return STATUS_ACCESS_VIOLATION;
						if ( *size < max_traced_shellcode_size && *size )
						{
							// Strip the execution rights of the specified protection.
							//
							uint32_t real_protection = protection;
							protection = change_win_protx( protection, false );

							// Call the original function.
							//
							alloc_type |= MEM_COMMIT;
							nt::status st = nt_allocate_virtual_memory_hook.next<decltype( &hk_nt_allocate_virtual_memory )>()( handle, base_address, zero_bits, region_size, alloc_type, protection );
							if ( st.is_error() )
								return st.value;

							// Read the ranges.
							//
							auto base = safe::read<any_ptr>( base_address );
							if ( !base ) return STATUS_ACCESS_VIOLATION;
							size = safe::read( region_size );
							if ( !size ) return STATUS_ACCESS_VIOLATION;

							if constexpr ( shellcode_dumper_debug ) {
								xstd::log( "Allocated dynamic code [%p, +%llx]...\n", *base, *size );
								trace->dump();
							}

							// Delete any overlapping range.
							//
							delete_overlaps( trace, *base, *size );

							// Insert into the range list, return the status.
							//
							auto& rentry = trace->ranges.emplace_back();
							rentry.start_vpn = *base >> 12;
							rentry.end_vpn = ( *base + *size ) >> 12;
							rentry.old_protection = real_protection;

							if constexpr ( shellcode_dumper_debug ) {
								xstd::log( "-->\n" );
								trace->dump();
							}
							return st.value;
						}
					}
				}
			}
		}
		[[clang::musttail]] return nt_allocate_virtual_memory_hook.next<decltype( &hk_nt_allocate_virtual_memory )>()( handle, base_address, zero_bits, region_size, alloc_type, protection );
	}
	MS_SSE2AVX static void hk_ps_call_image_notify_routines( nt::unicode_view* full_image_name, nt::eprocess_t* process, image::info_ex_t* img_info, void* file_object )
	{
		if ( process && xstd::ifind( full_image_name->get(), "beclient" ) != std::string::npos && !process->wo_w64_process ) {
			add_to_trace_entry( process, img_info->image_info.image_base );
		}
		[[clang::musttail]] return ps_call_image_notify_routines_hook.next<decltype( &hk_ps_call_image_notify_routines )>()( full_image_name, process, img_info, file_object );
	}

	// Initializes the shellcode dumper.
	//
	void init()
	{
		if constexpr ( shellcode_dumper_disable )
			return;

		// TODO:
		//hook::add( &nt_query_virtual_memory_hook, &os::query_virtual_memory, &hk_nt_query_virtual_memory );
		hook::add( &nt_allocate_virtual_memory_hook, &os::allocate_virtual_memory, &hk_nt_allocate_virtual_memory );
		hook::add( &nt_protect_virtual_memory_hook, &os::protect_virtual_memory, &hk_nt_protect_virtual_memory );
		hook::add( &ps_call_image_notify_routines_hook, &ps::call_image_notify_routines, &hk_ps_call_image_notify_routines );
	}

	// Invoked on usermode NX to handle page conversion.
	//
	void on_unx_fault( nt::trapframe* tf )
	{
		if constexpr ( shellcode_dumper_disable )
			return;

		auto* ethr = ke::get_ethread();
		auto* prc = ke::get_eprocess( ethr );
		auto fault_address = ia32::read_cr2();

		// Save the fault address and enable interrupts.
		//
		thread::shadow_guard guard{ thread::get_context( ethr ) };
		ia32::scope_irql<APC_LEVEL> _i{};
		ia32::enable();

		// Handle the relevant page.
		//
		handle_page_execution( prc, fault_address, tf );

		// Disable interrupts again, restore CR2.
		//
		ia32::disable();
		ia32::write_cr2( fault_address );
	}
};
