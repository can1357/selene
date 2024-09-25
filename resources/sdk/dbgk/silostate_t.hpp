#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"

namespace dbgkp { struct error_port_t; }
namespace nt    { struct eprocess_t;   }
namespace nt    { struct kevent_t;     }

#include "magic/silostate_t.start.hpp"
namespace dbgk
{
    // [struct _DBGK_SILOSTATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct silostate_t                                               
    {                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                           
        _m00 struct ex::push_lock_t      error_port_lock;              //{ +0x0000    +0x0000    +0x0000    } | .ErrorPortLock
        _m01 struct dbgkp::error_port_t* error_port;                   //{ +0x0008    +0x0008    +0x0008    } | .ErrorPort
        _m02 struct nt::eprocess_t*      error_process;                //{ +0x0010    +0x0010    +0x0010    } | .ErrorProcess
        _m03 struct nt::kevent_t*        error_port_registered_event;  //{ +0x0018    +0x0018    +0x0018    } | .ErrorPortRegisteredEvent
                                                                     
        SDK_MAGIC_PROPERTIES( "_DBGK_SILOSTATE.$", 0x20, true, 0x17c25091d6663edc );                            
        SDK_FIXED_SIZE( silostate_t, 0x20 );                            
    };                                                               
};
#include "magic/silostate_t.end.hpp"
SDK_VERIFY( struct dbgk::silostate_t, 0x20 );
