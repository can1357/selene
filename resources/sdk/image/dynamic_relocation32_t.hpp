#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dynamic_relocation32_t.start.hpp"
namespace image
{
    // [struct _IMAGE_DYNAMIC_RELOCATION32]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dynamic_relocation32_t     
    {                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t symbol;           //{ +0x0000    +0x0000    +0x0000    } | .Symbol
        _m01 uint32_t base_reloc_size;  //{ +0x0004    +0x0004    +0x0004    } | .BaseRelocSize
                                      
        SDK_MAGIC_PROPERTIES( "_IMAGE_DYNAMIC_RELOCATION32.$", 0x8, true, 0x121da84eb3b8bf5d );                
        SDK_FIXED_SIZE( dynamic_relocation32_t, 0x8 );                
    };                                
};
#include "magic/dynamic_relocation32_t.end.hpp"
SDK_VERIFY( struct image::dynamic_relocation32_t, 0x8 );
