#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/client_id_t.start.hpp"
namespace nt
{
    // [struct _CLIENT_ID]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct client_id_t            
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                        
        _m00 void* unique_process;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .UniqueProcess
        _m01 void* unique_thread;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .UniqueThread
                                  
        SDK_NONVOL_PROPERTIES( "_CLIENT_ID.$", 0x10, true, 0x44c203f5c1e948fa );               
        SDK_FIXED_SIZE( client_id_t, 0x10 );               
    };                            
};
#include "magic/client_id_t.end.hpp"
SDK_VERIFY( struct nt::client_id_t, 0x10 );
