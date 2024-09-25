#pragma once
#include <xstd/intrinsics.hpp>
#include <xstd/type_helpers.hpp>
#include <ia32.hpp>
#include <xedpp.hpp>
#include <cfw/trapframe.hpp>

namespace su
{
	struct vm_context;

	// Declare the type of a trapframe.
	//
#pragma pack(push, 1)
	struct trapframe
	{
		uint8_t             temp[ 32 ];
		any_ptr             ctx_0;
		any_ptr             ctx_1;
		any_ptr             ctx_2;
		
		// Local virtual machine context.
		//
		vm_context*         vmcs;

		// GSBASEs of the interrupted routine.
		//
		uint64_t            gs_base;
		uint64_t            kernel_gs_base;

		// Set to cr2 if page fault, undefined otherwise.
		//
		any_ptr             fault_address;

		// Volatile general purpose registers:
		//
		uint64_t            rax;
		uint64_t            rdx;
		uint64_t            r8;
		uint64_t            r9;
		uint64_t            r10;
		uint64_t            r11;
		uint64_t            rcx;

		// Non-volatile register used to store the frame.
		//
		uint64_t            rbp;

		// Volatile SSE and AVX state.
		//
		m256_t              ymm0;
		m256_t              ymm1;
		m256_t              ymm2;
		m256_t              ymm3;
		m256_t              ymm4;
		m256_t              ymm5;
		uint32_t            mx_csr;

		// Trapframe flags.
		//
		uint16_t            guest_level    : 1;

		// Reserved, will be used for further flags.
		//
		uint8_t             rsvd;

		// Interrupt type.
		//
		interrupt_type      type;

		// Pushed by hardware:
		//
		uint64_t            error_code;
		union
		{
			struct
			{
				uint64_t             rip;
				seg_t                seg_cs;
				uint16_t             _fill0[ 3 ];
				ia32::rflags         rflags;
				uint64_t             rsp;
				seg_t                seg_ss;
				uint16_t             _fill1[ 3 ];
			};
			mframe_t                machine_frame;
		};

		// References the return pointer // self based on return pointer.
		//
		FORCE_INLINE static trapframe* current( void* rsp = _AddressOfReturnAddress() ) { return xstd::ptr_at( rsp, +8 ); }
		FORCE_INLINE any_ptr& retptr() { return xstd::ref_at<any_ptr>( this, -8 ); }
		FORCE_INLINE const any_ptr& retptr() const { return xstd::ref_at<const any_ptr>( this, -8 ); }

		// Misc helpers.
		//
		FORCE_INLINE nt::syscall_index syscall_idx() const { return { rax }; }
		FORCE_INLINE const uint64_t& syscall_arg( size_t n ) const
		{
			switch ( n )
			{
				case 0:  return r10;
				case 1:  return rdx;
				case 2:  return r8;
				case 3:  return r9;
				default: return *( uint64_t* ) ( rsp + ( n + 1 ) * 8 );
			}
		}
	};
	static_assert( !( sizeof( trapframe ) & 0xF ), "Trapframe is misaligned." );
	static_assert( !( offsetof( trapframe, error_code ) & 0xF ), "Trapframe is misaligned." );
#pragma pack(pop)

	// XED helpers.
	//
	static constexpr xed::register_mapping<size_t> xed_to_tf( xed::reg_t reg )
	{
		switch ( reg )
		{
			// XMM registers.
			//
			case XED_REG_XMM0:    return { offsetof( trapframe, ymm0 ),   0,   16 };
			case XED_REG_XMM1:    return { offsetof( trapframe, ymm1 ),   0,   16 };
			case XED_REG_XMM2:    return { offsetof( trapframe, ymm2 ),   0,   16 };
			case XED_REG_XMM3:    return { offsetof( trapframe, ymm3 ),   0,   16 };
			case XED_REG_XMM4:    return { offsetof( trapframe, ymm4 ),   0,   16 };
			case XED_REG_XMM5:    return { offsetof( trapframe, ymm5 ),   0,   16 };
			
			// YMM registers.
			//
			case XED_REG_YMM0:    return { offsetof( trapframe, ymm0 ),   0,   32 };
			case XED_REG_YMM1:    return { offsetof( trapframe, ymm1 ),   0,   32 };
			case XED_REG_YMM2:    return { offsetof( trapframe, ymm2 ),   0,   32 };
			case XED_REG_YMM3:    return { offsetof( trapframe, ymm3 ),   0,   32 };
			case XED_REG_YMM4:    return { offsetof( trapframe, ymm4 ),   0,   32 };
			case XED_REG_YMM5:    return { offsetof( trapframe, ymm5 ),   0,   32 };

			// Specials.
			//
			case XED_REG_SS:      return { offsetof( trapframe, seg_ss ), 0,   2 };
			case XED_REG_CS:      return { offsetof( trapframe, seg_cs ), 0,   2 };
			case XED_REG_MXCSR:   return { offsetof( trapframe, mx_csr ), 0,   4 };
			default: break;
		}

		auto [base, off, sz] = xed::resolve_mapping( reg );
		switch ( base )
		{
			// GP registers.
			//
			case XED_REG_R8:      return { offsetof( trapframe, r8 ),     off, sz };
			case XED_REG_R9:      return { offsetof( trapframe, r9 ),     off, sz };
			case XED_REG_R10:     return { offsetof( trapframe, r10 ),    off, sz };
			case XED_REG_R11:     return { offsetof( trapframe, r11 ),    off, sz };
			case XED_REG_RAX:     return { offsetof( trapframe, rax ),    off, sz };
			case XED_REG_RCX:     return { offsetof( trapframe, rcx ),    off, sz };
			case XED_REG_RDX:     return { offsetof( trapframe, rdx ),    off, sz };
			case XED_REG_RBP:     return { offsetof( trapframe, rbp ),    off, sz };
			case XED_REG_RSP:     return { offsetof( trapframe, rsp ),    off, sz };

			// Specials.
			//
			case XED_REG_RIP:     return { offsetof( trapframe, rip ),    off, sz };
			case XED_REG_RFLAGS:  return { offsetof( trapframe, rflags ), off, sz };
			default:              return { 0, 0, 0 };
		}
	}
};
