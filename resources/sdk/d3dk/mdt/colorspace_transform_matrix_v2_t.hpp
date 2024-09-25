#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/dxgi_rgb_t.hpp"
#include "colorspace_transform_stage_control_t.hpp"

#include "magic/colorspace_transform_matrix_v2_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_COLORSPACE_TRANSFORM_MATRIX_V2]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct colorspace_transform_matrix_v2_t                                                     
    {                                                                                           
        using d3dkmdt_colorspace_transform_stage_control_t = enum d3dk::mdt::colorspace_transform_stage_control_t;                                     
        using d3dkmdt_colorspace_transform_stage_control_t = enum d3dk::mdt::colorspace_transform_stage_control_t;                                     
        using d3dkmdt_colorspace_transform_stage_control_t = enum d3dk::mdt::colorspace_transform_stage_control_t;                                     
                                                                                                
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                      
        _m00 d3dkmdt_colorspace_transform_stage_control_t  stage_control_lookup_table1d_degamma;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StageControlLookupTable1DDegamma
        _m01 sdk::array<struct d3d::ddi::dxgi_rgb_t, 4096> lookup_table1d_degamma;                //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LookupTable1DDegamma
        _m02 d3dkmdt_colorspace_transform_stage_control_t  stage_control_color_matrix3x3;         //{ +0xc004    +0xc004    +0xc004    +0xc004    } | .StageControlColorMatrix3x3
        _m03 sdk::array<sdk::array<float, 3>, 3>           color_matrix3x3;                       //{ +0xc008    +0xc008    +0xc008    +0xc008    } | .ColorMatrix3x3
        _m04 d3dkmdt_colorspace_transform_stage_control_t  stage_control_lookup_table1d_regamma;  //{ +0xc02c    +0xc02c    +0xc02c    +0xc02c    } | .StageControlLookupTable1DRegamma
        _m05 sdk::array<struct d3d::ddi::dxgi_rgb_t, 4096> lookup_table1d_regamma;                //{ +0xc030    +0xc030    +0xc030    +0xc030    } | .LookupTable1DRegamma
                                                                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_COLORSPACE_TRANSFORM_MATRIX_V2.$", 0x18030, true, 0x5279eb9d79465c67 );                                     
        SDK_FIXED_SIZE( colorspace_transform_matrix_v2_t, 0x18030 );                                     
    };                                                                                          
};
#include "magic/colorspace_transform_matrix_v2_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::colorspace_transform_matrix_v2_t, 0x18030 );
