#pragma once
#include <sdkgen/support_library.hpp>
#include "system_secureboot_policy_information_t.hpp"

#include "magic/system_secureboot_policy_full_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_SECUREBOOT_POLICY_FULL_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_secureboot_policy_full_information_t                  
    {                                                                   
        using system_secureboot_policy_information_t = struct win::system_secureboot_policy_information_t;                   
                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                              
        _m00 system_secureboot_policy_information_t  policy_information;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PolicyInformation
        _m01 uint32_t                                policy_size;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PolicySize
        _m02 sdk::array<uint8_t, 1>                  policy;              //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Policy
                                                                        
        SDK_MAGIC_PROPERTIES( "_SYSTEM_SECUREBOOT_POLICY_FULL_INFORMATION.$", 0x20, true, 0x20099901157d4d4d );                   
        SDK_FIXED_SIZE( system_secureboot_policy_full_information_t, 0x20 );                   
    };                                                                  
};
#include "magic/system_secureboot_policy_full_information_t.end.hpp"
SDK_VERIFY( struct win::system_secureboot_policy_full_information_t, 0x20 );
