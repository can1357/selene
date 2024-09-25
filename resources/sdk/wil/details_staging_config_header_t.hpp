#pragma once
#include <sdkgen/support_library.hpp>
#include "details_staging_config_header_properties_t.hpp"

#include "magic/details_staging_config_header_t.start.hpp"
namespace wil
{
    // [struct wil_details_StagingConfigHeader]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct details_staging_config_header_t                     
    {                                                          
        using session_properties_t = struct wil::details_staging_config_header_properties_t;                            
        using properties_t =         struct wil::details_staging_config_header_properties_t;                            
                                                               
        // Windows 10 v2004, Windows 10 v20H2                            
        //                                                     
        _m00 uint8_t               version;                      //{ +0x0000    +0x0000    } | .version
        _m01 uint8_t               version_minor;                //{ +0x0001    +0x0001    } | .versionMinor
        _m02 uint16_t              header_size_bytes;            //{ +0x0002    +0x0002    } | .headerSizeBytes
        _m03 uint16_t              feature_count;                //{ +0x0004    +0x0004    } | .featureCount
        _m04 uint16_t              feature_usage_trigger_count;  //{ +0x0006    +0x0006    } | .featureUsageTriggerCount
        _m05 session_properties_t  session_properties;           //{ +0x0008    +0x0008    } | .sessionProperties
        _m06 properties_t          properties;                   //{ +0x000c    +0x000c    } | .properties
                                                               
        SDK_MAGIC_PROPERTIES( "wil_details_StagingConfigHeader.$", 0x10, true, 0xa1b313327706f459 );                            
        SDK_FIXED_SIZE( details_staging_config_header_t, 0x10 );                            
    };                                                         
};
#include "magic/details_staging_config_header_t.end.hpp"
SDK_VERIFY( struct wil::details_staging_config_header_t, 0x10 );
