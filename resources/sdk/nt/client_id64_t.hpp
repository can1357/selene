#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/client_id64_t.start.hpp"
namespace nt
{
    // [struct _CLIENT_ID64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct client_id64_t             
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint64_t unique_process;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UniqueProcess
        _m01 uint64_t unique_thread;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UniqueThread
                                     
        SDK_MAGIC_PROPERTIES( "_CLIENT_ID64.$", 0x10, true, 0x5e1cc3225eaf3f4f );               
        SDK_FIXED_SIZE( client_id64_t, 0x10 );               
    };                               
};
#include "magic/client_id64_t.end.hpp"
SDK_VERIFY( struct nt::client_id64_t, 0x10 );
