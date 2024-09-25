#pragma once
#include <sdkgen/support_library.hpp>
#include "message_trace_header_t.hpp"

#include "magic/message_trace_t.start.hpp"
namespace win
{
    // [struct _MESSAGE_TRACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct message_trace_t                                     
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                     
        _m00 struct win::message_trace_header_t message_header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MessageHeader
        _m01 uint8_t                            data;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Data
                                                               
        SDK_MAGIC_PROPERTIES( "_MESSAGE_TRACE.$", 0xc, true, 0xb4c88eace0cc0716 );               
        SDK_FIXED_SIZE( message_trace_t, 0xc );                
    };                                                         
};
#include "magic/message_trace_t.end.hpp"
SDK_VERIFY( struct win::message_trace_t, 0xc );
