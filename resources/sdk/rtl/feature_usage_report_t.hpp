#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/feature_usage_report_t.start.hpp"
namespace rtl
{
    // [struct _RTL_FEATURE_USAGE_REPORT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_usage_report_t       
    {                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t feature_id;         //{ +0x0000    +0x0000    +0x0000    } | .FeatureId
        _m01 uint16_t reporting_kind;     //{ +0x0004    +0x0004    +0x0004    } | .ReportingKind
        _m02 uint16_t reporting_options;  //{ +0x0006    +0x0006    +0x0006    } | .ReportingOptions
                                        
        SDK_MAGIC_PROPERTIES( "_RTL_FEATURE_USAGE_REPORT.$", 0x8, true, 0xbd34033e318550a8 );                  
        SDK_FIXED_SIZE( feature_usage_report_t, 0x8 );                  
    };                                  
};
#include "magic/feature_usage_report_t.end.hpp"
SDK_VERIFY( struct rtl::feature_usage_report_t, 0x8 );
