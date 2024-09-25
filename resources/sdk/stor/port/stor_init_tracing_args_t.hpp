#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_init_tracing_args_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_INIT_TRACING_ARGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_init_tracing_args_t
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 void*    init_info;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InitInfo
        _m01 uint32_t result;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Result
                                   
        SDK_MAGIC_PROPERTIES( "_STOR_INIT_TRACING_ARGS.$", 0x10, true, 0xa048cd148f21893d );          
        SDK_FIXED_SIZE( stor_init_tracing_args_t, 0x10 );          
    };                             
};
#include "magic/stor_init_tracing_args_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_init_tracing_args_t, 0x10 );
