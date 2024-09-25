#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/standard_colorimetry_flags_t.start.hpp"
namespace dxgk
{
    // [union _DXGK_STANDARD_COLORIMETRY_FLAGS]
    // => WDK 10 (NV)
    //
    union standard_colorimetry_flags_t
    {                                 
        // WDK 10               
        //                      
        _m00 uint1_t  bt2020ycc;        //{ +0x0000@0  } | .BT2020YCC
        _m01 uint1_t  bt2020rgb;        //{ +0x0000@1  } | .BT2020RGB
        _m02 uint1_t  st2084;           //{ +0x0000@2  } | .ST2084
        _m03 uint32_t value;            //{ +0x0000    } | .Value
                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_STANDARD_COLORIMETRY_FLAGS.$", 0x0, false, 0xf55a9c78f82273d5 );          
        SDK_FIXED_SIZE( standard_colorimetry_flags_t, 0x4 );          
    };                                
};
#include "magic/standard_colorimetry_flags_t.end.hpp"
SDK_VERIFY( union dxgk::standard_colorimetry_flags_t, 0x4 );
