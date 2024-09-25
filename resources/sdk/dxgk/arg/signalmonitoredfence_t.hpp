#pragma once
#include <sdkgen/support_library.hpp>
#include "../kernel_submission_type_t.hpp"

#include "magic/signalmonitoredfence_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SIGNALMONITOREDFENCE]
    // => WDK 10 (NV)
    //
    struct signalmonitoredfence_t                                               
    {                                                                           
        // WDK 10                                                               
        //                                                                      
        _m00 enum dxgk::kernel_submission_type_t kernel_submission_type;          //{ +0x0000    } | .KernelSubmissionType
        _m01 void*                               p_dma_buffer;                    //{ +0x0008    } | .pDmaBuffer
        _m02 uint64_t                            dma_buffer_gpu_virtual_address;  //{ +0x0010    } | .DmaBufferGpuVirtualAddress
        _m03 uint32_t                            dma_size;                        //{ +0x0018    } | .DmaSize
        _m04 void*                               p_dma_buffer_private_data;       //{ +0x0020    } | .pDmaBufferPrivateData
        _m05 uint32_t                            dma_buffer_private_data_size;    //{ +0x0028    } | .DmaBufferPrivateDataSize
        _m06 uint32_t                            multipass_offset;                //{ +0x002c    } | .MultipassOffset
        _m07 uint64_t                            monitored_fence_gpu_va;          //{ +0x0030    } | .MonitoredFenceGpuVa
        _m08 uint64_t                            monitored_fence_value;           //{ +0x0038    } | .MonitoredFenceValue
        _m09 void*                               monitored_fence_cpu_va;          //{ +0x0040    } | .MonitoredFenceCpuVa
        _m10 void*                               h_hw_queue;                      //{ +0x0048    } | .hHwQueue
                                                                                
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SIGNALMONITOREDFENCE.$", 0x0, false, 0x1b079c7f2c353d9e );                               
        SDK_FIXED_SIZE( signalmonitoredfence_t, 0x50 );                               
    };                                                                          
};
#include "magic/signalmonitoredfence_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::signalmonitoredfence_t, 0x50 );
