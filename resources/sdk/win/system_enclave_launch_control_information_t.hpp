#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_enclave_launch_control_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_ENCLAVE_LAUNCH_CONTROL_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_enclave_launch_control_information_t     
    {                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                 
        _m00 sdk::array<uint8_t, 32> enclave_launch_signer;  //{ +0x0000    +0x0000    +0x0000    } | .EnclaveLaunchSigner
                                                           
        SDK_MAGIC_PROPERTIES( "_SYSTEM_ENCLAVE_LAUNCH_CONTROL_INFORMATION.$", 0x20, true, 0xdbe960a16389249c );                      
        SDK_FIXED_SIZE( system_enclave_launch_control_information_t, 0x20 );                      
    };                                                     
};
#include "magic/system_enclave_launch_control_information_t.end.hpp"
SDK_VERIFY( struct win::system_enclave_launch_control_information_t, 0x20 );
