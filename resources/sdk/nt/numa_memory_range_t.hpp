#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/numa_memory_range_t.start.hpp"
namespace nt
{
    // [struct _NUMA_MEMORY_RANGE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct numa_memory_range_t     
    {                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t proximity_id;  //{ +0x0000    +0x0000    +0x0000    } | .ProximityId
        _m01 uint64_t base_page;     //{ +0x0008    +0x0008    +0x0008    } | .BasePage
        _m02 uint64_t end_page;      //{ +0x0010    +0x0010    +0x0010    } | .EndPage
                                   
        SDK_MAGIC_PROPERTIES( "_NUMA_MEMORY_RANGE.$", 0x18, true, 0xd857e86403b299df );             
        SDK_FIXED_SIZE( numa_memory_range_t, 0x18 );             
    };                             
};
#include "magic/numa_memory_range_t.end.hpp"
SDK_VERIFY( struct nt::numa_memory_range_t, 0x18 );
