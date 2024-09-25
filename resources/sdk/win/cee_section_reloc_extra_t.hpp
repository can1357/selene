#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cee_section_reloc_extra_t.start.hpp"
namespace win
{
    // [union CeeSectionRelocExtra]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union cee_section_reloc_extra_t
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint16_t high_adj;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .highAdj
                                   
        SDK_MAGIC_PROPERTIES( "CeeSectionRelocExtra.$", 0x2, true, 0x8abaf0ee0cc2f09f );         
        SDK_FIXED_SIZE( cee_section_reloc_extra_t, 0x2 );         
    };                             
};
#include "magic/cee_section_reloc_extra_t.end.hpp"
SDK_VERIFY( union win::cee_section_reloc_extra_t, 0x2 );
