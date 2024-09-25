#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/completion_context_t.start.hpp"
namespace io
{
    // [struct _IO_COMPLETION_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct completion_context_t  
    {                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                       
        _m00 void*   port;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Port
        _m01 void*   key;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Key
                                 
        // Windows 11            
        //                       
        _m02 int64_t usage_count;  //{ +0x0010    } | .UsageCount
                                 
        SDK_NONVOL_PROPERTIES( "_IO_COMPLETION_CONTEXT.$", 0x10, true, 0x6bfe45f4469e82ed );            
        SDK_DYNAMIC_SIZE( completion_context_t );            
    };                           
};
#include "magic/completion_context_t.end.hpp"
