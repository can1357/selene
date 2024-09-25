#pragma once
#include "ntpp/common.hpp"
#include "ntpp/ob.hpp"
#include "ntpp/sync.hpp"
#include "ntpp/memory.hpp"
#include "ntpp/reg.hpp"
#include "ntpp/io.hpp"
#include <sdk/os/api.hpp>
#include <sdk/ps/api.hpp>
#include <sdk/win/harderror_msg_t.hpp>
#include <sdk/win/harderror_response_t.hpp>
#include <sdk/win/system_codeintegrity_information_t.hpp>
#include <sdk/win/system_firmware_table_information_t.hpp>
#include <sdk/win/harderror_response_option_t.hpp>
#include <sdk/win/variable_name_and_value_t.hpp>
#include <nt/image.hpp>

// Misc API.
//
namespace ntpp
{
	// Context.
	//
	inline nt::result<> scontinue( const nt::context* ctx )
	{
		scope_mode _p{};
		return ( nt::status ) os::continue_( ( nt::context* ) &ctx, false );
	}
	[[gnu::naked]] inline void __cdecl icontinue [[noreturn]] ( [[maybe_unused]] const nt::context* ctx )
	{
		__asm
		{
			ldmxcsr       dword ptr  [rcx+0x34]
			movaps        xmm0,      xmmword ptr [rcx+0x1A0]
			movaps        xmm1,      xmmword ptr [rcx+0x1B0]
			movaps        xmm2,      xmmword ptr [rcx+0x1C0]
			movaps        xmm3,      xmmword ptr [rcx+0x1D0]
			movaps        xmm4,      xmmword ptr [rcx+0x1E0]
			movaps        xmm5,      xmmword ptr [rcx+0x1F0]
			movaps        xmm6,      xmmword ptr [rcx+0x200]
			movaps        xmm7,      xmmword ptr [rcx+0x210]
			movaps        xmm8,      xmmword ptr [rcx+0x220]
			movaps        xmm9,      xmmword ptr [rcx+0x230]
			movaps        xmm10,     xmmword ptr [rcx+0x240]
			movaps        xmm11,     xmmword ptr [rcx+0x250]
			movaps        xmm12,     xmmword ptr [rcx+0x260]
			movaps        xmm13,     xmmword ptr [rcx+0x270]
			movaps        xmm14,     xmmword ptr [rcx+0x280]
			movaps        xmm15,     xmmword ptr [rcx+0x290]
			mov           rax,       qword ptr [rcx+0x78]
			mov           rdx,       qword ptr [rcx+0x88]
			mov           rbx,       qword ptr [rcx+0x90]
			mov           rbp,       qword ptr [rcx+0xA0]
			mov           rsi,       qword ptr [rcx+0xA8]
			mov           rdi,       qword ptr [rcx+0xB0]
			mov           r8,        qword ptr [rcx+0xB8]
			mov           r9,        qword ptr [rcx+0xC0]
			mov           r10,       qword ptr [rcx+0xC8]
			mov           r11,       qword ptr [rcx+0xD0]
			mov           r12,       qword ptr [rcx+0xD8]
			mov           r13,       qword ptr [rcx+0xE0]
			mov           r14,       qword ptr [rcx+0xE8]
			mov           r15,       qword ptr [rcx+0xF0]
			push          qword ptr [rcx+0x42]
			push          qword ptr [rcx+0x98]
			push          qword ptr [rcx+0x44]
			push          qword ptr [rcx+0x38]
			push          qword ptr [rcx+0xF8]
			and           qword ptr [rsp+0x20], 0xFFFF
			and           qword ptr [rsp+0x10], 0xFFFF
			and           qword ptr [rsp+0x8],  0xFFFF
			mov           rcx,       qword ptr [rcx+0x80]
			iretq
		}
	}
	[[gnu::naked, gnu::noinline]] inline void capture_context( [[maybe_unused]] nt::context* ctx )
	{
		__asm
		{
			// Save general purpose registers.
			//
			mov     [rcx + 0x78],	rax
			mov     [rcx + 0x80],	rcx
			mov     [rcx + 0x88],	rdx
			mov     [rcx + 0x90],	rbx
			mov     [rcx + 0xA0],	rbp
			mov     [rcx + 0xA8],	rsi
			mov     [rcx + 0xB0],	rdi
			mov     [rcx + 0xB8],	r8
			mov     [rcx + 0xC0],	r9
			mov     [rcx + 0xC8],	r10
			mov     [rcx + 0xD0],	r11
			mov     [rcx + 0xD8],	r12
			mov     [rcx + 0xE0],	r13
			mov     [rcx + 0xE8],	r14
			mov     [rcx + 0xF0],	r15

			// Save XMM registers.
			//
			movups  [rcx + 0x1A0 + 0x10 * 0],	xmm0
			movups  [rcx + 0x1A0 + 0x10 * 1],	xmm1
			movups  [rcx + 0x1A0 + 0x10 * 2],	xmm2
			movups  [rcx + 0x1A0 + 0x10 * 3],	xmm3
			movups  [rcx + 0x1A0 + 0x10 * 4],	xmm4
			movups  [rcx + 0x1A0 + 0x10 * 5],	xmm5
			movups  [rcx + 0x1A0 + 0x10 * 6],	xmm6
			movups  [rcx + 0x1A0 + 0x10 * 7],	xmm7
			movups  [rcx + 0x1A0 + 0x10 * 8],	xmm8
			movups  [rcx + 0x1A0 + 0x10 * 9],	xmm9
			movups  [rcx + 0x1A0 + 0x10 * 10],	xmm10
			movups  [rcx + 0x1A0 + 0x10 * 11],	xmm11
			movups  [rcx + 0x1A0 + 0x10 * 12],	xmm12
			movups  [rcx + 0x1A0 + 0x10 * 13],	xmm13
			movups  [rcx + 0x1A0 + 0x10 * 14],	xmm14
			movups  [rcx + 0x1A0 + 0x10 * 15],	xmm15

			// Save flags and MXCSR.
			//
			pushfq
			pop     rax
			mov     dword ptr [rcx + 0x44], eax
			stmxcsr [rcx + 0x34]

			// Save segment registers.
			//
			mov     [rcx + 0x38],   cs
			mov     [rcx + 0x3A],   ds
			mov     [rcx + 0x3C],   es
			mov     [rcx + 0x3E],   fs
			mov     [rcx + 0x40],   gs
			mov     [rcx + 0x42],   ss

			// Save RSP and RIP after adjustments.
			//
			lea     rax,            [rsp+8]
			mov     [rcx + 0x98],	rax // RSP
			mov     rax,            [rsp]
			mov     [rcx + 0xF8],	rax // RIP

			// Set context flags and return.
			//
			mov     dword ptr [rcx + 0x30],  CONTEXT_FULL
			ret
		}
	}
	inline void trap_to_context( nt::context* ctx, nt::trapframe* tf, nt::exframe* ex = nullptr )
	{
		ctx->context_flags = CONTEXT_CONTROL | CONTEXT_INTEGER | CONTEXT_FLOATING_POINT;
		ctx->seg_cs = tf->seg_cs;
		ctx->seg_ss = tf->seg_ss;
		ctx->rsp = tf->rsp;
		ctx->rip = tf->rip;
		ctx->eflags.flags = tf->rflags.flags;
		ctx->rax = tf->rax;
		ctx->rcx = tf->rcx;
		ctx->rdx = tf->rdx;
		ctx->rbp = tf->rbp;
		ctx->r8 = tf->r8;
		ctx->r9 = tf->r9;
		ctx->r10 = tf->r10;
		ctx->r11 = tf->r11;
		ctx->xmm0 = tf->xmm0;
		ctx->xmm1 = tf->xmm1;
		ctx->xmm2 = tf->xmm2;
		ctx->xmm3 = tf->xmm3;
		ctx->xmm4 = tf->xmm4;
		ctx->xmm5 = tf->xmm5;

		if ( ex )
		{
			ctx->rbx = ex->rbx;
			ctx->rsi = ex->rsi;
			ctx->rdi = ex->rdi;
			ctx->r12 = ex->r12;
			ctx->r13 = ex->r13;
			ctx->r14 = ex->r14;
			ctx->r15 = ex->r15;
			ctx->xmm6 = ex->xmm6;
			ctx->xmm7 = ex->xmm7;
			ctx->xmm8 = ex->xmm8;
			ctx->xmm9 = ex->xmm9;
			ctx->xmm10 = ex->xmm10;
			ctx->xmm11 = ex->xmm11;
			ctx->xmm12 = ex->xmm12;
			ctx->xmm13 = ex->xmm13;
			ctx->xmm14 = ex->xmm14;
			ctx->xmm15 = ex->xmm15;
		}
	}

	// System information.
	//
	inline nt::result<std::unique_ptr<win::variable_name_and_value_t>> query_system_environment_values()
	{
		scope_mode _p{};
		return impl::query_info_template<win::variable_name_and_value_t>(
			[ ] ( void* buffer, uint32_t len, uint32_t* len_out )
			{
				*len_out = len;
				return os::enumerate_system_environment_values_ex( VARIABLE_INFORMATION_VALUES, buffer, len_out );
			},
			[ ] ( auto&&... ) {}
		);
	}
	template<typename T>
	inline nt::result<std::unique_ptr<T>> query_system_info( win::system_information_class_t iclass )
	{
		scope_mode _p{};
		return impl::query_info_template<T>(
			os::query_system_information,
			[ ] ( auto&&... ) {},
			iclass
		);
	}
	inline nt::result<uint32_t> query_ci_info()
	{
		scope_mode _p{};

		win::system_codeintegrity_information_t ci_info = {};
		ci_info.length = sizeof( ci_info );
		ci_info.code_integrity_options = 0;
		uint32_t out = 0;
		auto status = ( nt::status ) os::query_system_information(
			win::system_information_class_t::system_code_integrity_information,
			&ci_info,
			sizeof( ci_info ),
			&out
		);
		if ( status.is_error() )
			return status;
		else
			return ci_info.code_integrity_options;
	}
	inline nt::result<std::unique_ptr<win::system_firmware_table_information_t>> read_firmware_table( uint32_t provider, uint32_t table_id )
	{
		scope_mode _p{};
		return impl::query_info_template<win::system_firmware_table_information_t>(
			os::query_system_information,
			[ & ] ( win::system_firmware_table_information_t* info, size_t len )
			{
				info->action = win::system_firmware_table_action_t::get;
				info->provider_signature = provider;
				info->table_id = table_id;
				info->table_buffer_length = len - sizeof( win::system_firmware_table_information_t );
			},
			win::system_information_class_t::system_firmware_table_information
		);
	}

	// Messagebox.
	//
	inline win::harderror_response_t message_box( const nt::unicode_view& text, const nt::unicode_view& caption, uint32_t mb_options )
	{
		scope_mode _p{};
		uint64_t parameters[] = { ( uint64_t ) &text, ( uint64_t ) &caption, mb_options };
		win::harderror_response_t response = win::harderror_response_t::not_handled;
		os::raise_hard_error(
			STATUS_SERVICE_NOTIFICATION,
			std::size( parameters ),
			1 | 2, /*string mask*/
			parameters,
			( uint32_t ) win::harderror_response_option_t::ok, // Ignored.
			( uint32_t* ) &response
		);
		return response;
	}
};