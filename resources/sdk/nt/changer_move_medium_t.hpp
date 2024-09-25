#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _CHANGER_MOVE_MEDIUM]
    // => WDK 10
    //
    struct changer_move_medium_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "_CHANGER_MOVE_MEDIUM.$", 0x0, false, 0x6721229dda3ce4d5 );
        SDK_FIXED_SIZE( changer_move_medium_t, 0x0 );
    };                          
};
SDK_VERIFY( struct nt::changer_move_medium_t, 0x0 );
