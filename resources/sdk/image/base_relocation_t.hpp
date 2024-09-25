#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/base_relocation_t.start.hpp"
namespace image
{
    // [struct _IMAGE_BASE_RELOCATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct base_relocation_t          
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t virtual_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VirtualAddress
        _m01 uint32_t size_of_block;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SizeOfBlock
                                      
        SDK_NONVOL_PROPERTIES( "_IMAGE_BASE_RELOCATION.$", 0x8, true, 0xb200d71db1dbc392 );                
        SDK_FIXED_SIZE( base_relocation_t, 0x8 );                
    };                                
};
#include "magic/base_relocation_t.end.hpp"
SDK_VERIFY( struct image::base_relocation_t, 0x8 );
