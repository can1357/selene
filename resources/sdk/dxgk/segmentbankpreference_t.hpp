#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/segmentbankpreference_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SEGMENTBANKPREFERENCE]
    // => WDK 10 (NV)
    //
    struct segmentbankpreference_t
    {                             
        // WDK 10                
        //                       
        _m00 uint7_t  bank0;        //{ +0x0000@0  } | .Bank0
        _m01 uint1_t  direction0;   //{ +0x0000@7  } | .Direction0
        _m02 uint7_t  bank1;        //{ +0x0000@8  } | .Bank1
        _m03 uint1_t  direction1;   //{ +0x0000@15 } | .Direction1
        _m04 uint7_t  bank2;        //{ +0x0000@16 } | .Bank2
        _m05 uint1_t  direction2;   //{ +0x0000@23 } | .Direction2
        _m06 uint7_t  bank3;        //{ +0x0000@24 } | .Bank3
        _m07 uint1_t  direction3;   //{ +0x0000@31 } | .Direction3
        _m08 uint32_t value;        //{ +0x0000    } | .Value
                                  
        SDK_NONVOL_PROPERTIES( "_DXGK_SEGMENTBANKPREFERENCE.$", 0x0, false, 0xfb1f4a82b1fd5daa );           
        SDK_FIXED_SIZE( segmentbankpreference_t, 0x4 );           
    };                            
};
#include "magic/segmentbankpreference_t.end.hpp"
SDK_VERIFY( struct dxgk::segmentbankpreference_t, 0x4 );
