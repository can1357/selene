#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/as_activator_task_t.start.hpp"
namespace wdf
{
    // [struct _AsActivatorTask]
    // => Windows 11
    //
    struct as_activator_task_t  
    {                           
        // Windows 11           
        //                      
        _m00 uint32_t client_id;  //{ +0x0000    } | .ClientId
        _m01 uint16_t task_id;    //{ +0x000c    } | .TaskId
                                
        SDK_MAGIC_PROPERTIES( "_AsActivatorTask.$", 0x0, false, 0x2e80cb8a344beed1 );          
        SDK_FIXED_SIZE( as_activator_task_t, 0x10 );          
    };                          
};
#include "magic/as_activator_task_t.end.hpp"
SDK_VERIFY( struct wdf::as_activator_task_t, 0x10 );
