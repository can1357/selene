#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfqueue_t; }

#include "magic/io_queue_io_state_t.start.hpp"
namespace fx
{
    class callback_lock_t;

    // [class FxIoQueueIoState]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class io_queue_io_state_t                           
    {                                                   
        using pfn_wdf_io_queue_state_t = sdk::function<void(struct wdf::wdfqueue_t*, void*)>*;                
                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                              
        _m00 class fx::callback_lock_t* m_callback_lock;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_CallbackLock
        _m01 pfn_wdf_io_queue_state_t   method;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Method
                                                        
        SDK_MAGIC_PROPERTIES( "FxIoQueueIoState.$", 0x10, true, 0x180c74372667a7f6 );                
        SDK_FIXED_SIZE( io_queue_io_state_t, 0x10 );                
    };                                                  
};
#include "magic/io_queue_io_state_t.end.hpp"
SDK_VERIFY( class fx::io_queue_io_state_t, 0x10 );
