#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/pagingqueue_priority_t.hpp"

#include "magic/createpagingqueue_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CREATEPAGINGQUEUE]
    // => WDK 10 (NV)
    //
    struct createpagingqueue_t                                                     
    {                                                                              
        // WDK 10                                                                  
        //                                                                         
        _m00 uint32_t                              h_device;                         //{ +0x0000    } | .hDevice
        _m01 enum d3d::ddi::pagingqueue_priority_t priority;                         //{ +0x0004    } | .Priority
        _m02 uint32_t                              h_paging_queue;                   //{ +0x0008    } | .hPagingQueue
        _m03 uint32_t                              h_sync_object;                    //{ +0x000c    } | .hSyncObject
        _m04 void*                                 fence_value_cpu_virtual_address;  //{ +0x0010    } | .FenceValueCPUVirtualAddress
        _m05 uint32_t                              physical_adapter_index;           //{ +0x0018    } | .PhysicalAdapterIndex
                                                                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CREATEPAGINGQUEUE.$", 0x0, false, 0xcc088bfeeb4875ea );                                
        SDK_FIXED_SIZE( createpagingqueue_t, 0x20 );                                
    };                                                                             
};
#include "magic/createpagingqueue_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::createpagingqueue_t, 0x20 );
