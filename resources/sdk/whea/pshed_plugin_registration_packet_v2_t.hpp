#pragma once
#include <sdkgen/support_library.hpp>
#include "pshed_plugin_callbacks_t.hpp"

#include "magic/pshed_plugin_registration_packet_v2_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PSHED_PLUGIN_REGISTRATION_PACKET_V2]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pshed_plugin_registration_packet_v2_t                        
    {                                                                   
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                              
        _m00 uint32_t                              length;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint32_t                              version;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Version
        _m02 void*                                 context;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 uint32_t                              functional_area_mask;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FunctionalAreaMask
        _m04 struct whea::pshed_plugin_callbacks_t callbacks;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Callbacks
        _m05 void*                                 plugin_handle;         //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .PluginHandle
                                                                        
        SDK_NONVOL_PROPERTIES( "_WHEA_PSHED_PLUGIN_REGISTRATION_PACKET_V2.$", 0x98, true, 0xc897d09bc5ee185c );                     
        SDK_FIXED_SIZE( pshed_plugin_registration_packet_v2_t, 0x98 );                     
    };                                                                  
};
#include "magic/pshed_plugin_registration_packet_v2_t.end.hpp"
SDK_VERIFY( struct whea::pshed_plugin_registration_packet_v2_t, 0x98 );
