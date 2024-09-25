#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/raid_telemetry_io_size_bucket_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_TELEMETRY_IO_SIZE_BUCKET]
    // => Windows 11
    //
    struct raid_telemetry_io_size_bucket_t
    {                                     
        // Windows 11           
        //                      
        _m00 int64_t io_success;            //{ +0x0000    } | .IoSuccess
        _m01 int64_t io_latency;            //{ +0x0008    } | .IoLatency
                                          
        SDK_MAGIC_PROPERTIES( "_RAID_TELEMETRY_IO_SIZE_BUCKET.$", 0x0, false, 0x4d11e0b4605d361c );           
        SDK_FIXED_SIZE( raid_telemetry_io_size_bucket_t, 0x10 );           
    };                                    
};
#include "magic/raid_telemetry_io_size_bucket_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_telemetry_io_size_bucket_t, 0x10 );
