#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_protection_level_information_t.start.hpp"
namespace win
{
    // [struct PROCESS_PROTECTION_LEVEL_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_protection_level_information_t
    {                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t protection_level;            //{ +0x0000    +0x0000    +0x0000    } | .ProtectionLevel
                                                 
        SDK_MAGIC_PROPERTIES( "PROCESS_PROTECTION_LEVEL_INFORMATION.$", 0x4, true, 0x11ed3f6d9b55ff89 );                 
        SDK_FIXED_SIZE( process_protection_level_information_t, 0x4 );                 
    };                                           
};
#include "magic/process_protection_level_information_t.end.hpp"
SDK_VERIFY( struct win::process_protection_level_information_t, 0x4 );
