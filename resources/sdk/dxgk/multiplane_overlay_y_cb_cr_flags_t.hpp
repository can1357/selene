#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/multiplane_overlay_y_cb_cr_flags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_MULTIPLANE_OVERLAY_YCbCr_FLAGS]
    // => WDK 10 (NV)
    //
    struct multiplane_overlay_y_cb_cr_flags_t
    {                                        
        // WDK 10                   
        //                          
        _m00 uint1_t  nominal_range;           //{ +0x0000@0  } | .NominalRange
        _m01 uint1_t  bt709;                   //{ +0x0000@1  } | .Bt709
        _m02 uint1_t  xv_ycc;                  //{ +0x0000@2  } | .xvYCC
        _m03 uint32_t value;                   //{ +0x0000    } | .Value
                                             
        SDK_NONVOL_PROPERTIES( "_DXGK_MULTIPLANE_OVERLAY_YCbCr_FLAGS.$", 0x0, false, 0x20b182baf25095e1 );              
        SDK_FIXED_SIZE( multiplane_overlay_y_cb_cr_flags_t, 0x4 );              
    };                                       
};
#include "magic/multiplane_overlay_y_cb_cr_flags_t.end.hpp"
SDK_VERIFY( struct dxgk::multiplane_overlay_y_cb_cr_flags_t, 0x4 );
