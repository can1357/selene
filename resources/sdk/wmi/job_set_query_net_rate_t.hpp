#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/job_set_query_net_rate_t.start.hpp"
namespace wmi
{
    // [struct _WMI_JOB_SET_QUERY_NET_RATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct job_set_query_net_rate_t 
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t flags;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint64_t max_bandwidth;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaxBandwidth
        _m02 uint8_t  dscp_tag;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DscpTag
                                    
        SDK_MAGIC_PROPERTIES( "_WMI_JOB_SET_QUERY_NET_RATE.$", 0x18, true, 0x988a258dfb4ea5f0 );              
        SDK_FIXED_SIZE( job_set_query_net_rate_t, 0x18 );              
    };                              
};
#include "magic/job_set_query_net_rate_t.end.hpp"
SDK_VERIFY( struct wmi::job_set_query_net_rate_t, 0x18 );
