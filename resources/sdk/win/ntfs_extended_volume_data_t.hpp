#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ntfs_extended_volume_data_t.start.hpp"
namespace win
{
    // [struct NTFS_EXTENDED_VOLUME_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ntfs_extended_volume_data_t             
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 uint32_t byte_count;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ByteCount
        _m01 uint16_t major_version;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MajorVersion
        _m02 uint16_t minor_version;                 //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .MinorVersion
        _m03 uint32_t bytes_per_physical_sector;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BytesPerPhysicalSector
        _m04 uint16_t lfs_major_version;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .LfsMajorVersion
        _m05 uint16_t lfs_minor_version;             //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .LfsMinorVersion
        _m06 uint32_t max_device_trim_extent_count;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaxDeviceTrimExtentCount
        _m07 uint32_t max_device_trim_byte_count;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .MaxDeviceTrimByteCount
        _m08 uint32_t max_volume_trim_extent_count;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MaxVolumeTrimExtentCount
        _m09 uint32_t max_volume_trim_byte_count;    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .MaxVolumeTrimByteCount
                                                   
        SDK_MAGIC_PROPERTIES( "NTFS_EXTENDED_VOLUME_DATA.$", 0x20, true, 0xcc770bd2a20be242 );                             
        SDK_FIXED_SIZE( ntfs_extended_volume_data_t, 0x20 );                             
    };                                             
};
#include "magic/ntfs_extended_volume_data_t.end.hpp"
SDK_VERIFY( struct win::ntfs_extended_volume_data_t, 0x20 );
