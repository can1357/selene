#pragma once
#include <sdkgen/support_library.hpp>

namespace ps
{
    // [struct _PS_PICO_PROVIDER_ROUTINES]
    // => WDK 10
    //
    struct pico_provider_routines_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "_PS_PICO_PROVIDER_ROUTINES.$", 0x0, false, 0xdf8845eb4b2ae46c );
        SDK_FIXED_SIZE( pico_provider_routines_t, 0x0 );
    };                             
};
SDK_VERIFY( struct ps::pico_provider_routines_t, 0x0 );
