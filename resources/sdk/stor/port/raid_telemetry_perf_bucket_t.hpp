#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/raid_telemetry_perf_bucket_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_TELEMETRY_PERF_BUCKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct raid_telemetry_perf_bucket_t
    {                                  
        // Windows 10 v2004, Windows 10 v20H2           
        //                      
        _m00 int64_t io_success;         //{ +0x0000    +0x0000    } | .IoSuccess
        _m01 int64_t io_failed;          //{ +0x0008    +0x0008    } | .IoFailed
        _m02 int64_t io_latency;         //{ +0x0010    +0x0010    } | .IoLatency
                                       
        // Windows 10 v1607           
        //                      
        _m03 int64_t io_count;           //{ +0x0000    } | .IoCount
                                       
        SDK_MAGIC_PROPERTIES( "_RAID_TELEMETRY_PERF_BUCKET.$", 0x18, true, 0xae279ba7b5815791 );           
        SDK_DYNAMIC_SIZE( raid_telemetry_perf_bucket_t );           
    };                                 
};
#include "magic/raid_telemetry_perf_bucket_t.end.hpp"
