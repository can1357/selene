#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_fs_volume_information_t.start.hpp"
namespace win
{
    // [struct _FILE_FS_VOLUME_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_fs_volume_information_t                  
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                               
        _m00 int64_t                volume_creation_time;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VolumeCreationTime
        _m01 uint32_t               volume_serial_number;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .VolumeSerialNumber
        _m02 uint32_t               volume_label_length;   //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .VolumeLabelLength
        _m03 uint8_t                supports_objects;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SupportsObjects
        _m04 sdk::array<wchar_t, 1> volume_label;          //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .VolumeLabel
                                                         
        SDK_NONVOL_PROPERTIES( "_FILE_FS_VOLUME_INFORMATION.$", 0x18, true, 0xec3debfbfdac6af7 );                     
        SDK_FIXED_SIZE( file_fs_volume_information_t, 0x18 );                     
    };                                                   
};
#include "magic/file_fs_volume_information_t.end.hpp"
SDK_VERIFY( struct win::file_fs_volume_information_t, 0x18 );
