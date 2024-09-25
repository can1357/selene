#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/feature_usage_data_t.start.hpp"
namespace rtl
{
    // [struct _RTL_FEATURE_USAGE_DATA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_usage_data_t      
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t feature_id;      //{ +0x0000    +0x0000    +0x0000    } | .FeatureId
        _m01 uint16_t reporting_kind;  //{ +0x0004    +0x0004    +0x0004    } | .ReportingKind
                                     
        SDK_MAGIC_PROPERTIES( "_RTL_FEATURE_USAGE_DATA.$", 0x8, true, 0xc13481d66911b230 );               
        SDK_FIXED_SIZE( feature_usage_data_t, 0x8 );               
    };                               
};
#include "magic/feature_usage_data_t.end.hpp"
SDK_VERIFY( struct rtl::feature_usage_data_t, 0x8 );
