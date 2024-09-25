#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t; }

#include "magic/irp_queue_t.start.hpp"
namespace po
{
    // [struct _PO_IRP_QUEUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct irp_queue_t                          
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                      
        _m00 struct nt::irp_t* current_irp;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentIrp
        _m01 struct nt::irp_t* pending_irp_list;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PendingIrpList
                                                
        SDK_MAGIC_PROPERTIES( "_PO_IRP_QUEUE.$", 0x10, true, 0xa64160a5da676144 );                 
        SDK_FIXED_SIZE( irp_queue_t, 0x10 );                 
    };                                          
};
#include "magic/irp_queue_t.end.hpp"
SDK_VERIFY( struct po::irp_queue_t, 0x10 );
