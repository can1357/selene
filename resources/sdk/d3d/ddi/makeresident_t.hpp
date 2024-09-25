#pragma once
#include <sdkgen/support_library.hpp>
#include "makeresident_flags_t.hpp"

#include "magic/makeresident_t.start.hpp"
namespace d3d::ddi
{
    // [struct D3DDDI_MAKERESIDENT]
    // => WDK 10 (NV)
    //
    struct makeresident_t                                             
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 uint32_t                              h_paging_queue;      //{ +0x0000    } | .hPagingQueue
        _m01 uint32_t                              num_allocations;     //{ +0x0004    } | .NumAllocations
        _m02 const uint32_t*                       allocation_list;     //{ +0x0008    } | .AllocationList
        _m03 const uint32_t*                       priority_list;       //{ +0x0010    } | .PriorityList
        _m04 struct d3d::ddi::makeresident_flags_t flags;               //{ +0x0018    } | .Flags
        _m05 uint64_t                              paging_fence_value;  //{ +0x0020    } | .PagingFenceValue
        _m06 uint64_t                              num_bytes_to_trim;   //{ +0x0028    } | .NumBytesToTrim
                                                                      
        SDK_NONVOL_PROPERTIES( "D3DDDI_MAKERESIDENT.$", 0x0, false, 0x33044a534e454651 );                   
        SDK_FIXED_SIZE( makeresident_t, 0x30 );                       
    };                                                                
};
#include "magic/makeresident_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::makeresident_t, 0x30 );
