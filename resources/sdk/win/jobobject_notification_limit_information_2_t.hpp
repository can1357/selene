#pragma once
#include <sdkgen/support_library.hpp>
#include "jobobject_rate_control_tolerance_t.hpp"
#include "jobobject_rate_control_tolerance_interval_t.hpp"

#include "magic/jobobject_notification_limit_information_2_t.start.hpp"
namespace win
{
    // [struct JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_notification_limit_information_2_t                                       
    {                                                                                         
        using jobobject_rate_control_tolerance_interval_t = enum win::jobobject_rate_control_tolerance_interval_t;                                    
        using jobobject_rate_control_tolerance_interval_t = enum win::jobobject_rate_control_tolerance_interval_t;                                    
        using jobobject_rate_control_tolerance_interval_t = enum win::jobobject_rate_control_tolerance_interval_t;                                    
        using jobobject_rate_control_tolerance_interval_t = enum win::jobobject_rate_control_tolerance_interval_t;                                    
                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                                    
        _m00 uint64_t                                     io_read_bytes_limit;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IoReadBytesLimit
        _m01 uint64_t                                     io_write_bytes_limit;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IoWriteBytesLimit
        _m02 int64_t                                      per_job_user_time_limit;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PerJobUserTimeLimit
        _m03 uint64_t                                     job_high_memory_limit;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .JobHighMemoryLimit
        _m04 uint64_t                                     job_memory_limit;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .JobMemoryLimit
        _m05 enum win::jobobject_rate_control_tolerance_t rate_control_tolerance;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RateControlTolerance
        _m06 enum win::jobobject_rate_control_tolerance_t cpu_rate_control_tolerance;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CpuRateControlTolerance
        _m07 jobobject_rate_control_tolerance_interval_t  rate_control_tolerance_interval;      //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .RateControlToleranceInterval
        _m08 jobobject_rate_control_tolerance_interval_t  cpu_rate_control_tolerance_interval;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .CpuRateControlToleranceInterval
        _m09 uint32_t                                     limit_flags;                          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .LimitFlags
        _m10 enum win::jobobject_rate_control_tolerance_t io_rate_control_tolerance;            //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .IoRateControlTolerance
        _m11 uint64_t                                     job_low_memory_limit;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .JobLowMemoryLimit
        _m12 jobobject_rate_control_tolerance_interval_t  io_rate_control_tolerance_interval;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .IoRateControlToleranceInterval
        _m13 enum win::jobobject_rate_control_tolerance_t net_rate_control_tolerance;           //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .NetRateControlTolerance
        _m14 jobobject_rate_control_tolerance_interval_t  net_rate_control_tolerance_interval;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NetRateControlToleranceInterval
                                                                                              
        SDK_MAGIC_PROPERTIES( "JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_2.$", 0x48, true, 0x543b7a520ef44abb );                                    
        SDK_FIXED_SIZE( jobobject_notification_limit_information_2_t, 0x48 );                                    
    };                                                                                        
};
#include "magic/jobobject_notification_limit_information_2_t.end.hpp"
SDK_VERIFY( struct win::jobobject_notification_limit_information_2_t, 0x48 );
