#pragma once
#include <sdkgen/support_library.hpp>
#include "details_staging_config_wnf_state_name_t.hpp"

#include "magic/details_staging_config_usage_trigger_t.start.hpp"
namespace wil
{
    // [struct wil_details_StagingConfigUsageTrigger]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct details_staging_config_usage_trigger_t
    {                                            
        using trigger_t = struct wil::details_staging_config_wnf_state_name_t;                       
                                                 
        // Windows 10 v2004, Windows 10 v20H2                       
        //                                     
        _m00 uint32_t   feature_id;                //{ +0x0000    +0x0000    } | .featureId
        _m01 trigger_t  trigger;                   //{ +0x0004    +0x0004    } | .trigger
        _m02 uint16_t   service_reporting_kind;    //{ +0x000c@0  +0x000c@0  } | .serviceReportingKind
        _m03 uint1_t    is_variant_config;         //{ +0x000c@16 +0x000c@16 } | .isVariantConfig
                                                 
        SDK_MAGIC_PROPERTIES( "wil_details_StagingConfigUsageTrigger.$", 0x10, true, 0xcbb27b7f955f4746 );                       
        SDK_FIXED_SIZE( details_staging_config_usage_trigger_t, 0x10 );                       
    };                                           
};
#include "magic/details_staging_config_usage_trigger_t.end.hpp"
SDK_VERIFY( struct wil::details_staging_config_usage_trigger_t, 0x10 );
