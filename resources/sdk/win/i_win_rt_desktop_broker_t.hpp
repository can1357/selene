#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IWinRTDesktopBroker]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_win_rt_desktop_broker_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "IWinRTDesktopBroker.$", 0x8, true, 0x4282aac2460a3a0a );
        SDK_FIXED_SIZE( i_win_rt_desktop_broker_t, 0x8 );
    };                              
};
SDK_VERIFY( struct win::i_win_rt_desktop_broker_t, 0x8 );
