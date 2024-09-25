#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_secureboot_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_SECUREBOOT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_secureboot_information_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                               
        _m00 uint8_t secure_boot_enabled;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SecureBootEnabled
        _m01 uint8_t secure_boot_capable;   //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .SecureBootCapable
                                          
        SDK_MAGIC_PROPERTIES( "_SYSTEM_SECUREBOOT_INFORMATION.$", 0x2, true, 0x168d5d1e3e1ffa88 );                    
        SDK_FIXED_SIZE( system_secureboot_information_t, 0x2 );                    
    };                                    
};
#include "magic/system_secureboot_information_t.end.hpp"
SDK_VERIFY( struct win::system_secureboot_information_t, 0x2 );
