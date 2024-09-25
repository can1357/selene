#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct ksemaphore_t; }

#include "magic/port_queue_t.start.hpp"
namespace lpcp
{
    struct nonpaged_port_queue_t;

    // [struct _LPCP_PORT_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct port_queue_t                                               
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                            
        _m00 struct lpcp::nonpaged_port_queue_t* non_paged_port_queue;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NonPagedPortQueue
        _m01 struct nt::ksemaphore_t*            semaphore;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Semaphore
        _m02 nt::list_entry_t                    receive_head;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReceiveHead
                                                                      
        SDK_MAGIC_PROPERTIES( "_LPCP_PORT_QUEUE.$", 0x20, true, 0x3672f066daffda21 );                     
        SDK_FIXED_SIZE( port_queue_t, 0x20 );                         
    };                                                                
};
#include "magic/port_queue_t.end.hpp"
SDK_VERIFY( struct lpcp::port_queue_t, 0x20 );
