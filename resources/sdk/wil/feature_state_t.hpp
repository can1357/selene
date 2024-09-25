#pragma once
#include <sdkgen/support_library.hpp>
#include "feature_enabled_state_t.hpp"
#include "feature_variant_payload_kind_t.hpp"

#include "magic/feature_state_t.start.hpp"
namespace wil
{
    // [struct wil_FeatureState]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_state_t                                                     
    {                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                     
        _m00 enum wil::feature_enabled_state_t        enabled_state;             //{ +0x0000    +0x0000    +0x0000    } | .enabledState
        _m01 uint8_t                                  variant;                   //{ +0x0004    +0x0004    +0x0004    } | .variant
        _m02 enum wil::feature_variant_payload_kind_t payload_kind;              //{ +0x0008    +0x0008    +0x0008    } | .payloadKind
        _m03 uint32_t                                 payload;                   //{ +0x000c    +0x000c    +0x000c    } | .payload
        _m04 int32_t                                  has_notification;          //{ +0x0010    +0x0010    +0x0010    } | .hasNotification
                                                                               
        // Windows 10 v2004, Windows 10 v20H2                                  
        //                                                                     
        _m05 int32_t                                  is_variant_configuration;  //{ +0x0014    +0x0014    } | .isVariantConfiguration
                                                                               
        // Windows 11                                                          
        //                                                                     
        _m06 int32_t                                  is_wexp_configuration;     //{ +0x0014    } | .isWexpConfiguration
                                                                               
        SDK_MAGIC_PROPERTIES( "wil_FeatureState.$", 0x18, true, 0xb1923776ac3377ad );                         
        SDK_FIXED_SIZE( feature_state_t, 0x18 );                               
    };                                                                         
};
#include "magic/feature_state_t.end.hpp"
SDK_VERIFY( struct wil::feature_state_t, 0x18 );
