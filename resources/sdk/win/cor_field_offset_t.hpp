#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cor_field_offset_t.start.hpp"
namespace win
{
    // [struct COR_FIELD_OFFSET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cor_field_offset_t      
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t rid_of_field;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ridOfField
        _m01 uint32_t ul_offset;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ulOffset
                                   
        SDK_MAGIC_PROPERTIES( "COR_FIELD_OFFSET.$", 0x8, true, 0x9ad6390c804a8eb7 );             
        SDK_FIXED_SIZE( cor_field_offset_t, 0x8 );             
    };                             
};
#include "magic/cor_field_offset_t.end.hpp"
SDK_VERIFY( struct win::cor_field_offset_t, 0x8 );
