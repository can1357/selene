#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/coord_t.hpp"

#include "magic/font_image_info_t.start.hpp"
namespace nt
{
    // [struct _FONT_IMAGE_INFO]
    // => WDK 10 (NV)
    //
    struct font_image_info_t                
    {                                       
        // WDK 10                           
        //                                  
        _m00 struct win::coord_t font_size;   //{ +0x0000    } | .FontSize
        _m01 uint8_t*            image_bits;  //{ +0x0008    } | .ImageBits
                                            
        SDK_NONVOL_PROPERTIES( "_FONT_IMAGE_INFO.$", 0x0, false, 0x2e4859dddef16d19 );           
        SDK_FIXED_SIZE( font_image_info_t, 0x10 );           
    };                                      
};
#include "magic/font_image_info_t.end.hpp"
SDK_VERIFY( struct nt::font_image_info_t, 0x10 );
