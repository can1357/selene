#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/record_t.start.hpp"
namespace boot
{
    // [struct _BOOT_RECORD]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct record_t                       
    {                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint64_t boot_flags;           //{ +0x0000    +0x0000    +0x0000    } | .BootFlags
        _m01 uint32_t firmware_type;        //{ +0x0008    +0x0008    +0x0008    } | .FirmwareType
        _m02 uint8_t  secure_boot_enabled;  //{ +0x000c    +0x000c    +0x000c    } | .SecureBootEnabled
        _m03 uint8_t  secure_boot_capable;  //{ +0x000d    +0x000d    +0x000d    } | .SecureBootCapable
                                          
        SDK_MAGIC_PROPERTIES( "_BOOT_RECORD.$", 0x10, true, 0x5fe6a25ed0f9b462 );                    
        SDK_FIXED_SIZE( record_t, 0x10 );                    
    };                                    
};
#include "magic/record_t.end.hpp"
SDK_VERIFY( struct boot::record_t, 0x10 );
