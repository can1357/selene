#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/finish_zone_t.start.hpp"
namespace stor::port
{
    // [struct _FINISH_ZONE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct finish_zone_t                           
    {                                              
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                         
        _m00 uint8_t                operation_code;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint5_t                service_action;  //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .ServiceAction
        _m02 sdk::array<uint8_t, 8> zone_id;         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .ZoneId
        _m03 uint1_t                all;             //{ +0x000e@0  +0x000e@0  +0x000e@0  +0x000e@0  } | .All
        _m04 uint8_t                control;         //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .Control
                                                   
        SDK_NONVOL_PROPERTIES( "_FINISH_ZONE.$", 0x10, true, 0xb3856b0eadd62755 );               
        SDK_FIXED_SIZE( finish_zone_t, 0x10 );               
    };                                             
};
#include "magic/finish_zone_t.end.hpp"
SDK_VERIFY( struct stor::port::finish_zone_t, 0x10 );
