#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_fs_persistent_volume_information_t.start.hpp"
namespace win
{
    // [struct _FILE_FS_PERSISTENT_VOLUME_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_fs_persistent_volume_information_t
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t volume_flags;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VolumeFlags
        _m01 uint32_t flag_mask;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .FlagMask
        _m02 uint32_t version;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Version
                                                  
        SDK_NONVOL_PROPERTIES( "_FILE_FS_PERSISTENT_VOLUME_INFORMATION.$", 0x10, true, 0xc9ea24cc47115dc0 );             
        SDK_FIXED_SIZE( file_fs_persistent_volume_information_t, 0x10 );             
    };                                            
};
#include "magic/file_fs_persistent_volume_information_t.end.hpp"
SDK_VERIFY( struct win::file_fs_persistent_volume_information_t, 0x10 );
