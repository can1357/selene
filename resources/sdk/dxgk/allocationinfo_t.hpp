#pragma once
#include <sdkgen/support_library.hpp>
#include "allocationinfoflags_t.hpp"
#include "segmentbankpreference_t.hpp"
#include "allocationinfoflags_wddm2_0_t.hpp"
#include "../d3d/ddi/segmentpreference_t.hpp"

#include "magic/allocationinfo_t.start.hpp"
namespace dxgk
{
    struct allocationusagehint_t;

    // [struct _DXGK_ALLOCATIONINFO]
    // => WDK 10 (NV)
    //
    struct allocationinfo_t                                                          
    {                                                                                
        // WDK 10                                                                    
        //                                                                           
        _m00 void*                                      p_private_driver_data;         //{ +0x0000    } | .pPrivateDriverData
        _m01 uint32_t                                   private_driver_data_size;      //{ +0x0008    } | .PrivateDriverDataSize
        _m02 uint32_t                                   alignment;                     //{ +0x000c    } | .Alignment
        _m03 uint64_t                                   size;                          //{ +0x0010    } | .Size
        _m04 uint64_t                                   pitch_aligned_size;            //{ +0x0018    } | .PitchAlignedSize
        _m05 struct dxgk::segmentbankpreference_t       hinted_bank;                   //{ +0x0020    } | .HintedBank
        _m06 struct d3d::ddi::segmentpreference_t       preferred_segment;             //{ +0x0024    } | .PreferredSegment
        _m07 uint32_t                                   supported_read_segment_set;    //{ +0x0028    } | .SupportedReadSegmentSet
        _m08 uint32_t                                   supported_write_segment_set;   //{ +0x002c    } | .SupportedWriteSegmentSet
        _m09 uint32_t                                   eviction_segment_set;          //{ +0x0030    } | .EvictionSegmentSet
        _m10 uint32_t                                   maximum_renaming_list_length;  //{ +0x0034    } | .MaximumRenamingListLength
        _m11 uint32_t                                   physical_adapter_index;        //{ +0x0034    } | .PhysicalAdapterIndex
        _m12 void*                                      h_allocation;                  //{ +0x0038    } | .hAllocation
        _m13 struct dxgk::allocationinfoflags_t         flags;                         //{ +0x0040    } | .Flags
        _m14 struct dxgk::allocationinfoflags_wddm2_0_t flags_wddm2;                   //{ +0x0040    } | .FlagsWddm2
        _m15 struct dxgk::allocationusagehint_t*        p_allocation_usage_hint;       //{ +0x0048    } | .pAllocationUsageHint
        _m16 uint32_t                                   allocation_priority;           //{ +0x0050    } | .AllocationPriority
                                                                                     
        SDK_NONVOL_PROPERTIES( "_DXGK_ALLOCATIONINFO.$", 0x0, false, 0x4e164769b7635e7e );                             
        SDK_FIXED_SIZE( allocationinfo_t, 0x58 );                                    
    };                                                                               
};
#include "magic/allocationinfo_t.end.hpp"
SDK_VERIFY( struct dxgk::allocationinfo_t, 0x58 );
