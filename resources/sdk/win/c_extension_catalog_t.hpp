#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CExtensionCatalog]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_extension_catalog_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "CExtensionCatalog.$", 0x50, true, 0xc7cca3c1f93f403d );
        SDK_FIXED_SIZE( c_extension_catalog_t, 0x50 );
    };                         
};
SDK_VERIFY( class win::c_extension_catalog_t, 0x50 );
