#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWinRTApplicationCatalogInternal]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_win_rt_application_catalog_internal_t
    {                                             
                                                  
        SDK_MAGIC_PROPERTIES( "IWinRTApplicationCatalogInternal.$", 0x8, true, 0x25eb18d3a57a69bb );
        SDK_FIXED_SIZE( i_win_rt_application_catalog_internal_t, 0x8 );
    };                                            
};
SDK_VERIFY( struct win::i_win_rt_application_catalog_internal_t, 0x8 );
