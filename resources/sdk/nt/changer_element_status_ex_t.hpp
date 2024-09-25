#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _CHANGER_ELEMENT_STATUS_EX]
    // => WDK 10
    //
    struct changer_element_status_ex_t
    {                                 
                                      
        SDK_MAGIC_PROPERTIES( "_CHANGER_ELEMENT_STATUS_EX.$", 0x0, false, 0x1ea42b2de8d2fedd );
        SDK_FIXED_SIZE( changer_element_status_ex_t, 0x0 );
    };                                
};
SDK_VERIFY( struct nt::changer_element_status_ex_t, 0x0 );
