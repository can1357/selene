#pragma once
#include <sdkgen/support_library.hpp>
#include "segmentpreference_t.hpp"
#include "updateallocproperty_flags_t.hpp"

#include "magic/updateallocproperty_t.start.hpp"
namespace d3d::ddi
{
    // [struct D3DDDI_UPDATEALLOCPROPERTY]
    // => WDK 10 (NV)
    //
    struct updateallocproperty_t                                                    
    {                                                                               
        // WDK 10                                                                   
        //                                                                          
        _m00 uint32_t                                     h_paging_queue;             //{ +0x0000    } | .hPagingQueue
        _m01 uint32_t                                     h_allocation;               //{ +0x0004    } | .hAllocation
        _m02 uint32_t                                     supported_segment_set;      //{ +0x0008    } | .SupportedSegmentSet
        _m03 struct d3d::ddi::segmentpreference_t         preferred_segment;          //{ +0x000c    } | .PreferredSegment
        _m04 struct d3d::ddi::updateallocproperty_flags_t flags;                      //{ +0x0010    } | .Flags
        _m05 uint64_t                                     paging_fence_value;         //{ +0x0018    } | .PagingFenceValue
        _m06 uint1_t                                      set_accessed_physically;    //{ +0x0020@0  } | .SetAccessedPhysically
        _m07 uint1_t                                      set_supported_segment_set;  //{ +0x0020@1  } | .SetSupportedSegmentSet
        _m08 uint1_t                                      set_preferred_segment;      //{ +0x0020@2  } | .SetPreferredSegment
        _m09 uint32_t                                     property_mask_value;        //{ +0x0020    } | .PropertyMaskValue
                                                                                    
        SDK_NONVOL_PROPERTIES( "D3DDDI_UPDATEALLOCPROPERTY.$", 0x0, false, 0xaeb8804fe5da4450 );                          
        SDK_FIXED_SIZE( updateallocproperty_t, 0x28 );                              
    };                                                                              
};
#include "magic/updateallocproperty_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::updateallocproperty_t, 0x28 );
