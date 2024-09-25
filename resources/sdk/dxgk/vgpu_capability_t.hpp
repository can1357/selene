#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vgpu_capability_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_VGPU_CAPABILITY]
    // => WDK 10 (NV)
    //
    struct vgpu_capability_t        
    {                               
        // WDK 10                   
        //                          
        _m00 uint64_t min_value;      //{ +0x0000    } | .MinValue
        _m01 uint64_t max_value;      //{ +0x0008    } | .MaxValue
        _m02 uint64_t current_value;  //{ +0x0010    } | .CurrentValue
                                    
        SDK_NONVOL_PROPERTIES( "_DXGK_VGPU_CAPABILITY.$", 0x0, false, 0x2c93f4a7f2db699e );              
        SDK_FIXED_SIZE( vgpu_capability_t, 0x18 );              
    };                              
};
#include "magic/vgpu_capability_t.end.hpp"
SDK_VERIFY( struct dxgk::vgpu_capability_t, 0x18 );
