#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_alloc_el_record_args_t.start.hpp"
namespace stor::port
{
    struct storage_errorlog_packet_t;

    // [struct _STOR_ALLOC_EL_RECORD_ARGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_alloc_el_record_args_t                                   
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                               
        _m00 void*                                         trace_context;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TraceContext
        _m01 uint32_t                                      size;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m02 struct stor::port::storage_errorlog_packet_t* result;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Result
                                                                         
        SDK_MAGIC_PROPERTIES( "_STOR_ALLOC_EL_RECORD_ARGS.$", 0x18, true, 0xdcb346ff7a062b74 );              
        SDK_FIXED_SIZE( stor_alloc_el_record_args_t, 0x18 );              
    };                                                                   
};
#include "magic/stor_alloc_el_record_args_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_alloc_el_record_args_t, 0x18 );
