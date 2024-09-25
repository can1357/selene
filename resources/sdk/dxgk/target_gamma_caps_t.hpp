#pragma once
#include <sdkgen/support_library.hpp>
#include "gamma_1dlut_cap_t.hpp"
#include "gamma_matrix_cap_t.hpp"
#include "target_gamma_caps_version_t.hpp"

#include "magic/target_gamma_caps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_TARGET_GAMMA_CAPS]
    // => WDK 10 (NV)
    //
    struct target_gamma_caps_t                                                 
    {                                                                          
        // WDK 10                                                              
        //                                                                     
        _m00 enum dxgk::target_gamma_caps_version_t version;                     //{ +0x0000    } | .Version
        _m01 struct dxgk::gamma_1dlut_cap_t         lookup_table1d_degamma_cap;  //{ +0x0004    } | .LookupTable1DDegammaCap
        _m02 struct dxgk::gamma_matrix_cap_t        color_matrix3x3_cap;         //{ +0x0018    } | .ColorMatrix3x3Cap
        _m03 struct dxgk::gamma_1dlut_cap_t         lookup_table1d_regamma_cap;  //{ +0x002c    } | .LookupTable1DRegammaCap
                                                                               
        SDK_NONVOL_PROPERTIES( "_DXGK_TARGET_GAMMA_CAPS.$", 0x0, false, 0xe67f2347a2238935 );                           
        SDK_FIXED_SIZE( target_gamma_caps_t, 0x40 );                           
    };                                                                         
};
#include "magic/target_gamma_caps_t.end.hpp"
SDK_VERIFY( struct dxgk::target_gamma_caps_t, 0x40 );
