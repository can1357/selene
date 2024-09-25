#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct DeviceCatalogEntry]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_catalog_entry_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "DeviceCatalogEntry.$", 0x20, true, 0x9c448df51215de78 );
        SDK_FIXED_SIZE( device_catalog_entry_t, 0x20 );
    };                           
};
SDK_VERIFY( struct win::device_catalog_entry_t, 0x20 );
