#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/outgoing_call_data_t.start.hpp"
namespace tag
{
    // [struct tagOutgoingCallData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct outgoing_call_data_t     
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t dw_server_pid;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwServerPID
        _m01 uint32_t dw_server_tid;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwServerTID
                                    
        SDK_MAGIC_PROPERTIES( "tagOutgoingCallData.$", 0x8, true, 0x7c62951f8c85b694 );              
        SDK_FIXED_SIZE( outgoing_call_data_t, 0x8 );              
    };                              
};
#include "magic/outgoing_call_data_t.end.hpp"
SDK_VERIFY( struct tag::outgoing_call_data_t, 0x8 );
