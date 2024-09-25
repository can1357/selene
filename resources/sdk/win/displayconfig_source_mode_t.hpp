#pragma once
#include <sdkgen/support_library.hpp>
#include "pointl_t.hpp"
#include "displayconfig_pixelformat_t.hpp"

#include "magic/displayconfig_source_mode_t.start.hpp"
namespace win
{
    // [struct DISPLAYCONFIG_SOURCE_MODE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_source_mode_t                      
    {                                                       
        enum class u0_pixel_format_t : int32_t              
        {                                                   
            pixelformat_force_uint32 = -0x1,                  // WDK 10
            pixelformat_8bpp =         0x1,                   // WDK 10
            pixelformat_16bpp =        0x2,                   // WDK 10
            pixelformat_24bpp =        0x3,                   // WDK 10
            pixelformat_32bpp =        0x4,                   // WDK 10
            pixelformat_nongdi =       0x5,                   // WDK 10
        };                                                  
                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                  
        _m00 uint32_t                          width;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .width
        _m01 uint32_t                          height;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .height
        _m02 int32_t                           pixel_format;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .pixelFormat
        _m03 struct win::pointl_t              position;      //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .position
                                                            
        SDK_NONVOL_PROPERTIES( "DISPLAYCONFIG_SOURCE_MODE.$", 0x14, true, 0xb0b1a1ec7af0527f );             
        SDK_FIXED_SIZE( displayconfig_source_mode_t, 0x14 );             
    };                                                      
};
#include "magic/displayconfig_source_mode_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_source_mode_t, 0x14 );
