#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "message_trace_header_t.hpp"

#include "magic/message_trace_user_t.start.hpp"
namespace win
{
    // [struct _MESSAGE_TRACE_USER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct message_trace_user_t                                
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                     
        _m00 struct win::message_trace_header_t message_header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MessageHeader
        _m01 struct nt::guid_t                  message_guid;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MessageGuid
        _m02 uint32_t                           message_flags;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MessageFlags
        _m03 uint32_t                           data_size;       //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .DataSize
        _m04 uint64_t                           data;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Data
                                                               
        SDK_MAGIC_PROPERTIES( "_MESSAGE_TRACE_USER.$", 0x28, true, 0xc7f03f79a6d8a586 );               
        SDK_FIXED_SIZE( message_trace_user_t, 0x28 );               
    };                                                         
};
#include "magic/message_trace_user_t.end.hpp"
SDK_VERIFY( struct win::message_trace_user_t, 0x28 );
