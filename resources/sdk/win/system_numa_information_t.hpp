#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/group_affinity_t.hpp"

#include "magic/system_numa_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_NUMA_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_numa_information_t                                                      
    {                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                                
        _m00 uint32_t                                    highest_node_number;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HighestNodeNumber
        _m01 sdk::array<struct nt::group_affinity_t, 64> active_processors_group_affinity;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ActiveProcessorsGroupAffinity
        _m02 sdk::array<uint64_t, 64>                    available_memory;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AvailableMemory
                                                                                          
        SDK_MAGIC_PROPERTIES( "_SYSTEM_NUMA_INFORMATION.$", 0x408, true, 0xaf1e7666382541d7 );                                 
        SDK_FIXED_SIZE( system_numa_information_t, 0x408 );                                 
    };                                                                                    
};
#include "magic/system_numa_information_t.end.hpp"
SDK_VERIFY( struct win::system_numa_information_t, 0x408 );
