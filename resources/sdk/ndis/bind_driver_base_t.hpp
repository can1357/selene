#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bind_driver_base_t.start.hpp"
namespace ndis
{
    // [struct NDIS_BIND_DRIVER_BASE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bind_driver_base_t                           
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                              
        _m00 bool             driver_ready;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DriverReady
        _m01 bool             needs_bind_complete_event;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .NeedsBindCompleteEvent
        _m02 nt::list_entry_t bind_links;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BindLinks
                                                        
        SDK_MAGIC_PROPERTIES( "NDIS_BIND_DRIVER_BASE.$", 0x18, true, 0xdc09dd7475c40655 );                          
        SDK_FIXED_SIZE( bind_driver_base_t, 0x18 );                          
    };                                                  
};
#include "magic/bind_driver_base_t.end.hpp"
SDK_VERIFY( struct ndis::bind_driver_base_t, 0x18 );
