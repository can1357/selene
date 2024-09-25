#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/raid_telemetry_node_counters_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_TELEMETRY_NODE_COUNTERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_telemetry_node_counters_t    
    {                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint64_t max_read_write_latency;  //{ +0x0000    +0x0000    +0x0000    } | .MaxReadWriteLatency
        _m01 uint64_t total_read_bytes;        //{ +0x0008    +0x0008    +0x0008    } | .TotalReadBytes
        _m02 uint64_t total_write_bytes;       //{ +0x0010    +0x0010    +0x0010    } | .TotalWriteBytes
                                             
        SDK_MAGIC_PROPERTIES( "_RAID_TELEMETRY_NODE_COUNTERS.$", 0x18, true, 0xbb519028845f56ba );                       
        SDK_FIXED_SIZE( raid_telemetry_node_counters_t, 0x18 );                       
    };                                       
};
#include "magic/raid_telemetry_node_counters_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_telemetry_node_counters_t, 0x18 );
