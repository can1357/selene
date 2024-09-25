#pragma once
#include <sdkgen/support_library.hpp>
#include "irp_queue_t.hpp"

#include "magic/irp_manager_t.start.hpp"
namespace po
{
    // [struct _PO_IRP_MANAGER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct irp_manager_t                             
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                           
        _m00 struct po::irp_queue_t device_irp_queue;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceIrpQueue
        _m01 struct po::irp_queue_t system_irp_queue;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SystemIrpQueue
                                                     
        SDK_MAGIC_PROPERTIES( "_PO_IRP_MANAGER.$", 0x20, true, 0x27dd356d2f866fc9 );                 
        SDK_FIXED_SIZE( irp_manager_t, 0x20 );                 
    };                                               
};
#include "magic/irp_manager_t.end.hpp"
SDK_VERIFY( struct po::irp_manager_t, 0x20 );
