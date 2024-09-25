#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/relocation_t.start.hpp"
namespace image
{
    // [struct _IMAGE_RELOCATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct relocation_t                  
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t virtual_address;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VirtualAddress
        _m01 uint32_t reloc_count;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RelocCount
        _m02 uint32_t symbol_table_index;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SymbolTableIndex
        _m03 uint16_t type;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Type
                                         
        SDK_MAGIC_PROPERTIES( "_IMAGE_RELOCATION.$", 0xa, true, 0x893f840e990d9a11 );                   
        SDK_FIXED_SIZE( relocation_t, 0xa );                   
    };                                   
};
#include "magic/relocation_t.end.hpp"
SDK_VERIFY( struct image::relocation_t, 0xa );
