#pragma once
#include <sdkgen/support_library.hpp>
#include "setjmp_float128_t.hpp"

#include "magic/jump_buffer_t.start.hpp"
namespace win
{
    // [struct _JUMP_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jump_buffer_t                          
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                        
        _m00 uint64_t                      frame;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Frame
        _m01 uint64_t                      rbx;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Rbx
        _m02 uint64_t                      rsp;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Rsp
        _m03 uint64_t                      rbp;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Rbp
        _m04 uint64_t                      rsi;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Rsi
        _m05 uint64_t                      rdi;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Rdi
        _m06 uint64_t                      r12;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .R12
        _m07 uint64_t                      r13;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .R13
        _m08 uint64_t                      r14;     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .R14
        _m09 uint64_t                      r15;     //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .R15
        _m10 uint64_t                      rip;     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Rip
        _m11 uint32_t                      mx_csr;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .MxCsr
        _m12 uint16_t                      fp_csr;  //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .FpCsr
        _m13 struct win::setjmp_float128_t xmm6;    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Xmm6
        _m14 struct win::setjmp_float128_t xmm7;    //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .Xmm7
        _m15 struct win::setjmp_float128_t xmm8;    //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .Xmm8
        _m16 struct win::setjmp_float128_t xmm9;    //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .Xmm9
        _m17 struct win::setjmp_float128_t xmm10;   //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .Xmm10
        _m18 struct win::setjmp_float128_t xmm11;   //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .Xmm11
        _m19 struct win::setjmp_float128_t xmm12;   //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .Xmm12
        _m20 struct win::setjmp_float128_t xmm13;   //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .Xmm13
        _m21 struct win::setjmp_float128_t xmm14;   //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .Xmm14
        _m22 struct win::setjmp_float128_t xmm15;   //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .Xmm15
                                                  
        SDK_MAGIC_PROPERTIES( "_JUMP_BUFFER.$", 0x100, true, 0x663410b65f3110be );       
        SDK_FIXED_SIZE( jump_buffer_t, 0x100 );       
    };                                            
};
#include "magic/jump_buffer_t.end.hpp"
SDK_VERIFY( struct win::jump_buffer_t, 0x100 );
