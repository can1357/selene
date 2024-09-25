#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_portable_workspace_efi_launcher_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PORTABLE_WORKSPACE_EFI_LAUNCHER_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_portable_workspace_efi_launcher_information_t
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                
        _m00 uint8_t efi_launcher_enabled;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EfiLauncherEnabled
                                                               
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PORTABLE_WORKSPACE_EFI_LAUNCHER_INFORMATION.$", 0x1, true, 0x36fe5bc3efcecec4 );                     
        SDK_FIXED_SIZE( system_portable_workspace_efi_launcher_information_t, 0x1 );                     
    };                                                         
};
#include "magic/system_portable_workspace_efi_launcher_information_t.end.hpp"
SDK_VERIFY( struct win::system_portable_workspace_efi_launcher_information_t, 0x1 );
