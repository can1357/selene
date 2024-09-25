#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/feature_configuration_type_t.hpp"

#include "magic/system_feature_configuration_query_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_FEATURE_CONFIGURATION_QUERY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_feature_configuration_query_t                        
    {                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                             
        _m00 enum rtl::feature_configuration_type_t configuration_type;  //{ +0x0000    +0x0000    +0x0000    } | .ConfigurationType
        _m01 uint32_t                               feature_id;          //{ +0x0004    +0x0004    +0x0004    } | .FeatureId
                                                                       
        SDK_MAGIC_PROPERTIES( "_SYSTEM_FEATURE_CONFIGURATION_QUERY.$", 0x8, true, 0x18fc920a5a7600d5 );                   
        SDK_FIXED_SIZE( system_feature_configuration_query_t, 0x8 );                   
    };                                                                 
};
#include "magic/system_feature_configuration_query_t.end.hpp"
SDK_VERIFY( struct win::system_feature_configuration_query_t, 0x8 );
