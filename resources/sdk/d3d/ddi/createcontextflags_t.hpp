#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/createcontextflags_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_CREATECONTEXTFLAGS]
    // => WDK 10 (NV)
    //
    struct createcontextflags_t            
    {                                      
        // WDK 10                          
        //                                 
        _m00 uint1_t  null_rendering;        //{ +0x0000@0  } | .NullRendering
        _m01 uint1_t  initial_data;          //{ +0x0000@1  } | .InitialData
        _m02 uint1_t  disable_gpu_timeout;   //{ +0x0000@2  } | .DisableGpuTimeout
        _m03 uint1_t  synchronization_only;  //{ +0x0000@3  } | .SynchronizationOnly
        _m04 uint1_t  hw_queue_supported;    //{ +0x0000@4  } | .HwQueueSupported
        _m05 uint32_t value;                 //{ +0x0000    } | .Value
                                           
        SDK_NONVOL_PROPERTIES( "_D3DDDI_CREATECONTEXTFLAGS.$", 0x0, false, 0x33689457b0bde2ba );                     
        SDK_FIXED_SIZE( createcontextflags_t, 0x4 );                     
    };                                     
};
#include "magic/createcontextflags_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::createcontextflags_t, 0x4 );
