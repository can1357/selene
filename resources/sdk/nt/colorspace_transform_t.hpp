#pragma once
#include <sdkgen/support_library.hpp>
#include "gamma_ramp_dxgi_1_t.hpp"
#include "gamma_ramp_rgb256x3x16_t.hpp"
#include "colorspace_transform_3x4_t.hpp"
#include "colorspace_transform_type_t.hpp"
#include "colorspace_transform_matrix_v2_t.hpp"

#include "magic/colorspace_transform_t.start.hpp"
namespace nt
{
    // [struct _COLORSPACE_TRANSFORM]
    // => WDK 10 (NV)
    //
    struct colorspace_transform_t                                             
    {                                                                         
        union u0_data_t                                                       
        {                                                                     
            // WDK 10                                                         
            //                                                                
            _m01 struct nt::gamma_ramp_rgb256x3x16_t         rgb256x3x16;       //{ +0x0000    } | .Rgb256x3x16
            _m02 struct nt::gamma_ramp_dxgi_1_t              dxgi1;             //{ +0x0000    } | .Dxgi1
            _m03 struct nt::colorspace_transform_3x4_t       t3x4;              //{ +0x0000    } | .T3x4
            _m04 struct nt::colorspace_transform_matrix_v2_t matrix_v2;         //{ +0x0000    } | .MatrixV2
                                                                              
            SDK_NONVOL_PROPERTIES( "_COLORSPACE_TRANSFORM.Data.$", 0x0, false, 0xe2d8082418eb0002 );                 
            SDK_FIXED_SIZE( u0_data_t, 0x18030 );                             
        };                                                                    
                                                                              
        // WDK 10                                                             
        //                                                                    
        _m00 enum nt::colorspace_transform_type_t                        type;  //{ +0x0000    } | .Type
        _m05 u0_data_t                                                   data;  //{ +0x0004    } | .Data
                                                                              
        SDK_NONVOL_PROPERTIES( "_COLORSPACE_TRANSFORM.$", 0x0, false, 0xb1f2f2ba0f43ea8e );     
        SDK_FIXED_SIZE( colorspace_transform_t, 0x18034 );                    
    };                                                                        
};
#include "magic/colorspace_transform_t.end.hpp"
SDK_VERIFY( union nt::colorspace_transform_t::u0_data_t, 0x18030 );
SDK_VERIFY( struct nt::colorspace_transform_t, 0x18034 );
