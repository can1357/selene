#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SERVER_SILO_MONITOR_REGISTRATION]
    // => WDK 10
    //
    struct server_silo_monitor_registration_t
    {                                        
                                             
        SDK_MAGIC_PROPERTIES( "_SERVER_SILO_MONITOR_REGISTRATION.$", 0x0, false, 0x621223f272946994 );
        SDK_FIXED_SIZE( server_silo_monitor_registration_t, 0x0 );
    };                                       
};
SDK_VERIFY( struct nt::server_silo_monitor_registration_t, 0x0 );
