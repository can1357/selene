#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/per_session_quota_t.start.hpp"
namespace etw
{
    // [struct _ETW_PER_SESSION_QUOTA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct per_session_quota_t             
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t session_id;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SessionId
        _m01 uint32_t cpu_share_weight;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CpuShareWeight
        _m02 int64_t  captured_weight_data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CapturedWeightData
        _m03 uint64_t cycles_accumulated;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CyclesAccumulated
                                           
        SDK_MAGIC_PROPERTIES( "_ETW_PER_SESSION_QUOTA.$", 0x18, true, 0x2c2a68ac18dffd6f );                     
        SDK_FIXED_SIZE( per_session_quota_t, 0x18 );                     
    };                                     
};
#include "magic/per_session_quota_t.end.hpp"
SDK_VERIFY( struct etw::per_session_quota_t, 0x18 );
