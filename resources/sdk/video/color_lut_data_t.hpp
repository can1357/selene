#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/color_lut_data_t.start.hpp"
namespace video
{
    // [struct _VIDEO_COLOR_LUT_DATA]
    // => WDK 10 (NV)
    //
    struct color_lut_data_t                         
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint32_t               length;           //{ +0x0000    } | .Length
        _m01 uint32_t               lut_data_format;  //{ +0x0004    } | .LutDataFormat
        _m02 sdk::array<uint8_t, 1> lut_data;         //{ +0x0008    } | .LutData
                                                    
        SDK_NONVOL_PROPERTIES( "_VIDEO_COLOR_LUT_DATA.$", 0x0, false, 0x3019639978287102 );                
        SDK_FIXED_SIZE( color_lut_data_t, 0xc );                
    };                                              
};
#include "magic/color_lut_data_t.end.hpp"
SDK_VERIFY( struct video::color_lut_data_t, 0xc );
