#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/logical_disk_extents_t.start.hpp"
namespace win
{
    // [struct _LOGICAL_DISK_EXTENTS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct logical_disk_extents_t                             
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                    
        _m00 uint64_t                starting_offset;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartingOffset
        _m01 uint64_t                partition_size;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PartitionSize
        _m02 uint32_t                disk_number;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DiskNumber
        _m03 uint32_t                size;                      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Size
        _m04 uint32_t                drive_type;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DriveType
        _m05 sdk::array<wchar_t, 4>  drive_letter_string;       //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .DriveLetterString
        _m06 uint32_t                partition_number;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PartitionNumber
        _m07 uint32_t                sectors_per_cluster;       //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .SectorsPerCluster
        _m08 uint32_t                bytes_per_sector;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .BytesPerSector
        _m09 int64_t                 number_of_free_clusters;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .NumberOfFreeClusters
        _m10 int64_t                 total_number_of_clusters;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .TotalNumberOfClusters
        _m11 sdk::array<wchar_t, 16> file_system_type;          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .FileSystemType
        _m12 uint32_t                volume_ext;                //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .VolumeExt
                                                              
        SDK_MAGIC_PROPERTIES( "_LOGICAL_DISK_EXTENTS.$", 0x70, true, 0x7d5001034f437ddf );                         
        SDK_FIXED_SIZE( logical_disk_extents_t, 0x70 );                         
    };                                                        
};
#include "magic/logical_disk_extents_t.end.hpp"
SDK_VERIFY( struct win::logical_disk_extents_t, 0x70 );
