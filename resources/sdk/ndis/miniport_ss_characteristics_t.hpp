#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/miniport_ss_characteristics_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_MINIPORT_SS_CHARACTERISTICS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_ss_characteristics_t                                              
    {                                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                            
        _m00 struct ndis::object_header_t            header;                            //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                flags;                             //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 sdk::function<int32_t(void*, uint8_t)>* idle_notification_handler;         //{ +0x0008    +0x0008    +0x0008    } | .IdleNotificationHandler
        _m03 sdk::function<void(void*)>*             cancel_idle_notification_handler;  //{ +0x0010    +0x0010    +0x0010    } | .CancelIdleNotificationHandler
                                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_SS_CHARACTERISTICS.$", 0x18, true, 0x2b637a40649fbe75 );                                 
        SDK_FIXED_SIZE( miniport_ss_characteristics_t, 0x18 );                                 
    };                                                                                
};
#include "magic/miniport_ss_characteristics_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_ss_characteristics_t, 0x18 );
