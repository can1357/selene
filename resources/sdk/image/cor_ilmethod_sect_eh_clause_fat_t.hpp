#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/cor_exception_flag_t.hpp"

#include "magic/cor_ilmethod_sect_eh_clause_fat_t.start.hpp"
namespace image
{
    // [struct IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cor_ilmethod_sect_eh_clause_fat_t               
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                 
        _m00 enum win::cor_exception_flag_t flags;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t                       try_offset;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TryOffset
        _m02 uint32_t                       try_length;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TryLength
        _m03 uint32_t                       handler_offset;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .HandlerOffset
        _m04 uint32_t                       handler_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HandlerLength
        _m05 uint32_t                       class_token;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ClassToken
        _m06 uint32_t                       filter_offset;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .FilterOffset
                                                           
        SDK_MAGIC_PROPERTIES( "IMAGE_COR_ILMETHOD_SECT_EH_CLAUSE_FAT.$", 0x18, true, 0x929d984651d719b6 );               
        SDK_FIXED_SIZE( cor_ilmethod_sect_eh_clause_fat_t, 0x18 );               
    };                                                     
};
#include "magic/cor_ilmethod_sect_eh_clause_fat_t.end.hpp"
SDK_VERIFY( struct image::cor_ilmethod_sect_eh_clause_fat_t, 0x18 );
