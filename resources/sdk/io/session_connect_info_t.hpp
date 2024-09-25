#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/session_connect_info_t.start.hpp"
namespace io
{
    // [struct _IO_SESSION_CONNECT_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct session_connect_info_t   
    {                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t session_id;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SessionId
        _m01 uint8_t  local_session;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .LocalSession
                                    
        SDK_NONVOL_PROPERTIES( "_IO_SESSION_CONNECT_INFO.$", 0x8, true, 0xee305a00b1100758 );              
        SDK_FIXED_SIZE( session_connect_info_t, 0x8 );              
    };                              
};
#include "magic/session_connect_info_t.end.hpp"
SDK_VERIFY( struct io::session_connect_info_t, 0x8 );
