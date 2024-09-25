#pragma once
#include <sdkgen/support_library.hpp>
#include "jobobject_rate_control_tolerance_t.hpp"
#include "jobobject_rate_control_tolerance_interval_t.hpp"

#include "magic/jobobject_notification_limit_information_v2_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_V2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_notification_limit_information_v2_t                                  
    {                                                                                     
        using jobobject_rate_control_tolerance_interval_t = enum win::jobobject_rate_control_tolerance_interval_t;                                
                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                                
        _m00 uint64_t                                     io_read_bytes_limit;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IoReadBytesLimit
        _m01 uint64_t                                     io_write_bytes_limit;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IoWriteBytesLimit
        _m02 int64_t                                      per_job_user_time_limit;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PerJobUserTimeLimit
        _m03 uint64_t                                     job_low_memory_limit;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .JobLowMemoryLimit
        _m04 uint64_t                                     job_high_memory_limit;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .JobHighMemoryLimit
        _m05 enum win::jobobject_rate_control_tolerance_t rate_control_tolerance;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .RateControlTolerance
        _m06 jobobject_rate_control_tolerance_interval_t  rate_control_tolerance_interval;  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .RateControlToleranceInterval
        _m07 uint32_t                                     limit_flags;                      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .LimitFlags
                                                                                          
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION_V2.$", 0x38, true, 0x7ae6bc86cd28db53 );                                
        SDK_FIXED_SIZE( jobobject_notification_limit_information_v2_t, 0x38 );                                
    };                                                                                    
};
#include "magic/jobobject_notification_limit_information_v2_t.end.hpp"
SDK_VERIFY( struct win::jobobject_notification_limit_information_v2_t, 0x38 );
