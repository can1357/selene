#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/details_staging_config_wnf_state_name_t.start.hpp"
namespace wil
{
    // [struct wil_details_StagingConfigWnfStateName]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct details_staging_config_wnf_state_name_t
    {                                             
        // Windows 10 v2004, Windows 10 v20H2     
        //                                
        _m00 sdk::array<uint32_t, 2> data;          //{ +0x0000    +0x0000    } | .Data
                                                  
        SDK_MAGIC_PROPERTIES( "wil_details_StagingConfigWnfStateName.$", 0x8, true, 0x51801c4f5584bda5 );     
        SDK_FIXED_SIZE( details_staging_config_wnf_state_name_t, 0x8 );     
    };                                            
};
#include "magic/details_staging_config_wnf_state_name_t.end.hpp"
SDK_VERIFY( struct wil::details_staging_config_wnf_state_name_t, 0x8 );
