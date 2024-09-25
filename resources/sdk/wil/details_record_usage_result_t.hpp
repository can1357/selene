#pragma once
#include <sdkgen/support_library.hpp>
#include "details_service_reporting_kind_t.hpp"

#include "magic/details_record_usage_result_t.start.hpp"
namespace wil
{
    // [struct wil_details_RecordUsageResult]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct details_record_usage_result_t                                         
    {                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                       
        _m00 int32_t                                    queue_background;          //{ +0x0000    +0x0000    +0x0000    } | .queueBackground
        _m01 uint32_t                                   count_immediate;           //{ +0x0004    +0x0004    +0x0004    } | .countImmediate
        _m02 enum wil::details_service_reporting_kind_t kind_immediate;            //{ +0x0008    +0x0008    +0x0008    } | .kindImmediate
        _m03 uint32_t                                   payload_id;                //{ +0x000c    +0x000c    +0x000c    } | .payloadId
        _m04 int32_t                                    ignored_use;               //{ +0x0010    +0x0010    +0x0010    } | .ignoredUse
                                                                                 
        // Windows 10 v2004, Windows 10 v20H2                                    
        //                                                                       
        _m05 int32_t                                    is_variant_configuration;  //{ +0x0014    +0x0014    } | .isVariantConfiguration
                                                                                 
        // Windows 11                                                            
        //                                                                       
        _m06 int32_t                                    is_wexp_configuration;     //{ +0x0014    } | .isWexpConfiguration
                                                                                 
        SDK_MAGIC_PROPERTIES( "wil_details_RecordUsageResult.$", 0x18, true, 0x7fe1cb2ded30de06 );                         
        SDK_FIXED_SIZE( details_record_usage_result_t, 0x18 );                         
    };                                                                           
};
#include "magic/details_record_usage_result_t.end.hpp"
SDK_VERIFY( struct wil::details_record_usage_result_t, 0x18 );
