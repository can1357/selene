#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_partition_configuration_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_PARTITION_CONFIGURATION_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_partition_configuration_information_t             
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                          
        _m00 uint32_t                flags;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t                numa_node;                       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumaNode
        _m02 uint32_t                channel;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Channel
        _m03 uint32_t                number_of_numa_nodes;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .NumberOfNumaNodes
        _m04 uint64_t                resident_available_pages;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ResidentAvailablePages
        _m05 uint64_t                committed_pages;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CommittedPages
        _m06 uint64_t                commit_limit;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CommitLimit
        _m07 uint64_t                peak_commitment;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PeakCommitment
        _m08 uint64_t                total_number_of_pages;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TotalNumberOfPages
        _m09 uint64_t                available_pages;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .AvailablePages
        _m10 uint64_t                zero_pages;                      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ZeroPages
        _m11 uint64_t                free_pages;                      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .FreePages
        _m12 uint64_t                standby_pages;                   //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .StandbyPages
                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                          
        _m13 sdk::array<uint64_t, 8> standby_page_count_by_priority;  //{ +0x0058    +0x0058    +0x0058    } | .StandbyPageCountByPriority
        _m14 sdk::array<uint64_t, 8> repurposed_pages_by_priority;    //{ +0x0098    +0x0098    +0x0098    } | .RepurposedPagesByPriority
        _m15 uint64_t                maximum_commit_limit;            //{ +0x00d8    +0x00d8    +0x00d8    } | .MaximumCommitLimit
        _m16 uint32_t                partition_id;                    //{ +0x00e8    +0x00e8    +0x00e8    } | .PartitionId
                                                                    
        // Windows 10 v2004, Windows 10 v20H2                               
        //                                                          
        _m17 uint64_t                donated_pages_to_partitions;     //{ +0x00e0    +0x00e0    } | .DonatedPagesToPartitions
                                                                    
        SDK_MAGIC_PROPERTIES( "_MEMORY_PARTITION_CONFIGURATION_INFORMATION.$", 0xf0, true, 0xa6a7c339ab839108 );                               
        SDK_DYNAMIC_SIZE( memory_partition_configuration_information_t );                               
    };                                                              
};
#include "magic/memory_partition_configuration_information_t.end.hpp"
