#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct sockaddr_storage]
    // => WDK 10
    //
    struct sockaddr_storage_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "sockaddr_storage.$", 0x0, false, 0xf134804c411162f6 );
        SDK_FIXED_SIZE( sockaddr_storage_t, 0x0 );
    };                       
};
SDK_VERIFY( struct nt::sockaddr_storage_t, 0x0 );
