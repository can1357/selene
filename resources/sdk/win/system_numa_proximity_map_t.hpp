#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_numa_proximity_map_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_NUMA_PROXIMITY_MAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_numa_proximity_map_t  
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t node_proximity_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NodeProximityId
        _m01 uint16_t node_number;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NodeNumber
                                        
        SDK_MAGIC_PROPERTIES( "_SYSTEM_NUMA_PROXIMITY_MAP.$", 0x8, true, 0x41aeb5c128e7ad03 );                  
        SDK_FIXED_SIZE( system_numa_proximity_map_t, 0x8 );                  
    };                                  
};
#include "magic/system_numa_proximity_map_t.end.hpp"
SDK_VERIFY( struct win::system_numa_proximity_map_t, 0x8 );
