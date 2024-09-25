#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/port_message_t.hpp"

#include "magic/client_died_msg_t.start.hpp"
namespace lpc
{
    // [struct _LPC_CLIENT_DIED_MSG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct client_died_msg_t                       
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                         
        _m00 struct nt::port_message_t port_msg;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PortMsg
        _m01 int64_t                   create_time;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CreateTime
                                                   
        SDK_MAGIC_PROPERTIES( "_LPC_CLIENT_DIED_MSG.$", 0x30, true, 0x8d4dd5f5a3300083 );            
        SDK_FIXED_SIZE( client_died_msg_t, 0x30 );            
    };                                             
};
#include "magic/client_died_msg_t.end.hpp"
SDK_VERIFY( struct lpc::client_died_msg_t, 0x30 );
