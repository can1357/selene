#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_system_disk_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_SYSTEM_DISK_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_system_disk_information_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                
        _m00 nt::unicode_view system_disk;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SystemDisk
                                           
        SDK_MAGIC_PROPERTIES( "_SYSTEM_SYSTEM_DISK_INFORMATION.$", 0x10, true, 0x78ccf62569e272dc );            
        SDK_FIXED_SIZE( system_system_disk_information_t, 0x10 );            
    };                                     
};
#include "magic/system_system_disk_information_t.end.hpp"
SDK_VERIFY( struct win::system_system_disk_information_t, 0x10 );
