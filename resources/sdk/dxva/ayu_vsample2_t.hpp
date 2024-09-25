#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ayu_vsample2_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_AYUVsample2]
    // => WDK 10 (NV)
    //
    struct ayu_vsample2_t            
    {                                
        // WDK 10                    
        //                           
        _m00 uint8_t b_cr_value;       //{ +0x0000    } | .bCrValue
        _m01 uint8_t b_cb_value;       //{ +0x0001    } | .bCbValue
        _m02 uint8_t b_y_value;        //{ +0x0002    } | .bY_Value
        _m03 uint8_t b_sample_alpha8;  //{ +0x0003    } | .bSampleAlpha8
                                     
        SDK_NONVOL_PROPERTIES( "_DXVA_AYUVsample2.$", 0x0, false, 0x4897a0656ca649e3 );                
        SDK_FIXED_SIZE( ayu_vsample2_t, 0x4 );                
    };                               
};
#include "magic/ayu_vsample2_t.end.hpp"
SDK_VERIFY( struct dxva::ayu_vsample2_t, 0x4 );
