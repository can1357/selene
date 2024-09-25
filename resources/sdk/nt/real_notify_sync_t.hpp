#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _REAL_NOTIFY_SYNC]
    // => WDK 10
    //
    struct real_notify_sync_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "_REAL_NOTIFY_SYNC.$", 0x0, false, 0xc0b207c1648267bc );
        SDK_FIXED_SIZE( real_notify_sync_t, 0x0 );
    };                       
};
SDK_VERIFY( struct nt::real_notify_sync_t, 0x0 );
