#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/counters_t.start.hpp"
namespace etw
{
    // [struct _ETW_COUNTERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct counters_t                             
    {                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                        
        _m00 int32_t                guid_count;     //{ +0x0000    +0x0000    +0x0000    } | .GuidCount
        _m01 sdk::array<int32_t, 2> pool_usage;     //{ +0x0004    +0x0004    +0x0004    } | .PoolUsage
        _m02 int32_t                session_count;  //{ +0x000c    +0x000c    +0x000c    } | .SessionCount
                                                  
        SDK_MAGIC_PROPERTIES( "_ETW_COUNTERS.$", 0x10, true, 0xa7b3808e8cd9716d );              
        SDK_FIXED_SIZE( counters_t, 0x10 );              
    };                                            
};
#include "magic/counters_t.end.hpp"
SDK_VERIFY( struct etw::counters_t, 0x10 );
