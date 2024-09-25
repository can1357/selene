#pragma once
#include <sdkgen/support_library.hpp>
#include "proc_perf_history_entry_t.hpp"

#include "magic/proc_perf_history_t.start.hpp"
namespace nt
{
    // [struct _PROC_PERF_HISTORY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proc_perf_history_t                                 
    {                                                          
        using history_list_t = sdk::array<struct nt::proc_perf_history_entry_t, 1>;                          
                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                     
        _m00 uint32_t                count;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 uint32_t                slot;                       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Slot
        _m02 uint32_t                utility_total;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UtilityTotal
        _m03 uint32_t                affinitized_utility_total;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .AffinitizedUtilityTotal
        _m04 uint32_t                frequency_total;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FrequencyTotal
        _m05 sdk::array<uint32_t, 2> tagged_percent_total;       //{ +0x0014    +0x0014    +0x001c    +0x0014    } | .TaggedPercentTotal
        _m06 history_list_t          history_list;               //{ +0x001c    +0x0020    +0x002c    +0x0020    } | .HistoryList
                                                               
        // Windows 11                                          
        //                                                     
        _m07 uint32_t                important_percent_total;    //{ +0x0014    } | .ImportantPercentTotal
        _m08 uint32_t                ideal_percent_total;        //{ +0x0018    } | .IdealPercentTotal
                                                               
        SDK_MAGIC_PROPERTIES( "_PROC_PERF_HISTORY.$", 0x2c, true, 0xdc1d8e2be89713d5 );                          
        SDK_DYNAMIC_SIZE( proc_perf_history_t );                          
    };                                                         
};
#include "magic/proc_perf_history_t.end.hpp"
