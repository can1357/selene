#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_INTERRUPT_TYPE]
    //  WDK 10
    //
    enum class interrupt_type_t : int32_t             
    {                                                 
        dma_completed =                       0x1,      // WDK 10
        dma_preempted =                       0x2,      // WDK 10
        crtc_vsync =                          0x3,      // WDK 10
        dma_faulted =                         0x4,      // WDK 10
        displayonly_vsync =                   0x5,      // WDK 10
        displayonly_present_progress =        0x6,      // WDK 10
        crtc_vsync_with_multiplane_overlay =  0x7,      // WDK 10
        micacast_chunk_processing_complete =  0x8,      // WDK 10
        dma_page_faulted =                    0x9,      // WDK 10
        crtc_vsync_with_multiplane_overlay2 = 0xa,      // WDK 10
        monitored_fence_signaled =            0xb,      // WDK 10
        hwqueue_page_faulted =                0xc,      // WDK 10
        hwcontextlist_switch_completed =      0xd,      // WDK 10
        periodic_monitored_fence_signaled =   0xe,      // WDK 10
        scheduling_log_interrupt =            0xf,      // WDK 10
        gpu_engine_timeout =                  0x10,     // WDK 10
        suspend_context_completed =           0x11,     // WDK 10
    };                                                
};
