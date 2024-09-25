#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/qmatrix_data_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_QmatrixData]
    // => WDK 10 (NV)
    //
    struct qmatrix_data_t                                          
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 sdk::array<uint8_t, 4>                  b_new_qmatrix;  //{ +0x0000    } | .bNewQmatrix
        _m01 sdk::array<sdk::array<uint16_t, 64>, 4> qmatrix;        //{ +0x0004    } | .Qmatrix
                                                                   
        SDK_NONVOL_PROPERTIES( "_DXVA_QmatrixData.$", 0x0, false, 0x62dfe5d5a03f97ff );              
        SDK_FIXED_SIZE( qmatrix_data_t, 0x204 );                   
    };                                                             
};
#include "magic/qmatrix_data_t.end.hpp"
SDK_VERIFY( struct dxva::qmatrix_data_t, 0x204 );
