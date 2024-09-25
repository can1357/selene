#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cor_vtablefixup_t.start.hpp"
namespace image
{
    // [struct IMAGE_COR_VTABLEFIXUP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cor_vtablefixup_t
    {                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t rva;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RVA
        _m01 uint16_t count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Count
        _m02 uint16_t type;   //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Type
                            
        SDK_MAGIC_PROPERTIES( "IMAGE_COR_VTABLEFIXUP.$", 0x8, true, 0x50062eca8b574acc );      
        SDK_FIXED_SIZE( cor_vtablefixup_t, 0x8 );      
    };                      
};
#include "magic/cor_vtablefixup_t.end.hpp"
SDK_VERIFY( struct image::cor_vtablefixup_t, 0x8 );
