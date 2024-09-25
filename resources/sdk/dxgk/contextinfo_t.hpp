#pragma once
#include <sdkgen/support_library.hpp>
#include "contextinfo_caps_t.hpp"

#include "magic/contextinfo_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_CONTEXTINFO]
    // => WDK 10 (NV)
    //
    struct contextinfo_t                                                  
    {                                                                     
        // WDK 10                                                         
        //                                                                
        _m00 uint32_t                        dma_buffer_size;               //{ +0x0000    } | .DmaBufferSize
        _m01 uint32_t                        dma_buffer_segment_set;        //{ +0x0004    } | .DmaBufferSegmentSet
        _m02 uint32_t                        dma_buffer_private_data_size;  //{ +0x0008    } | .DmaBufferPrivateDataSize
        _m03 uint32_t                        allocation_list_size;          //{ +0x000c    } | .AllocationListSize
        _m04 uint32_t                        patch_location_list_size;      //{ +0x0010    } | .PatchLocationListSize
        _m05 struct dxgk::contextinfo_caps_t caps;                          //{ +0x0018    } | .Caps
        _m06 uint32_t                        paging_companion_node_id;      //{ +0x001c    } | .PagingCompanionNodeId
                                                                          
        SDK_NONVOL_PROPERTIES( "_DXGK_CONTEXTINFO.$", 0x0, false, 0x8f0fff52cb1d029c );                             
        SDK_FIXED_SIZE( contextinfo_t, 0x20 );                             
    };                                                                    
};
#include "magic/contextinfo_t.end.hpp"
SDK_VERIFY( struct dxgk::contextinfo_t, 0x20 );
