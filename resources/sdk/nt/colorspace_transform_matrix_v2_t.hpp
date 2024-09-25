#pragma once
#include <sdkgen/support_library.hpp>
#include "gamma_ramp_rgb_t.hpp"
#include "colorspace_transform_stage_control_t.hpp"

#include "magic/colorspace_transform_matrix_v2_t.start.hpp"
namespace nt
{
    // [struct _COLORSPACE_TRANSFORM_MATRIX_V2]
    // => WDK 10 (NV)
    //
    struct colorspace_transform_matrix_v2_t                                                     
    {                                                                                           
        // WDK 10                                                                               
        //                                                                                      
        _m00 enum nt::colorspace_transform_stage_control_t stage_control_lookup_table1d_degamma;  //{ +0x0000    } | .StageControlLookupTable1DDegamma
        _m01 sdk::array<struct nt::gamma_ramp_rgb_t, 4096> lookup_table1d_degamma;                //{ +0x0004    } | .LookupTable1DDegamma
        _m02 enum nt::colorspace_transform_stage_control_t stage_control_color_matrix3x3;         //{ +0xc004    } | .StageControlColorMatrix3x3
        _m03 sdk::array<sdk::array<float, 3>, 3>           color_matrix3x3;                       //{ +0xc008    } | .ColorMatrix3x3
        _m04 enum nt::colorspace_transform_stage_control_t stage_control_lookup_table1d_regamma;  //{ +0xc02c    } | .StageControlLookupTable1DRegamma
        _m05 sdk::array<struct nt::gamma_ramp_rgb_t, 4096> lookup_table1d_regamma;                //{ +0xc030    } | .LookupTable1DRegamma
                                                                                                
        SDK_NONVOL_PROPERTIES( "_COLORSPACE_TRANSFORM_MATRIX_V2.$", 0x0, false, 0x9a4ce33e26dc67bb );                                     
        SDK_FIXED_SIZE( colorspace_transform_matrix_v2_t, 0x18030 );                                     
    };                                                                                          
};
#include "magic/colorspace_transform_matrix_v2_t.end.hpp"
SDK_VERIFY( struct nt::colorspace_transform_matrix_v2_t, 0x18030 );
