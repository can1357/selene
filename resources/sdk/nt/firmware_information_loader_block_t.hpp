#pragma once
#include <sdkgen/support_library.hpp>
#include "pcat_firmware_information_t.hpp"
#include "../efi/firmware_information_t.hpp"

#include "magic/firmware_information_loader_block_t.start.hpp"
namespace nt
{
    // [struct _FIRMWARE_INFORMATION_LOADER_BLOCK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct firmware_information_loader_block_t                                            
    {                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                
        _m00 uint1_t                                firmware_type_uefi;                     //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .FirmwareTypeUefi
        _m01 uint1_t                                efi_runtime_use_ium;                    //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .EfiRuntimeUseIum
        _m02 uint1_t                                efi_runtime_page_protection_supported;  //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .EfiRuntimePageProtectionSupported
        _m03 struct efi::firmware_information_t     efi_information;                        //{ +0x0008    +0x0008    +0x0008    } | .EfiInformation
        _m04 struct nt::pcat_firmware_information_t pcat_information;                       //{ +0x0008    +0x0008    +0x0008    } | .PcatInformation
                                                                                          
        SDK_MAGIC_PROPERTIES( "_FIRMWARE_INFORMATION_LOADER_BLOCK.$", 0x40, true, 0x157dffbd9e37f338 );                                      
        SDK_FIXED_SIZE( firmware_information_loader_block_t, 0x40 );                                      
    };                                                                                    
};
#include "magic/firmware_information_loader_block_t.end.hpp"
SDK_VERIFY( struct nt::firmware_information_loader_block_t, 0x40 );
