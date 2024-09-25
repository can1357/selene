#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_isolated_user_mode_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_ISOLATED_USER_MODE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_isolated_user_mode_information_t
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                      
        _m00 uint1_t   secure_kernel_running;       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SecureKernelRunning
        _m01 uint1_t   hvci_enabled;                //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .HvciEnabled
        _m02 uint1_t   hvci_strict_mode;            //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .HvciStrictMode
        _m03 uint1_t   debug_enabled;               //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .DebugEnabled
        _m04 uint1_t   firmware_page_protection;    //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .FirmwarePageProtection
        _m05 varuint_t spare_flags;                 //{ +0x0000@5  +0x0000@6  +0x0000@6  +0x0000@6  } | .SpareFlags
        _m06 uint1_t   trustlet_running;            //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .TrustletRunning
        _m07 varuint_t spare_flags2;                //{ +0x0001@1  +0x0001@2  +0x0001@3  +0x0001@2  } | .SpareFlags2
                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                      
        _m08 uint1_t   encryption_key_available;    //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .EncryptionKeyAvailable
        _m09 uint1_t   hvci_disable_allowed;        //{ +0x0001@1  +0x0001@1  +0x0001@1  } | .HvciDisableAllowed
                                                  
        // Windows 11                           
        //                                      
        _m10 uint1_t   hardware_enforced_vbs;       //{ +0x0001@2  } | .HardwareEnforcedVbs
                                                  
        SDK_MAGIC_PROPERTIES( "_SYSTEM_ISOLATED_USER_MODE_INFORMATION.$", 0x10, true, 0x15ae07f61090cf2d );                         
        SDK_FIXED_SIZE( system_isolated_user_mode_information_t, 0x10 );                         
    };                                            
};
#include "magic/system_isolated_user_mode_information_t.end.hpp"
SDK_VERIFY( struct win::system_isolated_user_mode_information_t, 0x10 );
