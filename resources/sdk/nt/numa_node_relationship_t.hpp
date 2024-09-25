#pragma once
#include <sdkgen/support_library.hpp>
#include "group_affinity_t.hpp"

#include "magic/numa_node_relationship_t.start.hpp"
namespace nt
{
    // [struct _NUMA_NODE_RELATIONSHIP]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct numa_node_relationship_t                                 
    {                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                          
        _m00 uint32_t                                   node_number;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NodeNumber
        _m01 struct nt::group_affinity_t                group_mask;   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .GroupMask
                                                                    
        // Windows 11                                               
        //                                                          
        _m02 uint16_t                                   group_count;  //{ +0x0016    } | .GroupCount
        _m03 sdk::array<struct nt::group_affinity_t, 1> group_masks;  //{ +0x0018    } | .GroupMasks
                                                                    
        SDK_NONVOL_PROPERTIES( "_NUMA_NODE_RELATIONSHIP.$", 0x28, true, 0x76ca6000ba714c93 );            
        SDK_FIXED_SIZE( numa_node_relationship_t, 0x28 );            
    };                                                              
};
#include "magic/numa_node_relationship_t.end.hpp"
SDK_VERIFY( struct nt::numa_node_relationship_t, 0x28 );
