#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _CHANGER_ELEMENT_LIST]
    // => WDK 10
    //
    struct changer_element_list_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "_CHANGER_ELEMENT_LIST.$", 0x0, false, 0x5e1eb4532b572cb7 );
        SDK_FIXED_SIZE( changer_element_list_t, 0x0 );
    };                           
};
SDK_VERIFY( struct nt::changer_element_list_t, 0x0 );
