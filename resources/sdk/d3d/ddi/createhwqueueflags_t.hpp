#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/createhwqueueflags_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_CREATEHWQUEUEFLAGS]
    // => WDK 10 (NV)
    //
    struct createhwqueueflags_t           
    {                                     
        // WDK 10                         
        //                                
        _m00 uint1_t  disable_gpu_timeout;  //{ +0x0000@0  } | .DisableGpuTimeout
        _m01 uint1_t  no_broadcast_signal;  //{ +0x0000@1  } | .NoBroadcastSignal
        _m02 uint1_t  no_broadcast_wait;    //{ +0x0000@2  } | .NoBroadcastWait
        _m03 uint32_t value;                //{ +0x0000    } | .Value
                                          
        SDK_NONVOL_PROPERTIES( "_D3DDDI_CREATEHWQUEUEFLAGS.$", 0x0, false, 0x61cb63e571f15f13 );                    
        SDK_FIXED_SIZE( createhwqueueflags_t, 0x4 );                    
    };                                    
};
#include "magic/createhwqueueflags_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::createhwqueueflags_t, 0x4 );
