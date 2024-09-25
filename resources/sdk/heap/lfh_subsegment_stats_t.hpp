#pragma once
#include <sdkgen/support_library.hpp>
#include "lfh_subsegment_stat_t.hpp"

#include "magic/lfh_subsegment_stats_t.start.hpp"
namespace heap
{
    // [union _HEAP_LFH_SUBSEGMENT_STATS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union lfh_subsegment_stats_t  
    {                             
        using buckets_t = sdk::array<struct heap::lfh_subsegment_stat_t, 4>;          
                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                        
        _m00 buckets_t  buckets;    //{ +0x0000    +0x0000    +0x0000    } | .Buckets
        _m01 void*      all_stats;  //{ +0x0000    +0x0000    +0x0000    } | .AllStats
                                  
        SDK_MAGIC_PROPERTIES( "_HEAP_LFH_SUBSEGMENT_STATS.$", 0x8, true, 0x91f683aacbd8ebba );          
        SDK_FIXED_SIZE( lfh_subsegment_stats_t, 0x8 );          
    };                            
};
#include "magic/lfh_subsegment_stats_t.end.hpp"
SDK_VERIFY( union heap::lfh_subsegment_stats_t, 0x8 );
