#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kidtentry64_t.start.hpp"
namespace nt
{
    // [union _KIDTENTRY64]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union kidtentry64_t             
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint16_t offset_low;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OffsetLow
        _m01 uint16_t selector;       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Selector
        _m02 uint3_t  ist_index;      //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .IstIndex
        _m03 uint5_t  type;           //{ +0x0004@8  +0x0004@8  +0x0004@8  +0x0004@8  } | .Type
        _m04 uint2_t  dpl;            //{ +0x0004@13 +0x0004@13 +0x0004@13 +0x0004@13 } | .Dpl
        _m05 uint1_t  present;        //{ +0x0004@15 +0x0004@15 +0x0004@15 +0x0004@15 } | .Present
        _m06 uint16_t offset_middle;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .OffsetMiddle
        _m07 uint32_t offset_high;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OffsetHigh
        _m08 uint64_t alignment;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Alignment
                                    
        SDK_MAGIC_PROPERTIES( "_KIDTENTRY64.$", 0x10, true, 0xd24b8574bd357483 );              
        SDK_DYNAMIC_SIZE( kidtentry64_t );              
    };                              
};
#include "magic/kidtentry64_t.end.hpp"
