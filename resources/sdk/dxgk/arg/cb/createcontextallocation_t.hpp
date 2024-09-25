#pragma once
#include <sdkgen/support_library.hpp>
#include "../../allocationinfoflags_t.hpp"
#include "../../segmentbankpreference_t.hpp"
#include "../../../d3d/ddi/segmentpreference_t.hpp"
#include "../../createcontextallocationflags_t.hpp"

#include "magic/createcontextallocation_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_CREATECONTEXTALLOCATION]
    // => WDK 10 (NV)
    //
    struct createcontextallocation_t                                              
    {                                                                             
        // WDK 10                                                                 
        //                                                                        
        _m00 struct dxgk::createcontextallocationflags_t context_allocation_flags;  //{ +0x0000    } | .ContextAllocationFlags
        _m01 void*                                       h_adapter;                 //{ +0x0008    } | .hAdapter
        _m02 void*                                       h_device;                  //{ +0x0010    } | .hDevice
        _m03 void*                                       h_context;                 //{ +0x0018    } | .hContext
        _m04 void*                                       h_driver_allocation;       //{ +0x0020    } | .hDriverAllocation
        _m05 uint64_t                                    size;                      //{ +0x0028    } | .Size
        _m06 uint32_t                                    alignment;                 //{ +0x0030    } | .Alignment
        _m07 uint32_t                                    supported_segment_set;     //{ +0x0034    } | .SupportedSegmentSet
        _m08 uint32_t                                    eviction_segment_set;      //{ +0x0038    } | .EvictionSegmentSet
        _m09 struct d3d::ddi::segmentpreference_t        preferred_segment;         //{ +0x003c    } | .PreferredSegment
        _m10 struct dxgk::segmentbankpreference_t        hinted_bank;               //{ +0x0040    } | .HintedBank
        _m11 struct dxgk::allocationinfoflags_t          flags;                     //{ +0x0044    } | .Flags
        _m12 void*                                       h_allocation;              //{ +0x0048    } | .hAllocation
        _m13 uint32_t                                    physical_adapter_index;    //{ +0x0050    } | .PhysicalAdapterIndex
                                                                                  
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_CREATECONTEXTALLOCATION.$", 0x0, false, 0x962cb364ffbd6b09 );                         
        SDK_FIXED_SIZE( createcontextallocation_t, 0x58 );                         
    };                                                                            
};
#include "magic/createcontextallocation_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::createcontextallocation_t, 0x58 );
