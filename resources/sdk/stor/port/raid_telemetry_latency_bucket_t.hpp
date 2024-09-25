#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/raid_telemetry_latency_bucket_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_TELEMETRY_LATENCY_BUCKET]
    // => Windows 11
    //
    struct raid_telemetry_latency_bucket_t
    {                                     
        // Windows 11           
        //                      
        _m00 int64_t io_success;            //{ +0x0000    } | .IoSuccess
        _m01 int64_t io_failed;             //{ +0x0008    } | .IoFailed
        _m02 int64_t io_latency;            //{ +0x0010    } | .IoLatency
                                          
        SDK_MAGIC_PROPERTIES( "_RAID_TELEMETRY_LATENCY_BUCKET.$", 0x0, false, 0x773374afb4cee1e2 );           
        SDK_FIXED_SIZE( raid_telemetry_latency_bucket_t, 0x18 );           
    };                                    
};
#include "magic/raid_telemetry_latency_bucket_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_telemetry_latency_bucket_t, 0x18 );
