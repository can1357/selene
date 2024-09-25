#pragma once
#include <sdkgen/support_library.hpp>
#include "../submitcommandflags_t.hpp"

#include "magic/submitcommandtohwqueue_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SUBMITCOMMANDTOHWQUEUE]
    // => WDK 10 (NV)
    //
    struct submitcommandtohwqueue_t                                           
    {                                                                         
        // WDK 10                                                             
        //                                                                    
        _m00 void*                             h_hw_queue;                      //{ +0x0000    } | .hHwQueue
        _m01 uint64_t                          hw_queue_progress_fence_id;      //{ +0x0008    } | .HwQueueProgressFenceId
        _m02 uint64_t                          dma_buffer_virtual_address;      //{ +0x0010    } | .DmaBufferVirtualAddress
        _m03 uint32_t                          dma_buffer_size;                 //{ +0x0018    } | .DmaBufferSize
        _m04 uint32_t                          dma_buffer_private_data_size;    //{ +0x001c    } | .DmaBufferPrivateDataSize
        _m05 void*                             p_dma_buffer_private_data;       //{ +0x0020    } | .pDmaBufferPrivateData
        _m06 struct dxgk::submitcommandflags_t flags;                           //{ +0x0028    } | .Flags
        _m07 uint64_t                          hw_queue_progress_fence_gpu_va;  //{ +0x0030    } | .HwQueueProgressFenceGpuVa
        _m08 void*                             hw_queue_progress_fence_cpu_va;  //{ +0x0038    } | .HwQueueProgressFenceCpuVa
                                                                              
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SUBMITCOMMANDTOHWQUEUE.$", 0x0, false, 0x53fd11c294c84f0 );                               
        SDK_FIXED_SIZE( submitcommandtohwqueue_t, 0x40 );                               
    };                                                                        
};
#include "magic/submitcommandtohwqueue_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::submitcommandtohwqueue_t, 0x40 );
