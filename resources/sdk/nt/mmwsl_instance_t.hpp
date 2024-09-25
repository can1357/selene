#pragma once
#include <sdkgen/support_library.hpp>
#include "../mi/active_wsle_listhead_t.hpp"

#include "magic/mmwsl_instance_t.start.hpp"
namespace nt
{
    struct mmpte_t;

    // [struct _MMWSL_INSTANCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmwsl_instance_t                                          
    {                                                                
        using active_wsles_t = sdk::array<struct mi::active_wsle_listhead_t, 16>;                               
                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                           
        _m00 uint32_t                 last_access_clearing_remainder;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LastAccessClearingRemainder
        _m01 uint32_t                 last_aging_remainder;            //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .LastAgingRemainder
                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                           
        _m02 struct nt::mmpte_t*      next_pte_to_trim;                //{ +0x0000    +0x0000    +0x0000    } | .NextPteToTrim
        _m03 struct nt::mmpte_t*      next_pte_to_age;                 //{ +0x0008    +0x0008    +0x0008    } | .NextPteToAge
        _m04 struct nt::mmpte_t*      next_pte_to_access_clear;        //{ +0x0010    +0x0010    +0x0010    } | .NextPteToAccessClear
        _m05 uint64_t                 locked_entries;                  //{ +0x0020    +0x0020    +0x0020    } | .LockedEntries
                                                                     
        // Windows 10 v1607                                          
        //                                                           
        _m06 uint64_t                 next_slot;                       //{ +0x0000    } | .NextSlot
        _m07 uint64_t                 next_aging_slot;                 //{ +0x0008    } | .NextAgingSlot
        _m08 uint64_t                 next_access_clearing_slot;       //{ +0x0010    } | .NextAccessClearingSlot
        _m09 sdk::array<uint64_t, 16> active_wsle_counts;              //{ +0x0020    } | .ActiveWsleCounts
        _m10 active_wsles_t           active_wsles;                    //{ +0x00a0    } | .ActiveWsles
                                                                     
        SDK_MAGIC_PROPERTIES( "_MMWSL_INSTANCE.$", 0x28, true, 0xbc186541a403dfbd );                               
        SDK_DYNAMIC_SIZE( mmwsl_instance_t );                               
    };                                                               
};
#include "magic/mmwsl_instance_t.end.hpp"
