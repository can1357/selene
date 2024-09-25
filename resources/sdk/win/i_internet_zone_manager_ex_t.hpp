#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInternetZoneManagerEx]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_internet_zone_manager_ex_t
    {                                  
                                       
        SDK_MAGIC_PROPERTIES( "IInternetZoneManagerEx.$", 0x8, true, 0xc90082234dfc981a );
        SDK_FIXED_SIZE( i_internet_zone_manager_ex_t, 0x8 );
    };                                 
};
SDK_VERIFY( struct win::i_internet_zone_manager_ex_t, 0x8 );
