#pragma once
#include <sdkgen/support_library.hpp>
#include "system_pixel_format_t.hpp"

#include "magic/system_boot_graphics_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_BOOT_GRAPHICS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_boot_graphics_information_t                 
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                    
        _m00 int64_t                         frame_buffer;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FrameBuffer
        _m01 uint32_t                        width;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Width
        _m02 uint32_t                        height;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Height
        _m03 uint32_t                        pixel_stride;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PixelStride
        _m04 uint32_t                        flags;             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Flags
        _m05 enum win::system_pixel_format_t format;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Format
        _m06 uint32_t                        display_rotation;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .DisplayRotation
                                                              
        SDK_MAGIC_PROPERTIES( "_SYSTEM_BOOT_GRAPHICS_INFORMATION.$", 0x20, true, 0x305fa56485824099 );                 
        SDK_FIXED_SIZE( system_boot_graphics_information_t, 0x20 );                 
    };                                                        
};
#include "magic/system_boot_graphics_information_t.end.hpp"
SDK_VERIFY( struct win::system_boot_graphics_information_t, 0x20 );
