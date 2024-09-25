#pragma once
#include <sdkgen/support_library.hpp>
#include "cor_ilmethod_fat_t.hpp"
#include "cor_ilmethod_tiny_t.hpp"

#include "magic/cor_ilmethod_t.start.hpp"
namespace image
{
    // [union IMAGE_COR_ILMETHOD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union cor_ilmethod_t                            
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                          
        _m00 struct image::cor_ilmethod_tiny_t tiny;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Tiny
        _m01 struct image::cor_ilmethod_fat_t  fat;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Fat
                                                    
        SDK_MAGIC_PROPERTIES( "IMAGE_COR_ILMETHOD.$", 0xc, true, 0x583c119d04ab93cb );     
        SDK_FIXED_SIZE( cor_ilmethod_t, 0xc );      
    };                                              
};
#include "magic/cor_ilmethod_t.end.hpp"
SDK_VERIFY( union image::cor_ilmethod_t, 0xc );
