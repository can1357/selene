#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resource_directory_string_t.start.hpp"
namespace image
{
    // [struct _IMAGE_RESOURCE_DIRECTORY_STRING]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct resource_directory_string_t       
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                   
        _m00 uint16_t            length;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 sdk::array<char, 1> name_string;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .NameString
                                             
        SDK_NONVOL_PROPERTIES( "_IMAGE_RESOURCE_DIRECTORY_STRING.$", 0x4, true, 0x6ab9405b357de21b );            
        SDK_FIXED_SIZE( resource_directory_string_t, 0x4 );            
    };                                       
};
#include "magic/resource_directory_string_t.end.hpp"
SDK_VERIFY( struct image::resource_directory_string_t, 0x4 );
