#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [class KnobCollection]
    // => Windows 11
    //
    class knob_collection_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "KnobCollection.$", 0x0, false, 0x997a3f31bc142b3 );
        SDK_FIXED_SIZE( knob_collection_t, 0x0 );
    };                     
};
SDK_VERIFY( class ndis::knob_collection_t, 0x0 );
