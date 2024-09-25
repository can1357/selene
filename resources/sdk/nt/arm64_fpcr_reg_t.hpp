#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm64_fpcr_reg_t.start.hpp"
namespace nt
{
    // [union _ARM64_FPCR_REG]
    // => WDK 10, Windows 11 (NV)
    //
    union arm64_fpcr_reg_t   
    {                        
        // WDK 10, Windows 11       
        //                   
        _m00 uint32_t value;   //{ +0x0000    +0x0000    } | .Value
        _m01 uint8_t  res0_1;  //{ +0x0000@0  +0x0000@0  } | .res0_1
        _m02 uint1_t  ioe;     //{ +0x0000@8  +0x0000@8  } | .IOE
        _m03 uint1_t  dze;     //{ +0x0000@9  +0x0000@9  } | .DZE
        _m04 uint1_t  ofe;     //{ +0x0000@10 +0x0000@10 } | .OFE
        _m05 uint1_t  ufe;     //{ +0x0000@11 +0x0000@11 } | .UFE
        _m06 uint1_t  ixe;     //{ +0x0000@12 +0x0000@12 } | .IXE
        _m07 uint2_t  res0_2;  //{ +0x0000@13 +0x0000@13 } | .res0_2
        _m08 uint1_t  ide;     //{ +0x0000@15 +0x0000@15 } | .IDE
        _m09 uint3_t  len;     //{ +0x0000@16 +0x0000@16 } | .Len
        _m10 uint1_t  fz16;    //{ +0x0000@19 +0x0000@19 } | .FZ16
        _m11 uint2_t  stride;  //{ +0x0000@20 +0x0000@20 } | .Stride
        _m12 uint2_t  r_mode;  //{ +0x0000@22 +0x0000@22 } | .RMode
        _m13 uint1_t  fz;      //{ +0x0000@24 +0x0000@24 } | .FZ
        _m14 uint1_t  dn;      //{ +0x0000@25 +0x0000@25 } | .DN
        _m15 uint1_t  ahp;     //{ +0x0000@26 +0x0000@26 } | .AHP
        _m16 uint5_t  res0_3;  //{ +0x0000@27 +0x0000@27 } | .res0_3
                             
        SDK_NONVOL_PROPERTIES( "_ARM64_FPCR_REG.$", 0x0, false, 0x16310c593ed36856 );       
        SDK_FIXED_SIZE( arm64_fpcr_reg_t, 0x4 );       
    };                       
};
#include "magic/arm64_fpcr_reg_t.end.hpp"
SDK_VERIFY( union nt::arm64_fpcr_reg_t, 0x4 );
