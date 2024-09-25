#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _CHANGER_SET_ACCESS]
    // => WDK 10
    //
    struct changer_set_access_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "_CHANGER_SET_ACCESS.$", 0x0, false, 0x9fd5640a66560bc );
        SDK_FIXED_SIZE( changer_set_access_t, 0x0 );
    };                         
};
SDK_VERIFY( struct nt::changer_set_access_t, 0x0 );
