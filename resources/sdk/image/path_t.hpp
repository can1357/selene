#pragma once
#include <sdkgen/support_library.hpp>

namespace image
{
    // [class ImagePath]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class path_t
    {           
                
        SDK_MAGIC_PROPERTIES( "ImagePath.$", 0x1, true, 0xfea77b5ce155bf05 );
        SDK_FIXED_SIZE( path_t, 0x1 );
    };          
};
SDK_VERIFY( class image::path_t, 0x1 );
