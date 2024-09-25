#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/load_font_information_t.start.hpp"
namespace video
{
    // [struct _VIDEO_LOAD_FONT_INFORMATION]
    // => WDK 10 (NV)
    //
    struct load_font_information_t                   
    {                                                
        // WDK 10                                    
        //                                           
        _m00 uint16_t               width_in_pixels;   //{ +0x0000    } | .WidthInPixels
        _m01 uint16_t               height_in_pixels;  //{ +0x0002    } | .HeightInPixels
        _m02 uint32_t               font_size;         //{ +0x0004    } | .FontSize
        _m03 sdk::array<uint8_t, 1> font;              //{ +0x0008    } | .Font
                                                     
        SDK_NONVOL_PROPERTIES( "_VIDEO_LOAD_FONT_INFORMATION.$", 0x0, false, 0xa5f41d4bfc60adb7 );                 
        SDK_FIXED_SIZE( load_font_information_t, 0xc );                 
    };                                               
};
#include "magic/load_font_information_t.end.hpp"
SDK_VERIFY( struct video::load_font_information_t, 0xc );
