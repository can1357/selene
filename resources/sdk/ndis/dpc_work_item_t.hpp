#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/work_queue_item_t.hpp"

namespace nt { struct kdpc_t; }

#include "magic/dpc_work_item_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_DPC_WORK_ITEM]
    // => Windows 10 v1607
    //
    struct dpc_work_item_t                                  
    {                                                       
        // Windows 10 v1607                                 
        //                                                  
        _m00 struct nt::work_queue_item_t work_item;          //{ +0x0000    } | .WorkItem
        _m01 struct nt::kdpc_t*           dpc;                //{ +0x0020    } | .Dpc
        _m02 void*                        interrupt_context;  //{ +0x0028    } | .InterruptContext
        _m03 void*                        system_argument1;   //{ +0x0030    } | .SystemArgument1
        _m04 void*                        system_argument2;   //{ +0x0038    } | .SystemArgument2
        _m05 uint32_t                     target_cpu;         //{ +0x0040    } | .TargetCpu
        _m06 uint32_t                     flags;              //{ +0x0044    } | .Flags
        _m07 uint64_t                     lock;               //{ +0x0048    } | .Lock
                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_DPC_WORK_ITEM.$", 0x0, false, 0x99af9c5d82b4218f );                  
        SDK_FIXED_SIZE( dpc_work_item_t, 0x50 );                  
    };                                                      
};
#include "magic/dpc_work_item_t.end.hpp"
SDK_VERIFY( struct ndis::dpc_work_item_t, 0x50 );
