#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/bind_filter_driver_t.start.hpp"
namespace ndis
{
    struct filter_driver_block_t;

    // [struct NDIS_BIND_FILTER_DRIVER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bind_filter_driver_t                                            
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                 
        _m00 bool                                driver_ready;               //{ +0x0008    +0x0000    +0x0000    +0x0000    } | .DriverReady
        _m01 bool                                needs_bind_complete_event;  //{ +0x0009    +0x0001    +0x0001    +0x0001    } | .NeedsBindCompleteEvent
        _m02 nt::list_entry_t                    bind_links;                 //{ +0x0010    +0x0008    +0x0008    +0x0008    } | .BindLinks
        _m03 struct nt::guid_t                   guid;                       //{ +0x0020    +0x0018    +0x0018    +0x0018    } | .Guid
        _m04 uint32_t                            filter_bind_flags;          //{ +0x0030    +0x0028    +0x0028    +0x0028    } | .FilterBindFlags
        _m05 struct ndis::filter_driver_block_t* running_driver;             //{ +0x0040    +0x0038    +0x0038    +0x0038    } | .RunningDriver
                                                                           
        SDK_MAGIC_PROPERTIES( "NDIS_BIND_FILTER_DRIVER.$", 0x40, true, 0x912b36a9ad1a929e );                          
        SDK_DYNAMIC_SIZE( bind_filter_driver_t );                          
    };                                                                     
};
#include "magic/bind_filter_driver_t.end.hpp"
