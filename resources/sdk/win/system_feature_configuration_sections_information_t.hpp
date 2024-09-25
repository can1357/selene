#pragma once
#include <sdkgen/support_library.hpp>
#include "system_feature_configuration_sections_information_entry_t.hpp"

#include "magic/system_feature_configuration_sections_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_FEATURE_CONFIGURATION_SECTIONS_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_feature_configuration_sections_information_t
    {                                                         
        using descriptors_t = sdk::array<struct win::system_feature_configuration_sections_information_entry_t, 3>;                     
                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                       
        _m00 uint64_t       overall_change_stamp;               //{ +0x0000    +0x0000    +0x0000    } | .OverallChangeStamp
        _m01 descriptors_t  descriptors;                        //{ +0x0008    +0x0008    +0x0008    } | .Descriptors
                                                              
        SDK_MAGIC_PROPERTIES( "_SYSTEM_FEATURE_CONFIGURATION_SECTIONS_INFORMATION.$", 0x50, true, 0x23a6f4a24183b34 );                     
        SDK_FIXED_SIZE( system_feature_configuration_sections_information_t, 0x50 );                     
    };                                                        
};
#include "magic/system_feature_configuration_sections_information_t.end.hpp"
SDK_VERIFY( struct win::system_feature_configuration_sections_information_t, 0x50 );
