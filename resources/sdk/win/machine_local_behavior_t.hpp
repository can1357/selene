#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct MachineLocalBehavior]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct machine_local_behavior_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "MachineLocalBehavior.$", 0x1, true, 0x6db46e8fc21bcaeb );
        SDK_FIXED_SIZE( machine_local_behavior_t, 0x1 );
    };                             
};
SDK_VERIFY( struct win::machine_local_behavior_t, 0x1 );
