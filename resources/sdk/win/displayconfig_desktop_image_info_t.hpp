#pragma once
#include <sdkgen/support_library.hpp>
#include "rectl_t.hpp"
#include "pointl_t.hpp"

#include "magic/displayconfig_desktop_image_info_t.start.hpp"
namespace win
{
    // [struct DISPLAYCONFIG_DESKTOP_IMAGE_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_desktop_image_info_t          
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                             
        _m00 struct win::pointl_t path_source_size;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PathSourceSize
        _m01 struct win::rectl_t  desktop_image_region;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DesktopImageRegion
        _m02 struct win::rectl_t  desktop_image_clip;    //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .DesktopImageClip
                                                       
        SDK_NONVOL_PROPERTIES( "DISPLAYCONFIG_DESKTOP_IMAGE_INFO.$", 0x28, true, 0xf3a4387764037de1 );                     
        SDK_FIXED_SIZE( displayconfig_desktop_image_info_t, 0x28 );                     
    };                                                 
};
#include "magic/displayconfig_desktop_image_info_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_desktop_image_info_t, 0x28 );
