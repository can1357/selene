#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/querysegmentmemorystate_t.start.hpp"
namespace dxgk
{
    struct memoryrange_t;

    // [struct _DXGK_QUERYSEGMENTMEMORYSTATE]
    // => WDK 10 (NV)
    //
    struct querysegmentmemorystate_t                                  
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 uint16_t                    driver_segment_id;             //{ +0x0000    } | .DriverSegmentId
        _m01 uint16_t                    physical_adapter_index;        //{ +0x0002    } | .PhysicalAdapterIndex
        _m02 uint32_t                    num_invalid_memory_ranges;     //{ +0x0004    } | .NumInvalidMemoryRanges
        _m03 uint32_t                    num_uefi_frame_buffer_ranges;  //{ +0x0004    } | .NumUEFIFrameBufferRanges
        _m04 struct dxgk::memoryrange_t* p_memory_ranges;               //{ +0x0008    } | .pMemoryRanges
                                                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_QUERYSEGMENTMEMORYSTATE.$", 0x0, false, 0x5ad2ef56ec88b190 );                             
        SDK_FIXED_SIZE( querysegmentmemorystate_t, 0x10 );                             
    };                                                                
};
#include "magic/querysegmentmemorystate_t.end.hpp"
SDK_VERIFY( struct dxgk::querysegmentmemorystate_t, 0x10 );
