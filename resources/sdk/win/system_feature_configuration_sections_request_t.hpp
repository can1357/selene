#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_feature_configuration_sections_request_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_FEATURE_CONFIGURATION_SECTIONS_REQUEST]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_feature_configuration_sections_request_t  
    {                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                  
        _m00 sdk::array<uint64_t, 3> previous_change_stamps;  //{ +0x0000    +0x0000    +0x0000    } | .PreviousChangeStamps
                                                            
        SDK_MAGIC_PROPERTIES( "_SYSTEM_FEATURE_CONFIGURATION_SECTIONS_REQUEST.$", 0x18, true, 0xff80aebceaad0320 );                       
        SDK_FIXED_SIZE( system_feature_configuration_sections_request_t, 0x18 );                       
    };                                                      
};
#include "magic/system_feature_configuration_sections_request_t.end.hpp"
SDK_VERIFY( struct win::system_feature_configuration_sections_request_t, 0x18 );
