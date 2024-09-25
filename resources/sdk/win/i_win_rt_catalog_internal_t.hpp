#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWinRTCatalogInternal]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_win_rt_catalog_internal_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "IWinRTCatalogInternal.$", 0x8, true, 0xe9be4a0b8d95ce87 );
        SDK_FIXED_SIZE( i_win_rt_catalog_internal_t, 0x8 );
    };                                
};
SDK_VERIFY( struct win::i_win_rt_catalog_internal_t, 0x8 );
