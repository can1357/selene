#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_session_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_SESSION_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_session_information_t
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t session_id;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SessionId
                                        
        SDK_NONVOL_PROPERTIES( "_PROCESS_SESSION_INFORMATION.$", 0x4, true, 0xc5796afc346a6d5d );           
        SDK_FIXED_SIZE( process_session_information_t, 0x4 );           
    };                                  
};
#include "magic/process_session_information_t.end.hpp"
SDK_VERIFY( struct win::process_session_information_t, 0x4 );
