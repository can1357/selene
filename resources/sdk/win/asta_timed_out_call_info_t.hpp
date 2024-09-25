#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/asta_timed_out_call_info_t.start.hpp"
namespace win
{
    // [struct AstaTimedOutCallInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct asta_timed_out_call_info_t                          
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                     
        _m00 struct nt::guid_t iid;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .iid
        _m01 uint16_t          proc_num;                         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .procNum
        _m02 uint32_t          asta_tid;                         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .astaTid
                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                     
        _m03 uint32_t          client_tid;                       //{ +0x0018    +0x0018    +0x0018    } | .clientTid
        _m04 uint64_t          wall_clock_time_in_queue;         //{ +0x0028    +0x0028    +0x0028    } | .wallClockTimeInQueue
        _m05 int32_t           asta_thread_priority_at_timeout;  //{ +0x0030    +0x0030    +0x0030    } | .astaThreadPriorityAtTimeout
                                                               
        SDK_MAGIC_PROPERTIES( "AstaTimedOutCallInfo.$", 0x38, true, 0x6718f158f76c13fc );                                
        SDK_DYNAMIC_SIZE( asta_timed_out_call_info_t );                                
    };                                                         
};
#include "magic/asta_timed_out_call_info_t.end.hpp"
