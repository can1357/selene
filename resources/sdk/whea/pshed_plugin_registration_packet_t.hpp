#pragma once
#include <sdkgen/support_library.hpp>
#include "pshed_plugin_callbacks_t.hpp"

#include "magic/pshed_plugin_registration_packet_t.start.hpp"
namespace whea
{
    // [struct _WHEA_PSHED_PLUGIN_REGISTRATION_PACKET]
    // => Windows 10 v1607
    //
    struct pshed_plugin_registration_packet_t                           
    {                                                                   
        // Windows 10 v1607                                             
        //                                                              
        _m00 uint32_t                              length;                //{ +0x0000    } | .Length
        _m01 uint32_t                              version;               //{ +0x0004    } | .Version
        _m02 void*                                 context;               //{ +0x0008    } | .Context
        _m03 uint32_t                              functional_area_mask;  //{ +0x0010    } | .FunctionalAreaMask
        _m04 struct whea::pshed_plugin_callbacks_t callbacks;             //{ +0x0018    } | .Callbacks
                                                                        
        SDK_MAGIC_PROPERTIES( "_WHEA_PSHED_PLUGIN_REGISTRATION_PACKET.$", 0x0, false, 0xa2f686010415915 );                     
        SDK_FIXED_SIZE( pshed_plugin_registration_packet_t, 0x90 );                     
    };                                                                  
};
#include "magic/pshed_plugin_registration_packet_t.end.hpp"
SDK_VERIFY( struct whea::pshed_plugin_registration_packet_t, 0x90 );
