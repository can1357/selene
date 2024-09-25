#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/details_feature_state_cache_t.start.hpp"
namespace wil
{
    // [union wil_details_FeatureStateCache]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union details_feature_state_cache_t                
    {                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                             
        _m00 uint32_t exchange;                          //{ +0x0000    +0x0000    +0x0000    } | .exchange
        _m01 uint1_t  state_cached;                      //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .stateCached
        _m02 uint1_t  has_notification_cached;           //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .hasNotificationCached
        _m03 uint1_t  variant_cached;                    //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .variantCached
        _m04 uint1_t  effective_state;                   //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .effectiveState
        _m05 uint1_t  desired_state;                     //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .desiredState
        _m06 uint1_t  has_notification;                  //{ +0x0000@7  +0x0000@8  +0x0000@8  } | .hasNotification
        _m07 uint6_t  variant;                           //{ +0x0000@9  +0x0000@10 +0x0000@10 } | .variant
        _m08 uint32_t payload_id;                        //{ +0x0004    +0x0004    +0x0004    } | .payloadId
        _m09 uint64_t exchange64;                        //{ +0x0000    +0x0000    +0x0000    } | .exchange64
                                                       
        // Windows 10 v2004, Windows 10 v20H2                                 
        //                                             
        _m10 uint1_t  is_variant;                        //{ +0x0000@8  +0x0000@9  } | .isVariant
                                                       
        // Windows 11, Windows 10 v20H2                                 
        //                                             
        _m11 uint2_t  configured_state;                  //{ +0x0000@5  +0x0000@5  } | .configuredState
        _m12 uint1_t  needs_refresh;                     //{ +0x0000@7  +0x0000@7  } | .needsRefresh
                                                       
        // Windows 10 v2004                                 
        //                                             
        _m13 uint2_t  reserved_for_kernel_mode_support;  //{ +0x0000@5  } | .reservedForKernelModeSupport
                                                       
        // Windows 11                                  
        //                                             
        _m14 uint1_t  is_wexp_configuration;             //{ +0x0000@9  } | .isWexpConfiguration
                                                       
        SDK_MAGIC_PROPERTIES( "wil_details_FeatureStateCache.$", 0x8, true, 0xc24ac4cb6b93f06a );                                 
        SDK_FIXED_SIZE( details_feature_state_cache_t, 0x8 );                                 
    };                                                 
};
#include "magic/details_feature_state_cache_t.end.hpp"
SDK_VERIFY( union wil::details_feature_state_cache_t, 0x8 );
