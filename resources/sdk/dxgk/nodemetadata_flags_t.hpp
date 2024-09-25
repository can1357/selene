#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nodemetadata_flags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_NODEMETADATA_FLAGS]
    // => WDK 10 (NV)
    //
    struct nodemetadata_flags_t                      
    {                                                
        // WDK 10                                    
        //                                           
        _m00 uint1_t  context_scheduling_supported;    //{ +0x0000@0  } | .ContextSchedulingSupported
        _m01 uint1_t  ring_buffer_fence_release;       //{ +0x0000@1  } | .RingBufferFenceRelease
        _m02 uint1_t  support_tracked_workload;        //{ +0x0000@2  } | .SupportTrackedWorkload
        _m03 uint16_t max_in_flight_hw_queue_buffers;  //{ +0x0000@16 } | .MaxInFlightHwQueueBuffers
        _m04 uint32_t value;                           //{ +0x0000    } | .Value
                                                     
        SDK_NONVOL_PROPERTIES( "_DXGK_NODEMETADATA_FLAGS.$", 0x0, false, 0x1baa7e58f06e2341 );                               
        SDK_FIXED_SIZE( nodemetadata_flags_t, 0x4 );                               
    };                                               
};
#include "magic/nodemetadata_flags_t.end.hpp"
SDK_VERIFY( struct dxgk::nodemetadata_flags_t, 0x4 );
