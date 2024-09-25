#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_fs_volume_flags_information_t.start.hpp"
namespace win
{
    // [struct _FILE_FS_VOLUME_FLAGS_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_fs_volume_flags_information_t
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t flags;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
                                             
        SDK_NONVOL_PROPERTIES( "_FILE_FS_VOLUME_FLAGS_INFORMATION.$", 0x4, true, 0x76c75e0855451ffd );      
        SDK_FIXED_SIZE( file_fs_volume_flags_information_t, 0x4 );      
    };                                       
};
#include "magic/file_fs_volume_flags_information_t.end.hpp"
SDK_VERIFY( struct win::file_fs_volume_flags_information_t, 0x4 );
