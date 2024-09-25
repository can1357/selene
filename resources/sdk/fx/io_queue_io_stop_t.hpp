#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfqueue_t;   }
namespace wdf { struct wdfrequest_t; }

#include "magic/io_queue_io_stop_t.start.hpp"
namespace fx
{
    class callback_lock_t;

    // [class FxIoQueueIoStop]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class io_queue_io_stop_t                             
    {                                                    
        using pfn_wdf_io_queue_io_stop_t = sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint32_t)>*;                
                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                               
        _m00 class fx::callback_lock_t*  m_callback_lock;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_CallbackLock
        _m01 pfn_wdf_io_queue_io_stop_t  method;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Method
                                                         
        SDK_MAGIC_PROPERTIES( "FxIoQueueIoStop.$", 0x10, true, 0x6fd6a27276482f42 );                
        SDK_FIXED_SIZE( io_queue_io_stop_t, 0x10 );                
    };                                                   
};
#include "magic/io_queue_io_stop_t.end.hpp"
SDK_VERIFY( class fx::io_queue_io_stop_t, 0x10 );
