#pragma once
#include <sdkgen/support_library.hpp>
#include "arm64_nt_neon128_t.hpp"

#include "magic/arm64_nt_context_t.start.hpp"
namespace win
{
    // [struct _ARM64_NT_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct arm64_nt_context_t                                             
    {                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                
        _m000 uint32_t                                      context_flags;  //{ +0x0000    +0x0000    +0x0000    } | .ContextFlags
        _m001 uint32_t                                      cpsr;           //{ +0x0004    +0x0004    +0x0004    } | .Cpsr
        _m002 uint64_t                                      x0;             //{ +0x0008    +0x0008    +0x0008    } | .X0
        _m003 uint64_t                                      x1;             //{ +0x0010    +0x0010    +0x0010    } | .X1
        _m004 uint64_t                                      x2;             //{ +0x0018    +0x0018    +0x0018    } | .X2
        _m005 uint64_t                                      x3;             //{ +0x0020    +0x0020    +0x0020    } | .X3
        _m006 uint64_t                                      x4;             //{ +0x0028    +0x0028    +0x0028    } | .X4
        _m007 uint64_t                                      x5;             //{ +0x0030    +0x0030    +0x0030    } | .X5
        _m008 uint64_t                                      x6;             //{ +0x0038    +0x0038    +0x0038    } | .X6
        _m009 uint64_t                                      x7;             //{ +0x0040    +0x0040    +0x0040    } | .X7
        _m010 uint64_t                                      x8;             //{ +0x0048    +0x0048    +0x0048    } | .X8
        _m011 uint64_t                                      x9;             //{ +0x0050    +0x0050    +0x0050    } | .X9
        _m012 uint64_t                                      x10;            //{ +0x0058    +0x0058    +0x0058    } | .X10
        _m013 uint64_t                                      x11;            //{ +0x0060    +0x0060    +0x0060    } | .X11
        _m014 uint64_t                                      x12;            //{ +0x0068    +0x0068    +0x0068    } | .X12
        _m015 uint64_t                                      x13;            //{ +0x0070    +0x0070    +0x0070    } | .X13
        _m016 uint64_t                                      x14;            //{ +0x0078    +0x0078    +0x0078    } | .X14
        _m017 uint64_t                                      x15;            //{ +0x0080    +0x0080    +0x0080    } | .X15
        _m018 uint64_t                                      x16;            //{ +0x0088    +0x0088    +0x0088    } | .X16
        _m019 uint64_t                                      x17;            //{ +0x0090    +0x0090    +0x0090    } | .X17
        _m020 uint64_t                                      x18;            //{ +0x0098    +0x0098    +0x0098    } | .X18
        _m021 uint64_t                                      x19;            //{ +0x00a0    +0x00a0    +0x00a0    } | .X19
        _m022 uint64_t                                      x20;            //{ +0x00a8    +0x00a8    +0x00a8    } | .X20
        _m023 uint64_t                                      x21;            //{ +0x00b0    +0x00b0    +0x00b0    } | .X21
        _m024 uint64_t                                      x22;            //{ +0x00b8    +0x00b8    +0x00b8    } | .X22
        _m025 uint64_t                                      x23;            //{ +0x00c0    +0x00c0    +0x00c0    } | .X23
        _m026 uint64_t                                      x24;            //{ +0x00c8    +0x00c8    +0x00c8    } | .X24
        _m027 uint64_t                                      x25;            //{ +0x00d0    +0x00d0    +0x00d0    } | .X25
        _m028 uint64_t                                      x26;            //{ +0x00d8    +0x00d8    +0x00d8    } | .X26
        _m029 uint64_t                                      x27;            //{ +0x00e0    +0x00e0    +0x00e0    } | .X27
        _m030 uint64_t                                      x28;            //{ +0x00e8    +0x00e8    +0x00e8    } | .X28
        _m031 uint64_t                                      fp;             //{ +0x00f0    +0x00f0    +0x00f0    } | .Fp
        _m032 uint64_t                                      lr;             //{ +0x00f8    +0x00f8    +0x00f8    } | .Lr
        _m033 sdk::array<uint64_t, 31>                      x;              //{ +0x0008    +0x0008    +0x0008    } | .X
        _m034 uint64_t                                      sp;             //{ +0x0100    +0x0100    +0x0100    } | .Sp
        _m035 uint64_t                                      pc;             //{ +0x0108    +0x0108    +0x0108    } | .Pc
        _m036 sdk::array<union win::arm64_nt_neon128_t, 32> v;              //{ +0x0110    +0x0110    +0x0110    } | .V
        _m037 uint32_t                                      fpcr;           //{ +0x0310    +0x0310    +0x0310    } | .Fpcr
        _m038 uint32_t                                      fpsr;           //{ +0x0314    +0x0314    +0x0314    } | .Fpsr
        _m039 sdk::array<uint32_t, 8>                       bcr;            //{ +0x0318    +0x0318    +0x0318    } | .Bcr
        _m040 sdk::array<uint64_t, 8>                       bvr;            //{ +0x0338    +0x0338    +0x0338    } | .Bvr
        _m041 sdk::array<uint32_t, 2>                       wcr;            //{ +0x0378    +0x0378    +0x0378    } | .Wcr
        _m042 sdk::array<uint64_t, 2>                       wvr;            //{ +0x0380    +0x0380    +0x0380    } | .Wvr
                                                                          
        SDK_MAGIC_PROPERTIES( "_ARM64_NT_CONTEXT.$", 0x390, true, 0xa2c4350cca959633 );              
        SDK_FIXED_SIZE( arm64_nt_context_t, 0x390 );                      
    };                                                                    
};
#include "magic/arm64_nt_context_t.end.hpp"
SDK_VERIFY( struct win::arm64_nt_context_t, 0x390 );
