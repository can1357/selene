#pragma once
#include <sdkgen/support_library.hpp>
#include "feature_variant_payload_kind_t.hpp"

#include "magic/details_feature_descriptor_t.start.hpp"
namespace wil
{
    struct details_feature_descriptor_t;
    union details_feature_state_cache_t;
    struct details_feature_reporting_cache_t;

    // [struct wil_details_FeatureDescriptor]
    // => Windows 11, Windows 10 v20H2
    //
    struct details_feature_descriptor_t                                             
    {                                                                               
        using requires_features_t = const struct wil::details_feature_descriptor_t const**;                        
                                                                                    
        // Windows 11, Windows 10 v20H2                                             
        //                                                                          
        _m00 union wil::details_feature_state_cache_t*      feature_state_cache;      //{ +0x0000    +0x0000    } | .featureStateCache
        _m01 uint32_t                                       feature_id;               //{ +0x0010    +0x0008    } | .featureId
        _m02 uint8_t                                        change_time;              //{ +0x0014    +0x000c    } | .changeTime
        _m03 uint8_t                                        is_always_disabled;       //{ +0x0015    +0x000d    } | .isAlwaysDisabled
        _m04 uint8_t                                        is_always_enabled;        //{ +0x0016    +0x000e    } | .isAlwaysEnabled
        _m05 uint8_t                                        is_enabled_by_default;    //{ +0x0017    +0x000f    } | .isEnabledByDefault
        _m06 requires_features_t                            requires_features;        //{ +0x0018    +0x0010    } | .requiresFeatures
                                                                                    
        // Windows 11                                                               
        //                                                                          
        _m07 struct wil::details_feature_reporting_cache_t* feature_reporting_cache;  //{ +0x0008    } | .featureReportingCache
        _m08 uint8_t                                        variant;                  //{ +0x0020    } | .variant
        _m09 enum wil::feature_variant_payload_kind_t       payload_kind;             //{ +0x0024    } | .payloadKind
        _m10 uint32_t                                       payload;                  //{ +0x0028    } | .payload
                                                                                    
        SDK_MAGIC_PROPERTIES( "wil_details_FeatureDescriptor.$", 0x18, true, 0x3a5eefa978b10b13 );                        
        SDK_DYNAMIC_SIZE( details_feature_descriptor_t );                           
    };                                                                              
};
#include "magic/details_feature_descriptor_t.end.hpp"
