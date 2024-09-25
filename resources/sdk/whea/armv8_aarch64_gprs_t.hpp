#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/armv8_aarch64_gprs_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ARMV8_AARCH64_GPRS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct armv8_aarch64_gprs_t
    {                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //                 
        _m000 uint64_t x0;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .X0
        _m001 uint64_t x1;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .X1
        _m002 uint64_t x2;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .X2
        _m003 uint64_t x3;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .X3
        _m004 uint64_t x4;       //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .X4
        _m005 uint64_t x5;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .X5
        _m006 uint64_t x6;       //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .X6
        _m007 uint64_t x7;       //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .X7
        _m008 uint64_t x8;       //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .X8
        _m009 uint64_t x9;       //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .X9
        _m010 uint64_t x10;      //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .X10
        _m011 uint64_t x11;      //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .X11
        _m012 uint64_t x12;      //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .X12
        _m013 uint64_t x13;      //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .X13
        _m014 uint64_t x14;      //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .X14
        _m015 uint64_t x15;      //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .X15
        _m016 uint64_t x16;      //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .X16
        _m017 uint64_t x17;      //{ +0x0088    +0x0088    +0x0088    +0x0088    +0x0088    } | .X17
        _m018 uint64_t x18;      //{ +0x0090    +0x0090    +0x0090    +0x0090    +0x0090    } | .X18
        _m019 uint64_t x19;      //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .X19
        _m020 uint64_t x20;      //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .X20
        _m021 uint64_t x21;      //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .X21
        _m022 uint64_t x22;      //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .X22
        _m023 uint64_t x23;      //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .X23
        _m024 uint64_t x24;      //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .X24
        _m025 uint64_t x25;      //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .X25
        _m026 uint64_t x26;      //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .X26
        _m027 uint64_t x27;      //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .X27
        _m028 uint64_t x28;      //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .X28
        _m029 uint64_t x29;      //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .X29
        _m030 uint64_t x30;      //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .X30
        _m031 uint64_t sp;       //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .SP
                               
        SDK_NONVOL_PROPERTIES( "_WHEA_ARMV8_AARCH64_GPRS.$", 0x100, true, 0xb480ff6f103f0323 );    
        SDK_FIXED_SIZE( armv8_aarch64_gprs_t, 0x100 );    
    };                         
};
#include "magic/armv8_aarch64_gprs_t.end.hpp"
SDK_VERIFY( struct whea::armv8_aarch64_gprs_t, 0x100 );
