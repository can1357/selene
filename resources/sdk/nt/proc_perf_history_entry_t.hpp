#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/proc_perf_history_entry_t.start.hpp"
namespace nt
{
    // [struct _PROC_PERF_HISTORY_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proc_perf_history_entry_t                    
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 uint16_t               utility;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Utility
        _m01 uint16_t               affinitized_utility;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .AffinitizedUtility
        _m02 varuint_t              frequency;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Frequency
        _m03 sdk::array<uint8_t, 2> tagged_percent;       //{ +0x0005    +0x0006    +0x0008    +0x0006    } | .TaggedPercent
                                                        
        // Windows 11                                   
        //                                              
        _m04 uint8_t                important_percent;    //{ +0x0006    } | .ImportantPercent
        _m05 uint8_t                ideal_percent;        //{ +0x0007    } | .IdealPercent
                                                        
        SDK_MAGIC_PROPERTIES( "_PROC_PERF_HISTORY_ENTRY.$", 0xa, true, 0x8534a87d1cf6f886 );                    
        SDK_DYNAMIC_SIZE( proc_perf_history_entry_t );                    
    };                                                  
};
#include "magic/proc_perf_history_entry_t.end.hpp"
