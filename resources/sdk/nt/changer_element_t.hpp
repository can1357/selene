#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _CHANGER_ELEMENT]
    // => WDK 10
    //
    struct changer_element_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "_CHANGER_ELEMENT.$", 0x0, false, 0x30125526a51cece3 );
        SDK_FIXED_SIZE( changer_element_t, 0x0 );
    };                      
};
SDK_VERIFY( struct nt::changer_element_t, 0x0 );
