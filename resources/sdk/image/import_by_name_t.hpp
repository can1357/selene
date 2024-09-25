#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/import_by_name_t.start.hpp"
namespace image
{
    // [struct _IMAGE_IMPORT_BY_NAME]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct import_by_name_t           
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                            
        _m00 uint16_t            hint;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Hint
        _m01 sdk::array<char, 1> name;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Name
                                      
        SDK_MAGIC_PROPERTIES( "_IMAGE_IMPORT_BY_NAME.$", 0x4, true, 0x4b6a25219dba6972 );     
        SDK_FIXED_SIZE( import_by_name_t, 0x4 );     
    };                                
};
#include "magic/import_by_name_t.end.hpp"
SDK_VERIFY( struct image::import_by_name_t, 0x4 );
