#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/server_session_information_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_SERVER_SESSION_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct server_session_information_t
    {                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t session_id;        //{ +0x0000    +0x0000    +0x0000    } | .SessionId
        _m01 uint32_t process_id;        //{ +0x0004    +0x0004    +0x0004    } | .ProcessId
                                       
        SDK_MAGIC_PROPERTIES( "_ALPC_SERVER_SESSION_INFORMATION.$", 0x8, true, 0xd122fbb45e83bb09 );           
        SDK_FIXED_SIZE( server_session_information_t, 0x8 );           
    };                                 
};
#include "magic/server_session_information_t.end.hpp"
SDK_VERIFY( struct alpc::server_session_information_t, 0x8 );
