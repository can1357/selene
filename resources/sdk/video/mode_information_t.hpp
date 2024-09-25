#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_information_t.start.hpp"
namespace video
{
    // [struct _VIDEO_MODE_INFORMATION]
    // => WDK 10 (NV)
    //
    struct mode_information_t                         
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 uint32_t length;                           //{ +0x0000    } | .Length
        _m01 uint32_t mode_index;                       //{ +0x0004    } | .ModeIndex
        _m02 uint32_t vis_screen_width;                 //{ +0x0008    } | .VisScreenWidth
        _m03 uint32_t vis_screen_height;                //{ +0x000c    } | .VisScreenHeight
        _m04 uint32_t screen_stride;                    //{ +0x0010    } | .ScreenStride
        _m05 uint32_t number_of_planes;                 //{ +0x0014    } | .NumberOfPlanes
        _m06 uint32_t bits_per_plane;                   //{ +0x0018    } | .BitsPerPlane
        _m07 uint32_t frequency;                        //{ +0x001c    } | .Frequency
        _m08 uint32_t x_millimeter;                     //{ +0x0020    } | .XMillimeter
        _m09 uint32_t y_millimeter;                     //{ +0x0024    } | .YMillimeter
        _m10 uint32_t number_red_bits;                  //{ +0x0028    } | .NumberRedBits
        _m11 uint32_t number_green_bits;                //{ +0x002c    } | .NumberGreenBits
        _m12 uint32_t number_blue_bits;                 //{ +0x0030    } | .NumberBlueBits
        _m13 uint32_t red_mask;                         //{ +0x0034    } | .RedMask
        _m14 uint32_t green_mask;                       //{ +0x0038    } | .GreenMask
        _m15 uint32_t blue_mask;                        //{ +0x003c    } | .BlueMask
        _m16 uint32_t attribute_flags;                  //{ +0x0040    } | .AttributeFlags
        _m17 uint32_t video_memory_bitmap_width;        //{ +0x0044    } | .VideoMemoryBitmapWidth
        _m18 uint32_t video_memory_bitmap_height;       //{ +0x0048    } | .VideoMemoryBitmapHeight
        _m19 uint32_t driver_specific_attribute_flags;  //{ +0x004c    } | .DriverSpecificAttributeFlags
                                                      
        SDK_NONVOL_PROPERTIES( "_VIDEO_MODE_INFORMATION.$", 0x0, false, 0xec7b737e3ce70964 );                                
        SDK_FIXED_SIZE( mode_information_t, 0x50 );                                
    };                                                
};
#include "magic/mode_information_t.end.hpp"
SDK_VERIFY( struct video::mode_information_t, 0x50 );
