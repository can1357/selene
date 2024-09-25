#pragma once
#include <sdkgen/support_library.hpp>
#include "inbv_pixel_format_t.hpp"

#include "magic/inbv_mode_information_t.start.hpp"
namespace nt
{
    // [struct _INBV_MODE_INFORMATION]
    // => Windows 11
    //
    struct inbv_mode_information_t                     
    {                                                  
        // Windows 11                                  
        //                                             
        _m00 uint32_t                     height;        //{ +0x0000    } | .Height
        _m01 uint32_t                     width;         //{ +0x0004    } | .Width
        _m02 uint32_t                     stride;        //{ +0x0008    } | .Stride
        _m03 enum nt::inbv_pixel_format_t pixel_format;  //{ +0x000c    } | .PixelFormat
                                                       
        SDK_MAGIC_PROPERTIES( "_INBV_MODE_INFORMATION.$", 0x0, false, 0x2738258312fbbbf2 );             
        SDK_FIXED_SIZE( inbv_mode_information_t, 0x10 );             
    };                                                 
};
#include "magic/inbv_mode_information_t.end.hpp"
SDK_VERIFY( struct nt::inbv_mode_information_t, 0x10 );
