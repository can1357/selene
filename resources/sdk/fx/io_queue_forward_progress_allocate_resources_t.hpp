#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfqueue_t;   }
namespace wdf { struct wdfrequest_t; }

#include "magic/io_queue_forward_progress_allocate_resources_t.start.hpp"
namespace fx
{
    // [class FxIoQueueForwardProgressAllocateResources]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class io_queue_forward_progress_allocate_resources_t
    {                                                   
        using method_t = sdk::function<int32_t(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*;       
                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                    
        _m00 method_t  method;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Method
                                                        
        SDK_MAGIC_PROPERTIES( "FxIoQueueForwardProgressAllocateResources.$", 0x8, true, 0x523f1f20f4a20b67 );       
        SDK_FIXED_SIZE( io_queue_forward_progress_allocate_resources_t, 0x8 );       
    };                                                  
};
#include "magic/io_queue_forward_progress_allocate_resources_t.end.hpp"
SDK_VERIFY( class fx::io_queue_forward_progress_allocate_resources_t, 0x8 );
