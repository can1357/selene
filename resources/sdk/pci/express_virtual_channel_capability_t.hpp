#pragma once
#include <sdkgen/support_library.hpp>
#include "../wdf/virtual_resource_t.hpp"
#include "../wdf/virtual_channel_status_t.hpp"
#include "../wdf/virtual_channel_control_t.hpp"
#include "express_enhanced_capability_header_t.hpp"
#include "../wdf/virtual_channel_capabilities1_t.hpp"
#include "../wdf/virtual_channel_capabilities2_t.hpp"

#include "magic/express_virtual_channel_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_virtual_channel_capability_t                             
    {                                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                                  
        _m00 struct pci::express_enhanced_capability_header_t header;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 union wdf::virtual_channel_capabilities1_t       capabilities1;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Capabilities1
        _m02 union wdf::virtual_channel_capabilities2_t       capabilities2;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Capabilities2
        _m03 union wdf::virtual_channel_control_t             control;        //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Control
        _m04 union wdf::virtual_channel_status_t              status;         //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .Status
        _m05 sdk::array<struct wdf::virtual_resource_t, 8>    resource;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Resource
                                                                            
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY.$", 0x70, true, 0xce89027bce117f85 );              
        SDK_FIXED_SIZE( express_virtual_channel_capability_t, 0x70 );              
    };                                                                      
};
#include "magic/express_virtual_channel_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_virtual_channel_capability_t, 0x70 );
