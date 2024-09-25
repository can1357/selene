#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/colortransformcaps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_COLORTRANSFORMCAPS]
    // => WDK 10 (NV)
    //
    struct colortransformcaps_t                       
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint1_t  gamma_rgb256x3x16;                //{ +0x0000@0  } | .Gamma_Rgb256x3x16
        _m01 uint1_t  gamma_dxgi1;                      //{ +0x0000@1  } | .Gamma_Dxgi1
        _m02 uint1_t  transform_3x4_matrix;             //{ +0x0000@2  } | .Transform_3x4Matrix
        _m03 uint1_t  transform_3x4_matrix_wide_color;  //{ +0x0000@3  } | .Transform_3x4Matrix_WideColor
        _m04 uint1_t  transform_3x4_matrix_high_color;  //{ +0x0000@4  } | .Transform_3x4Matrix_HighColor
        _m05 uint1_t  transform_matrix_v2;              //{ +0x0000@5  } | .Transform_Matrix_V2
        _m06 uint32_t value;                            //{ +0x0000    } | .Value
                                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_COLORTRANSFORMCAPS.$", 0x0, false, 0x985f0c193402e637 );                                
        SDK_FIXED_SIZE( colortransformcaps_t, 0x4 );                                
    };                                                
};
#include "magic/colortransformcaps_t.end.hpp"
SDK_VERIFY( struct dxgk::colortransformcaps_t, 0x4 );
