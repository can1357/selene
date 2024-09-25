#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dynamic_relocation64_v2_t.start.hpp"
namespace image
{
    // [struct _IMAGE_DYNAMIC_RELOCATION64_V2]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dynamic_relocation64_v2_t  
    {                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t header_size;      //{ +0x0000    +0x0000    +0x0000    } | .HeaderSize
        _m01 uint32_t fixup_info_size;  //{ +0x0004    +0x0004    +0x0004    } | .FixupInfoSize
        _m02 uint64_t symbol;           //{ +0x0008    +0x0008    +0x0008    } | .Symbol
        _m03 uint32_t symbol_group;     //{ +0x0010    +0x0010    +0x0010    } | .SymbolGroup
        _m04 uint32_t flags;            //{ +0x0014    +0x0014    +0x0014    } | .Flags
                                      
        SDK_MAGIC_PROPERTIES( "_IMAGE_DYNAMIC_RELOCATION64_V2.$", 0x18, true, 0xa257a3630878d01b );                
        SDK_FIXED_SIZE( dynamic_relocation64_v2_t, 0x18 );                
    };                                
};
#include "magic/dynamic_relocation64_v2_t.end.hpp"
SDK_VERIFY( struct image::dynamic_relocation64_v2_t, 0x18 );
