#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _CHANGER_SET_POSITION]
    // => WDK 10
    //
    struct changer_set_position_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "_CHANGER_SET_POSITION.$", 0x0, false, 0xa5e2e7ab437df272 );
        SDK_FIXED_SIZE( changer_set_position_t, 0x0 );
    };                           
};
SDK_VERIFY( struct nt::changer_set_position_t, 0x0 );
