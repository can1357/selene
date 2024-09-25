#pragma once
#include <sdkgen/support_library.hpp>
#include <trace/image_info.hpp>
#include "xt.hpp"
#include "vdbg.hpp"

namespace su {
	struct trapframe;
	struct vm_context;
};
namespace su::r0 {
	enum class mgx_target : uint8_t {
		unknown,
	};

	// Local driver mitigation information.
	//
	struct mgx_info {
		enum setup_state_t : uint8_t {
			setup_pending = 0,
			setup_done =    1,
			setup_working = 2,
		};
		using fn_bp_handler = void(*)( trapframe* );
		any_ptr base_address = nullptr;
		xstd::sha1_t  hash = {};
		vdbg::breakpoint_list bp_list = {};
		vdbg::breakpoint_list bp_skip = {};
		std::array<fn_bp_handler, 5 /*last is generic*/> bp_handlers = {};
		void( *on_enter )( vm_context*, nt::trapframe* ) = nullptr;
		std::atomic<uint8_t> setup_state = setup_pending;

		// Target specific data.
		//
		mgx_target target = mgx_target::unknown;
		union {
			struct {
				std::atomic<uint64_t> pdpte_dos_ipi = 0;
				std::atomic<uint64_t> tlb_test_ipi =  0;
			} eac;
		};

		void on_access( any_ptr rva_or_ptr, size_t length, fn_bp_handler hnd ) {
			if ( rva_or_ptr < km_va_start ) rva_or_ptr.address += base_address.address;
			bp_handlers[ bp_list.length() ] = hnd;
			bp_list.push_back( vdbg::breakpoint::read_write( rva_or_ptr, length ) );
		}
		void on_write( any_ptr rva_or_ptr, size_t length, fn_bp_handler hnd ) {
			if ( rva_or_ptr < km_va_start ) rva_or_ptr.address += base_address.address;
			bp_handlers[ bp_list.length() ] = hnd;
			bp_list.push_back( vdbg::breakpoint::write( rva_or_ptr, length ) );
		}
		void on_execute( any_ptr rva_or_ptr, fn_bp_handler hnd ) {
			if ( rva_or_ptr < km_va_start ) rva_or_ptr.address += base_address.address;
			bp_handlers[ bp_list.length() ] = hnd;
			bp_list.push_back( vdbg::breakpoint::execute( rva_or_ptr ) );
		}

		COLD void setup_handler( void( *setup_fn )( mgx_info* ) ) {
			// Acquire lock.
			//
			uint8_t expected = setup_pending;
			if ( !setup_state.compare_exchange_strong( expected, setup_working, std::memory_order::acquire ) ) {
				while ( !( expected & 1 ) ) {
					yield_cpu();
					expected = setup_state.load( std::memory_order::relaxed );
				}
				return;
			}

			// Call setup handler.
			//
			setup_fn( this );

			// Release lock, seal state.
			//
			setup_state.store( setup_done, std::memory_order::release );
		}
		void setup( void( *setup_fn )( mgx_info* ) ) {
			if ( setup_state.load( std::memory_order::relaxed ) != setup_done ) [[unlikely]] {
				setup_handler( setup_fn );
			}
		}
	};

	// Invoked by the proxy with an NT trap frame to enter the VM.
	//
	void vmenter( nt::trapframe* tf, std::shared_ptr<xt::local_buffer> buf = nullptr, mgx_info* mgx = nullptr );
};

// Kernel proxy exports.
//
namespace su {
	// Driver entry.
	//
	struct driver_entry {
		// Associated ldr entry.
		//
		ldr::km::data_table_entry_t* ldr = nullptr;

		// Associated event tracer.
		//
		std::shared_ptr<xt::control_block> xt = {};
		std::string trace_id = {};

		// Mitigation information.
		//
		r0::mgx_info mgx = {};

		// Image information.
		//
		image_info info = {};

		// State.
		//
		bool trapped = false;
		bool session = false;

		// Dirty counter incremented by TLB flush workers.
		//
		std::atomic<int> dirty = 0;
	};

	// Finds a driver entry given an instruction pointer residing within.
	//
	inline bool driver_list_init = false;
	std::shared_ptr<driver_entry> find_driver( uint64_t ip );
	std::vector<std::shared_ptr<driver_entry>> dump_driver_list();
};
