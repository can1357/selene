#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/triage_pnp_device_completion_request_t.start.hpp"
namespace nt
{
    struct triage_device_node_t;

    // [struct _TRIAGE_PNP_DEVICE_COMPLETION_REQUEST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct triage_pnp_device_completion_request_t         
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                
        _m00 nt::list_entry_t                 list_entry;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 struct nt::triage_device_node_t* device_node;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceNode
                                                          
        SDK_MAGIC_PROPERTIES( "_TRIAGE_PNP_DEVICE_COMPLETION_REQUEST.$", 0x18, true, 0xc6376a66cbf3b41d );            
        SDK_FIXED_SIZE( triage_pnp_device_completion_request_t, 0x18 );            
    };                                                    
};
#include "magic/triage_pnp_device_completion_request_t.end.hpp"
SDK_VERIFY( struct nt::triage_pnp_device_completion_request_t, 0x18 );
