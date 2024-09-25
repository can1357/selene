#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/data_directory_t.start.hpp"
namespace image
{
    // [struct _IMAGE_DATA_DIRECTORY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct data_directory_t           
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t virtual_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VirtualAddress
        _m01 uint32_t size;             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
                                      
        SDK_NONVOL_PROPERTIES( "_IMAGE_DATA_DIRECTORY.$", 0x8, true, 0x3d3d5641c4096115 );                
        SDK_FIXED_SIZE( data_directory_t, 0x8 );                
    };                                
};
#include "magic/data_directory_t.end.hpp"
SDK_VERIFY( struct image::data_directory_t, 0x8 );
