#pragma once
#include <sdkgen/support_library.hpp>
#include "system_net_rate_control_context_header_t.hpp"

#include "magic/system_net_rate_control_quota_context_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_NET_RATE_CONTROL_QUOTA_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_net_rate_control_quota_context_t                         
    {                                                                      
        using system_net_rate_control_context_header_t = struct win::system_net_rate_control_context_header_t;                    
                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                 
        _m00 system_net_rate_control_context_header_t  header;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint64_t                                  over_quota_history;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OverQuotaHistory
        _m02 uint32_t                                  interval_length;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IntervalLength
        _m03 uint32_t                                  number_of_intervals;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .NumberOfIntervals
                                                                           
        SDK_MAGIC_PROPERTIES( "_SYSTEM_NET_RATE_CONTROL_QUOTA_CONTEXT.$", 0x20, true, 0xb4f5beacf0efc77c );                    
        SDK_FIXED_SIZE( system_net_rate_control_quota_context_t, 0x20 );                    
    };                                                                     
};
#include "magic/system_net_rate_control_quota_context_t.end.hpp"
SDK_VERIFY( struct win::system_net_rate_control_quota_context_t, 0x20 );
