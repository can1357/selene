#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cor_ilmethod_sect_small_t.start.hpp"
namespace image
{
    // [struct IMAGE_COR_ILMETHOD_SECT_SMALL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cor_ilmethod_sect_small_t
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                     
        _m00 uint8_t kind;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Kind
        _m01 uint8_t data_size;       //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .DataSize
                                    
        SDK_MAGIC_PROPERTIES( "IMAGE_COR_ILMETHOD_SECT_SMALL.$", 0x2, true, 0x9484ac001a19c18b );          
        SDK_FIXED_SIZE( cor_ilmethod_sect_small_t, 0x2 );          
    };                              
};
#include "magic/cor_ilmethod_sect_small_t.end.hpp"
SDK_VERIFY( struct image::cor_ilmethod_sect_small_t, 0x2 );
