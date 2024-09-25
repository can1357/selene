#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInternetZoneManager]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_internet_zone_manager_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "IInternetZoneManager.$", 0x8, true, 0xc5e2284f585a60e );
        SDK_FIXED_SIZE( i_internet_zone_manager_t, 0x8 );
    };                              
};
SDK_VERIFY( struct win::i_internet_zone_manager_t, 0x8 );
