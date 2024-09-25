#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/virtual_resource_status_t.start.hpp"
namespace wdf
{
    // [union _VIRTUAL_RESOURCE_STATUS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union virtual_resource_status_t                 
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                          
        _m00 uint1_t  port_arbitration_table_status;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PortArbitrationTableStatus
        _m01 uint1_t  vc_negotiation_pending;         //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .VcNegotiationPending
        _m02 uint14_t rsvd_z;                         //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .RsvdZ
        _m03 uint16_t as_ushort;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                    
        SDK_NONVOL_PROPERTIES( "_VIRTUAL_RESOURCE_STATUS.$", 0x2, true, 0xb415ce45166d4c68 );                              
        SDK_FIXED_SIZE( virtual_resource_status_t, 0x2 );                              
    };                                              
};
#include "magic/virtual_resource_status_t.end.hpp"
SDK_VERIFY( union wdf::virtual_resource_status_t, 0x2 );
