#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/ksemaphore_t.hpp"

#include "magic/nonpaged_port_queue_t.start.hpp"
namespace lpcp
{
    struct port_object_t;

    // [struct _LPCP_NONPAGED_PORT_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nonpaged_port_queue_t                      
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                            
        _m00 struct nt::ksemaphore_t     semaphore;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Semaphore
        _m01 struct lpcp::port_object_t* back_pointer;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BackPointer
                                                      
        SDK_MAGIC_PROPERTIES( "_LPCP_NONPAGED_PORT_QUEUE.$", 0x28, true, 0xdaeb1e478fd13495 );             
        SDK_FIXED_SIZE( nonpaged_port_queue_t, 0x28 );             
    };                                                
};
#include "magic/nonpaged_port_queue_t.end.hpp"
SDK_VERIFY( struct lpcp::nonpaged_port_queue_t, 0x28 );
