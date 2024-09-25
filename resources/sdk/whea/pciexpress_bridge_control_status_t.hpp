#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pciexpress_bridge_control_status_t.start.hpp"
namespace whea
{
    // [union _WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union pciexpress_bridge_control_status_t  
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint16_t bridge_secondary_status;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BridgeSecondaryStatus
        _m01 uint16_t bridge_control;           //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .BridgeControl
        _m02 uint32_t as_ulong;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                              
        SDK_NONVOL_PROPERTIES( "_WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS.$", 0x4, true, 0xfa870652eed7eba3 );                        
        SDK_FIXED_SIZE( pciexpress_bridge_control_status_t, 0x4 );                        
    };                                        
};
#include "magic/pciexpress_bridge_control_status_t.end.hpp"
SDK_VERIFY( union whea::pciexpress_bridge_control_status_t, 0x4 );
