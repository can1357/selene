#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/buildpagingbuffer_signalmonitoredfence_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_BUILDPAGINGBUFFER_SIGNALMONITOREDFENCE]
    // => WDK 10 (NV)
    //
    struct buildpagingbuffer_signalmonitoredfence_t
    {                                              
        // WDK 10                            
        //                                   
        _m00 uint64_t monitored_fence_gpu_va;        //{ +0x0000    } | .MonitoredFenceGpuVa
        _m01 uint64_t monitored_fence_value;         //{ +0x0008    } | .MonitoredFenceValue
                                                   
        SDK_NONVOL_PROPERTIES( "_DXGK_BUILDPAGINGBUFFER_SIGNALMONITOREDFENCE.$", 0x0, false, 0x8644d144e52d2cf0 );                       
        SDK_FIXED_SIZE( buildpagingbuffer_signalmonitoredfence_t, 0x10 );                       
    };                                             
};
#include "magic/buildpagingbuffer_signalmonitoredfence_t.end.hpp"
SDK_VERIFY( struct dxgk::buildpagingbuffer_signalmonitoredfence_t, 0x10 );
