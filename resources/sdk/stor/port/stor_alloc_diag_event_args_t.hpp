#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_alloc_diag_event_args_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_ALLOC_DIAG_EVENT_ARGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_alloc_diag_event_args_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 void*    trace_context;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TraceContext
        _m01 uint32_t user_data_size;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UserDataSize
        _m02 uint8_t  allocate;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Allocate
        _m03 void*    result;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .result
                                       
        SDK_MAGIC_PROPERTIES( "_STOR_ALLOC_DIAG_EVENT_ARGS.$", 0x18, true, 0x8ca4b59cb03ac8fc );               
        SDK_FIXED_SIZE( stor_alloc_diag_event_args_t, 0x18 );               
    };                                 
};
#include "magic/stor_alloc_diag_event_args_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_alloc_diag_event_args_t, 0x18 );
