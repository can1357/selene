#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_object_t; }
namespace nt { struct ethread_t;       }
namespace nt { struct irp_t;           }

#include "magic/irp_worker_entry_t.start.hpp"
namespace pop
{
    // [struct _POP_IRP_WORKER_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct irp_worker_entry_t                    
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                       
        _m00 nt::list_entry_t            link;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m01 struct nt::ethread_t*       thread;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Thread
        _m02 struct nt::irp_t*           irp;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Irp
        _m03 struct nt::device_object_t* device;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Device
        _m04 uint8_t                     _static;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Static
                                                 
        SDK_MAGIC_PROPERTIES( "_POP_IRP_WORKER_ENTRY.$", 0x30, true, 0x231872f047a2336b );        
        SDK_FIXED_SIZE( irp_worker_entry_t, 0x30 );        
    };                                           
};
#include "magic/irp_worker_entry_t.end.hpp"
SDK_VERIFY( struct pop::irp_worker_entry_t, 0x30 );
