#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IObjectWithSite]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_object_with_site_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "IObjectWithSite.$", 0x8, true, 0xdc84d14de8ad28c );
        SDK_FIXED_SIZE( i_object_with_site_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_object_with_site_t, 0x8 );
