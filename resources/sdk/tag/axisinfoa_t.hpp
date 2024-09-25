#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/axisinfoa_t.start.hpp"
namespace tag
{
    // [struct tagAXISINFOA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct axisinfoa_t                            
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                        
        _m00 int32_t                 ax_min_value;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .axMinValue
        _m01 int32_t                 ax_max_value;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .axMaxValue
        _m02 sdk::array<uint8_t, 16> ax_axis_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .axAxisName
                                                  
        SDK_NONVOL_PROPERTIES( "tagAXISINFOA.$", 0x18, true, 0x4133792052e6bdf5 );             
        SDK_FIXED_SIZE( axisinfoa_t, 0x18 );             
    };                                            
};
#include "magic/axisinfoa_t.end.hpp"
SDK_VERIFY( struct tag::axisinfoa_t, 0x18 );
