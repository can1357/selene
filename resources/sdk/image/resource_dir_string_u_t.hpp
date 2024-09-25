#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resource_dir_string_u_t.start.hpp"
namespace image
{
    // [struct _IMAGE_RESOURCE_DIR_STRING_U]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct resource_dir_string_u_t              
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint16_t               length;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 sdk::array<wchar_t, 1> name_string;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .NameString
                                                
        SDK_MAGIC_PROPERTIES( "_IMAGE_RESOURCE_DIR_STRING_U.$", 0x4, true, 0x9d990c79d829e71b );            
        SDK_FIXED_SIZE( resource_dir_string_u_t, 0x4 );            
    };                                          
};
#include "magic/resource_dir_string_u_t.end.hpp"
SDK_VERIFY( struct image::resource_dir_string_u_t, 0x4 );
