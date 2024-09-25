#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/dkgk_gamma_data_cap_t.hpp"

#include "magic/gamma_matrix_cap_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_GAMMA_MATRIX_CAP]
    // => WDK 10 (NV)
    //
    struct gamma_matrix_cap_t                                
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 uint10_t                         matrix_size_x;   //{ +0x0000@0  } | .MatrixSizeX
        _m01 uint10_t                         matrix_size_y;   //{ +0x0000@10 } | .MatrixSizeY
        _m02 uint32_t                         value;           //{ +0x0000    } | .Value
        _m03 struct nt::dkgk_gamma_data_cap_t gamma_data_cap;  //{ +0x0004    } | .GammaDataCap
                                                             
        SDK_NONVOL_PROPERTIES( "_DXGK_GAMMA_MATRIX_CAP.$", 0x0, false, 0x108becf4b78c4c11 );               
        SDK_FIXED_SIZE( gamma_matrix_cap_t, 0x14 );               
    };                                                       
};
#include "magic/gamma_matrix_cap_t.end.hpp"
SDK_VERIFY( struct dxgk::gamma_matrix_cap_t, 0x14 );
