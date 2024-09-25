#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/port_message_t.hpp"

#include "magic/unregister_process_msg_t.start.hpp"
namespace lpc
{
    // [struct _LPC_UNREGISTER_PROCESS_MSG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct unregister_process_msg_t                      
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                               
        _m00 struct nt::port_message_t port_msg;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PortMsg
        _m01 void*                     unique_process_id;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .UniqueProcessId
                                                         
        SDK_MAGIC_PROPERTIES( "_LPC_UNREGISTER_PROCESS_MSG.$", 0x30, true, 0xc80e476dfedaffbd );                  
        SDK_FIXED_SIZE( unregister_process_msg_t, 0x30 );                  
    };                                                   
};
#include "magic/unregister_process_msg_t.end.hpp"
SDK_VERIFY( struct lpc::unregister_process_msg_t, 0x30 );
