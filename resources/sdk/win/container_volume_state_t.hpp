#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/container_volume_state_t.start.hpp"
namespace win
{
    // [struct _CONTAINER_VOLUME_STATE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct container_volume_state_t
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t flags;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
                                   
        SDK_NONVOL_PROPERTIES( "_CONTAINER_VOLUME_STATE.$", 0x4, true, 0x5b30df4e35d0d8d5 );      
        SDK_FIXED_SIZE( container_volume_state_t, 0x4 );      
    };                             
};
#include "magic/container_volume_state_t.end.hpp"
SDK_VERIFY( struct win::container_volume_state_t, 0x4 );
