#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/disk_grow_partition_t.start.hpp"
namespace nt
{
    // [struct _DISK_GROW_PARTITION]
    // => WDK 10 (NV)
    //
    struct disk_grow_partition_t       
    {                                  
        // WDK 10                      
        //                             
        _m00 uint32_t partition_number;  //{ +0x0000    } | .PartitionNumber
        _m01 int64_t  bytes_to_grow;     //{ +0x0008    } | .BytesToGrow
                                       
        SDK_NONVOL_PROPERTIES( "_DISK_GROW_PARTITION.$", 0x0, false, 0x4cf2b11d307b98d9 );                 
        SDK_FIXED_SIZE( disk_grow_partition_t, 0x10 );                 
    };                                 
};
#include "magic/disk_grow_partition_t.end.hpp"
SDK_VERIFY( struct nt::disk_grow_partition_t, 0x10 );
