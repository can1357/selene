#pragma once
#include <sdkgen/support_library.hpp>
#include "virtual_resource_status_t.hpp"
#include "virtual_resource_control_t.hpp"
#include "virtual_resource_capability_t.hpp"

#include "magic/virtual_resource_t.start.hpp"
namespace wdf
{
    // [struct _VIRTUAL_RESOURCE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct virtual_resource_t                                    
    {                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                       
        _m00 union wdf::virtual_resource_capability_t capability;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Capability
        _m01 union wdf::virtual_resource_control_t    control;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Control
        _m02 uint16_t                                 rsvd_p;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .RsvdP
        _m03 union wdf::virtual_resource_status_t     status;      //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .Status
                                                                 
        SDK_NONVOL_PROPERTIES( "_VIRTUAL_RESOURCE.$", 0xc, true, 0x30923452317e8388 );           
        SDK_FIXED_SIZE( virtual_resource_t, 0xc );               
    };                                                           
};
#include "magic/virtual_resource_t.end.hpp"
SDK_VERIFY( struct wdf::virtual_resource_t, 0xc );
