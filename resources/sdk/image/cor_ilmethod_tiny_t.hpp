#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cor_ilmethod_tiny_t.start.hpp"
namespace image
{
    // [struct IMAGE_COR_ILMETHOD_TINY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cor_ilmethod_tiny_t       
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                           
        _m00 uint8_t flags_code_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags_CodeSize
                                     
        SDK_MAGIC_PROPERTIES( "IMAGE_COR_ILMETHOD_TINY.$", 0x1, true, 0x907c914f8dba3e8 );                
        SDK_FIXED_SIZE( cor_ilmethod_tiny_t, 0x1 );                
    };                               
};
#include "magic/cor_ilmethod_tiny_t.end.hpp"
SDK_VERIFY( struct image::cor_ilmethod_tiny_t, 0x1 );
