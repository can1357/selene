#pragma once
#include "common.hpp"
#include <ia32.hpp>
#include <string>
#include <string_view>
#include <xstd/type_helpers.hpp>
#include <xstd/utf.hpp>

using m128a_t = __declspec( align( 16 ) ) __m128;
namespace nt
{
	using seg_t =       ia32::segment_selector;
	using debug_ctl_t = ia32::debugctl_register;

	// Declare the type of a trapframe.
	//
#pragma pack(push, 4)
	enum class trapframe_type : uint8_t
	{
		external =    0,
		exception =   1,
		system_call = 2
	};
	struct trapframe
	{
		any_ptr             home;
		any_ptr             home_1;
		any_ptr             home_2;
		any_ptr             home_3;
		any_ptr             home_4;

		// Set to previous mode for syscall frames, undefined otherwise.
		//
		uint8_t             previous_mode;

		// IRQL of the interrupted routine, set if non-exception frame.
		//
		uint8_t             previous_irql;

		// Always set to 0.
		//
		uint8_t             fault_indicator;

		// Frame type.
		//
		trapframe_type      type;

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
		m128a_t             xmm0;
		m128a_t             xmm1;
		m128a_t             xmm2;
		m128a_t             xmm3;
		m128a_t             xmm4;
		m128a_t             xmm5;

		// Set to cr2 if page fault, undefined otherwise.
		//
		any_ptr       fault_address;

		// State of the debug registers.
		//
		uint64_t            dr0;
		uint64_t            dr1;
		uint64_t            dr2;
		uint64_t            dr3;
		ia32::dr6           dr6;
		ia32::dr7           dr7;

		// State of the debug MSRs.
		//
		debug_ctl_t         debug_ctl;
		uint64_t            last_branch_to_rip;
		uint64_t            last_branch_from_rip;
		uint64_t            last_exception_to_rip;
		uint64_t            last_exception_from_rip;

		// Left undefined.
		//
		seg_t               _seg_ds;
		seg_t               _seg_es;
		seg_t               _seg_fs;
		seg_t               _seg_gs;

		// Previous trap frame, only used in intra-kernel syscall.
		//
		void*               trap_frame;
		
		// Conditionally used non-volatile registers.
		//
		uint64_t            rbx; // Set if syscall frame.
		uint64_t            rdi; // Set if syscall frame.
		uint64_t            rsi; // Set if external | syscall frame.

		// Non-volatile general purpose register used to store the stackframe.
		//
		uint64_t            rbp;

		// Pushed by hardware:
		//
		uint64_t            error_code; // Or interrupt vector if unexpected.
		uint64_t            rip;
		seg_t               seg_cs;
		uint16_t            _fill0[ 3 ];
		ia32::rflags        rflags;
		uint64_t            rsp;
		seg_t               seg_ss;
		uint16_t            _fill1[ 3 ];

		// References the return pointer.
		//
		FORCE_INLINE inline any_ptr& retptr() { return *( any_ptr* ) std::prev( &home ); }
		FORCE_INLINE inline const any_ptr& retptr() const { return *( const any_ptr* ) std::prev( &home ); }
	};
	static_assert( sizeof( trapframe ) == 0x190, "Invalid trap frame size." );

	// @ rbp = tf - 0x80
	[[gnu::noinline, gnu::naked, no_split, no_stub]] inline void frame_continuation_ex()
	{
		using ntf = nt::trapframe;
		__asm
		{
			// TODO: Not too sure if needed.
			mov       rsi,                  [ rbp - 0x80 ] ntf.rsi

			// Load the volatile general purpose/SSE registers.
			//
			mov       rax,                  [ rbp - 0x80 ] ntf.rax
			mov       rcx,                  [ rbp - 0x80 ] ntf.rcx
			mov       rdx,                  [ rbp - 0x80 ] ntf.rdx
			mov       r8,                   [ rbp - 0x80 ] ntf.r8
			mov       r9,                   [ rbp - 0x80 ] ntf.r9
			mov       r10,                  [ rbp - 0x80 ] ntf.r10
			mov       r11,                  [ rbp - 0x80 ] ntf.r11
			movaps    xmm0,                 [ rbp - 0x80 ] ntf.xmm0
			movaps    xmm1,                 [ rbp - 0x80 ] ntf.xmm1
			movaps    xmm2,                 [ rbp - 0x80 ] ntf.xmm2
			movaps    xmm3,                 [ rbp - 0x80 ] ntf.xmm3
			movaps    xmm4,                 [ rbp - 0x80 ] ntf.xmm4
			movaps    xmm5,                 [ rbp - 0x80 ] ntf.xmm5
			ldmxcsr   [ rbp - 0x80 ] ntf.mx_csr

			// Adjust the stack, reload rbp and return.
			//
			mov       rsp,                  rbp
			mov       rbp,                  [ rbp - 0x80 ] ntf.rbp
			add       rsp,                  0xE8 /*offsetof ntf.rip - 0x80*/
			iretq
		}
	}
	[[gnu::noinline, gnu::naked, no_split]] inline void frame_continuation_sysret()
	{
		using ntf = nt::trapframe;
		__asm
		{
			mov       rax,                  [ rbp - 0x80 ] ntf.rax
			mov       rbx,                  [ rbp - 0x80 ] ntf.rbx
			mov       rdi,                  [ rbp - 0x80 ] ntf.rdi
			mov       rsi,                  [ rbp - 0x80 ] ntf.rsi
			
			xor       edx,                  edx
			xor       r10d,                 r10d
			mov       r8,                   [ rbp - 0x80 ] ntf.rsp
			mov       r9,                   [ rbp - 0x80 ] ntf.rbp
			mov       rcx,                  [ rbp - 0x80 ] ntf.rip
			mov       r11,                  [ rbp - 0x80 ] ntf.rflags

			pxor      xmm0,                 xmm0
			pxor      xmm1,                 xmm1
			pxor      xmm2,                 xmm2
			pxor      xmm3,                 xmm3
			pxor      xmm4,                 xmm4
			pxor      xmm5,                 xmm5
			ldmxcsr   [ rbp - 0x80 ] ntf.mx_csr

			mov       rbp,                  r9
			mov       rsp,                  r8
			sysret
		}
	}
	inline constexpr auto get_frame_continuation( trapframe_type type ) -> decltype( &frame_continuation_ex )
	{
		if ( type == trapframe_type::external )
			return &frame_continuation_ex;
		else if ( type == trapframe_type::system_call )
			return &frame_continuation_sysret;
		else
			return xstd::ptr_at( &frame_continuation_ex, +7 ); // Skip the mov to RSI.
	}
	inline constexpr auto get_frame_continuation( trapframe* tf ) -> decltype( &frame_continuation_ex )
	{
		return get_frame_continuation( tf->type );
	}

	// Declare the type of an exception frame.
	//
	struct exframe
	{
		FORCE_INLINE static trapframe* from( trapframe* tf ) { return xstd::ptr_at( tf, -(int)sizeof( exframe ) ); }
		FORCE_INLINE static const trapframe* from( const trapframe* tf ) { return xstd::ptr_at( tf, -(int)sizeof( exframe ) ); }

		any_ptr        home;
		any_ptr        home_1;
		any_ptr        home_2;
		any_ptr        home_3;
		any_ptr        home_4;
		any_ptr        home_5;

		// Non-volatile XMM registers:
		//
		m128a_t			xmm6;
		m128a_t			xmm7;
		m128a_t			xmm8;
		m128a_t			xmm9;
		m128a_t			xmm10;
		m128a_t			xmm11;
		m128a_t			xmm12;
		m128a_t			xmm13;
		m128a_t			xmm14;
		m128a_t			xmm15;

		// Left undefined.
		//
		trapframe*     _trap_frame;
		void*          _output_buffer;
		uint64_t       _output_length;
		uint64_t       _spare;
		uint64_t       _mx_csr;
		uint64_t       _rbp;

		// Non-volatile general purpose registers:
		//
		uint64_t       rbx;
		uint64_t       rdi;
		uint64_t       rsi;
		uint64_t       r12;
		uint64_t			r13;
		uint64_t			r14;
		uint64_t			r15;

		// Return address of the trapframe owner.
		//
		any_ptr  tf_retptr;

		// References the return pointer.
		//
		FORCE_INLINE inline any_ptr& retptr() { return *( any_ptr* ) std::prev( &home ); }
		FORCE_INLINE inline const any_ptr& retptr() const { return *( const any_ptr* ) std::prev( &home ); }
	};
	static_assert( sizeof( exframe ) == 0x140, "Invalid exception frame size." );

	// Declare the type of a context.
	//
	struct xsave_format
	{
		uint16_t                    control_word;
		uint16_t                    status_word;
		uint8_t                     tag_word;
		uint16_t                    error_opcode;
		uint32_t                    error_offset;
		uint16_t                    error_selector;
		uint32_t                    data_offset;
		uint16_t                    data_selector;
		uint32_t                    mx_csr;
		uint32_t                    mx_csr_mask;
		m128a_t                     float_registers[ 8 ];
		m128a_t                     xmm_registers[ 16 ];
		uint8_t                     reserved[ 96 ];
	};
	struct context
	{
		uint64_t                    p1_home;
		uint64_t                    p2_home;
		uint64_t                    p3_home;
		uint64_t                    p4_home;
		uint64_t                    p5_home;
		uint64_t                    p6_home;
		uint32_t                    context_flags;
		uint32_t                    mx_csr;
		seg_t                       seg_cs;
		seg_t                       seg_ds;
		seg_t                       seg_es;
		seg_t                       seg_fs;
		seg_t                       seg_gs;
		seg_t                       seg_ss;
		ia32::eflags                eflags;
		uint64_t                    dr0;
		uint64_t                    dr1;
		uint64_t                    dr2;
		uint64_t                    dr3;
		ia32::dr6                   dr6;
		ia32::dr7                   dr7;
		uint64_t                    rax;
		uint64_t                    rcx;
		uint64_t                    rdx;
		uint64_t                    rbx;
		uint64_t                    rsp;
		uint64_t                    rbp;
		uint64_t                    rsi;
		uint64_t                    rdi;
		uint64_t                    r8;
		uint64_t                    r9;
		uint64_t                    r10;
		uint64_t                    r11;
		uint64_t                    r12;
		uint64_t                    r13;
		uint64_t                    r14;
		uint64_t                    r15;
		uint64_t                    rip;
		union
		{
			xsave_format                flt_save;
			struct
			{
				m128a_t                     header[ 2 ];
				m128a_t                     legacy[ 8 ];
				m128a_t                     xmm0;
				m128a_t                     xmm1;
				m128a_t                     xmm2;
				m128a_t                     xmm3;
				m128a_t                     xmm4;
				m128a_t                     xmm5;
				m128a_t                     xmm6;
				m128a_t                     xmm7;
				m128a_t                     xmm8;
				m128a_t                     xmm9;
				m128a_t                     xmm10;
				m128a_t                     xmm11;
				m128a_t                     xmm12;
				m128a_t                     xmm13;
				m128a_t                     xmm14;
				m128a_t                     xmm15;
			};
		};
		m128a_t                     vector_register[ 26 ];
		uint64_t                    vector_control;
		uint64_t                    debug_control;
		uint64_t                    last_branch_to_rip;
		uint64_t                    last_branch_from_rip;
		uint64_t                    last_exception_to_rip;
		uint64_t                    last_exception_from_rip;
	};
	static_assert( sizeof( context ) == 0x4D0, "Invalid context size." );
#pragma pack(pop)

	// List entry implementation.
	//
	struct list_entry_t
	{
		// Declare iterator type.
		//
		template<bool C>
		struct iterator
		{
			using iterator_category = std::bidirectional_iterator_tag;
			using difference_type =   ptrdiff_t;
			using value_type =        any_ptr;
			using reference =         any_ptr;
			using pointer =           any_ptr;

			// Current entry and alternative value for end magic.
			//
			xstd::make_const_if_t<C, list_entry_t*> it;
			xstd::make_const_if_t<C, list_entry_t*> alt;

			// Iteration.
			//
			FORCE_INLINE iterator& operator++() { it = it->flink; return *this; }
			FORCE_INLINE iterator& operator--() { it = it->blink; return *this; }
			FORCE_INLINE iterator operator++( int ) { auto s = *this; operator++(); return s; }
			FORCE_INLINE iterator operator--( int ) { auto s = *this; operator--(); return s; }

			// Equality check against another iterator.
			//
			FORCE_INLINE bool operator==( const iterator& other ) const { return it == other.it || it == other.alt; }
			FORCE_INLINE bool operator!=( const iterator& other ) const { return it != other.it && it != other.alt; }

			// Redirect dereferencing to the address of the iterator.
			//
			FORCE_INLINE any_ptr operator*() const { return it; }
			FORCE_INLINE any_ptr operator->() const { return it; }
		};

		// Declare real fields.
		//
		list_entry_t* flink;
		list_entry_t* blink;

		// Iteration primitives for list heads.
		//
		FORCE_INLINE iterator<false> begin() { return { flink, ( list_entry_t* ) std::string::npos }; }
		FORCE_INLINE iterator<false> end() { return { this, nullptr }; }
		FORCE_INLINE iterator<true> begin() const { return { flink, ( list_entry_t* ) std::string::npos }; }
		FORCE_INLINE iterator<true> end() const { return { this, nullptr }; }
		FORCE_INLINE size_t size() const { return std::distance( begin(), end() ) - 1; }
		FORCE_INLINE bool empty() const { return flink == this; }

		// Modification primitives.
		//
		FORCE_INLINE void insert_after( list_entry_t* e )
		{
			flink = e->flink;
			blink = e;
			e->flink = this;
			flink->blink = this;
		}
		FORCE_INLINE void insert( list_entry_t* e )
		{
			flink = e;
			blink = e->blink;
			e->blink = this;
			blink->flink = this;
		}
		FORCE_INLINE void unlink( bool no_fixups = false )
		{
			flink->blink = blink;
			blink->flink = flink;
			if ( !no_fixups )
			{
				flink = this;
				blink = this;
			}
		}
	};

	// String types.
	//
	template<typename C>
	struct string_view32
	{
		using view_t =   std::basic_string_view<C>;
		using string_t = std::basic_string<C>;

		// Format matching UNICODE_STRING and STRING.
		//
		uint16_t length = 0;
		uint16_t maximum_length = 0;
		C* __ptr32 buffer = nullptr;

		// Construction from various types.
		//
		constexpr string_view32() {}
		constexpr string_view32( view_t view )
		{
			length = maximum_length = view.length() * sizeof( C );
			buffer = ( C* ) view.data();
		}
		constexpr string_view32( const C* cstr ) : string_view32( view_t{ cstr } ) {}
		constexpr string_view32( const C* cstr, size_t n ) : string_view32( view_t{ cstr, n } ) {}
		string_view32( const string_t& cppstr ) : string_view32( view_t{ cppstr } ) {}

		// Native view conversion.
		//
		constexpr view_t get() const { return { buffer, length / sizeof( C ) }; }
		constexpr operator view_t() const { return get(); }
		operator string_t() const { return string_t{ get() }; }

		// Generic string conversion.
		//
		std::string to_string() const { return xstd::utf_convert<char>( get() ); }
	};
	template<typename C>
	struct string_view
	{
		using view_t =   std::basic_string_view<C>;
		using string_t = std::basic_string<C>;

		// Format matching UNICODE_STRING and STRING.
		//
		uint16_t length = 0;
		uint16_t maximum_length = 0;
		C*       buffer = nullptr;

		// Construction from various types.
		//
		constexpr string_view() {}
		constexpr string_view( view_t view )
		{
			length = maximum_length = view.length() * sizeof( C );
			buffer = ( C* ) view.data();
		}
		constexpr string_view( const C* cstr ) : string_view( view_t{ cstr } ) {}
		constexpr string_view( const C* cstr, size_t n ) : string_view( view_t{ cstr, n } ) {}
		string_view( const string_t& cppstr ) : string_view( view_t{ cppstr } ) {}

		// Native view conversion.
		//
		constexpr view_t get() const { return { buffer, length / sizeof( C ) }; }
		constexpr operator view_t() const { return get(); }
		operator string_t() const { return string_t{ get() }; }

		// Generic string conversion.
		//
		std::string to_string() const { return xstd::utf_convert<char>( get() ); }
	};

	using ascii_view =     string_view<char>;
	using unicode_view =   string_view<wchar_t>;
	using ascii_view32 =   string_view32<char>;
	using unicode_view32 = string_view32<wchar_t>;
};