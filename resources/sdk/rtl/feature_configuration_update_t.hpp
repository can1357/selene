#pragma once
#include <sdkgen/support_library.hpp>
#include "feature_enabled_state_t.hpp"
#include "feature_variant_payload_kind_t.hpp"
#include "feature_enabled_state_options_t.hpp"
#include "feature_configuration_priority_t.hpp"
#include "feature_configuration_operation_t.hpp"

#include "magic/feature_configuration_update_t.start.hpp"
namespace rtl
{
    // [struct _RTL_FEATURE_CONFIGURATION_UPDATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_configuration_update_t                                      
    {                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                     
        _m00 uint32_t                                    feature_id;             //{ +0x0000    +0x0000    +0x0000    } | .FeatureId
        _m01 enum rtl::feature_configuration_priority_t  priority;               //{ +0x0004    +0x0004    +0x0004    } | .Priority
        _m02 enum rtl::feature_enabled_state_t           enabled_state;          //{ +0x0008    +0x0008    +0x0008    } | .EnabledState
        _m03 enum rtl::feature_enabled_state_options_t   enabled_state_options;  //{ +0x000c    +0x000c    +0x000c    } | .EnabledStateOptions
        _m04 uint8_t                                     variant;                //{ +0x0010    +0x0010    +0x0010    } | .Variant
        _m05 enum rtl::feature_variant_payload_kind_t    variant_payload_kind;   //{ +0x0014    +0x0014    +0x0014    } | .VariantPayloadKind
        _m06 uint32_t                                    variant_payload;        //{ +0x0018    +0x0018    +0x0018    } | .VariantPayload
        _m07 enum rtl::feature_configuration_operation_t operation;              //{ +0x001c    +0x001c    +0x001c    } | .Operation
                                                                               
        SDK_MAGIC_PROPERTIES( "_RTL_FEATURE_CONFIGURATION_UPDATE.$", 0x20, true, 0x8b879ee5db7317e4 );                      
        SDK_FIXED_SIZE( feature_configuration_update_t, 0x20 );                      
    };                                                                         
};
#include "magic/feature_configuration_update_t.end.hpp"
SDK_VERIFY( struct rtl::feature_configuration_update_t, 0x20 );
