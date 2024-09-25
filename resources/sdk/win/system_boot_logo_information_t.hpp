#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_boot_logo_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_BOOT_LOGO_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_boot_logo_information_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t flags;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t bitmap_offset;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BitmapOffset
                                         
        SDK_MAGIC_PROPERTIES( "_SYSTEM_BOOT_LOGO_INFORMATION.$", 0x8, true, 0x80d1967f5e59c626 );              
        SDK_FIXED_SIZE( system_boot_logo_information_t, 0x8 );              
    };                                   
};
#include "magic/system_boot_logo_information_t.end.hpp"
SDK_VERIFY( struct win::system_boot_logo_information_t, 0x8 );
