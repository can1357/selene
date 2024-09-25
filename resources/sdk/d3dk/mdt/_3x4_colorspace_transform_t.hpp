#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/dxgi_rgb_t.hpp"

#include "magic/_3x4_colorspace_transform_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_3X4_COLORSPACE_TRANSFORM]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct _3x4_colorspace_transform_t                                       
    {                                                                        
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                   
        _m00 sdk::array<sdk::array<float, 4>, 3>           color_matrix3x4;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ColorMatrix3x4
        _m01 float                                         scalar_multiplier;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ScalarMultiplier
        _m02 sdk::array<struct d3d::ddi::dxgi_rgb_t, 4096> lookup_table1d;     //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .LookupTable1D
                                                                             
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_3X4_COLORSPACE_TRANSFORM.$", 0xc034, true, 0x284be6926553fcb8 );                  
        SDK_FIXED_SIZE( _3x4_colorspace_transform_t, 0xc034 );                  
    };                                                                       
};
#include "magic/_3x4_colorspace_transform_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::_3x4_colorspace_transform_t, 0xc034 );
