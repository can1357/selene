#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class ResourceStrings]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class resource_strings_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "ResourceStrings.$", 0x1, true, 0xe162deb0d346372e );
        SDK_FIXED_SIZE( resource_strings_t, 0x1 );
    };                      
};
SDK_VERIFY( class win::resource_strings_t, 0x1 );
