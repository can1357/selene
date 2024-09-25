#pragma once
#include <sdkgen/support_library.hpp>
#include "feature_enabled_state_t.hpp"
#include "feature_variant_payload_kind_t.hpp"
#include "details_feature_test_state_kind_t.hpp"

#include "magic/details_feature_test_state_t.start.hpp"
namespace wil
{
    struct details_feature_test_state_t;

    // [struct wil_details_FeatureTestState]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct details_feature_test_state_t                               
    {                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                            
        _m00 enum wil::details_feature_test_state_kind_t kind;          //{ +0x0000    +0x0000    +0x0000    } | .kind
        _m01 uint32_t                                    feature_id;    //{ +0x0004    +0x0004    +0x0004    } | .featureId
        _m02 enum wil::feature_enabled_state_t           state;         //{ +0x0008    +0x0008    +0x0008    } | .state
        _m03 uint8_t                                     variant;       //{ +0x000c    +0x000c    +0x000c    } | .variant
        _m04 uint32_t                                    payload;       //{ +0x0010    +0x0010    +0x0010    } | .payload
        _m05 enum wil::feature_variant_payload_kind_t    payload_kind;  //{ +0x0014    +0x0014    +0x0014    } | .payloadKind
        _m06 struct wil::details_feature_test_state_t*   next;          //{ +0x0018    +0x0018    +0x0018    } | .next
                                                                      
        SDK_MAGIC_PROPERTIES( "wil_details_FeatureTestState.$", 0x20, true, 0x2d9210fdd4c5a3d3 );             
        SDK_FIXED_SIZE( details_feature_test_state_t, 0x20 );             
    };                                                                
};
#include "magic/details_feature_test_state_t.end.hpp"
SDK_VERIFY( struct wil::details_feature_test_state_t, 0x20 );
