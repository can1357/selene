#pragma once
#include <sdkgen/support_library.hpp>
#include "font_image_info_t.hpp"
#include "../win/char_info_t.hpp"

#include "magic/char_image_info_t.start.hpp"
namespace nt
{
    // [struct _CHAR_IMAGE_INFO]
    // => WDK 10 (NV)
    //
    struct char_image_info_t                              
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 struct win::char_info_t      char_info;        //{ +0x0000    } | .CharInfo
        _m01 struct nt::font_image_info_t font_image_info;  //{ +0x0008    } | .FontImageInfo
                                                          
        SDK_NONVOL_PROPERTIES( "_CHAR_IMAGE_INFO.$", 0x0, false, 0x822c8253c1b0f13 );                
        SDK_FIXED_SIZE( char_image_info_t, 0x18 );                
    };                                                    
};
#include "magic/char_image_info_t.end.hpp"
SDK_VERIFY( struct nt::char_image_info_t, 0x18 );
