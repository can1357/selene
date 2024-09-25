#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dynamic_relocation_t.start.hpp"
namespace image
{
    // [struct _IMAGE_DYNAMIC_RELOCATION]
    // => Windows 10 v1607
    //
    struct dynamic_relocation_t       
    {                                 
        // Windows 10 v1607                
        //                            
        _m00 void*    symbol;           //{ +0x0000    } | .Symbol
        _m01 uint32_t base_reloc_size;  //{ +0x0008    } | .BaseRelocSize
                                      
        SDK_MAGIC_PROPERTIES( "_IMAGE_DYNAMIC_RELOCATION.$", 0x0, false, 0x3ac8ea7c28f1a5ab );                
        SDK_FIXED_SIZE( dynamic_relocation_t, 0xc );                
    };                                
};
#include "magic/dynamic_relocation_t.end.hpp"
SDK_VERIFY( struct image::dynamic_relocation_t, 0xc );
