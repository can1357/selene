#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/task_callbacks_t.start.hpp"
namespace tp
{
    struct pool_t;
    struct task_t;
    struct callback_instance_t;

    // [struct _TP_TASK_CALLBACKS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct task_callbacks_t                                 
    {                                                       
        using ptp_task_execute_callback_t =  sdk::function<void(struct tp::callback_instance_t*, struct tp::task_t*)>*;                 
        using ptp_task_unposted_callback_t = sdk::function<void(struct tp::task_t*, struct tp::pool_t*)>*;                 
                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                  
        _m00 ptp_task_execute_callback_t   execute_callback;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExecuteCallback
        _m01 ptp_task_unposted_callback_t  unposted;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Unposted
                                                            
        SDK_MAGIC_PROPERTIES( "_TP_TASK_CALLBACKS.$", 0x10, true, 0xa5c4539c71892c99 );                 
        SDK_FIXED_SIZE( task_callbacks_t, 0x10 );                 
    };                                                      
};
#include "magic/task_callbacks_t.end.hpp"
SDK_VERIFY( struct tp::task_callbacks_t, 0x10 );
