#pragma once
#include <sdkgen/support_library.hpp>
#include "devnode_state_t.hpp"

namespace nt { struct device_node_t; }

#include "magic/device_completion_request_t.start.hpp"
namespace pnp
{
    struct watchdog_t;

    // [struct _PNP_DEVICE_COMPLETION_REQUEST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_completion_request_t                  
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                              
        _m00 nt::list_entry_t          list_entry;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 struct nt::device_node_t* device_node;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceNode
        _m02 void*                     context;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Context
        _m03 enum pnp::devnode_state_t completion_state;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CompletionState
        _m04 uint32_t                  irp_pended;        //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .IrpPended
        _m05 int32_t                   status;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Status
        _m06 void*                     information;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Information
        _m07 int32_t                   reference_count;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ReferenceCount
                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                              
        _m08 struct pnp::watchdog_t*   watchdog;          //{ +0x0040    +0x0040    +0x0040    } | .Watchdog
                                                        
        SDK_MAGIC_PROPERTIES( "_PNP_DEVICE_COMPLETION_REQUEST.$", 0x48, true, 0xcc7ca0255554e6a1 );                 
        SDK_DYNAMIC_SIZE( device_completion_request_t );                 
    };                                                  
};
#include "magic/device_completion_request_t.end.hpp"
