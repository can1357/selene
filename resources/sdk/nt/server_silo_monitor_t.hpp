#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SERVER_SILO_MONITOR]
    // => WDK 10
    //
    struct server_silo_monitor_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "_SERVER_SILO_MONITOR.$", 0x0, false, 0xea2de80fce109d8d );
        SDK_FIXED_SIZE( server_silo_monitor_t, 0x0 );
    };                          
};
SDK_VERIFY( struct nt::server_silo_monitor_t, 0x0 );
