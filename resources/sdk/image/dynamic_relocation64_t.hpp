#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dynamic_relocation64_t.start.hpp"
namespace image
{
    // [struct _IMAGE_DYNAMIC_RELOCATION64]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dynamic_relocation64_t     
    {                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t symbol;           //{ +0x0000    +0x0000    +0x0000    } | .Symbol
        _m01 uint32_t base_reloc_size;  //{ +0x0008    +0x0008    +0x0008    } | .BaseRelocSize
                                      
        SDK_MAGIC_PROPERTIES( "_IMAGE_DYNAMIC_RELOCATION64.$", 0xc, true, 0xe0c9eee210ca6ccd );                
        SDK_FIXED_SIZE( dynamic_relocation64_t, 0xc );                
    };                                
};
#include "magic/dynamic_relocation64_t.end.hpp"
SDK_VERIFY( struct image::dynamic_relocation64_t, 0xc );
