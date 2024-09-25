#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/partition_information_t.start.hpp"
namespace nt
{
    // [struct _PARTITION_INFORMATION]
    // => WDK 10 (NV)
    //
    struct partition_information_t         
    {                                      
        // WDK 10                          
        //                                 
        _m00 int64_t  starting_offset;       //{ +0x0000    } | .StartingOffset
        _m01 int64_t  partition_length;      //{ +0x0008    } | .PartitionLength
        _m02 uint32_t hidden_sectors;        //{ +0x0010    } | .HiddenSectors
        _m03 uint32_t partition_number;      //{ +0x0014    } | .PartitionNumber
        _m04 uint8_t  partition_type;        //{ +0x0018    } | .PartitionType
        _m05 uint8_t  boot_indicator;        //{ +0x0019    } | .BootIndicator
        _m06 uint8_t  recognized_partition;  //{ +0x001a    } | .RecognizedPartition
        _m07 uint8_t  rewrite_partition;     //{ +0x001b    } | .RewritePartition
                                           
        SDK_NONVOL_PROPERTIES( "_PARTITION_INFORMATION.$", 0x0, false, 0x83ec84c98a122a35 );                     
        SDK_FIXED_SIZE( partition_information_t, 0x20 );                     
    };                                     
};
#include "magic/partition_information_t.end.hpp"
SDK_VERIFY( struct nt::partition_information_t, 0x20 );
