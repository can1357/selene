#pragma once
#include <sdkgen/support_library.hpp>
#include "service_status_process_t.hpp"

#include "magic/service_notify_2a_t.start.hpp"
namespace win
{
    // [struct _SERVICE_NOTIFY_2A]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_notify_2a_t                                              
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                  
        _m00 uint32_t                             dw_version;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 sdk::function<void(void*)>*          pfn_notify_callback;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pfnNotifyCallback
        _m02 void*                                p_context;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pContext
        _m03 uint32_t                             dw_notification_status;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwNotificationStatus
        _m04 struct win::service_status_process_t service_status;             //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ServiceStatus
        _m05 uint32_t                             dw_notification_triggered;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .dwNotificationTriggered
        _m06 char*                                psz_service_names;          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pszServiceNames
                                                                            
        SDK_MAGIC_PROPERTIES( "_SERVICE_NOTIFY_2A.$", 0x50, true, 0xdf157f48d6813198 );                          
        SDK_FIXED_SIZE( service_notify_2a_t, 0x50 );                          
    };                                                                      
};
#include "magic/service_notify_2a_t.end.hpp"
SDK_VERIFY( struct win::service_notify_2a_t, 0x50 );
