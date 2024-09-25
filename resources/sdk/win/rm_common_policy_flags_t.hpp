#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rm_common_policy_flags_t.start.hpp"
namespace win
{
    // [union _RM_COMMON_POLICY_FLAGS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union rm_common_policy_flags_t          
    {                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint1_t  can_cancel;             //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .CanCancel
        _m01 uint1_t  can_terminate;          //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .CanTerminate
        _m02 uint1_t  can_watson;             //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .CanWatson
        _m03 uint1_t  state_saved;            //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .StateSaved
        _m04 uint1_t  frozen;                 //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .Frozen
        _m05 uint1_t  manage_suspend_resume;  //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .ManageSuspendResume
        _m06 uint16_t all;                    //{ +0x0000    +0x0000    +0x0000    } | .All
                                            
        SDK_MAGIC_PROPERTIES( "_RM_COMMON_POLICY_FLAGS.$", 0x2, true, 0x6e58550eecff6616 );                      
        SDK_FIXED_SIZE( rm_common_policy_flags_t, 0x2 );                      
    };                                      
};
#include "magic/rm_common_policy_flags_t.end.hpp"
SDK_VERIFY( union win::rm_common_policy_flags_t, 0x2 );
