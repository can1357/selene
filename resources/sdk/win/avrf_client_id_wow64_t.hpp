#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/avrf_client_id_wow64_t.start.hpp"
namespace win
{
    // [struct _AVRF_CLIENT_ID_WOW64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct avrf_client_id_wow64_t    
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint64_t unique_process;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UniqueProcess
        _m01 uint64_t unique_thread;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UniqueThread
                                     
        SDK_MAGIC_PROPERTIES( "_AVRF_CLIENT_ID_WOW64.$", 0x10, true, 0xf2aa7cb61dae43ec );               
        SDK_FIXED_SIZE( avrf_client_id_wow64_t, 0x10 );               
    };                               
};
#include "magic/avrf_client_id_wow64_t.end.hpp"
SDK_VERIFY( struct win::avrf_client_id_wow64_t, 0x10 );
