#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct EntryPropertyStore]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct entry_property_store_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "EntryPropertyStore.$", 0x8, true, 0xf0a43a397bb30c1e );
        SDK_FIXED_SIZE( entry_property_store_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::entry_property_store_t, 0x8 );
