#pragma once
#include <sdkgen/support_library.hpp>
#include "feature_configuration_t.hpp"

#include "magic/feature_configuration_table_t.start.hpp"
namespace rtl
{
    // [struct _RTL_FEATURE_CONFIGURATION_TABLE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_configuration_table_t
    {                                   
        using features_t = sdk::array<struct rtl::feature_configuration_t, 1>;              
                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                             
        _m00 uint32_t    feature_count;   //{ +0x0000    +0x0000    +0x0000    } | .FeatureCount
        _m01 features_t  features;        //{ +0x0004    +0x0004    +0x0004    } | .Features
                                        
        SDK_MAGIC_PROPERTIES( "_RTL_FEATURE_CONFIGURATION_TABLE.$", 0x10, true, 0xb46ad72aa3040996 );              
        SDK_FIXED_SIZE( feature_configuration_table_t, 0x10 );              
    };                                  
};
#include "magic/feature_configuration_table_t.end.hpp"
SDK_VERIFY( struct rtl::feature_configuration_table_t, 0x10 );
