#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/system_secureboot_policy_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_SECUREBOOT_POLICY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_secureboot_policy_information_t
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                      
        _m00 struct nt::guid_t policy_publisher;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PolicyPublisher
        _m01 uint32_t          policy_version;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PolicyVersion
        _m02 uint32_t          policy_options;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .PolicyOptions
                                                 
        SDK_MAGIC_PROPERTIES( "_SYSTEM_SECUREBOOT_POLICY_INFORMATION.$", 0x18, true, 0x81f79d32521bb976 );                 
        SDK_FIXED_SIZE( system_secureboot_policy_information_t, 0x18 );                 
    };                                           
};
#include "magic/system_secureboot_policy_information_t.end.hpp"
SDK_VERIFY( struct win::system_secureboot_policy_information_t, 0x18 );
