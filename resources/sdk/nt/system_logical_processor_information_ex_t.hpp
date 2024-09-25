#pragma once
#include <sdkgen/support_library.hpp>
#include "cache_relationship_t.hpp"
#include "group_relationship_t.hpp"
#include "numa_node_relationship_t.hpp"
#include "processor_relationship_t.hpp"
#include "logical_processor_relationship_t.hpp"

#include "magic/system_logical_processor_information_ex_t.start.hpp"
namespace nt
{
    // [struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct system_logical_processor_information_ex_t                
    {                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                          
        _m00 enum nt::logical_processor_relationship_t relationship;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Relationship
        _m01 uint32_t                                  size;          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 struct nt::processor_relationship_t       processor;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Processor
        _m03 struct nt::numa_node_relationship_t       numa_node;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NumaNode
        _m04 struct nt::cache_relationship_t           cache;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Cache
        _m05 struct nt::group_relationship_t           group;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Group
                                                                    
        SDK_NONVOL_PROPERTIES( "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX.$", 0x50, true, 0x27e3f06b7073ac44 );             
        SDK_FIXED_SIZE( system_logical_processor_information_ex_t, 0x50 );             
    };                                                              
};
#include "magic/system_logical_processor_information_ex_t.end.hpp"
SDK_VERIFY( struct nt::system_logical_processor_information_ex_t, 0x50 );
