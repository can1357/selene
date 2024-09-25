#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/server_call_tracing_info_t.start.hpp"
namespace win
{
    // [struct ServerCallTracingInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct server_call_tracing_info_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                          
        _m00 void* p_method_address;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pMethodAddress
                                     
        SDK_MAGIC_PROPERTIES( "ServerCallTracingInfo.$", 0x8, true, 0x5f29ffa2ba86169d );                 
        SDK_FIXED_SIZE( server_call_tracing_info_t, 0x8 );                 
    };                               
};
#include "magic/server_call_tracing_info_t.end.hpp"
SDK_VERIFY( struct win::server_call_tracing_info_t, 0x8 );
