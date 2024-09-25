#pragma once
#include <sdkgen/support_library.hpp>
#include "file_header_t.hpp"
#include "rom_optional_header_t.hpp"

#include "magic/rom_headers_t.start.hpp"
namespace image
{
    // [struct _IMAGE_ROM_HEADERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rom_headers_t                                         
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                       
        _m00 struct image::file_header_t         file_header;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileHeader
        _m01 struct image::rom_optional_header_t optional_header;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .OptionalHeader
                                                                 
        SDK_MAGIC_PROPERTIES( "_IMAGE_ROM_HEADERS.$", 0x4c, true, 0x297662d31f996dda );                
        SDK_FIXED_SIZE( rom_headers_t, 0x4c );                   
    };                                                           
};
#include "magic/rom_headers_t.end.hpp"
SDK_VERIFY( struct image::rom_headers_t, 0x4c );
