#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _CHANGER_INITIALIZE_ELEMENT_STATUS]
    // => WDK 10
    //
    struct changer_initialize_element_status_t
    {                                         
                                              
        SDK_MAGIC_PROPERTIES( "_CHANGER_INITIALIZE_ELEMENT_STATUS.$", 0x0, false, 0x398cd64204ed47a9 );
        SDK_FIXED_SIZE( changer_initialize_element_status_t, 0x0 );
    };                                        
};
SDK_VERIFY( struct nt::changer_initialize_element_status_t, 0x0 );
