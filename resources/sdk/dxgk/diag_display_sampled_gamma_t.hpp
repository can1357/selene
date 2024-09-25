#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/diag_display_sampled_gamma_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DIAG_DISPLAY_SAMPLED_GAMMA]
    // => WDK 10 (NV)
    //
    struct diag_display_sampled_gamma_t                       
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 sdk::array<float, 16>               red;           //{ +0x0000    } | .Red
        _m01 sdk::array<float, 16>               green;         //{ +0x0040    } | .Green
        _m02 sdk::array<float, 16>               blue;          //{ +0x0080    } | .Blue
        _m03 sdk::array<sdk::array<float, 3>, 3> color_matrix;  //{ +0x00c0    } | .ColorMatrix
                                                              
        SDK_NONVOL_PROPERTIES( "_DXGK_DIAG_DISPLAY_SAMPLED_GAMMA.$", 0x0, false, 0xc437cac41c3a4410 );             
        SDK_FIXED_SIZE( diag_display_sampled_gamma_t, 0xe4 );             
    };                                                        
};
#include "magic/diag_display_sampled_gamma_t.end.hpp"
SDK_VERIFY( struct dxgk::diag_display_sampled_gamma_t, 0xe4 );
