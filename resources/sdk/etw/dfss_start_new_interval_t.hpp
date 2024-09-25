#pragma once
#include <sdkgen/support_library.hpp>
#include "per_session_quota_t.hpp"

#include "magic/dfss_start_new_interval_t.start.hpp"
namespace etw
{
    // [struct _ETW_DFSS_START_NEW_INTERVAL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dfss_start_new_interval_t                                                 
    {                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                           
        _m00 uint32_t                                       current_generation;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentGeneration
        _m01 uint32_t                                       session_count;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SessionCount
        _m02 uint64_t                                       total_cycle_credit;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalCycleCredit
        _m03 uint64_t                                       total_cycles_accumulated;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TotalCyclesAccumulated
        _m04 sdk::array<struct etw::per_session_quota_t, 1> session_quota;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SessionQuota
                                                                                     
        SDK_MAGIC_PROPERTIES( "_ETW_DFSS_START_NEW_INTERVAL.$", 0x30, true, 0xa66f5b2b3cb3c964 );                         
        SDK_FIXED_SIZE( dfss_start_new_interval_t, 0x30 );                           
    };                                                                               
};
#include "magic/dfss_start_new_interval_t.end.hpp"
SDK_VERIFY( struct etw::dfss_start_new_interval_t, 0x30 );
