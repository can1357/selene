#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_access_token_t.start.hpp"
namespace win
{
    // [struct _PROCESS_ACCESS_TOKEN]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_access_token_t
    {                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                
        _m00 void* token;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Token
        _m01 void* thread;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Thread
                                 
        SDK_NONVOL_PROPERTIES( "_PROCESS_ACCESS_TOKEN.$", 0x10, true, 0xbf45a2bcb20b93d1 );       
        SDK_FIXED_SIZE( process_access_token_t, 0x10 );       
    };                           
};
#include "magic/process_access_token_t.end.hpp"
SDK_VERIFY( struct win::process_access_token_t, 0x10 );
