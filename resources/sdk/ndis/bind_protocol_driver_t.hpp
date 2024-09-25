#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bind_protocol_driver_t.start.hpp"
namespace ndis
{
    struct protocol_block_t;

    // [struct NDIS_BIND_PROTOCOL_DRIVER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bind_protocol_driver_t                                     
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                            
        _m00 bool                           driver_ready;               //{ +0x0008    +0x0000    +0x0000    +0x0000    } | .DriverReady
        _m01 bool                           needs_bind_complete_event;  //{ +0x0009    +0x0001    +0x0001    +0x0001    } | .NeedsBindCompleteEvent
        _m02 nt::list_entry_t               bind_links;                 //{ +0x0010    +0x0008    +0x0008    +0x0008    } | .BindLinks
        _m03 uint32_t                       protocol_bind_flags;        //{ +0x0028    +0x0020    +0x0020    +0x0020    } | .ProtocolBindFlags
        _m04 struct ndis::protocol_block_t* running_driver;             //{ +0x0030    +0x0028    +0x0028    +0x0028    } | .RunningDriver
                                                                      
        SDK_MAGIC_PROPERTIES( "NDIS_BIND_PROTOCOL_DRIVER.$", 0x30, true, 0x3849e16fff9a39e6 );                          
        SDK_DYNAMIC_SIZE( bind_protocol_driver_t );                          
    };                                                                
};
#include "magic/bind_protocol_driver_t.end.hpp"
