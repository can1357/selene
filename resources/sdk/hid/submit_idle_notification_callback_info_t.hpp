#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/submit_idle_notification_callback_info_t.start.hpp"
namespace hid
{
    // [struct _HID_SUBMIT_IDLE_NOTIFICATION_CALLBACK_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct submit_idle_notification_callback_info_t    
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                             
        _m00 sdk::function<void(void*)>* idle_callback;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IdleCallback
        _m01 void*                       idle_context;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IdleContext
                                                       
        SDK_MAGIC_PROPERTIES( "_HID_SUBMIT_IDLE_NOTIFICATION_CALLBACK_INFO.$", 0x10, true, 0xeeff3639dbd985ef );              
        SDK_FIXED_SIZE( submit_idle_notification_callback_info_t, 0x10 );              
    };                                                 
};
#include "magic/submit_idle_notification_callback_info_t.end.hpp"
SDK_VERIFY( struct hid::submit_idle_notification_callback_info_t, 0x10 );
