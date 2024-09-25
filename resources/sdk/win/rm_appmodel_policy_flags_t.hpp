#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rm_appmodel_policy_flags_t.start.hpp"
namespace win
{
    // [union _RM_APPMODEL_POLICY_FLAGS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union rm_appmodel_policy_flags_t                 
    {                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                           
        _m00 uint3_t sharing_options;                  //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .SharingOptions
        _m01 uint1_t legacy_ui_paused;                 //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .LegacyUiPaused
        _m02 uint1_t suspending;                       //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .Suspending
        _m03 uint1_t enable_foreground_compat_policy;  //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .EnableForegroundCompatPolicy
        _m04 uint1_t do_not_commit_save;               //{ +0x0000@6  +0x0000@6  +0x0000@6  } | .DoNotCommitSave
        _m05 uint1_t allow_ungrantable_request;        //{ +0x0000@7  +0x0000@7  +0x0000@7  } | .AllowUngrantableRequest
        _m06 uint8_t all;                              //{ +0x0000    +0x0000    +0x0000    } | .All
                                                     
        SDK_MAGIC_PROPERTIES( "_RM_APPMODEL_POLICY_FLAGS.$", 0x1, true, 0x26f90cad17a02fc9 );                                
        SDK_FIXED_SIZE( rm_appmodel_policy_flags_t, 0x1 );                                
    };                                               
};
#include "magic/rm_appmodel_policy_flags_t.end.hpp"
SDK_VERIFY( union win::rm_appmodel_policy_flags_t, 0x1 );
