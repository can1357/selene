#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pushlock_t.start.hpp"
namespace wmi
{
    // [struct _WMI_PUSHLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pushlock_t           
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 void*    push_lock;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PushLock
        _m01 uint32_t thread_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ThreadId
        _m02 uint8_t  action;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Action
                                
        SDK_MAGIC_PROPERTIES( "_WMI_PUSHLOCK.$", 0x10, true, 0xe7ff4a3165fc8f4d );          
        SDK_FIXED_SIZE( pushlock_t, 0x10 );          
    };                          
};
#include "magic/pushlock_t.end.hpp"
SDK_VERIFY( struct wmi::pushlock_t, 0x10 );
