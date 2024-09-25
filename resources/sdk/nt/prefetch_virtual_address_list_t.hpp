#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _PREFETCH_VIRTUAL_ADDRESS_LIST]
    // => WDK 10
    //
    struct prefetch_virtual_address_list_t
    {                                     
                                          
        SDK_MAGIC_PROPERTIES( "_PREFETCH_VIRTUAL_ADDRESS_LIST.$", 0x0, false, 0xe1bb0083a71e9ffb );
        SDK_FIXED_SIZE( prefetch_virtual_address_list_t, 0x0 );
    };                                    
};
SDK_VERIFY( struct nt::prefetch_virtual_address_list_t, 0x0 );
