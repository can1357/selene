#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/details_staging_config_header_properties_t.start.hpp"
namespace wil
{
    // [struct wil_details_StagingConfigHeaderProperties]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct details_staging_config_header_properties_t
    {                                                
        // Windows 10 v2004, Windows 10 v20H2                     
        //                                
        _m00 uint1_t ignore_service_state;             //{ +0x0000@0  +0x0000@0  } | .ignoreServiceState
        _m01 uint1_t ignore_user_state;                //{ +0x0000@1  +0x0000@1  } | .ignoreUserState
        _m02 uint1_t ignore_test_state;                //{ +0x0000@2  +0x0000@2  } | .ignoreTestState
        _m03 uint1_t ignore_variants;                  //{ +0x0000@3  +0x0000@3  } | .ignoreVariants
                                                     
        SDK_MAGIC_PROPERTIES( "wil_details_StagingConfigHeaderProperties.$", 0x4, true, 0x34e7c4f85e38ca6f );                     
        SDK_FIXED_SIZE( details_staging_config_header_properties_t, 0x4 );                     
    };                                               
};
#include "magic/details_staging_config_header_properties_t.end.hpp"
SDK_VERIFY( struct wil::details_staging_config_header_properties_t, 0x4 );
