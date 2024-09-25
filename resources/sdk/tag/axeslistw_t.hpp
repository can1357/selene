#pragma once
#include <sdkgen/support_library.hpp>
#include "axisinfow_t.hpp"

#include "magic/axeslistw_t.start.hpp"
namespace tag
{
    // [struct tagAXESLISTW]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct axeslistw_t                                             
    {                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                         
        _m00 uint32_t                                axl_reserved;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .axlReserved
        _m01 uint32_t                                axl_num_axes;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .axlNumAxes
        _m02 sdk::array<struct tag::axisinfow_t, 16> axl_axis_info;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .axlAxisInfo
                                                                   
        SDK_NONVOL_PROPERTIES( "tagAXESLISTW.$", 0x288, true, 0x26ead08693dcf66 );              
        SDK_FIXED_SIZE( axeslistw_t, 0x288 );                      
    };                                                             
};
#include "magic/axeslistw_t.end.hpp"
SDK_VERIFY( struct tag::axeslistw_t, 0x288 );
