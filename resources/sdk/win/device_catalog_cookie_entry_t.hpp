#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct DeviceCatalogCookieEntry]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_catalog_cookie_entry_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "DeviceCatalogCookieEntry.$", 0x8, true, 0xb202791d869c968f );
        SDK_FIXED_SIZE( device_catalog_cookie_entry_t, 0x8 );
    };                                  
};
SDK_VERIFY( struct win::device_catalog_cookie_entry_t, 0x8 );
