#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/axisinfow_t.start.hpp"
namespace tag
{
    // [struct tagAXISINFOW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct axisinfow_t                            
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                        
        _m00 int32_t                 ax_min_value;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .axMinValue
        _m01 int32_t                 ax_max_value;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .axMaxValue
        _m02 sdk::array<wchar_t, 16> ax_axis_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .axAxisName
                                                  
        SDK_NONVOL_PROPERTIES( "tagAXISINFOW.$", 0x28, true, 0xf07842fdc31886da );             
        SDK_FIXED_SIZE( axisinfow_t, 0x28 );             
    };                                            
};
#include "magic/axisinfow_t.end.hpp"
SDK_VERIFY( struct tag::axisinfow_t, 0x28 );
