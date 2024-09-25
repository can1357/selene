#pragma once
#include <sdkgen/support_library.hpp>
#include "jobobject_rate_control_tolerance_t.hpp"

#include "magic/jobobject_limit_violation_information_v2_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_LIMIT_VIOLATION_INFORMATION_V2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_limit_violation_information_v2_t                                  
    {                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                             
        _m00 uint32_t                                     limit_flags;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LimitFlags
        _m01 uint32_t                                     violation_limit_flags;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ViolationLimitFlags
        _m02 uint64_t                                     io_read_bytes;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IoReadBytes
        _m03 uint64_t                                     io_read_bytes_limit;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IoReadBytesLimit
        _m04 uint64_t                                     io_write_bytes;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IoWriteBytes
        _m05 uint64_t                                     io_write_bytes_limit;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .IoWriteBytesLimit
        _m06 int64_t                                      per_job_user_time;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PerJobUserTime
        _m07 int64_t                                      per_job_user_time_limit;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .PerJobUserTimeLimit
        _m08 uint64_t                                     job_memory;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .JobMemory
        _m09 uint64_t                                     job_low_memory_limit;          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .JobLowMemoryLimit
        _m10 uint64_t                                     job_high_memory_limit;         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .JobHighMemoryLimit
        _m11 enum win::jobobject_rate_control_tolerance_t rate_control_tolerance;        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .RateControlTolerance
        _m12 enum win::jobobject_rate_control_tolerance_t rate_control_tolerance_limit;  //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .RateControlToleranceLimit
                                                                                       
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION_V2.$", 0x58, true, 0xe7273757a352de7a );                             
        SDK_FIXED_SIZE( jobobject_limit_violation_information_v2_t, 0x58 );                             
    };                                                                                 
};
#include "magic/jobobject_limit_violation_information_v2_t.end.hpp"
SDK_VERIFY( struct win::jobobject_limit_violation_information_v2_t, 0x58 );
