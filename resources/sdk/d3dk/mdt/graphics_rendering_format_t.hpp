#pragma once
#include <sdkgen/support_library.hpp>
#include "_2dregion_t.hpp"
#include "color_basis_t.hpp"
#include "pixel_value_access_mode_t.hpp"
#include "../../kuser/d3dddiformat_t.hpp"

#include "magic/graphics_rendering_format_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct graphics_rendering_format_t                                         
    {                                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                     
        _m00 struct d3dk::mdt::_2dregion_t             prim_surf_size;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PrimSurfSize
        _m01 struct d3dk::mdt::_2dregion_t             visible_region_size;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .VisibleRegionSize
        _m02 uint32_t                                  stride;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Stride
        _m03 enum kuser::d3dddiformat_t                pixel_format;             //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .PixelFormat
        _m04 enum d3dk::mdt::color_basis_t             color_basis;              //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ColorBasis
        _m05 enum d3dk::mdt::pixel_value_access_mode_t pixel_value_access_mode;  //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .PixelValueAccessMode
                                                                               
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_GRAPHICS_RENDERING_FORMAT.$", 0x20, true, 0xc3a95e95a788d951 );                        
        SDK_FIXED_SIZE( graphics_rendering_format_t, 0x20 );                        
    };                                                                         
};
#include "magic/graphics_rendering_format_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::graphics_rendering_format_t, 0x20 );
