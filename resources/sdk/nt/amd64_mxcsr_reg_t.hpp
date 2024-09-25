#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/amd64_mxcsr_reg_t.start.hpp"
namespace nt
{
    // [union _AMD64_MXCSR_REG]
    // => WDK 10, Windows 11 (NV)
    //
    union amd64_mxcsr_reg_t 
    {                       
        // WDK 10, Windows 11      
        //                  
        _m00 uint32_t value;  //{ +0x0000    +0x0000    } | .Value
        _m01 uint1_t  ie;     //{ +0x0000@0  +0x0000@0  } | .IE
        _m02 uint1_t  de;     //{ +0x0000@1  +0x0000@1  } | .DE
        _m03 uint1_t  ze;     //{ +0x0000@2  +0x0000@2  } | .ZE
        _m04 uint1_t  oe;     //{ +0x0000@3  +0x0000@3  } | .OE
        _m05 uint1_t  ue;     //{ +0x0000@4  +0x0000@4  } | .UE
        _m06 uint1_t  pe;     //{ +0x0000@5  +0x0000@5  } | .PE
        _m07 uint1_t  daz;    //{ +0x0000@6  +0x0000@6  } | .DAZ
        _m08 uint1_t  im;     //{ +0x0000@7  +0x0000@7  } | .IM
        _m09 uint1_t  dm;     //{ +0x0000@8  +0x0000@8  } | .DM
        _m10 uint1_t  zm;     //{ +0x0000@9  +0x0000@9  } | .ZM
        _m11 uint1_t  om;     //{ +0x0000@10 +0x0000@10 } | .OM
        _m12 uint1_t  um;     //{ +0x0000@11 +0x0000@11 } | .UM
        _m13 uint1_t  pm;     //{ +0x0000@12 +0x0000@12 } | .PM
        _m14 uint2_t  rc;     //{ +0x0000@13 +0x0000@13 } | .RC
        _m15 uint1_t  fz;     //{ +0x0000@15 +0x0000@15 } | .FZ
        _m16 uint16_t res;    //{ +0x0000@16 +0x0000@16 } | .res
                            
        SDK_NONVOL_PROPERTIES( "_AMD64_MXCSR_REG.$", 0x0, false, 0x474a0fba663b9b5d );      
        SDK_FIXED_SIZE( amd64_mxcsr_reg_t, 0x4 );      
    };                      
};
#include "magic/amd64_mxcsr_reg_t.end.hpp"
SDK_VERIFY( union nt::amd64_mxcsr_reg_t, 0x4 );
