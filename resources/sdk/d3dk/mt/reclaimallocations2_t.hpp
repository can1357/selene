#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/reclaim_result_t.hpp"

#include "magic/reclaimallocations2_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_RECLAIMALLOCATIONS2]
    // => WDK 10 (NV)
    //
    struct reclaimallocations2_t                                 
    {                                                            
        // WDK 10                                                
        //                                                       
        _m00 uint32_t                         h_paging_queue;      //{ +0x0000    } | .hPagingQueue
        _m01 uint32_t                         num_allocations;     //{ +0x0004    } | .NumAllocations
        _m02 uint32_t*                        p_resources;         //{ +0x0008    } | .pResources
        _m03 const uint32_t*                  handle_list;         //{ +0x0010    } | .HandleList
        _m04 int32_t*                         p_discarded;         //{ +0x0018    } | .pDiscarded
        _m05 enum d3d::ddi::reclaim_result_t* p_results;           //{ +0x0018    } | .pResults
        _m06 uint64_t                         paging_fence_value;  //{ +0x0020    } | .PagingFenceValue
                                                                 
        SDK_NONVOL_PROPERTIES( "_D3DKMT_RECLAIMALLOCATIONS2.$", 0x0, false, 0x516acabfde1d8553 );                   
        SDK_FIXED_SIZE( reclaimallocations2_t, 0x28 );                   
    };                                                           
};
#include "magic/reclaimallocations2_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::reclaimallocations2_t, 0x28 );
