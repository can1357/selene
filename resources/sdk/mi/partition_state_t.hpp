#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/bitmap_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "../rtl/bitmap_ex_t.hpp"

#include "magic/partition_state_t.start.hpp"
namespace mi
{
    struct huge_pfn_t;
    struct partition_t;

    // [struct _MI_PARTITION_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct partition_state_t                                                                          
    {                                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
        //                                                                                            
        _m00 uint64_t                                partition_lock;                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PartitionLock
        _m01 struct ex::push_lock_t                  partition_id_lock;                                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PartitionIdLock
        _m02 uint64_t                                initial_partition_id_bits;                         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InitialPartitionIdBits
        _m03 nt::list_entry_t                        partition_list;                                    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PartitionList
        _m04 struct rtl::bitmap_t*                   partition_id_bitmap;                               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PartitionIdBitmap
        _m05 struct rtl::bitmap_t                    initial_partition_id_bitmap;                       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .InitialPartitionIdBitmap
        _m06 sdk::array<struct mi::partition_t*, 1>  temp_partition_pointers;                           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .TempPartitionPointers
        _m07 struct mi::partition_t**                partition;                                         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Partition
        _m08 uint32_t                                cross_partition_denials;                           //{ +0x0058    +0x0058    +0x0a50    +0x0058    } | .CrossPartitionDenials
                                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
        //                                                                                            
        _m09 uint8_t                                 multiple_partitions_exist;                         //{ +0x005c    +0x0a54    +0x005c    } | .MultiplePartitionsExist
        _m10 struct rtl::bitmap_ex_t                 huge_io_pfn_bit_map;                               //{ +0x0060    +0x0a60    +0x0060    } | .HugeIoPfnBitMap
        _m11 struct mi::huge_pfn_t*                  huge_pfn_database;                                 //{ +0x0070    +0x0a70    +0x0070    } | .HugePfnDatabase
        _m12 uint64_t                                huge_ranges_lock;                                  //{ +0x0080    +0x0a80    +0x0080    } | .HugeRangesLock
                                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                                 
        //                                                                                            
        _m13 uint64_t                                total_pages_in_child_partitions;                   //{ +0x0050    +0x0050    +0x0050    } | .TotalPagesInChildPartitions
                                                                                                      
        // Windows 11                                                                                 
        //                                                                                            
        _m14 sdk::array<uint64_t, 64>                total_node_pages_in_child_partitions;              //{ +0x0050    } | .TotalNodePagesInChildPartitions
        _m15 sdk::array<sdk::array<uint64_t, 4>, 64> total_special_purpose_memory_in_child_partitions;  //{ +0x0250    } | .TotalSpecialPurposeMemoryInChildPartitions
        _m16 uint64_t                                child_partition_bytes;                             //{ +0x0a58    } | .ChildPartitionBytes
        _m17 uint32_t*                               huge_pfn_lock_array;                               //{ +0x0a78    } | .HugePfnLockArray
                                                                                                      
        SDK_MAGIC_PROPERTIES( "_MI_PARTITION_STATE.$", 0xc0, true, 0x977e060148f1894c );                                                 
        SDK_DYNAMIC_SIZE( partition_state_t );                                                        
    };                                                                                                
};
#include "magic/partition_state_t.end.hpp"
