#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/gammaramp_type_t.hpp"

namespace d3d::ddi { struct gamma_ramp_dxgi_1_t;      }
namespace d3d::ddi { struct gamma_ramp_rgb256x3x16_t; }

#include "magic/gamma_ramp_t.start.hpp"
namespace d3dk::mdt
{
    struct _3x4_colorspace_transform_t;
    struct colorspace_transform_matrix_v2_t;

    // [struct _D3DKMDT_GAMMA_RAMP]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct gamma_ramp_t                                                                 
    {                                                                                   
        union u0_data_t                                                                 
        {                                                                               
            using p_matrix_v2_t = struct d3dk::mdt::colorspace_transform_matrix_v2_t*;                        
                                                                                        
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
            //                                                                          
            _m02 struct d3d::ddi::gamma_ramp_rgb256x3x16_t*     p_rgb256x3x16;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .pRgb256x3x16
            _m03 struct d3d::ddi::gamma_ramp_dxgi_1_t*          p_dxgi1;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .pDxgi1
            _m04 void*                                          p_raw;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .pRaw
                                                                                        
            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
            //                                                                          
            _m05 struct d3dk::mdt::_3x4_colorspace_transform_t* p3x4;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .p3x4
            _m06 p_matrix_v2_t                                  p_matrix_v2;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pMatrixV2
                                                                                        
            SDK_NONVOL_PROPERTIES( "_D3DKMDT_GAMMA_RAMP.Data.$", 0x8, true, 0x7aee69ef1c6cbc09 );                        
            SDK_FIXED_SIZE( u0_data_t, 0x8 );                                           
        };                                                                              
                                                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                                              
        _m00 enum d3d::ddi::gammaramp_type_t                                  type;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint64_t                                                         data_size;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DataSize
        _m07 u0_data_t                                                        data;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Data
                                                                                        
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_GAMMA_RAMP.$", 0x18, true, 0x35287641c769ad3e );          
        SDK_FIXED_SIZE( gamma_ramp_t, 0x18 );                                           
    };                                                                                  
};
#include "magic/gamma_ramp_t.end.hpp"
SDK_VERIFY( union d3dk::mdt::gamma_ramp_t::u0_data_t, 0x8 );
SDK_VERIFY( struct d3dk::mdt::gamma_ramp_t, 0x18 );
