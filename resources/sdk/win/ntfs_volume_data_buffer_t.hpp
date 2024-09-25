#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ntfs_volume_data_buffer_t.start.hpp"
namespace win
{
    // [struct NTFS_VOLUME_DATA_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ntfs_volume_data_buffer_t                   
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                             
        _m00 int64_t  volume_serial_number;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VolumeSerialNumber
        _m01 int64_t  number_sectors;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberSectors
        _m02 int64_t  total_clusters;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TotalClusters
        _m03 int64_t  free_clusters;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FreeClusters
        _m04 int64_t  total_reserved;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TotalReserved
        _m05 uint32_t bytes_per_sector;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .BytesPerSector
        _m06 uint32_t bytes_per_cluster;                 //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .BytesPerCluster
        _m07 uint32_t bytes_per_file_record_segment;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .BytesPerFileRecordSegment
        _m08 uint32_t clusters_per_file_record_segment;  //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .ClustersPerFileRecordSegment
        _m09 int64_t  mft_valid_data_length;             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .MftValidDataLength
        _m10 int64_t  mft_start_lcn;                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .MftStartLcn
        _m11 int64_t  mft2_start_lcn;                    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Mft2StartLcn
        _m12 int64_t  mft_zone_start;                    //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .MftZoneStart
        _m13 int64_t  mft_zone_end;                      //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .MftZoneEnd
                                                       
        SDK_MAGIC_PROPERTIES( "NTFS_VOLUME_DATA_BUFFER.$", 0x60, true, 0xdcf0d94fa9c58130 );                                 
        SDK_FIXED_SIZE( ntfs_volume_data_buffer_t, 0x60 );                                 
    };                                                 
};
#include "magic/ntfs_volume_data_buffer_t.end.hpp"
SDK_VERIFY( struct win::ntfs_volume_data_buffer_t, 0x60 );
