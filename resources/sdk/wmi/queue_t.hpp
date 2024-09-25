#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/queue_t.start.hpp"
namespace wmi
{
    // [struct _WMI_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct queue_t              
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 void*    queue;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Queue
        _m01 uint32_t thread_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ThreadId
        _m02 uint8_t  action;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Action
                                
        SDK_MAGIC_PROPERTIES( "_WMI_QUEUE.$", 0x10, true, 0x99ee95a2e9ef56a8 );          
        SDK_FIXED_SIZE( queue_t, 0x10 );          
    };                          
};
#include "magic/queue_t.end.hpp"
SDK_VERIFY( struct wmi::queue_t, 0x10 );
