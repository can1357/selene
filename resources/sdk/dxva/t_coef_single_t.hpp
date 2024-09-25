#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/t_coef_single_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_TCoefSingle]
    // => WDK 10 (NV)
    //
    struct t_coef_single_t             
    {                                  
        // WDK 10                      
        //                             
        _m00 uint16_t w_index_with_eob;  //{ +0x0000    } | .wIndexWithEOB
        _m01 int16_t  t_coef_value;      //{ +0x0002    } | .TCoefValue
                                       
        SDK_NONVOL_PROPERTIES( "_DXVA_TCoefSingle.$", 0x0, false, 0x9fd47233b2bed3fa );                 
        SDK_FIXED_SIZE( t_coef_single_t, 0x4 );                 
    };                                 
};
#include "magic/t_coef_single_t.end.hpp"
SDK_VERIFY( struct dxva::t_coef_single_t, 0x4 );
