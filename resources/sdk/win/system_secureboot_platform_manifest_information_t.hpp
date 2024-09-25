#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_secureboot_platform_manifest_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_SECUREBOOT_PLATFORM_MANIFEST_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_secureboot_platform_manifest_information_t
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                 
        _m00 uint32_t               platform_manifest_size;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PlatformManifestSize
        _m01 sdk::array<uint8_t, 1> platform_manifest;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PlatformManifest
                                                            
        SDK_MAGIC_PROPERTIES( "_SYSTEM_SECUREBOOT_PLATFORM_MANIFEST_INFORMATION.$", 0x8, true, 0x772874f5ce625f67 );                       
        SDK_FIXED_SIZE( system_secureboot_platform_manifest_information_t, 0x8 );                       
    };                                                      
};
#include "magic/system_secureboot_platform_manifest_information_t.end.hpp"
SDK_VERIFY( struct win::system_secureboot_platform_manifest_information_t, 0x8 );
