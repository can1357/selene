#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gpu_physical_address_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_GPU_PHYSICAL_ADDRESS]
    // => WDK 10 (NV)
    //
    struct gpu_physical_address_t           
    {                                       
        // WDK 10                           
        //                                  
        _m00 uint32_t memory_segment_id;      //{ +0x0000    } | .MemorySegmentId
        _m01 uint64_t memory_segment_offset;  //{ +0x0008    } | .MemorySegmentOffset
                                            
        SDK_NONVOL_PROPERTIES( "_DXGK_GPU_PHYSICAL_ADDRESS.$", 0x0, false, 0xd781e3d93b69b2ef );                      
        SDK_FIXED_SIZE( gpu_physical_address_t, 0x10 );                      
    };                                      
};
#include "magic/gpu_physical_address_t.end.hpp"
SDK_VERIFY( struct dxgk::gpu_physical_address_t, 0x10 );
