#pragma once
#include <sdkgen/support_library.hpp>

namespace ps
{
    // [struct _PS_PICO_ROUTINES]
    // => WDK 10
    //
    struct pico_routines_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "_PS_PICO_ROUTINES.$", 0x0, false, 0x7893194f4a089348 );
        SDK_FIXED_SIZE( pico_routines_t, 0x0 );
    };                    
};
SDK_VERIFY( struct ps::pico_routines_t, 0x0 );
