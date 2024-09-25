#pragma once
#include <sdkgen/support_library.hpp>
#include "group_affinity_t.hpp"
#include "processor_cache_type_t.hpp"

#include "magic/cache_relationship_t.start.hpp"
namespace nt
{
    // [struct _CACHE_RELATIONSHIP]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct cache_relationship_t                                       
    {                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                            
        _m00 uint8_t                                    level;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Level
        _m01 uint8_t                                    associativity;  //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .Associativity
        _m02 uint16_t                                   line_size;      //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .LineSize
        _m03 uint32_t                                   cache_size;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .CacheSize
        _m04 enum nt::processor_cache_type_t            type;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Type
        _m05 struct nt::group_affinity_t                group_mask;     //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .GroupMask
                                                                      
        // Windows 11                                                 
        //                                                            
        _m06 uint16_t                                   group_count;    //{ +0x001e    } | .GroupCount
        _m07 sdk::array<struct nt::group_affinity_t, 1> group_masks;    //{ +0x0020    } | .GroupMasks
                                                                      
        SDK_NONVOL_PROPERTIES( "_CACHE_RELATIONSHIP.$", 0x30, true, 0xb41c7675668c82a6 );              
        SDK_FIXED_SIZE( cache_relationship_t, 0x30 );                 
    };                                                                
};
#include "magic/cache_relationship_t.end.hpp"
SDK_VERIFY( struct nt::cache_relationship_t, 0x30 );
