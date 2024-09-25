#pragma once
#include <sdkgen/support_library.hpp>
#include "cor_ilmethod_sect_eh_fat_t.hpp"
#include "cor_ilmethod_sect_eh_small_t.hpp"

#include "magic/cor_ilmethod_sect_eh_t.start.hpp"
namespace image
{
    // [union IMAGE_COR_ILMETHOD_SECT_EH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union cor_ilmethod_sect_eh_t                              
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                                    
        _m00 struct image::cor_ilmethod_sect_eh_small_t small;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Small
        _m01 struct image::cor_ilmethod_sect_eh_fat_t   fat;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Fat
                                                              
        SDK_MAGIC_PROPERTIES( "IMAGE_COR_ILMETHOD_SECT_EH.$", 0x1c, true, 0x819458a087e7240b );      
        SDK_FIXED_SIZE( cor_ilmethod_sect_eh_t, 0x1c );       
    };                                                        
};
#include "magic/cor_ilmethod_sect_eh_t.end.hpp"
SDK_VERIFY( union image::cor_ilmethod_sect_eh_t, 0x1c );
