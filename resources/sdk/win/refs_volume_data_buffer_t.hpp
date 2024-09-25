#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/refs_volume_data_buffer_t.start.hpp"
namespace win
{
    // [struct REFS_VOLUME_DATA_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct refs_volume_data_buffer_t                       
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                 
        _m00 uint32_t byte_count;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ByteCount
        _m01 uint32_t major_version;                         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MajorVersion
        _m02 uint32_t minor_version;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MinorVersion
        _m03 uint32_t bytes_per_physical_sector;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .BytesPerPhysicalSector
        _m04 int64_t  volume_serial_number;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VolumeSerialNumber
        _m05 int64_t  number_sectors;                        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NumberSectors
        _m06 int64_t  total_clusters;                        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TotalClusters
        _m07 int64_t  free_clusters;                         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FreeClusters
        _m08 int64_t  total_reserved;                        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TotalReserved
        _m09 uint32_t bytes_per_sector;                      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .BytesPerSector
        _m10 uint32_t bytes_per_cluster;                     //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .BytesPerCluster
        _m11 int64_t  maximum_size_of_resident_file;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .MaximumSizeOfResidentFile
                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                 
        _m12 uint16_t fast_tier_data_fill_ratio;             //{ +0x0048    +0x0048    +0x0048    } | .FastTierDataFillRatio
        _m13 uint16_t slow_tier_data_fill_ratio;             //{ +0x004a    +0x004a    +0x004a    } | .SlowTierDataFillRatio
        _m14 uint32_t destages_fast_tier_to_slow_tier_rate;  //{ +0x004c    +0x004c    +0x004c    } | .DestagesFastTierToSlowTierRate
                                                           
        SDK_MAGIC_PROPERTIES( "REFS_VOLUME_DATA_BUFFER.$", 0x98, true, 0x7868388914c0ef69 );                                     
        SDK_FIXED_SIZE( refs_volume_data_buffer_t, 0x98 );                                     
    };                                                     
};
#include "magic/refs_volume_data_buffer_t.end.hpp"
SDK_VERIFY( struct win::refs_volume_data_buffer_t, 0x98 );
