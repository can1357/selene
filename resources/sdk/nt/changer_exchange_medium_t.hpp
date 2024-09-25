#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _CHANGER_EXCHANGE_MEDIUM]
    // => WDK 10
    //
    struct changer_exchange_medium_t
    {                               
                                    
        SDK_MAGIC_PROPERTIES( "_CHANGER_EXCHANGE_MEDIUM.$", 0x0, false, 0x8e8dde06fc5c2f9e );
        SDK_FIXED_SIZE( changer_exchange_medium_t, 0x0 );
    };                              
};
SDK_VERIFY( struct nt::changer_exchange_medium_t, 0x0 );
