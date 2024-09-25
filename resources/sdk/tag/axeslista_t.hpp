#pragma once
#include <sdkgen/support_library.hpp>
#include "axisinfoa_t.hpp"

#include "magic/axeslista_t.start.hpp"
namespace tag
{
    // [struct tagAXESLISTA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct axeslista_t                                             
    {                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                         
        _m00 uint32_t                                axl_reserved;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .axlReserved
        _m01 uint32_t                                axl_num_axes;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .axlNumAxes
        _m02 sdk::array<struct tag::axisinfoa_t, 16> axl_axis_info;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .axlAxisInfo
                                                                   
        SDK_NONVOL_PROPERTIES( "tagAXESLISTA.$", 0x188, true, 0xe1623ea67bcbc444 );              
        SDK_FIXED_SIZE( axeslista_t, 0x188 );                      
    };                                                             
};
#include "magic/axeslista_t.end.hpp"
SDK_VERIFY( struct tag::axeslista_t, 0x188 );
