#pragma once
#include <sdkgen/support_library.hpp>
#include "cor_ilmethod_sect_small_t.hpp"
#include "cor_ilmethod_sect_eh_clause_small_t.hpp"

#include "magic/cor_ilmethod_sect_eh_small_t.start.hpp"
namespace image
{
    // [struct IMAGE_COR_ILMETHOD_SECT_EH_SMALL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cor_ilmethod_sect_eh_small_t                         
    {                                                           
        using clauses_t = sdk::array<struct image::cor_ilmethod_sect_eh_clause_small_t, 1>;           
                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                      
        _m00 struct image::cor_ilmethod_sect_small_t sect_small;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SectSmall
        _m01 clauses_t                               clauses;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Clauses
                                                                
        SDK_MAGIC_PROPERTIES( "IMAGE_COR_ILMETHOD_SECT_EH_SMALL.$", 0x10, true, 0x29c347c5ac641151 );           
        SDK_FIXED_SIZE( cor_ilmethod_sect_eh_small_t, 0x10 );           
    };                                                          
};
#include "magic/cor_ilmethod_sect_eh_small_t.end.hpp"
SDK_VERIFY( struct image::cor_ilmethod_sect_eh_small_t, 0x10 );
