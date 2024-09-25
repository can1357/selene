#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/task_send_options_t.start.hpp"
namespace wdf
{
    // [struct _WDF_TASK_SEND_OPTIONS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct task_send_options_t
    {                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t size;     //{ +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t flags;    //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 int64_t  timeout;  //{ +0x0008    +0x0008    +0x0008    } | .Timeout
                              
        SDK_MAGIC_PROPERTIES( "_WDF_TASK_SEND_OPTIONS.$", 0x10, true, 0x917869f532e16f6e );        
        SDK_FIXED_SIZE( task_send_options_t, 0x10 );        
    };                        
};
#include "magic/task_send_options_t.end.hpp"
SDK_VERIFY( struct wdf::task_send_options_t, 0x10 );
