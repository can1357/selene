#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct _SILO_MONITOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct silo_monitor_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "_SILO_MONITOR.$", 0x0, true, 0x419da34ba3244de );
        SDK_FIXED_SIZE( silo_monitor_t, 0x0 );
    };                   
};
SDK_VERIFY( struct wdf::silo_monitor_t, 0x0 );
