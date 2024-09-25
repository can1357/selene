#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [struct KnobState]
    // => Windows 11
    //
    struct knob_state_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "KnobState.$", 0x0, false, 0x49970bceb3d3853a );
        SDK_FIXED_SIZE( knob_state_t, 0x0 );
    };                 
};
SDK_VERIFY( struct ndis::knob_state_t, 0x0 );
