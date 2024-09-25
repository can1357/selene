#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IAddrTrackingControl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_addr_tracking_control_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "IAddrTrackingControl.$", 0x8, true, 0x42e510edfbb2af86 );
        SDK_FIXED_SIZE( i_addr_tracking_control_t, 0x8 );
    };                              
};
SDK_VERIFY( struct win::i_addr_tracking_control_t, 0x8 );
