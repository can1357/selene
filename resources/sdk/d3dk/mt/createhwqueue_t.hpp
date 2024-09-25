#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/createhwqueueflags_t.hpp"

#include "magic/createhwqueue_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CREATEHWQUEUE]
    // => WDK 10 (NV)
    //
    struct createhwqueue_t                                                                     
    {                                                                                          
        // WDK 10                                                                              
        //                                                                                     
        _m00 uint32_t                              h_hw_context;                                 //{ +0x0000    } | .hHwContext
        _m01 struct d3d::ddi::createhwqueueflags_t flags;                                        //{ +0x0004    } | .Flags
        _m02 uint32_t                              private_driver_data_size;                     //{ +0x0008    } | .PrivateDriverDataSize
        _m03 void*                                 p_private_driver_data;                        //{ +0x0010    } | .pPrivateDriverData
        _m04 uint32_t                              h_hw_queue;                                   //{ +0x0018    } | .hHwQueue
        _m05 uint32_t                              h_hw_queue_progress_fence;                    //{ +0x001c    } | .hHwQueueProgressFence
        _m06 void*                                 hw_queue_progress_fence_cpu_virtual_address;  //{ +0x0020    } | .HwQueueProgressFenceCPUVirtualAddress
        _m07 uint64_t                              hw_queue_progress_fence_gpu_virtual_address;  //{ +0x0028    } | .HwQueueProgressFenceGPUVirtualAddress
                                                                                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CREATEHWQUEUE.$", 0x0, false, 0x68414623c11438eb );                                            
        SDK_FIXED_SIZE( createhwqueue_t, 0x30 );                                               
    };                                                                                         
};
#include "magic/createhwqueue_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::createhwqueue_t, 0x30 );
