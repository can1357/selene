#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _CHANGER_READ_ELEMENT_STATUS]
    // => WDK 10
    //
    struct changer_read_element_status_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "_CHANGER_READ_ELEMENT_STATUS.$", 0x0, false, 0x5cdc6f536242c8fa );
        SDK_FIXED_SIZE( changer_read_element_status_t, 0x0 );
    };                                  
};
SDK_VERIFY( struct nt::changer_read_element_status_t, 0x0 );
