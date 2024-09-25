#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/feature_configuration_t.hpp"

#include "magic/system_feature_configuration_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_FEATURE_CONFIGURATION_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_feature_configuration_information_t          
    {                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                     
        _m00 uint64_t                            change_stamp;   //{ +0x0000    +0x0000    +0x0000    } | .ChangeStamp
        _m01 struct rtl::feature_configuration_t configuration;  //{ +0x0008    +0x0008    +0x0008    } | .Configuration
                                                               
        SDK_MAGIC_PROPERTIES( "_SYSTEM_FEATURE_CONFIGURATION_INFORMATION.$", 0x18, true, 0x5665698006f9b4f4 );              
        SDK_FIXED_SIZE( system_feature_configuration_information_t, 0x18 );              
    };                                                         
};
#include "magic/system_feature_configuration_information_t.end.hpp"
SDK_VERIFY( struct win::system_feature_configuration_information_t, 0x18 );
