#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/async_com_server_call_t.start.hpp"
namespace win
{
    // [class AsyncComServerCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class async_com_server_call_t              
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                     
        _m00 const struct nt::guid_t iid_async;  //{ +0x00a0    +0x00e8    +0x0150    +0x00e8    } | ._iidAsync
                                               
        SDK_MAGIC_PROPERTIES( "AsyncComServerCall.$", 0x110, true, 0x2944ecb18e1d327c );          
        SDK_DYNAMIC_SIZE( async_com_server_call_t );          
    };                                         
};
#include "magic/async_com_server_call_t.end.hpp"
