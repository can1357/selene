#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/work_queue_item_t.hpp"

namespace nt { struct irp_t; }

#include "magic/irp_work_item_t.start.hpp"
namespace ndis
{
    struct miniport_block_t;

    // [struct _NDIS_IRP_WORK_ITEM]
    // => Windows 10 v1607
    //
    struct irp_work_item_t                           
    {                                                
        // Windows 10 v1607                          
        //                                           
        _m00 struct nt::work_queue_item_t   item;      //{ +0x0000    } | .Item
        _m01 struct ndis::miniport_block_t* miniport;  //{ +0x0020    } | .Miniport
        _m02 struct nt::irp_t*              irp;       //{ +0x0028    } | .Irp
                                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_IRP_WORK_ITEM.$", 0x0, false, 0xc556e7af33f5747 );         
        SDK_FIXED_SIZE( irp_work_item_t, 0x30 );         
    };                                               
};
#include "magic/irp_work_item_t.end.hpp"
SDK_VERIFY( struct ndis::irp_work_item_t, 0x30 );
