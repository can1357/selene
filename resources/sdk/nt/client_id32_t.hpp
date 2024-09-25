#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/client_id32_t.start.hpp"
namespace nt
{
    // [struct _CLIENT_ID32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct client_id32_t             
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t unique_process;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UniqueProcess
        _m01 uint32_t unique_thread;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .UniqueThread
                                     
        SDK_MAGIC_PROPERTIES( "_CLIENT_ID32.$", 0x8, true, 0x3c406873b501b21a );               
        SDK_FIXED_SIZE( client_id32_t, 0x8 );               
    };                               
};
#include "magic/client_id32_t.end.hpp"
SDK_VERIFY( struct nt::client_id32_t, 0x8 );
