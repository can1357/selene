#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _CHANGER_ELEMENT_STATUS]
    // => WDK 10
    //
    struct changer_element_status_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "_CHANGER_ELEMENT_STATUS.$", 0x0, false, 0x8f51403e128f8cb7 );
        SDK_FIXED_SIZE( changer_element_status_t, 0x0 );
    };                             
};
SDK_VERIFY( struct nt::changer_element_status_t, 0x0 );
