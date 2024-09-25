#pragma once
#include <sdkgen/support_library.hpp>
#include "xstate_feature_t.hpp"

#include "magic/xstate_configuration_t.start.hpp"
namespace nt
{
    // [struct _XSTATE_CONFIGURATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct xstate_configuration_t                                                                 
    {                                                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                                        
        _m00 uint64_t                                    enabled_features;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .EnabledFeatures
        _m01 uint64_t                                    enabled_volatile_features;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .EnabledVolatileFeatures
        _m02 uint32_t                                    size;                                      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Size
        _m03 uint32_t                                    control_flags;                             //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .ControlFlags
        _m04 uint1_t                                     optimized_save;                            //{ +0x0014@0  +0x0014@0  +0x0014@0  +0x0014@0  +0x0014@0  } | .OptimizedSave
        _m05 uint1_t                                     compaction_enabled;                        //{ +0x0014@1  +0x0014@1  +0x0014@1  +0x0014@1  +0x0014@1  } | .CompactionEnabled
        _m06 sdk::array<struct nt::xstate_feature_t, 64> features;                                  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Features
        _m07 uint64_t                                    enabled_supervisor_features;               //{ +0x0218    +0x0218    +0x0218    +0x0218    +0x0218    } | .EnabledSupervisorFeatures
        _m08 uint64_t                                    aligned_features;                          //{ +0x0220    +0x0220    +0x0220    +0x0220    +0x0220    } | .AlignedFeatures
        _m09 uint32_t                                    all_feature_size;                          //{ +0x0228    +0x0228    +0x0228    +0x0228    +0x0228    } | .AllFeatureSize
        _m10 sdk::array<uint32_t, 64>                    all_features;                              //{ +0x022c    +0x022c    +0x022c    +0x022c    +0x022c    } | .AllFeatures
                                                                                                  
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                                        
        _m11 uint64_t                                    enabled_user_visible_supervisor_features;  //{ +0x0330    +0x0330    +0x0330    +0x0330    } | .EnabledUserVisibleSupervisorFeatures
                                                                                                  
        // Windows 11                                                                             
        //                                                                                        
        _m12 uint1_t                                     extended_feature_disable;                  //{ +0x0014@2  } | .ExtendedFeatureDisable
        _m13 uint64_t                                    extended_feature_disable_features;         //{ +0x0338    } | .ExtendedFeatureDisableFeatures
        _m14 uint32_t                                    all_non_large_feature_size;                //{ +0x0340    } | .AllNonLargeFeatureSize
                                                                                                  
        SDK_NONVOL_PROPERTIES( "_XSTATE_CONFIGURATION.$", 0x338, true, 0xcb8212c83af4c3da );                                         
        SDK_DYNAMIC_SIZE( xstate_configuration_t );                                               
    };                                                                                            
};
#include "magic/xstate_configuration_t.end.hpp"
