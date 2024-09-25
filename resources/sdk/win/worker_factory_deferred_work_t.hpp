#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct port_message_t; }

#include "magic/worker_factory_deferred_work_t.start.hpp"
namespace win
{
    // [struct _WORKER_FACTORY_DEFERRED_WORK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct worker_factory_deferred_work_t                       
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                      
        _m00 struct nt::port_message_t* alpc_send_message;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AlpcSendMessage
        _m01 void*                      alpc_send_message_port;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AlpcSendMessagePort
        _m02 uint32_t                   alpc_send_message_flags;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AlpcSendMessageFlags
        _m03 uint32_t                   flags;                    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Flags
                                                                
        SDK_MAGIC_PROPERTIES( "_WORKER_FACTORY_DEFERRED_WORK.$", 0x18, true, 0x1ee4916f7fe755dd );                        
        SDK_FIXED_SIZE( worker_factory_deferred_work_t, 0x18 );                        
    };                                                          
};
#include "magic/worker_factory_deferred_work_t.end.hpp"
SDK_VERIFY( struct win::worker_factory_deferred_work_t, 0x18 );
