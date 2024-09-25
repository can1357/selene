#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/replace_processor_list_v1_t.start.hpp"
namespace pnp
{
    // [struct _PNP_REPLACE_PROCESSOR_LIST_V1]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct replace_processor_list_v1_t               
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                           
        _m00 uint64_t                affinity_mask;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AffinityMask
        _m01 uint32_t                allocated_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocatedCount
        _m02 uint32_t                count;            //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Count
        _m03 sdk::array<uint32_t, 1> apic_ids;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ApicIds
                                                     
        SDK_NONVOL_PROPERTIES( "_PNP_REPLACE_PROCESSOR_LIST_V1.$", 0x18, true, 0x556305d877dd83e6 );                
        SDK_FIXED_SIZE( replace_processor_list_v1_t, 0x18 );                
    };                                               
};
#include "magic/replace_processor_list_v1_t.end.hpp"
SDK_VERIFY( struct pnp::replace_processor_list_v1_t, 0x18 );
