#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rm_activity_importance_t.start.hpp"
namespace win
{
    // [union _RM_ACTIVITY_IMPORTANCE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union rm_activity_importance_t                
    {                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint1_t  is_valid;                     //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .IsValid
        _m01 uint3_t  presentation_class;           //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .PresentationClass
        _m02 uint2_t  proximity_class;              //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .ProximityClass
        _m03 uint1_t  receiving_input;              //{ +0x0000@6  +0x0000@6  +0x0000@6  } | .ReceivingInput
        _m04 uint1_t  control_foreground_boost;     //{ +0x0000@7  +0x0000@7  +0x0000@7  } | .ControlForegroundBoost
        _m05 uint1_t  is_shell_experience;          //{ +0x0000@8  +0x0000@8  +0x0000@8  } | .IsShellExperience
        _m06 uint1_t  xbox_shell_experience;        //{ +0x0000@9  +0x0000@9  +0x0000@9  } | .XboxShellExperience
        _m07 uint1_t  is_shell_experience_init;     //{ +0x0000@10 +0x0000@10 +0x0000@10 } | .IsShellExperienceInit
        _m08 uint1_t  activity_lowered_importance;  //{ +0x0000@11 +0x0000@11 +0x0000@11 } | .ActivityLoweredImportance
        _m09 uint16_t interactivity_flags;          //{ +0x0000    +0x0000    +0x0000    } | .InteractivityFlags
        _m10 uint8_t  total_ordering;               //{ +0x0002    +0x0002    +0x0002    } | .TotalOrdering
        _m11 uint8_t  priority;                     //{ +0x0003    +0x0003    +0x0003    } | .Priority
        _m12 uint32_t all;                          //{ +0x0000    +0x0000    +0x0000    } | .All
                                                  
        SDK_MAGIC_PROPERTIES( "_RM_ACTIVITY_IMPORTANCE.$", 0x4, true, 0xf0d87c4469610e0f );                            
        SDK_FIXED_SIZE( rm_activity_importance_t, 0x4 );                            
    };                                            
};
#include "magic/rm_activity_importance_t.end.hpp"
SDK_VERIFY( union win::rm_activity_importance_t, 0x4 );
