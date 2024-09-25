#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/details_staging_config_feature_t.start.hpp"
namespace wil
{
    // [struct wil_details_StagingConfigFeature]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct details_staging_config_feature_t
    {                                      
        // Windows 10 v2004, Windows 10 v20H2                   
        //                               
        _m00 uint32_t feature_id;            //{ +0x0000    +0x0000    } | .featureId
        _m01 uint1_t  changed_in_session;    //{ +0x0004@0  +0x0004@0  } | .changedInSession
        _m02 uint1_t  is_variant_config;     //{ +0x0004@1  +0x0004@1  } | .isVariantConfig
        _m03 uint2_t  service_state;         //{ +0x0004@8  +0x0004@8  } | .serviceState
        _m04 uint2_t  user_state;            //{ +0x0004@10 +0x0004@10 } | .userState
        _m05 uint2_t  test_state;            //{ +0x0004@12 +0x0004@12 } | .testState
        _m06 uint6_t  variant;               //{ +0x0004@24 +0x0004@24 } | .variant
        _m07 uint2_t  payload_kind;          //{ +0x0004@30 +0x0004@30 } | .payloadKind
        _m08 uint32_t payload;               //{ +0x0008    +0x0008    } | .payload
                                           
        SDK_MAGIC_PROPERTIES( "wil_details_StagingConfigFeature.$", 0xc, true, 0xc1c744bc19f619a9 );                   
        SDK_FIXED_SIZE( details_staging_config_feature_t, 0xc );                   
    };                                     
};
#include "magic/details_staging_config_feature_t.end.hpp"
SDK_VERIFY( struct wil::details_staging_config_feature_t, 0xc );
