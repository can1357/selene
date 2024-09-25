#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/displayid_detailed_timing_type_i_t.start.hpp"
namespace nt
{
    // [struct _DISPLAYID_DETAILED_TIMING_TYPE_I]
    // => WDK 10 (NV)
    //
    struct displayid_detailed_timing_type_i_t  
    {                                          
        // WDK 10                              
        //                                     
        _m00 uint24_t pixel_clock;               //{ +0x0000@0  } | .PixelClock
        _m01 uint3_t  aspect_ratio;              //{ +0x0000@24 } | .AspectRatio
        _m02 uint1_t  scanning_type;             //{ +0x0000@28 } | .ScanningType
        _m03 uint2_t  stereo_mode;               //{ +0x0000@29 } | .StereoMode
        _m04 uint1_t  preferred_timing;          //{ +0x0000@31 } | .PreferredTiming
        _m05 uint16_t horizontal_active_pixels;  //{ +0x0004    } | .HorizontalActivePixels
        _m06 uint16_t horizontal_blank_pixels;   //{ +0x0006    } | .HorizontalBlankPixels
        _m07 uint15_t horizontal_front_porch;    //{ +0x0008@0  } | .HorizontalFrontPorch
        _m08 uint1_t  horizontal_sync_polarity;  //{ +0x0008@15 } | .HorizontalSyncPolarity
        _m09 uint16_t horizontal_sync_width;     //{ +0x000a    } | .HorizontalSyncWidth
        _m10 uint16_t vertical_active_lines;     //{ +0x000c    } | .VerticalActiveLines
        _m11 uint16_t vertical_blank_lines;      //{ +0x000e    } | .VerticalBlankLines
        _m12 uint15_t vertical_front_porch;      //{ +0x0010@0  } | .VerticalFrontPorch
        _m13 uint1_t  vertical_sync_polarity;    //{ +0x0010@15 } | .VerticalSyncPolarity
        _m14 uint16_t vertical_sync_width;       //{ +0x0012    } | .VerticalSyncWidth
                                               
        SDK_NONVOL_PROPERTIES( "_DISPLAYID_DETAILED_TIMING_TYPE_I.$", 0x0, false, 0x7ee4e21a8cef9686 );                         
        SDK_FIXED_SIZE( displayid_detailed_timing_type_i_t, 0x14 );                         
    };                                         
};
#include "magic/displayid_detailed_timing_type_i_t.end.hpp"
SDK_VERIFY( struct nt::displayid_detailed_timing_type_i_t, 0x14 );
