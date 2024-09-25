#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_affinity_update_mode_t.start.hpp"
namespace win
{
    // [union _PROCESS_AFFINITY_UPDATE_MODE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union process_affinity_update_mode_t 
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t flags;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t  enable_auto_update;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .EnableAutoUpdate
        _m02 uint1_t  permanent;           //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Permanent
                                         
        SDK_MAGIC_PROPERTIES( "_PROCESS_AFFINITY_UPDATE_MODE.$", 0x4, true, 0x3c6c9d21b22c8e77 );                   
        SDK_FIXED_SIZE( process_affinity_update_mode_t, 0x4 );                   
    };                                   
};
#include "magic/process_affinity_update_mode_t.end.hpp"
SDK_VERIFY( union win::process_affinity_update_mode_t, 0x4 );
