#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_free_diag_event_args_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_FREE_DIAG_EVENT_ARGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_free_diag_event_args_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                       
        _m00 void* trace_context;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TraceContext
        _m01 void* event_record;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EventRecord
                                      
        SDK_MAGIC_PROPERTIES( "_STOR_FREE_DIAG_EVENT_ARGS.$", 0x10, true, 0x575c294b4d8b84f8 );              
        SDK_FIXED_SIZE( stor_free_diag_event_args_t, 0x10 );              
    };                                
};
#include "magic/stor_free_diag_event_args_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_free_diag_event_args_t, 0x10 );
