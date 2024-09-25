#pragma once
#include <nt/image.hpp>
#include <map>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <functional>
#include <xstd/utf.hpp>
#include <xstd/serialization.hpp>
#include <xstd/numeric_range.hpp>
#include <xstd/function_view.hpp>

namespace trace
{
	using xmm_t = std::array<uint64_t, 2>;

	// Define NT types for linux.
	//
	#pragma pack(push, 4)
	struct debug_state_t {
		// Debug registers.
		//
		uint64_t            dr0;
		uint64_t            dr1;
		uint64_t            dr2;
		uint64_t            dr3;
		uint64_t            dr6;
		uint64_t            dr7;

		// State of the MSRs.
		//
		uint64_t            debug_ctl;
		uint64_t            last_branch_to_rip;
		uint64_t            last_branch_from_rip;
		uint64_t            last_exception_to_rip;
		uint64_t            last_exception_from_rip;
	};
	struct trapframe_t {
		uint64_t            home[ 5 ];

		// Set to previous mode for syscall frames, undefined otherwise.
		//
		uint8_t             previous_mode;

		// IRQL of the interrupted routine, set if non-exception frame.
		//
		uint8_t             previous_irql;

		// Always set to 0.
		//
		uint8_t             fault_indicator;

		// Set to 1 for interrupt frames and 0 for syscall frames.
		//
		uint8_t             exception_active;

		// MxCsr of the interrupted routine.
		//
		uint32_t            mx_csr;

		// Volatile general purpose registers:
		//
		uint64_t            rax;
		uint64_t            rcx;
		uint64_t            rdx;
		uint64_t            r8;
		uint64_t            r9;
		uint64_t            r10;
		uint64_t            r11;

		// GSBASE of the interrupted routine.
		//
		uint64_t            gs_base;

		// Volatile XMM registers.
		//
		xmm_t               xmm0;
		xmm_t               xmm1;
		xmm_t               xmm2;
		xmm_t               xmm3;
		xmm_t               xmm4;
		xmm_t               xmm5;

		// Set to cr2 if page fault, undefined otherwise.
		//
		any_ptr             fault_address;

		// State of the debug registers.
		//
		debug_state_t       debug_state;

		// left undefined.
		//
		uint16_t            _seg_ds;
		uint16_t            _seg_es;
		uint16_t            _seg_fs;
		uint16_t            _seg_gs;

		// Previous trap frame, only used in intra-kernel syscall.
		//
		void*               trap_frame;

		// Left undefined.
		//
		uint64_t            _rbx;
		uint64_t            _rdi;
		uint64_t            _rsi;

		// Non-volatile general purpose register used to store the stackframe.
		//
		uint64_t            rbp;

		// Pushed by hardware:
		//
		uint64_t            error_code;
		uint64_t            rip;
		uint16_t            seg_cs;
		uint16_t            _fill0[ 3 ];
		uint32_t            eflags;
		uint32_t            _fill2;
		uint64_t            rsp;
		uint16_t            seg_ss;
		uint16_t            _fill1[ 3 ];
	};
	#pragma pack(pop)

	// Big hack to allow construction of our context type from any context regardless of whatever registers they might not have.
	//
	namespace impl {
		template<typename T> concept HasSeg =    requires( T x ) { x.seg_ss; x.seg_cs; };
		template<typename T> concept HasRflags = requires( T x ) { x.rflags; };
		template<typename T> concept HasEflags = requires( T x ) { x.eflags; };
		template<typename T> concept HasRax =    requires( T x ) { x.rax; };
		template<typename T> concept HasRcx =    requires( T x ) { x.rcx; };
		template<typename T> concept HasRdx =    requires( T x ) { x.rdx; };
		template<typename T> concept HasRbx =    requires( T x ) { x.rbx; };
		template<typename T> concept HasRbp =    requires( T x ) { x.rbp; };
		template<typename T> concept HasRsi =    requires( T x ) { x.rsi; };
		template<typename T> concept HasRdi =    requires( T x ) { x.rdi; };
		template<typename T> concept HasR8 =     requires( T x ) { x.r8; };
		template<typename T> concept HasR9 =     requires( T x ) { x.r9; };
		template<typename T> concept HasR10 =    requires( T x ) { x.r10; };
		template<typename T> concept HasR11 =    requires( T x ) { x.r11; };
		template<typename T> concept HasR12 =    requires( T x ) { x.r12; };
		template<typename T> concept HasR13 =    requires( T x ) { x.r13; };
		template<typename T> concept HasR14 =    requires( T x ) { x.r14; };
		template<typename T> concept HasR15 =    requires( T x ) { x.r15; };
	};

	// Simplified NT image details.
	//
	struct nt_image_desc {
		struct unwind_info {
			std::vector<uint8_t> raw_data;
			uint32_t             offset = 0;

			// Captures the unwind info given the data pointer and the offset into the routine.
			//
			static unwind_info capture( win::unwind_info_t* uw, uint32_t offset )
			{
				return { { ( uint8_t* ) uw, ( uint8_t* ) uw->get_language_specific_data() }, offset };
			}

			// Unwind info getter.
			//
			const win::unwind_info_t* get() const { return ( const win::unwind_info_t* ) raw_data.data(); }

			// Auto serialization.
			//
			auto tie() { return std::tie( raw_data, offset ); }
		};

		// Image details.
		//
		uint64_t base_address = 0;
		size_t length = 0;
		std::string pdb_path;
		std::string pdb_identifier;
		std::string image_name;

		// Unwind cache.
		//
		std::unordered_map<uint64_t, unwind_info> unwind_cache = {};

		// Exception table, only on the client.
		//
		std::span<const win::runtime_function_t> exception_table;
		std::vector<win::runtime_function_t>     exception_table_local_cache;

		// Auto serialization.
		//
		auto tie() { return std::tie( base_address, length, pdb_path, pdb_identifier, image_name, unwind_cache ); }
	};

	// Apollo image details.
	//
	struct apollo_image_desc {
		std::vector<uint8_t> mapping_data;
		uint64_t relocated_to = 0;

		apollo_image_desc() {}
		template<xstd::Iterable T>
		apollo_image_desc( const T& raw_data, uint64_t relocated_to = 0 ) : mapping_data( raw_data.begin(), raw_data.end() ), relocated_to( relocated_to ) {}
		apollo_image_desc( apollo_image_desc&& ) noexcept = default;
		apollo_image_desc( const apollo_image_desc& ) = default;
		apollo_image_desc& operator=( apollo_image_desc&& ) noexcept = default;
		apollo_image_desc& operator=( const apollo_image_desc& ) = default;

		// Auto serialization.
		//
		auto tie() { return std::tie( mapping_data, relocated_to ); }
	};

	// Provided by the application, has functors to help trace snapshot.
	//
	struct provider {
		// Safe copy wrapper, returns copied amount.
		//
		xstd::function_view<size_t( void*, any_ptr, size_t )> safe_read = {};

		// Given the stack pointer returns the base address and the size if known.
		//
		xstd::function_view<std::pair<any_ptr, size_t>( any_ptr )> stack_query = {};

		// Takes a pointer, returns the unwind information and the offset if there is an image associated.
		//
		xstd::function_view<std::pair<win::unwind_info_t*, uint32_t>( any_ptr )> get_unwind_info_ex = {};

		// Enlightens the trapframe.
		//
		xstd::function_view<void( void* tf )> enlighten_trapframe = {};

		// Unwind controls.
		//
		bool unwind_kernel = true;
		bool unwind_user   = true;

		// Checks if stack or instruction pointer is appropriate for unwinding.
		//
		bool check_unwind_ptr( any_ptr ptr ) const {
#if XSTD_IA32_LA57
			int64_t hi_bits = int64_t( ptr.address ) >> 57;
#else
			int64_t hi_bits = int64_t( ptr.address ) >> 48;
#endif
			return
				( hi_bits == -1 && unwind_kernel ) ||
				( hi_bits == 0 && unwind_user && ptr > 0x1000 );
		}

		// Read memory primitives using safe_read.
		//
		size_t read_bytes( void* dst, any_ptr src, size_t n ) const {
			if ( safe_read )
				return safe_read( dst, src, n );
			memcpy( dst, ( const void* ) src, n );
			return n;
		}
		template<typename T>
		size_t read( T* dst, any_ptr src, size_t n = 1 ) const {
			return read_bytes( dst, src, n * sizeof( T ) ) / sizeof( T );
		}
		template<typename T>
		std::optional<std::remove_cv_t<T>> read( const T* src ) const {
			std::optional<std::remove_cv_t<T>> result;
			if ( !read( &result.emplace(), src ) ) {
				result.reset();
			}
			return result;
		}

		// String reader.
		//
		template<typename T>
		std::basic_string<T> read_str( std::basic_string_view<T> view ) const {
			std::basic_string<T> result;
			result.resize( view.size() );
			size_t max_len = read( result.data(), view.data(), view.size() );
			result.resize( max_len );
			return result;
		}
		template<typename T>
		std::basic_string<T> read_cstr( const T* cstr, size_t max_length = 2048 ) const {
			constexpr size_t step = 256 / sizeof( T );

			std::basic_string<T> result;
			for ( size_t n = 0; n < max_length; n += step ) {
				// Allocate an appropriate buffer.
				//
				size_t count = std::min<size_t>( max_length - n, step );
				result.resize( n + count );

				// Read the data, terminate by nullptr if relevant.
				//
				T*     dest =  &result[ n ];
				size_t limit = 0;
				if ( size_t nc = read( dest, &cstr[ n ], count ) )
					limit = size_t( std::find( dest, dest + nc, 0 ) - dest );

				// Break if we reached the end.
				//
				if ( limit != count ) {
					result.resize( n + limit );
					break;
				}
			}
			return result;
		}

		// Pointer validation using safe_read.
		//
		bool is_valid_ptr( any_ptr p ) const {
			uint8_t tmp;
			return !safe_read || safe_read( &tmp, p, 1 ) != 0;
		}

		// PE utilities wrapped in safe-reader.
		//
		const win::nt_headers_x64_t* pe_get_nt( any_ptr base_address ) const {
			auto dos =        ( const win::dos_header_t* ) base_address;
			auto e_lfanew =   read( &dos->e_lfanew ).value_or( 0 );
			return e_lfanew >= sizeof( win::dos_header_t ) ? base_address + e_lfanew : nullptr;
		}
		template<win::directory_id Id, typename T = win::directory_type_t<Id, true>>
		std::pair<const T*, size_t> pe_get_directory( any_ptr base_address ) const {
			if ( auto* nt = pe_get_nt( base_address ) ) {
				uint32_t num_data_directories = read( &nt->optional_header.num_data_directories ).value_or( 0 );
				if ( num_data_directories > ( uint32_t ) Id ) {
					auto directory = read( &nt->optional_header.data_directories.entries[ ( uint32_t ) Id ] ).value_or( win::data_directory_t{ 0, 0 } );
					if ( directory.present() ) {
						return { base_address + directory.rva, directory.size };
					}
				}
			}
			return { nullptr, 0 };
		}
		bool pe_fill_pdb_info( nt_image_desc* img ) const {
			auto [beg, size] = this->template pe_get_directory<win::directory_entry_debug>( img->base_address );
			for ( auto& unsafe_dbg : std::span{ &beg->entries[ 0 ] , size / sizeof( win::debug_directory_entry_t ) } ) {
				auto dbg = read( &unsafe_dbg );
				if ( !dbg || dbg->type != win::debug_directory_type_id::codeview || !dbg->rva_raw_data )
					continue;

				auto* cvp = ( win::cv_pdb70_t* ) ( img->base_address + dbg->rva_raw_data );
				win::cv_pdb70_t cv;
				read( &cv, cvp );
				if ( cv.signature != win::cv_signature::pdb70 )
					continue;
				img->pdb_identifier = cv.format();
				img->pdb_path = read_cstr( &cvp->pdb_name[ 0 ] );
				return true;
			}
			return false;
		}
		COLD void pe_unwind_info_realize( nt_image_desc* img ) const {
			size_t n =    img->exception_table.size();
			auto*  data = img->exception_table.data();
			img->exception_table_local_cache.resize( n );
			n = read( img->exception_table_local_cache.data(), data, n );
			img->exception_table_local_cache.resize( n );
		}
		std::pair<const win::unwind_info_t*, uint32_t> pe_get_unwind_info( nt_image_desc* img, any_ptr ptr ) const {
			// Skip if empty or out of ranges.
			//
			if ( img->exception_table.empty() || ptr > ( img->base_address + img->length ) )
				return { nullptr, 0 };

			// If not in cache:
			//
			auto it = img->unwind_cache.find( ptr );
			if ( it == img->unwind_cache.end() ) {
				auto rva = uint32_t( ptr - img->base_address );

				// Realize in a local buffer if not done yet.
				//
				if ( img->exception_table_local_cache.empty() ) [[unlikely]] {
					pe_unwind_info_realize( img );
				}

				// Find the entry.
				//
				win::exception_directory ex{ img->exception_table.data(), img->exception_table.size() * sizeof( win::runtime_function_t ) };
				auto entry = ex.find_overlapping( rva );
				if ( entry == ex.end() ) return { nullptr, 0 };

				// Fetch the range.
				//
				auto uw = xstd::ptr_at<win::unwind_info_t>( img->base_address, entry->unwind_info );
				auto num_uw = read( &uw->num_uw_codes ).value_or( 0 );
				if ( !num_uw ) return { nullptr, 0 };
				num_uw += num_uw & 1;

				// Read the unwind data.
				//
				nt_image_desc::unwind_info uwi = {};
				uwi.raw_data.resize( sizeof( win::unwind_info_t ) + sizeof( win::unwind_code_t ) * num_uw );
				uwi.offset = rva - entry->rva_begin;
				read_bytes( uwi.raw_data.data(), uw, uwi.raw_data.size() );
				it = img->unwind_cache.emplace( ptr, std::move( uwi ) ).first;
			}
			return { it->second.get(), it->second.offset };
		}

		// Unwind finder.
		//
		std::pair<const win::unwind_info_t*, uint32_t> get_unwind_info( std::span<nt_image_desc> nt_images, any_ptr ptr ) {
			if ( check_unwind_ptr( ptr ) ) {
				// Try to find an already existing image record.
				//
				auto it = std::find_if( nt_images.begin(), nt_images.end(), [ & ] ( const nt_image_desc& desc ) {
					return desc.base_address <= ptr && ptr < ( desc.base_address + desc.length );
				} );

				// If found, try to get the unwind information.
				//
				if ( it != nt_images.end() )
					return pe_get_unwind_info( std::to_address( it ), ptr );
			}

			if ( auto f = get_unwind_info_ex ) {
				return f( ptr );
			} else {
				return { nullptr, 0 };
			}
		}
	};

	// Reduced context type.
	//
	struct reduced_context {
		// Control registers.
		//
		uint64_t rip = 0;
		uint64_t rsp = 0;
		uint64_t rflags = 0;
		uint16_t seg_cs = 0;
		uint16_t seg_ss = 0;

		// General purpose registers.
		//
		uint64_t rax = 0;
		uint64_t rcx = 0;
		uint64_t rdx = 0;
		uint64_t rbx = 0;
		uint64_t rbp = 0;
		uint64_t rsi = 0;
		uint64_t rdi = 0;
		uint64_t r8 = 0;
		uint64_t r9 = 0;
		uint64_t r10 = 0;
		uint64_t r11 = 0;
		uint64_t r12 = 0;
		uint64_t r13 = 0;
		uint64_t r14 = 0;
		uint64_t r15 = 0;

		// Default construction / copy.
		//
		reduced_context() = default;
		reduced_context( const reduced_context& ) = default;
		reduced_context& operator=( const reduced_context& ) = default;

		// Constructs from any type, nt::context, nt::ktrap_frame, etc.
		//
		template<typename T, typename T2 = std::monostate>
		reduced_context( const T* other, const T2* extended = nullptr )
		{
			rip = other->rip;
			rsp = other->rsp;

			if constexpr ( impl::HasSeg<T> ) {
				seg_ss = xstd::bit_cast< uint16_t >( other->seg_ss );
				seg_cs = xstd::bit_cast< uint16_t >( other->seg_cs );
			}
			if constexpr ( impl::HasRflags<T> )
				rflags = xstd::bit_cast< uint64_t >( other->rflags );
			else if constexpr ( impl::HasEflags<T> )
				rflags = xstd::bit_cast< uint32_t >( other->eflags );

			if constexpr ( impl::HasRax<T> )                       rax = other->rax;
			else if constexpr ( impl::HasRax<T2> ) if ( extended ) rax = extended->rax;
			if constexpr ( impl::HasRcx<T> )                       rcx = other->rcx;
			else if constexpr ( impl::HasRcx<T2> ) if ( extended ) rcx = extended->rcx;
			if constexpr ( impl::HasRdx<T> )                       rdx = other->rdx;
			else if constexpr ( impl::HasRdx<T2> ) if ( extended ) rdx = extended->rdx;
			if constexpr ( impl::HasRbx<T> )                       rbx = other->rbx;
			else if constexpr ( impl::HasRbx<T2> ) if ( extended ) rbx = extended->rbx;
			if constexpr ( impl::HasRbp<T> )                       rbp = other->rbp;
			else if constexpr ( impl::HasRbp<T2> ) if ( extended ) rbp = extended->rbp;
			if constexpr ( impl::HasRsi<T> )                       rsi = other->rsi;
			else if constexpr ( impl::HasRsi<T2> ) if ( extended ) rsi = extended->rsi;
			if constexpr ( impl::HasRdi<T> )                       rdi = other->rdi;
			else if constexpr ( impl::HasRdi<T2> ) if ( extended ) rdi = extended->rdi;
			if constexpr ( impl::HasR8<T> )                        r8 = other->r8;
			else if constexpr ( impl::HasR8<T2> )  if ( extended ) r8 = extended->r8;
			if constexpr ( impl::HasR9<T> )                        r9 = other->r9;
			else if constexpr ( impl::HasR9<T2> )  if ( extended ) r9 = extended->r9;
			if constexpr ( impl::HasR10<T> )                       r10 = other->r10;
			else if constexpr ( impl::HasR10<T2> ) if ( extended ) r10 = extended->r10;
			if constexpr ( impl::HasR11<T> )                       r11 = other->r11;
			else if constexpr ( impl::HasR11<T2> ) if ( extended ) r11 = extended->r11;
			if constexpr ( impl::HasR12<T> )                       r12 = other->r12;
			else if constexpr ( impl::HasR12<T2> ) if ( extended ) r12 = extended->r12;
			if constexpr ( impl::HasR13<T> )                       r13 = other->r13;
			else if constexpr ( impl::HasR13<T2> ) if ( extended ) r13 = extended->r13;
			if constexpr ( impl::HasR14<T> )                       r14 = other->r14;
			else if constexpr ( impl::HasR14<T2> ) if ( extended ) r14 = extended->r14;
			if constexpr ( impl::HasR15<T> )                       r15 = other->r15;
			else if constexpr ( impl::HasR15<T2> ) if ( extended ) r15 = extended->r15;
		}
	};

#if GNU_COMPILER && HAS_MS_EXTENSIONS
	[[gnu::naked, gnu::noinline]] inline void __cdecl __capture_context( reduced_context* )
	{
		__asm
		{
			pop qword ptr [ rcx ] reduced_context.rip
			mov qword ptr [ rcx ] reduced_context.rsp, rsp
			pushfq
			pop qword ptr [ rcx ] reduced_context.rflags
			mov word ptr  [ rcx ] reduced_context.seg_cs, cs
			mov word ptr  [ rcx ] reduced_context.seg_ss, ss

			mov qword ptr [ rcx ] reduced_context.rax, rax
			mov qword ptr [ rcx ] reduced_context.rcx, rcx
			mov qword ptr [ rcx ] reduced_context.rdx, rdx
			mov qword ptr [ rcx ] reduced_context.rbx, rbx
			mov qword ptr [ rcx ] reduced_context.rbp, rbp
			mov qword ptr [ rcx ] reduced_context.rsi, rsi
			mov qword ptr [ rcx ] reduced_context.rdi, rdi
			mov qword ptr [ rcx ] reduced_context.r8,  r8
			mov qword ptr [ rcx ] reduced_context.r9,  r9
			mov qword ptr [ rcx ] reduced_context.r10, r10
			mov qword ptr [ rcx ] reduced_context.r11, r11
			mov qword ptr [ rcx ] reduced_context.r12, r12
			mov qword ptr [ rcx ] reduced_context.r13, r13
			mov qword ptr [ rcx ] reduced_context.r14, r14
			mov qword ptr [ rcx ] reduced_context.r15, r15
			jmp qword ptr [ rcx ] reduced_context.rip
		}
	}
	FORCE_INLINE inline reduced_context capture_context()
	{
		uint64_t space[ ( sizeof( reduced_context ) + 7 ) / 8 ];
		__capture_context( ( reduced_context* ) &space[ 0 ] );
		return *( reduced_context* ) &space[ 0 ];
	}
#endif

	template<typename T>
	concept MmLdrEntryLike = requires( T * x ) {
		( uint64_t ) x->dll_base;
		( size_t ) x->size_of_image;
		x->base_dll_name.get();
	};
	template<typename T>
	concept MmExLdrEntryLike = requires( T * x ) {
		MmLdrEntryLike<T>;
		( void* ) x->exception_table;
		( uint32_t ) x->exception_table_size;
	};

	// Description of the trace snapshot type used for dumping a stack trace
	// for telemetry when an exception occurs.
	//
	struct snapshot
	{
		static constexpr size_t stack_snap_limit = 16_kb;
		static constexpr size_t stack_iret_limit = 5;

		struct unwind_entry
		{
			uint64_t rip = 0;
			uint64_t rsp = 0;
			uint64_t trapframe = 0;

			// Auto serialization.
			//
			auto tie() { return std::tie( rip, rsp, trapframe ); }
			std::string to_string() const { return xstd::fmt::str( "(%p, %p, %p)", rip, rsp, trapframe ); }
		};

		// Serialized exception details.
		//
		uint32_t exception_code = 0;
		uint64_t exception_address = 0;
		std::vector<uint64_t> exception_arguments = {};
		std::string exception_message = {};
		uint64_t cr2 = 0, cr8 = 0;
		reduced_context context = {};
		std::vector<unwind_entry> unwind_history = {};
		std::map<uint64_t, std::vector<uint8_t>> mem_ranges = {};

		// Serialized environment details.
		//
		std::array<uint8_t, 128> token = {};
		std::string process_name = {};
		std::vector<apollo_image_desc> apollo_images = {}; // Cause must be first.
		std::vector<nt_image_desc> nt_images = {};
		uint32_t nt_build = {};
		std::string cpu_brand = {};

		// Named VA ranges and additional context.
		//
		std::vector<std::tuple<uint64_t, uint64_t, std::string>> named_va = {};
		std::unordered_map<std::string, uint64_t>                ud_context = {};

		// Runtime context and the constructor.
		//
		provider prov;
		snapshot( provider prov = {} ) : prov( std::move( prov ) ) {}
		snapshot( snapshot&& ) noexcept = default;
		snapshot( const snapshot& ) = default;
		snapshot& operator=( snapshot&& ) noexcept = default;
		snapshot& operator=( const snapshot& ) = default;

		// Attempts to unwind at the server side.
		//
		void unwind( win::amd64_unwind_state_t base_state, bool forced = false ) {
			// Start the unwind loop.
			//
			size_t trap_limit = stack_iret_limit;
			for( size_t index = 0; index < 0x1000; ++index ) {
				// Push the entry.
				//
				if ( index || unwind_history.empty() || unwind_history.back().rsp != context.rsp || unwind_history.back().rip != context.rip )
					unwind_history.push_back( { context.rip, context.rsp, 0 } );
				auto& entry = unwind_history.back();

				// Lookup the unwind information.
				//
				auto [uw, offset] = prov.get_unwind_info( nt_images, context.rip );
				if ( !uw || uw->chained ) {
					if ( !forced )
						break;
					if ( !base_state.read( base_state.ip(), base_state.sp() ) )
						break;
					base_state.sp() += 8;
					continue;
				}
				if ( offset > uw->size_prologue )
					offset = uw->size_prologue;

				// Create the unwind state and start unwinding.
				//
				win::amd64_unwind_state_t state = { base_state };
				state.frame_offset = uw->frame_offset;
				state.frame_register = uw->frame_register;

				bool unwind_failed = false;
				auto context_copy = context;
				for ( size_t n = 0; n != uw->num_uw_codes; n++ ) {
					auto& code = uw->unwind_code[ n ];
					if ( code.unwind_op == win::unwind_opcode::epilog )
						continue;

					win::visit_amd64_unwind( code, [ &, offset = offset ] <typename T> ( const T * uw )
					{
						if constexpr ( std::is_same_v<T, win::amd64_unwind_iframe_t> )
							entry.trapframe = context.rsp - 0x190 + 8 * ( uw->has_exception_code() ? 6 : 5 );
						if ( code.code_offset <= offset )
							unwind_failed = !uw->unwind( state );
						n += uw->get_size() - 1;
					} );
					if ( entry.trapframe || unwind_failed ) break;
				}
				if ( unwind_failed ) {
					context = context_copy;
					break;
				}

				// If not IRET, unwind the CALL.
				//
				if ( !entry.trapframe ) {
					if ( !win::amd64_unwind_call( state ) )
						break;
				}
				// If break if we've reached the limit.
				//
				else if ( !forced && !--trap_limit ) {
					break;
				}
				// Otherwise read from the trapframe.
				//
				else {
					trapframe_t tf;
					if ( base_state.read( tf, entry.trapframe ) ) {
						if ( prov.enlighten_trapframe && int64_t( entry.trapframe ) < 0 ) {
							prov.enlighten_trapframe( &tf );
						}
						uint64_t* base = ( uint64_t* ) &tf.error_code;
						unwind_history.push_back( { base[ 0 ], 0, 0 } );
						unwind_history.push_back( { base[ 1 ], 0, 0 } );
						unwind_history.push_back( { base[ 2 ], 0, 0 } );
						unwind_history.push_back( { base[ 3 ], 0, 0 } );
						unwind_history.push_back( { base[ 4 ], 0, 0 } );
						unwind_history.push_back( { base[ 5 ], 0, 0 } );
						context = reduced_context{ &tf };
					}
				}
			}
		}

		// Adds an NT image.
		//
		bool add_image( nt_image_desc desc ) {
			if ( !prov.check_unwind_ptr( desc.base_address ) )
				return false;
			if ( desc.pdb_identifier.empty() ) {
				prov.pe_fill_pdb_info( &desc );
			}
			if ( desc.exception_table.empty() ) {
				auto [ptr, sz] = prov.pe_get_directory<win::directory_entry_exception>( desc.base_address );
				if ( sz ) {
					desc.exception_table = { &ptr->functions[ 0 ], sz / sizeof( win::runtime_function_t ) };
				}
			}
			nt_images.emplace_back( std::move( desc ) );
			return true;
		}
		template<MmLdrEntryLike Ldr>
		bool add_image( Ldr* ldr ) {
			if ( !prov.is_valid_ptr( ldr ) ) {
				return false;
			}

			uint64_t base_address = ( uint64_t ) ldr->dll_base;
			if ( !prov.check_unwind_ptr( base_address ) ) {
				return false;
			}

			nt_image_desc desc = {
				.base_address = base_address,
				.length =       ( size_t ) ldr->size_of_image,
				.image_name =   xstd::utf_convert<char>( prov.read_str( ldr->base_dll_name.get() ) )
			};

			if constexpr ( MmExLdrEntryLike<Ldr> ) {
				if ( auto* tbl = ldr->exception_table ) {
					desc.exception_table = { ( win::runtime_function_t* ) tbl, ldr->exception_table_size / sizeof( win::runtime_function_t ) };
				}
			}
			return add_image( std::move( desc ) );
		}

		// Reads memory from existing snapshots.
		//
		size_t try_read( std::span<uint8_t> span, any_ptr va, bool seq = false ) const {
			const auto rbeg = va;
			const auto rlim = va + span.size();

			// Find the entry starting before requested address, if none relevant, fail.
			//
			auto gt = mem_ranges.upper_bound( va );
			if ( gt == mem_ranges.begin() ) return span.size();
			auto it = std::prev( gt );

			size_t total = 0;
			while( true ) {
				auto beg = it->first;
				auto lim = it->first + it->second.size();

				// If sequential, break if we have to skip.
				//
				if ( seq && beg > ( rbeg + total ) ) {
					break;
				}

				// If ranges overlap:
				//
				if ( beg < rlim && lim > rbeg ) {
					// Determine the ranges and copy.
					//
					auto cbeg = std::max<uint64_t>( beg, rbeg );
					auto clim = std::min<uint64_t>( lim, rlim );
					size_t n = clim - cbeg;
					memcpy( span.data() + ( cbeg - rbeg ), it->second.data() + ( cbeg - beg ), n );
					total += n;
				}

				// Break if we reached the end.
				//
				if ( ++it == mem_ranges.end() )
					break;
				if ( it->first >= rlim )
					break;
			}
			return span.size() - total;
		}

		// Snaps the memory range given as much as possible.
		//
		void snap_mem( xstd::numeric_range<> range ) {
			while ( !range.empty() && prov.check_unwind_ptr( range.first ) ) {
				// Find the two points near us.
				//
				auto it_gt = mem_ranges.upper_bound( range.first );
				auto it_le = mem_ranges.end();
				if ( it_gt != mem_ranges.begin() ) {
					it_le = std::prev( it_gt );
				}

				// Adjust the ranges.
				//
				if ( it_le != mem_ranges.end() ) {
					range.first = std::max( range.first, it_le->first + it_le->second.size() );
				}
				if ( it_gt != mem_ranges.end() ) {
					range.limit = std::min( range.limit, it_gt->first );
				}
				if ( range.first >= range.limit ) return;

				// If we can extend the prior entry, do so, otherwise insert a new entry.
				//
				auto it = it_le;
				if ( it_le == mem_ranges.end() || ( it_le->first + it_le->second.size() ) != range.first ) {
					it = mem_ranges.emplace_hint( it_gt, range.first, std::vector<uint8_t>{} );
				}

				// Update the range to only fill a single page.
				//
				auto req_begin = range.first;
				auto req_limit = range.limit;
				auto pva_limit = std::min( req_limit, xstd::align_down( req_begin + 0x1000, 0x1000 ) );
				range.first = pva_limit;

				// Read the current page.
				//
				auto& dump = it->second;
				size_t pos = dump.size();
				dump.resize( pos + req_limit - req_begin );
				pos += prov.read_bytes( &dump[ pos ], req_begin, req_limit - req_begin );

				// If non-empty, resize to fit, else delete.
				//
				if ( pos ) {
					dump.resize( pos );
				} else {
					mem_ranges.erase( it );
				}
			}
		}

		// Snaps a stack pointer.
		//
		xstd::numeric_range<> snap_stack( any_ptr ptr ) {
			xstd::numeric_range<> range{ ptr, ptr + stack_snap_limit };
			if ( prov.stack_query ) {
				auto [beg, sz] = prov.stack_query( ptr );
				if ( beg ) {
					auto nlim = xstd::ptr_at( beg, sz - 8 );
					if ( nlim < range.limit ) {
						range.limit = nlim;
					}
				}
			}
			range.first = xstd::align_down( range.first, 0x10 );
			range.limit = xstd::align_up( range.limit + 8, 0x10 );
			snap_mem( range );
			return range;
		}

		// Attempts to unwind as much as possible client side.
		//
		void preunwind() {
			// Unwind.
			//
			unwind( {
				.context = this,
				.resolve_reg = cb_resolve_register,
				.rmemcpy = [ ] ( void* dump, void* dst, uint64_t src, size_t n ) {
					return ( ( snapshot* ) dump )->prov.read_bytes( dst, src, n ) == n;
				},
				.wmemcpy = [ ] ( void*, uint64_t, const void*, size_t ) {
					return true;
				}
			} );

			// Iterate the unwind history and snap all stack ranges.
			//
			xstd::numeric_range<> stack_range{};
			for ( auto& [rip, rsp, tf] : unwind_history ) {
				if ( !stack_range.contains( rsp ) ) {
					stack_range = snap_stack( rsp );
				}
			}
		}

		// Fills the unwind data for each relevant image on demand based on the stack content.
		//
		void fill_unwind_data() {
			// Prior to this call, this is effectively stack ranges.
			//
			auto stack_ranges = mem_ranges;

			auto fill_for = [ & ] ( uint64_t qw ) {
				if ( prov.check_unwind_ptr( qw ) ) {
					snap_mem( { qw - 8, qw + 32 } );

					// Try to find an already existing image record.
					//
					auto it = std::find_if( nt_images.begin(), nt_images.end(), [ & ] ( const nt_image_desc& desc ) {
						return desc.base_address <= qw && qw < ( desc.base_address + desc.length );
					} );

					// If found, try to get the unwind information.
					//
					if ( it != nt_images.end() ) {
						prov.pe_get_unwind_info( std::to_address( it ), qw );
					}
				}
			};

			// Add information from RIP.
			//
			fill_for( context.rip );
			for ( auto& uw : unwind_history )
				fill_for( uw.rip );

			// Add information from context.
			//
			for ( size_t n = 0; n != 16; n++ )
				fill_for( ( &context.rax )[ n ] );

			// For each stack range:
			//
			for ( auto& [va, bytes] : stack_ranges ) {
				// Enumerate every qword:
				//
				for ( size_t offset = xstd::align_up( va, 8 ) - va; ( offset + 8 ) <= bytes.size(); offset += 8 ) {
					// If it looks like a valid pointer:
					//
					auto qw = xstd::ref_at<uint64_t>( bytes.data(), offset );
					fill_for( qw );
				}
			}
		}

		// Auto serialization.
		//
		auto tie() {
			return std::tie(
				exception_code, exception_address, exception_arguments, exception_message, cr2, cr8,
				xstd::as_bytes( context ), unwind_history, mem_ranges, token,
				process_name, apollo_images, nt_images, nt_build, cpu_brand,
				xstd::version_bump,
				named_va, ud_context
			);
		}

		// Resolve register routine.
		//
		static void* cb_resolve_register( void* context, win::unwind_register_id reg )
		{
			auto* snap = ( snapshot* ) context;
			auto& ctx = snap->context;

			// Handle XMM:
			//
			if ( win::unwind_register_id::amd64_xmm0 <= reg && reg <= win::unwind_register_id::amd64_xmm15 ) {
				static uint64_t dummy_xmm[ 2 ];
				return &dummy_xmm;
			}

			// Handle GP:
			//
			switch ( reg )
			{
				case win::unwind_register_id::amd64_rax:    return &ctx.rax;
				case win::unwind_register_id::amd64_rcx:    return &ctx.rcx;
				case win::unwind_register_id::amd64_rdx:    return &ctx.rdx;
				case win::unwind_register_id::amd64_rbx:    return &ctx.rbx;
				case win::unwind_register_id::amd64_rsp:    return &ctx.rsp;
				case win::unwind_register_id::amd64_rbp:    return &ctx.rbp;
				case win::unwind_register_id::amd64_rsi:    return &ctx.rsi;
				case win::unwind_register_id::amd64_rdi:    return &ctx.rdi;
				case win::unwind_register_id::amd64_r8:     return &ctx.r8;
				case win::unwind_register_id::amd64_r9:     return &ctx.r9;
				case win::unwind_register_id::amd64_r10:    return &ctx.r10;
				case win::unwind_register_id::amd64_r11:    return &ctx.r11;
				case win::unwind_register_id::amd64_r12:    return &ctx.r12;
				case win::unwind_register_id::amd64_r13:    return &ctx.r13;
				case win::unwind_register_id::amd64_r14:    return &ctx.r14;
				case win::unwind_register_id::amd64_r15:    return &ctx.r15;
				case win::unwind_register_id::amd64_eflags: return &ctx.rflags;
				case win::unwind_register_id::amd64_rip:    return &ctx.rip;
				case win::unwind_register_id::amd64_seg_ss: return &ctx.seg_ss;
				case win::unwind_register_id::amd64_seg_cs: return &ctx.seg_cs;
				default:                                    return nullptr;
			}
		}
	};
};
