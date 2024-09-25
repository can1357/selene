#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vidpnsourceowner_flags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS]
    // => WDK 10 (NV)
    //
    struct vidpnsourceowner_flags_t            
    {                                          
        // WDK 10                              
        //                                     
        _m00 uint1_t  allow_output_duplication;  //{ +0x0000@0  } | .AllowOutputDuplication
        _m01 uint1_t  disable_dwm_virtual_mode;  //{ +0x0000@1  } | .DisableDWMVirtualMode
        _m02 uint1_t  use_nt_handles;            //{ +0x0000@2  } | .UseNtHandles
        _m03 uint32_t value;                     //{ +0x0000    } | .Value
                                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_VIDPNSOURCEOWNER_FLAGS.$", 0x0, false, 0x55f3bdbff33ac932 );                         
        SDK_FIXED_SIZE( vidpnsourceowner_flags_t, 0x4 );                         
    };                                         
};
#include "magic/vidpnsourceowner_flags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::vidpnsourceowner_flags_t, 0x4 );
