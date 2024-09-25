#pragma once
#include <sdkgen/support_library.hpp>
#include "../ndis/work_item_t.hpp"

namespace nt { struct irp_t; }

#include "magic/work_item_t.start.hpp"
namespace power
{
    // [struct _POWER_WORK_ITEM]
    // => Windows 10 v1607
    //
    struct work_item_t                          
    {                                           
        // Windows 10 v1607                     
        //                                      
        _m00 struct ndis::work_item_t work_item;  //{ +0x0000    } | .WorkItem
        _m01 struct nt::irp_t*        p_irp;      //{ +0x0050    } | .pIrp
                                                
        SDK_MAGIC_PROPERTIES( "_POWER_WORK_ITEM.$", 0x0, false, 0x5fa63129bf1ebc93 );          
        SDK_FIXED_SIZE( work_item_t, 0x58 );          
    };                                          
};
#include "magic/work_item_t.end.hpp"
SDK_VERIFY( struct power::work_item_t, 0x58 );
