#pragma once
#include <sdkgen/support_library.hpp>
#include "loader_feature_configuration_diagnostic_information_t.hpp"

#include "magic/loader_feature_configuration_information_t.start.hpp"
namespace nt
{
    // [struct _LOADER_FEATURE_CONFIGURATION_INFORMATION]
    // => Windows 11, Windows 10 v20H2
    //
    struct loader_feature_configuration_information_t                    
    {                                                                    
        using diagnostic_information_t = struct nt::loader_feature_configuration_diagnostic_information_t;                                  
                                                                         
        // Windows 11, Windows 10 v20H2                                  
        //                                                               
        _m00 void*                     feature_configuration_buffer;       //{ +0x0000    +0x0000    } | .FeatureConfigurationBuffer
        _m01 uint64_t                  feature_configuration_buffer_size;  //{ +0x0008    +0x0008    } | .FeatureConfigurationBufferSize
        _m02 void*                     usage_subscription_buffer;          //{ +0x0010    +0x0010    } | .UsageSubscriptionBuffer
        _m03 uint64_t                  usage_subscription_buffer_size;     //{ +0x0018    +0x0018    } | .UsageSubscriptionBufferSize
        _m04 void*                     delayed_usage_report_buffer;        //{ +0x0020    +0x0020    } | .DelayedUsageReportBuffer
        _m05 uint64_t                  delayed_usage_report_buffer_size;   //{ +0x0028    +0x0028    } | .DelayedUsageReportBufferSize
        _m06 diagnostic_information_t  diagnostic_information;             //{ +0x0030    +0x0030    } | .DiagnosticInformation
                                                                         
        SDK_MAGIC_PROPERTIES( "_LOADER_FEATURE_CONFIGURATION_INFORMATION.$", 0x48, true, 0x204bb153742f9c40 );                                  
        SDK_FIXED_SIZE( loader_feature_configuration_information_t, 0x48 );                                  
    };                                                                   
};
#include "magic/loader_feature_configuration_information_t.end.hpp"
SDK_VERIFY( struct nt::loader_feature_configuration_information_t, 0x48 );
