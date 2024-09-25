#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/win32_memory_partition_information_t.start.hpp"
namespace win
{
    // [struct WIN32_MEMORY_PARTITION_INFORMATION]
    // => Windows 11
    //
    struct win32_memory_partition_information_t
    {                                          
        // Windows 11                          
        //                                     
        _m00 uint32_t flags;                     //{ +0x0000    } | .Flags
        _m01 uint32_t numa_node;                 //{ +0x0004    } | .NumaNode
        _m02 uint32_t channel;                   //{ +0x0008    } | .Channel
        _m03 uint32_t number_of_numa_nodes;      //{ +0x000c    } | .NumberOfNumaNodes
        _m04 uint64_t resident_available_pages;  //{ +0x0010    } | .ResidentAvailablePages
        _m05 uint64_t committed_pages;           //{ +0x0018    } | .CommittedPages
        _m06 uint64_t commit_limit;              //{ +0x0020    } | .CommitLimit
        _m07 uint64_t peak_commitment;           //{ +0x0028    } | .PeakCommitment
        _m08 uint64_t total_number_of_pages;     //{ +0x0030    } | .TotalNumberOfPages
        _m09 uint64_t available_pages;           //{ +0x0038    } | .AvailablePages
        _m10 uint64_t zero_pages;                //{ +0x0040    } | .ZeroPages
        _m11 uint64_t free_pages;                //{ +0x0048    } | .FreePages
        _m12 uint64_t standby_pages;             //{ +0x0050    } | .StandbyPages
        _m13 uint64_t maximum_commit_limit;      //{ +0x00d8    } | .MaximumCommitLimit
        _m14 uint32_t partition_id;              //{ +0x00e8    } | .PartitionId
                                               
        SDK_MAGIC_PROPERTIES( "WIN32_MEMORY_PARTITION_INFORMATION.$", 0x0, false, 0x313851423333e11b );                         
        SDK_FIXED_SIZE( win32_memory_partition_information_t, 0xf0 );                         
    };                                         
};
#include "magic/win32_memory_partition_information_t.end.hpp"
SDK_VERIFY( struct win::win32_memory_partition_information_t, 0xf0 );
