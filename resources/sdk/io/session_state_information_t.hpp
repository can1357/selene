#pragma once
#include <sdkgen/support_library.hpp>
#include "session_state_t.hpp"

#include "magic/session_state_information_t.start.hpp"
namespace io
{
    // [struct _IO_SESSION_STATE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct session_state_information_t              
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                          
        _m00 uint32_t                 session_id;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SessionId
        _m01 enum io::session_state_t session_state;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SessionState
        _m02 uint8_t                  local_session;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .LocalSession
                                                    
        SDK_NONVOL_PROPERTIES( "_IO_SESSION_STATE_INFORMATION.$", 0xc, true, 0x33fbc50ddadbe7d9 );              
        SDK_FIXED_SIZE( session_state_information_t, 0xc );              
    };                                              
};
#include "magic/session_state_information_t.end.hpp"
SDK_VERIFY( struct io::session_state_information_t, 0xc );
