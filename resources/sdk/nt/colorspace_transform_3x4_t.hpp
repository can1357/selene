#pragma once
#include <sdkgen/support_library.hpp>
#include "gamma_ramp_rgb_t.hpp"

#include "magic/colorspace_transform_3x4_t.start.hpp"
namespace nt
{
    // [struct _COLORSPACE_TRANSFORM_3x4]
    // => WDK 10 (NV)
    //
    struct colorspace_transform_3x4_t                                        
    {                                                                        
        // WDK 10                                                            
        //                                                                   
        _m00 sdk::array<sdk::array<float, 4>, 3>           color_matrix3x4;    //{ +0x0000    } | .ColorMatrix3x4
        _m01 float                                         scalar_multiplier;  //{ +0x0030    } | .ScalarMultiplier
        _m02 sdk::array<struct nt::gamma_ramp_rgb_t, 4096> lookup_table1d;     //{ +0x0034    } | .LookupTable1D
                                                                             
        SDK_NONVOL_PROPERTIES( "_COLORSPACE_TRANSFORM_3x4.$", 0x0, false, 0x2d7a4d90b52f99c0 );                  
        SDK_FIXED_SIZE( colorspace_transform_3x4_t, 0xc034 );                  
    };                                                                       
};
#include "magic/colorspace_transform_3x4_t.end.hpp"
SDK_VERIFY( struct nt::colorspace_transform_3x4_t, 0xc034 );
