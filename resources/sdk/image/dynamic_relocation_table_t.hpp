#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dynamic_relocation_table_t.start.hpp"
namespace image
{
    // [struct _IMAGE_DYNAMIC_RELOCATION_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dynamic_relocation_table_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t version;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t size;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
                                     
        SDK_MAGIC_PROPERTIES( "_IMAGE_DYNAMIC_RELOCATION_TABLE.$", 0x8, true, 0x2e392c5bbc6a5f6f );        
        SDK_FIXED_SIZE( dynamic_relocation_table_t, 0x8 );        
    };                               
};
#include "magic/dynamic_relocation_table_t.end.hpp"
SDK_VERIFY( struct image::dynamic_relocation_table_t, 0x8 );
