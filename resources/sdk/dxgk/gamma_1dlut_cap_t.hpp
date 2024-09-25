#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/dkgk_gamma_data_cap_t.hpp"

#include "magic/gamma_1dlut_cap_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_GAMMA_1DLUT_CAP]
    // => WDK 10 (NV)
    //
    struct gamma_1dlut_cap_t                                        
    {                                                               
        // WDK 10                                                   
        //                                                          
        _m00 uint32_t                         number_of_lut_entries;  //{ +0x0000    } | .NumberOfLUTEntries
        _m01 struct nt::dkgk_gamma_data_cap_t gamma_data_cap;         //{ +0x0004    } | .GammaDataCap
                                                                    
        SDK_NONVOL_PROPERTIES( "_DXGK_GAMMA_1DLUT_CAP.$", 0x0, false, 0x977b41bce671a154 );                      
        SDK_FIXED_SIZE( gamma_1dlut_cap_t, 0x14 );                      
    };                                                              
};
#include "magic/gamma_1dlut_cap_t.end.hpp"
SDK_VERIFY( struct dxgk::gamma_1dlut_cap_t, 0x14 );
