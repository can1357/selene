#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/request_remote_wake_notification_t.start.hpp"
namespace wdf
{
    struct usbd_function_handle_t;

    // [struct _REQUEST_REMOTE_WAKE_NOTIFICATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct request_remote_wake_notification_t                         
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                            
        _m00 uint16_t                            version;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t                            size;                  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 struct wdf::usbd_function_handle_t* usbd_function_handle;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UsbdFunctionHandle
        _m03 uint32_t                            interface;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Interface
                                                                      
        SDK_MAGIC_PROPERTIES( "_REQUEST_REMOTE_WAKE_NOTIFICATION.$", 0x18, true, 0x47beb30a22f8c2ff );                     
        SDK_FIXED_SIZE( request_remote_wake_notification_t, 0x18 );                     
    };                                                                
};
#include "magic/request_remote_wake_notification_t.end.hpp"
SDK_VERIFY( struct wdf::request_remote_wake_notification_t, 0x18 );
