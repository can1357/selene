#pragma once
#include <sdkgen/support_library.hpp>
#include "jobobject_rate_control_tolerance_t.hpp"

#include "magic/jobobject_limit_violation_information_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_LIMIT_VIOLATION_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_limit_violation_information_t                                     
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
        _m09 uint64_t                                     job_memory_limit;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .JobMemoryLimit
        _m10 enum win::jobobject_rate_control_tolerance_t rate_control_tolerance;        //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .RateControlTolerance
        _m11 enum win::jobobject_rate_control_tolerance_t rate_control_tolerance_limit;  //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .RateControlToleranceLimit
                                                                                       
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_LIMIT_VIOLATION_INFORMATION.$", 0x50, true, 0xd836a3a54f68052a );                             
        SDK_FIXED_SIZE( jobobject_limit_violation_information_t, 0x50 );                             
    };                                                                                 
};
#include "magic/jobobject_limit_violation_information_t.end.hpp"
SDK_VERIFY( struct win::jobobject_limit_violation_information_t, 0x50 );
