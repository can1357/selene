#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_write_el_record_args_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_WRITE_EL_RECORD_ARGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_write_el_record_args_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                          
        _m00 void* trace_context;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TraceContext
        _m01 void* error_log_packet;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ErrorLogPacket
                                      
        SDK_MAGIC_PROPERTIES( "_STOR_WRITE_EL_RECORD_ARGS.$", 0x10, true, 0x82af3d767d2dcd84 );                 
        SDK_FIXED_SIZE( stor_write_el_record_args_t, 0x10 );                 
    };                                
};
#include "magic/stor_write_el_record_args_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_write_el_record_args_t, 0x10 );
