#pragma once
#include <sdkgen/support_library.hpp>
#include "../stor/port/extended_device_queue_t.hpp"

namespace nt { struct device_object_t; }
namespace nt { struct irp_t;           }

#include "magic/queue_t.start.hpp"
namespace io
{
    // [struct _IO_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct queue_t                                                    
    {                                                                 
        using start_io_t = sdk::function<void(struct nt::device_object_t*, struct nt::irp_t*, void*)>*;              
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                            
        _m00 struct nt::device_object_t*                device_object;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceObject
        _m01 start_io_t                                 start_io;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StartIo
        _m02 struct stor::port::extended_device_queue_t device_queue;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceQueue
        _m03 uint32_t                                   queue_changed;  //{ +0x0098    +0x00a0    +0x00a0    +0x00a0    } | .QueueChanged
                                                                      
        SDK_MAGIC_PROPERTIES( "_IO_QUEUE.$", 0xa8, true, 0x949588cb2df50f83 );              
        SDK_DYNAMIC_SIZE( queue_t );                                  
    };                                                                
};
#include "magic/queue_t.end.hpp"
