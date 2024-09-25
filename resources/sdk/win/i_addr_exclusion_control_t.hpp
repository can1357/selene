#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IAddrExclusionControl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_addr_exclusion_control_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "IAddrExclusionControl.$", 0x8, true, 0xdd119ec5eaadb611 );
        SDK_FIXED_SIZE( i_addr_exclusion_control_t, 0x8 );
    };                               
};
SDK_VERIFY( struct win::i_addr_exclusion_control_t, 0x8 );
