#pragma once
#include <xstd/type_helpers.hpp>
#include <ntpp.hpp>
#include <ia32.hpp>

// Defines some target specific constants.
//
namespace gdb
{
	// Define "signals".
	//
	inline constexpr char SIGHUP[]  = "S01";
	inline constexpr char SIGINT[]  = "S02";
	inline constexpr char SIGQUIT[] = "S03";
	inline constexpr char SIGILL[]  = "S04";
	inline constexpr char SIGTRAP[] = "S05";
	inline constexpr char SIGABRT[] = "S06";
	inline constexpr char SIGKILL[] = "S09";
	inline constexpr char SIGSEGV[] = "S0A";
	inline constexpr char SIGTERM[] = "S0F";

	// Define the target descriptor.
	//
	inline constexpr char target_desc[] = R"(
<?xml version="1.0"?>
<target version="1.0">
	<architecture>i386:x86-64</architecture>
	<feature name="org.gnu.gdb.i386.core">
		<flags id="i386_eflags" size="4">
			<field name="CF"  start="0"  end="0"/>
			<field name=""    start="1"  end="1"/>
			<field name="PF"  start="2"  end="2"/>
			<field name="AF"  start="4"  end="4"/>
			<field name="ZF"  start="6"  end="6"/>
			<field name="SF"  start="7"  end="7"/>
			<field name="TF"  start="8"  end="8"/>
			<field name="IF"  start="9"  end="9"/>
			<field name="DF"  start="10" end="10"/>
			<field name="OF"  start="11" end="11"/>
			<field name="NT"  start="14" end="14"/>
			<field name="RF"  start="16" end="16"/>
			<field name="VM"  start="17" end="17"/>
			<field name="AC"  start="18" end="18"/>
			<field name="VIF" start="19" end="19"/>
			<field name="VIP" start="20" end="20"/>
			<field name="ID"  start="21" end="21"/>
		</flags>
		<reg name="rax"     bitsize="64"  regnum="0"  type="int"         group="general"/>
		<reg name="rbx"     bitsize="64"  regnum="1"  type="int"         group="general"/>
		<reg name="rcx"     bitsize="64"  regnum="2"  type="int"         group="general"/>
		<reg name="rdx"     bitsize="64"  regnum="3"  type="int"         group="general"/>
		<reg name="rsi"     bitsize="64"  regnum="4"  type="int"         group="general"/>
		<reg name="rdi"     bitsize="64"  regnum="5"  type="int"         group="general"/>
		<reg name="rbp"     bitsize="64"  regnum="6"  type="data_ptr"    group="general"/>
		<reg name="rsp"     bitsize="64"  regnum="7"  type="data_ptr"    group="general"/>
		<reg name="r8"      bitsize="64"  regnum="8"  type="int"         group="general"/>
		<reg name="r9"      bitsize="64"  regnum="9"  type="int"         group="general"/>
		<reg name="r10"     bitsize="64"  regnum="10" type="int"         group="general"/>
		<reg name="r11"     bitsize="64"  regnum="11" type="int"         group="general"/>
		<reg name="r12"     bitsize="64"  regnum="12" type="int"         group="general"/>
		<reg name="r13"     bitsize="64"  regnum="13" type="int"         group="general"/>
		<reg name="r14"     bitsize="64"  regnum="14" type="int"         group="general"/>
		<reg name="r15"     bitsize="64"  regnum="15" type="int"         group="general"/>
		<reg name="rip"     bitsize="64"  regnum="16" type="code_ptr"    group="general"/>
		<reg name="eflags"  bitsize="32"  regnum="17" type="i386_eflags" group="general"/>
		<reg name="cs"      bitsize="16"  regnum="18" type="int"         group="general"/>
		<reg name="ss"      bitsize="16"  regnum="19" type="int"         group="general"/>
		<reg name="ds"      bitsize="16"  regnum="20" type="int"         group="general"/>
		<reg name="es"      bitsize="16"  regnum="21" type="int"         group="general"/>
		<reg name="fs"      bitsize="16"  regnum="22" type="int"         group="general"/>
		<reg name="gs"      bitsize="16"  regnum="23" type="int"         group="general"/>
	</feature>
	<feature name="org.gnu.gdb.i386.sse">
		<reg name="xmm0"    bitsize="128" regnum="24" type="vec128"      group="vector"/>
		<reg name="xmm1"    bitsize="128" regnum="25" type="vec128"      group="vector"/>
		<reg name="xmm2"    bitsize="128" regnum="26" type="vec128"      group="vector"/>
		<reg name="xmm3"    bitsize="128" regnum="27" type="vec128"      group="vector"/>
		<reg name="xmm4"    bitsize="128" regnum="28" type="vec128"      group="vector"/>
		<reg name="xmm5"    bitsize="128" regnum="29" type="vec128"      group="vector"/>
		<reg name="xmm6"    bitsize="128" regnum="30" type="vec128"      group="vector"/>
		<reg name="xmm7"    bitsize="128" regnum="31" type="vec128"      group="vector"/>
		<reg name="xmm8"    bitsize="128" regnum="32" type="vec128"      group="vector"/>
		<reg name="xmm9"    bitsize="128" regnum="33" type="vec128"      group="vector"/>
		<reg name="xmm10"   bitsize="128" regnum="34" type="vec128"      group="vector"/>
		<reg name="xmm11"   bitsize="128" regnum="35" type="vec128"      group="vector"/>
		<reg name="xmm12"   bitsize="128" regnum="36" type="vec128"      group="vector"/>
		<reg name="xmm13"   bitsize="128" regnum="37" type="vec128"      group="vector"/>
		<reg name="xmm14"   bitsize="128" regnum="38" type="vec128"      group="vector"/>
		<reg name="xmm15"   bitsize="128" regnum="39" type="vec128"      group="vector"/>
		<reg name="mxcsr"   bitsize="32"  regnum="40" type="i386_mxcsr"  group="vector"/>
	</feature>
</target>
)";

	// Matching register enumerations and the context type.
	//
	enum class reg_num : uint8_t
	{
		rax,
		rbx,
		rcx,
		rdx,
		rsi,
		rdi,
		rbp,
		rsp,
		r8,
		r9,
		r10,
		r11,
		r12,
		r13,
		r14,
		r15,
		rip,
		eflags,
		cs,
		ss,
		ds,
		es,
		fs,
		gs,
		xmm0,
		xmm1,
		xmm2,
		xmm3,
		xmm4,
		xmm5,
		xmm6,
		xmm7,
		xmm8,
		xmm9,
		xmm10,
		xmm11,
		xmm12,
		xmm13,
		xmm14,
		xmm15,
		mxcsr,

		first_general = rax,
		last_general =  ss,
		first =         rax,
		last =          mxcsr,
	};

#pragma pack(push, 1)
	struct general_registers
	{
		uint64_t rax;
		uint64_t rbx;
		uint64_t rcx;
		uint64_t rdx;
		uint64_t rsi;
		uint64_t rdi;
		uint64_t rbp;
		uint64_t rsp;
		uint64_t r8;
		uint64_t r9;
		uint64_t r10;
		uint64_t r11;
		uint64_t r12;
		uint64_t r13;
		uint64_t r14;
		uint64_t r15;
		uint64_t rip;
		ia32::eflags eflags;
		nt::seg_t seg_cs;
		nt::seg_t seg_ss;
		nt::seg_t seg_ds;
		nt::seg_t seg_es;
		nt::seg_t seg_fs;
		nt::seg_t seg_gs;
	};
	struct full_registers : general_registers
	{
		__m128i_u xmm0;
		__m128i_u xmm1;
		__m128i_u xmm2;
		__m128i_u xmm3;
		__m128i_u xmm4;
		__m128i_u xmm5;
		__m128i_u xmm6;
		__m128i_u xmm7;
		__m128i_u xmm8;
		__m128i_u xmm9;
		__m128i_u xmm10;
		__m128i_u xmm11;
		__m128i_u xmm12;
		__m128i_u xmm13;
		__m128i_u xmm14;
		__m128i_u xmm15;
		uint32_t  mx_csr;
	};
#pragma pack(pop)
	inline constexpr std::pair<uint16_t, uint8_t> reg_map[] =
	{
		{ offsetof( full_registers, rax ),    8  },
		{ offsetof( full_registers, rbx ),    8  },
		{ offsetof( full_registers, rcx ),    8  },
		{ offsetof( full_registers, rdx ),    8  },
		{ offsetof( full_registers, rsi ),    8  },
		{ offsetof( full_registers, rdi ),    8  },
		{ offsetof( full_registers, rbp ),    8  },
		{ offsetof( full_registers, rsp ),    8  },
		{ offsetof( full_registers, r8 ),     8  },
		{ offsetof( full_registers, r9 ),     8  },
		{ offsetof( full_registers, r10 ),    8  },
		{ offsetof( full_registers, r11 ),    8  },
		{ offsetof( full_registers, r12 ),    8  },
		{ offsetof( full_registers, r13 ),    8  },
		{ offsetof( full_registers, r14 ),    8  },
		{ offsetof( full_registers, r15 ),    8  },
		{ offsetof( full_registers, rip ),    8  },
		{ offsetof( full_registers, eflags ), 4  },
		{ offsetof( full_registers, seg_cs ), 2  },
		{ offsetof( full_registers, seg_ss ), 2  },
		{ offsetof( full_registers, seg_ds ), 2  },
		{ offsetof( full_registers, seg_es ), 2  },
		{ offsetof( full_registers, seg_fs ), 2  },
		{ offsetof( full_registers, seg_gs ), 2  },
		{ offsetof( full_registers, xmm0 ),   16 },
		{ offsetof( full_registers, xmm1 ),   16 },
		{ offsetof( full_registers, xmm2 ),   16 },
		{ offsetof( full_registers, xmm3 ),   16 },
		{ offsetof( full_registers, xmm4 ),   16 },
		{ offsetof( full_registers, xmm5 ),   16 },
		{ offsetof( full_registers, xmm6 ),   16 },
		{ offsetof( full_registers, xmm7 ),   16 },
		{ offsetof( full_registers, xmm8 ),   16 },
		{ offsetof( full_registers, xmm9 ),   16 },
		{ offsetof( full_registers, xmm10 ),  16 },
		{ offsetof( full_registers, xmm11 ),  16 },
		{ offsetof( full_registers, xmm12 ),  16 },
		{ offsetof( full_registers, xmm13 ),  16 },
		{ offsetof( full_registers, xmm14 ),  16 },
		{ offsetof( full_registers, xmm15 ),  16 },
		{ offsetof( full_registers, mx_csr ),  4  },
	};
	inline constexpr size_t reg_size( reg_num r )
	{
		if ( r > reg_num::last )
			return 0;
		else
			return reg_map[ size_t( r ) ].second;
	}
	
	// Converts between context types.
	//
	template<bool General, typename Out, typename In>
	inline void convert_context( Out* out, const In* in )
	{
		out->rax	     = in->rax;
		out->rbx	     = in->rbx;
		out->rcx	     = in->rcx;
		out->rdx	     = in->rdx;
		out->rsi	     = in->rsi;
		out->rdi	     = in->rdi;
		out->rbp	     = in->rbp;
		out->rsp	     = in->rsp;
		out->r8	     = in->r8;
		out->r9	     = in->r9;
		out->r10	     = in->r10;
		out->r11	     = in->r11;
		out->r12	     = in->r12;
		out->r13	     = in->r13;
		out->r14	     = in->r14;
		out->r15	     = in->r15;
		out->rip	     = in->rip;
		out->eflags   = in->eflags;
		out->seg_ss	  = in->seg_ss;
		out->seg_cs	  = in->seg_cs;
		out->seg_ds	  = in->seg_ds;
		out->seg_es	  = in->seg_es;
		out->seg_fs	  = in->seg_fs;
		out->seg_gs	  = in->seg_gs;
		if constexpr ( !General )
		{
			out->xmm0	  = in->xmm0;
			out->xmm1	  = in->xmm1;
			out->xmm2	  = in->xmm2;
			out->xmm3	  = in->xmm3;
			out->xmm4	  = in->xmm4;
			out->xmm5	  = in->xmm5;
			out->xmm6	  = in->xmm6;
			out->xmm7	  = in->xmm7;
			out->xmm8	  = in->xmm8;
			out->xmm9	  = in->xmm9;
			out->xmm10    = in->xmm10;
			out->xmm11    = in->xmm11;
			out->xmm12    = in->xmm12;
			out->xmm13    = in->xmm13;
			out->xmm14    = in->xmm14;
			out->xmm15    = in->xmm15;
			out->mx_csr   = in->mx_csr;
		}
	}
};