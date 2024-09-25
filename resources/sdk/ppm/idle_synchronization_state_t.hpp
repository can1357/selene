#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/idle_synchronization_state_t.start.hpp"
namespace ppm
{
    // [union _PPM_IDLE_SYNCHRONIZATION_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union idle_synchronization_state_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                     
        _m00 int32_t as_long;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsLong
        _m01 int24_t ref_count;         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .RefCount
        _m02 uint8_t state;             //{ +0x0000@24 +0x0000@24 +0x0000@24 +0x0000@24 } | .State
                                      
        SDK_MAGIC_PROPERTIES( "_PPM_IDLE_SYNCHRONIZATION_STATE.$", 0x4, true, 0xb73714d14001856c );          
        SDK_FIXED_SIZE( idle_synchronization_state_t, 0x4 );          
    };                                
};
#include "magic/idle_synchronization_state_t.end.hpp"
SDK_VERIFY( union ppm::idle_synchronization_state_t, 0x4 );
