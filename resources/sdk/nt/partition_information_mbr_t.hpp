#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/partition_information_mbr_t.start.hpp"
namespace nt
{
    // [struct _PARTITION_INFORMATION_MBR]
    // => WDK 10 (NV)
    //
    struct partition_information_mbr_t              
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint8_t           partition_type;        //{ +0x0000    } | .PartitionType
        _m01 uint8_t           boot_indicator;        //{ +0x0001    } | .BootIndicator
        _m02 uint8_t           recognized_partition;  //{ +0x0002    } | .RecognizedPartition
        _m03 uint32_t          hidden_sectors;        //{ +0x0004    } | .HiddenSectors
        _m04 struct nt::guid_t partition_id;          //{ +0x0008    } | .PartitionId
                                                    
        SDK_NONVOL_PROPERTIES( "_PARTITION_INFORMATION_MBR.$", 0x0, false, 0xf6de6e9dc8f1c1e2 );                     
        SDK_FIXED_SIZE( partition_information_mbr_t, 0x18 );                     
    };                                              
};
#include "magic/partition_information_mbr_t.end.hpp"
SDK_VERIFY( struct nt::partition_information_mbr_t, 0x18 );
