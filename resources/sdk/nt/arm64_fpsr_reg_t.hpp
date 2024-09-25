#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm64_fpsr_reg_t.start.hpp"
namespace nt
{
    // [union _ARM64_FPSR_REG]
    // => WDK 10, Windows 11 (NV)
    //
    union arm64_fpsr_reg_t   
    {                        
        // WDK 10, Windows 11       
        //                   
        _m00 uint32_t value;   //{ +0x0000    +0x0000    } | .Value
        _m01 uint1_t  ioc;     //{ +0x0000@0  +0x0000@0  } | .IOC
        _m02 uint1_t  dzc;     //{ +0x0000@1  +0x0000@1  } | .DZC
        _m03 uint1_t  ofc;     //{ +0x0000@2  +0x0000@2  } | .OFC
        _m04 uint1_t  ufc;     //{ +0x0000@3  +0x0000@3  } | .UFC
        _m05 uint1_t  ixc;     //{ +0x0000@4  +0x0000@4  } | .IXC
        _m06 uint2_t  res0_1;  //{ +0x0000@5  +0x0000@5  } | .res0_1
        _m07 uint1_t  idc;     //{ +0x0000@7  +0x0000@7  } | .IDC
        _m08 uint19_t res0_2;  //{ +0x0000@8  +0x0000@8  } | .res0_2
        _m09 uint1_t  qc;      //{ +0x0000@27 +0x0000@27 } | .QC
        _m10 uint1_t  v;       //{ +0x0000@28 +0x0000@28 } | .V
        _m11 uint1_t  c;       //{ +0x0000@29 +0x0000@29 } | .C
        _m12 uint1_t  z;       //{ +0x0000@30 +0x0000@30 } | .Z
        _m13 uint1_t  n;       //{ +0x0000@31 +0x0000@31 } | .N
                             
        SDK_NONVOL_PROPERTIES( "_ARM64_FPSR_REG.$", 0x0, false, 0xf4fde7d44f1f018a );       
        SDK_FIXED_SIZE( arm64_fpsr_reg_t, 0x4 );       
    };                       
};
#include "magic/arm64_fpsr_reg_t.end.hpp"
SDK_VERIFY( union nt::arm64_fpsr_reg_t, 0x4 );
