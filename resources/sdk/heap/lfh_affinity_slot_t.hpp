#pragma once
#include <sdkgen/support_library.hpp>
#include "lfh_fast_ref_t.hpp"
#include "lfh_subsegment_owner_t.hpp"

#include "magic/lfh_affinity_slot_t.start.hpp"
namespace heap
{
    // [struct _HEAP_LFH_AFFINITY_SLOT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lfh_affinity_slot_t                                     
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                         
        _m00 struct heap::lfh_subsegment_owner_t state;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .State
                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                         
        _m01 struct heap::lfh_fast_ref_t         active_subsegment;  //{ +0x0038    +0x0038    +0x0038    } | .ActiveSubsegment
                                                                   
        SDK_MAGIC_PROPERTIES( "_HEAP_LFH_AFFINITY_SLOT.$", 0x40, true, 0x97b3deda664f2115 );                  
        SDK_DYNAMIC_SIZE( lfh_affinity_slot_t );                   
    };                                                             
};
#include "magic/lfh_affinity_slot_t.end.hpp"
