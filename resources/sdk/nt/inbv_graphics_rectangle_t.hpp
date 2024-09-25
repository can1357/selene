#pragma once
#include <sdkgen/support_library.hpp>
#include "inbv_pixel_format_t.hpp"

#include "magic/inbv_graphics_rectangle_t.start.hpp"
namespace nt
{
    // [struct _INBV_GRAPHICS_RECTANGLE]
    // => Windows 11
    //
    struct inbv_graphics_rectangle_t                   
    {                                                  
        // Windows 11                                  
        //                                             
        _m00 uint32_t                     height;        //{ +0x0000    } | .Height
        _m01 uint32_t                     width;         //{ +0x0004    } | .Width
        _m02 enum nt::inbv_pixel_format_t pixel_format;  //{ +0x0008    } | .PixelFormat
        _m03 uint32_t                     size;          //{ +0x000c    } | .Size
        _m04 void*                        data;          //{ +0x0010    } | .Data
                                                       
        SDK_MAGIC_PROPERTIES( "_INBV_GRAPHICS_RECTANGLE.$", 0x0, false, 0x16e740376f66717e );             
        SDK_FIXED_SIZE( inbv_graphics_rectangle_t, 0x18 );             
    };                                                 
};
#include "magic/inbv_graphics_rectangle_t.end.hpp"
SDK_VERIFY( struct nt::inbv_graphics_rectangle_t, 0x18 );
