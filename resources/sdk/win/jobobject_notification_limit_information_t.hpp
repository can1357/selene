#pragma once
#include <sdkgen/support_library.hpp>
#include "jobobject_rate_control_tolerance_t.hpp"
#include "jobobject_rate_control_tolerance_interval_t.hpp"

#include "magic/jobobject_notification_limit_information_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_notification_limit_information_t                                     
    {                                                                                     
        using jobobject_rate_control_tolerance_interval_t = enum win::jobobject_rate_control_tolerance_interval_t;                                
                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                                
        _m00 uint64_t                                     io_read_bytes_limit;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IoReadBytesLimit
        _m01 uint64_t                                     io_write_bytes_limit;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IoWriteBytesLimit
        _m02 int64_t                                      per_job_user_time_limit;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PerJobUserTimeLimit
        _m03 uint64_t                                     job_memory_limit;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .JobMemoryLimit
        _m04 enum win::jobobject_rate_control_tolerance_t rate_control_tolerance;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RateControlTolerance
        _m05 jobobject_rate_control_tolerance_interval_t  rate_control_tolerance_interval;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .RateControlToleranceInterval
        _m06 uint32_t                                     limit_flags;                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .LimitFlags
                                                                                          
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_NOTIFICATION_LIMIT_INFORMATION.$", 0x30, true, 0x803d6af2e1257b39 );                                
        SDK_FIXED_SIZE( jobobject_notification_limit_information_t, 0x30 );                                
    };                                                                                    
};
#include "magic/jobobject_notification_limit_information_t.end.hpp"
SDK_VERIFY( struct win::jobobject_notification_limit_information_t, 0x30 );
