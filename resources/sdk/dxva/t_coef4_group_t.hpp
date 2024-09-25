#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/t_coef4_group_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_TCoef4Group]
    // => WDK 10 (NV)
    //
    struct t_coef4_group_t                       
    {                                            
        // WDK 10                                
        //                                       
        _m00 sdk::array<uint8_t, 4> t_coef_idx;    //{ +0x0000    } | .TCoefIDX
        _m01 sdk::array<int16_t, 4> t_coef_value;  //{ +0x0004    } | .TCoefValue
                                                 
        SDK_NONVOL_PROPERTIES( "_DXVA_TCoef4Group.$", 0x0, false, 0x6d2d2004585cd25e );             
        SDK_FIXED_SIZE( t_coef4_group_t, 0xc );             
    };                                           
};
#include "magic/t_coef4_group_t.end.hpp"
SDK_VERIFY( struct dxva::t_coef4_group_t, 0xc );
