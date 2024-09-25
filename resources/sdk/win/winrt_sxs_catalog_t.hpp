#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class WinrtSxsCatalog]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class winrt_sxs_catalog_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "WinrtSxsCatalog.$", 0x10, true, 0x4556ac92a766ad5d );
        SDK_FIXED_SIZE( winrt_sxs_catalog_t, 0x10 );
    };                       
};
SDK_VERIFY( class win::winrt_sxs_catalog_t, 0x10 );
