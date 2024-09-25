#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInternetZoneManagerEx2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_internet_zone_manager_ex2_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "IInternetZoneManagerEx2.$", 0x8, true, 0x59c5a41334fde853 );
        SDK_FIXED_SIZE( i_internet_zone_manager_ex2_t, 0x8 );
    };                                  
};
SDK_VERIFY( struct win::i_internet_zone_manager_ex2_t, 0x8 );
