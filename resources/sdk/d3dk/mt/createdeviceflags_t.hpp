#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/createdeviceflags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CREATEDEVICEFLAGS]
    // => WDK 10 (NV)
    //
    struct createdeviceflags_t           
    {                                    
        // WDK 10                        
        //                               
        _m00 uint1_t legacy_mode;          //{ +0x0000@0  } | .LegacyMode
        _m01 uint1_t request_v_sync;       //{ +0x0000@1  } | .RequestVSync
        _m02 uint1_t disable_gpu_timeout;  //{ +0x0000@2  } | .DisableGpuTimeout
                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CREATEDEVICEFLAGS.$", 0x0, false, 0x6b017960493ae9ec );                    
        SDK_FIXED_SIZE( createdeviceflags_t, 0x4 );                    
    };                                   
};
#include "magic/createdeviceflags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::createdeviceflags_t, 0x4 );
