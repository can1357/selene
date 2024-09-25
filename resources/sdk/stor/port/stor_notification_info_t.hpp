#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_object_t; }
namespace nt { struct irp_t;           }

#include "magic/stor_notification_info_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_NOTIFICATION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_notification_info_t                                           
    {                                                                         
        using notification_function_callback_t = sdk::function<void(struct nt::device_object_t*, struct nt::irp_t*, void*)>*;                               
                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                    
        _m00 struct nt::irp_t*                 irp;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Irp
        _m01 void*                             context;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m02 struct nt::device_object_t*       pdo;                             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Pdo
        _m03 notification_function_callback_t  notification_function_callback;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NotificationFunctionCallback
                                                                              
        SDK_MAGIC_PROPERTIES( "_STOR_NOTIFICATION_INFO.$", 0x20, true, 0xa6c4512946b7f02e );                               
        SDK_FIXED_SIZE( stor_notification_info_t, 0x20 );                               
    };                                                                        
};
#include "magic/stor_notification_info_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_notification_info_t, 0x20 );
