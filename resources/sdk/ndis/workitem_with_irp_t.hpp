#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/work_queue_item_t.hpp"

namespace nt { struct irp_t; }

#include "magic/workitem_with_irp_t.start.hpp"
namespace ndis
{
    // [struct WORKITEM_WITH_IRP]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct workitem_with_irp_t                     
    {                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                         
        _m00 struct nt::work_queue_item_t workitem;  //{ +0x0000    +0x0000    +0x0000    } | .Workitem
        _m01 struct nt::irp_t*            irp;       //{ +0x0020    +0x0020    +0x0020    } | .Irp
                                                   
        SDK_MAGIC_PROPERTIES( "WORKITEM_WITH_IRP.$", 0x28, true, 0x5d768522e80169eb );         
        SDK_FIXED_SIZE( workitem_with_irp_t, 0x28 );         
    };                                             
};
#include "magic/workitem_with_irp_t.end.hpp"
SDK_VERIFY( struct ndis::workitem_with_irp_t, 0x28 );
