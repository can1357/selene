#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kwait_status_register_t.start.hpp"
namespace nt
{
    // [union _KWAIT_STATUS_REGISTER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union kwait_status_register_t
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                    
        _m00 uint8_t flags;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint3_t state;        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .State
        _m02 uint1_t affinity;     //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Affinity
        _m03 uint1_t priority;     //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Priority
        _m04 uint1_t apc;          //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .Apc
        _m05 uint1_t user_apc;     //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .UserApc
        _m06 uint1_t alert;        //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .Alert
                                 
        SDK_MAGIC_PROPERTIES( "_KWAIT_STATUS_REGISTER.$", 0x1, true, 0xb956b6759e432300 );         
        SDK_FIXED_SIZE( kwait_status_register_t, 0x1 );         
    };                           
};
#include "magic/kwait_status_register_t.end.hpp"
SDK_VERIFY( union nt::kwait_status_register_t, 0x1 );
