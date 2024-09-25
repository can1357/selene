#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ddi_present_flags_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_DDI_PRESENT_FLAGS]
    // => WDK 10 (NV)
    //
    struct ddi_present_flags_t               
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint1_t  blt;                     //{ +0x0000@0  } | .Blt
        _m01 uint1_t  flip;                    //{ +0x0000@1  } | .Flip
        _m02 uint1_t  prefer_right;            //{ +0x0000@2  } | .PreferRight
        _m03 uint1_t  temporary_mono;          //{ +0x0000@3  } | .TemporaryMono
        _m04 uint1_t  allow_tearing;           //{ +0x0000@4  } | .AllowTearing
        _m05 uint1_t  allow_flexible_refresh;  //{ +0x0000@5  } | .AllowFlexibleRefresh
        _m06 uint1_t  no_scanout_transform;    //{ +0x0000@6  } | .NoScanoutTransform
        _m07 uint32_t value;                   //{ +0x0000    } | .Value
                                             
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_PRESENT_FLAGS.$", 0x0, false, 0x1d0d99dcb752bf74 );                       
        SDK_FIXED_SIZE( ddi_present_flags_t, 0x4 );                       
    };                                       
};
#include "magic/ddi_present_flags_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_present_flags_t, 0x4 );
