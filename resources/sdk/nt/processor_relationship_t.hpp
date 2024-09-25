#pragma once
#include <sdkgen/support_library.hpp>
#include "group_affinity_t.hpp"

#include "magic/processor_relationship_t.start.hpp"
namespace nt
{
    // [struct _PROCESSOR_RELATIONSHIP]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct processor_relationship_t                                      
    {                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                               
        _m00 uint8_t                                    flags;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint8_t                                    efficiency_class;  //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .EfficiencyClass
        _m02 uint16_t                                   group_count;       //{ +0x0016    +0x0016    +0x0016    +0x0016    +0x0016    } | .GroupCount
        _m03 sdk::array<struct nt::group_affinity_t, 1> group_mask;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .GroupMask
                                                                         
        SDK_NONVOL_PROPERTIES( "_PROCESSOR_RELATIONSHIP.$", 0x28, true, 0xa191da9a5a02a6b );                 
        SDK_FIXED_SIZE( processor_relationship_t, 0x28 );                 
    };                                                                   
};
#include "magic/processor_relationship_t.end.hpp"
SDK_VERIFY( struct nt::processor_relationship_t, 0x28 );
