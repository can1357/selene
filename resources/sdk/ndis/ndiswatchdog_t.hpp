#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [struct NDISWATCHDOG__]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndiswatchdog_t
    {                    
                         
        SDK_MAGIC_PROPERTIES( "NDISWATCHDOG__.$", 0x4, true, 0x4157cfb53e30de99 );
        SDK_FIXED_SIZE( ndiswatchdog_t, 0x4 );
    };                   
};
SDK_VERIFY( struct ndis::ndiswatchdog_t, 0x4 );
