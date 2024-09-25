#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_feature_configuration_sections_information_entry_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_FEATURE_CONFIGURATION_SECTIONS_INFORMATION_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_feature_configuration_sections_information_entry_t
    {                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint64_t change_stamp;                                   //{ +0x0000    +0x0000    +0x0000    } | .ChangeStamp
        _m01 void*    section;                                        //{ +0x0008    +0x0008    +0x0008    } | .Section
        _m02 uint64_t size;                                           //{ +0x0010    +0x0010    +0x0010    } | .Size
                                                                    
        SDK_MAGIC_PROPERTIES( "_SYSTEM_FEATURE_CONFIGURATION_SECTIONS_INFORMATION_ENTRY.$", 0x18, true, 0x74bc7152e9c9bf8 );             
        SDK_FIXED_SIZE( system_feature_configuration_sections_information_entry_t, 0x18 );             
    };                                                              
};
#include "magic/system_feature_configuration_sections_information_entry_t.end.hpp"
SDK_VERIFY( struct win::system_feature_configuration_sections_information_entry_t, 0x18 );
