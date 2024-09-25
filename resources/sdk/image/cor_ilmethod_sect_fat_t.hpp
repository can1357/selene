#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cor_ilmethod_sect_fat_t.start.hpp"
namespace image
{
    // [struct IMAGE_COR_ILMETHOD_SECT_FAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cor_ilmethod_sect_fat_t
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint8_t  kind;         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Kind
        _m01 uint24_t data_size;    //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .DataSize
                                  
        SDK_MAGIC_PROPERTIES( "IMAGE_COR_ILMETHOD_SECT_FAT.$", 0x4, true, 0xe8c860969b52a2f2 );          
        SDK_FIXED_SIZE( cor_ilmethod_sect_fat_t, 0x4 );          
    };                            
};
#include "magic/cor_ilmethod_sect_fat_t.end.hpp"
SDK_VERIFY( struct image::cor_ilmethod_sect_fat_t, 0x4 );
