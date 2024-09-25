#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/net_physical_location_lh_t.start.hpp"
namespace ndis
{
    // [struct _NET_PHYSICAL_LOCATION_LH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct net_physical_location_lh_t 
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t bus_number;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BusNumber
        _m01 uint32_t slot_number;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SlotNumber
        _m02 uint32_t function_number;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FunctionNumber
                                      
        SDK_MAGIC_PROPERTIES( "_NET_PHYSICAL_LOCATION_LH.$", 0xc, true, 0x84d5fc8333fe770a );                
        SDK_FIXED_SIZE( net_physical_location_lh_t, 0xc );                
    };                                
};
#include "magic/net_physical_location_lh_t.end.hpp"
SDK_VERIFY( struct ndis::net_physical_location_lh_t, 0xc );
