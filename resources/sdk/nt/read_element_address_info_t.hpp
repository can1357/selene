#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _READ_ELEMENT_ADDRESS_INFO]
    // => WDK 10
    //
    struct read_element_address_info_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "_READ_ELEMENT_ADDRESS_INFO.$", 0x0, false, 0xdbb22089d2e73113 );
        SDK_FIXED_SIZE( read_element_address_info_t, 0x0 );
    };                                
};
SDK_VERIFY( struct nt::read_element_address_info_t, 0x0 );
