#pragma once
#include <sdkgen/support_library.hpp>
#include "cor_ilmethod_sect_fat_t.hpp"
#include "cor_ilmethod_sect_eh_clause_fat_t.hpp"

#include "magic/cor_ilmethod_sect_eh_fat_t.start.hpp"
namespace image
{
    // [struct IMAGE_COR_ILMETHOD_SECT_EH_FAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cor_ilmethod_sect_eh_fat_t                       
    {                                                       
        using clauses_t = sdk::array<struct image::cor_ilmethod_sect_eh_clause_fat_t, 1>;         
                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                  
        _m00 struct image::cor_ilmethod_sect_fat_t sect_fat;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SectFat
        _m01 clauses_t                             clauses;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Clauses
                                                            
        SDK_MAGIC_PROPERTIES( "IMAGE_COR_ILMETHOD_SECT_EH_FAT.$", 0x1c, true, 0x755bbb621ea06b8c );         
        SDK_FIXED_SIZE( cor_ilmethod_sect_eh_fat_t, 0x1c );         
    };                                                      
};
#include "magic/cor_ilmethod_sect_eh_fat_t.end.hpp"
SDK_VERIFY( struct image::cor_ilmethod_sect_eh_fat_t, 0x1c );
