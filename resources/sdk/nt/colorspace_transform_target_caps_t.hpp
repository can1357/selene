#pragma once
#include <sdkgen/support_library.hpp>
#include "colorspace_transform_1dlut_cap_t.hpp"
#include "colorspace_transform_matrix_cap_t.hpp"
#include "colorspace_transform_target_caps_version_t.hpp"

#include "magic/colorspace_transform_target_caps_t.start.hpp"
namespace nt
{
    // [struct _COLORSPACE_TRANSFORM_TARGET_CAPS]
    // => WDK 10 (NV)
    //
    struct colorspace_transform_target_caps_t                                        
    {                                                                                
        using version_t = enum nt::colorspace_transform_target_caps_version_t;                           
                                                                                     
        // WDK 10                                                                    
        //                                                                           
        _m00 version_t                                    version;                     //{ +0x0000    } | .Version
        _m01 struct nt::colorspace_transform_1dlut_cap_t  lookup_table1d_degamma_cap;  //{ +0x0004    } | .LookupTable1DDegammaCap
        _m02 struct nt::colorspace_transform_matrix_cap_t color_matrix3x3_cap;         //{ +0x0018    } | .ColorMatrix3x3Cap
        _m03 struct nt::colorspace_transform_1dlut_cap_t  lookup_table1d_regamma_cap;  //{ +0x002c    } | .LookupTable1DRegammaCap
                                                                                     
        SDK_NONVOL_PROPERTIES( "_COLORSPACE_TRANSFORM_TARGET_CAPS.$", 0x0, false, 0xf31ba9c1fec07761 );                           
        SDK_FIXED_SIZE( colorspace_transform_target_caps_t, 0x40 );                           
    };                                                                               
};
#include "magic/colorspace_transform_target_caps_t.end.hpp"
SDK_VERIFY( struct nt::colorspace_transform_target_caps_t, 0x40 );
