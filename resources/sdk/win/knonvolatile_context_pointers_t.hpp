#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/knonvolatile_context_pointers_t.start.hpp"
namespace win
{
    // [struct _KNONVOLATILE_CONTEXT_POINTERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct knonvolatile_context_pointers_t               
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                               
        _m000 sdk::array<m128a_t*, 16>  floating_context;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FloatingContext
        _m001 m128a_t*                  xmm0;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Xmm0
        _m002 m128a_t*                  xmm1;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Xmm1
        _m003 m128a_t*                  xmm2;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Xmm2
        _m004 m128a_t*                  xmm3;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Xmm3
        _m005 m128a_t*                  xmm4;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Xmm4
        _m006 m128a_t*                  xmm5;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Xmm5
        _m007 m128a_t*                  xmm6;              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Xmm6
        _m008 m128a_t*                  xmm7;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Xmm7
        _m009 m128a_t*                  xmm8;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Xmm8
        _m010 m128a_t*                  xmm9;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Xmm9
        _m011 m128a_t*                  xmm10;             //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Xmm10
        _m012 m128a_t*                  xmm11;             //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Xmm11
        _m013 m128a_t*                  xmm12;             //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Xmm12
        _m014 m128a_t*                  xmm13;             //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .Xmm13
        _m015 m128a_t*                  xmm14;             //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .Xmm14
        _m016 m128a_t*                  xmm15;             //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .Xmm15
        _m017 sdk::array<uint64_t*, 16> integer_context;   //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .IntegerContext
        _m018 uint64_t*                 rax;               //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .Rax
        _m019 uint64_t*                 rcx;               //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .Rcx
        _m020 uint64_t*                 rdx;               //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .Rdx
        _m021 uint64_t*                 rbx;               //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .Rbx
        _m022 uint64_t*                 rsp;               //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .Rsp
        _m023 uint64_t*                 rbp;               //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .Rbp
        _m024 uint64_t*                 rsi;               //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .Rsi
        _m025 uint64_t*                 rdi;               //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .Rdi
        _m026 uint64_t*                 r8;                //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .R8
        _m027 uint64_t*                 r9;                //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .R9
        _m028 uint64_t*                 r10;               //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .R10
        _m029 uint64_t*                 r11;               //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .R11
        _m030 uint64_t*                 r12;               //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .R12
        _m031 uint64_t*                 r13;               //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .R13
        _m032 uint64_t*                 r14;               //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .R14
        _m033 uint64_t*                 r15;               //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .R15
                                                         
        SDK_MAGIC_PROPERTIES( "_KNONVOLATILE_CONTEXT_POINTERS.$", 0x100, true, 0x37872343be2f577c );                 
        SDK_FIXED_SIZE( knonvolatile_context_pointers_t, 0x100 );                 
    };                                                   
};
#include "magic/knonvolatile_context_pointers_t.end.hpp"
SDK_VERIFY( struct win::knonvolatile_context_pointers_t, 0x100 );
