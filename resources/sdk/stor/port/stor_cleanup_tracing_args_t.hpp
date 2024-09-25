#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_cleanup_tracing_args_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_CLEANUP_TRACING_ARGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_cleanup_tracing_args_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                       
        _m00 void* trace_context;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TraceContext
                                      
        SDK_MAGIC_PROPERTIES( "_STOR_CLEANUP_TRACING_ARGS.$", 0x8, true, 0x78ea55e12b2d3756 );              
        SDK_FIXED_SIZE( stor_cleanup_tracing_args_t, 0x8 );              
    };                                
};
#include "magic/stor_cleanup_tracing_args_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_cleanup_tracing_args_t, 0x8 );
