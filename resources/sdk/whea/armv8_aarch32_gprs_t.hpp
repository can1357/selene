#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/armv8_aarch32_gprs_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ARMV8_AARCH32_GPRS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct armv8_aarch32_gprs_t
    {                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //                
        _m00 uint32_t r0;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .R0
        _m01 uint32_t r1;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .R1
        _m02 uint32_t r2;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .R2
        _m03 uint32_t r3;        //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .R3
        _m04 uint32_t r4;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .R4
        _m05 uint32_t r5;        //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .R5
        _m06 uint32_t r6;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .R6
        _m07 uint32_t r7;        //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .R7
        _m08 uint32_t r8;        //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .R8
        _m09 uint32_t r9;        //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .R9
        _m10 uint32_t r10;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .R10
        _m11 uint32_t r11;       //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .R11
        _m12 uint32_t r12;       //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .R12
        _m13 uint32_t r13;       //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .R13
        _m14 uint32_t r14;       //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .R14
        _m15 uint32_t r15;       //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .R15
                               
        SDK_NONVOL_PROPERTIES( "_WHEA_ARMV8_AARCH32_GPRS.$", 0x40, true, 0xc5746b16a0647d6 );    
        SDK_FIXED_SIZE( armv8_aarch32_gprs_t, 0x40 );    
    };                         
};
#include "magic/armv8_aarch32_gprs_t.end.hpp"
SDK_VERIFY( struct whea::armv8_aarch32_gprs_t, 0x40 );
