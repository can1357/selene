#pragma once
#include <sdkgen/support_library.hpp>
#include "disk_performance_type_t.hpp"

#include "magic/disk_performance_info_t.start.hpp"
namespace nt
{
    // [struct _DISK_PERFORMANCE_INFO]
    // => WDK 10 (NV)
    //
    struct disk_performance_info_t                          
    {                                                       
        // WDK 10                                           
        //                                                  
        _m00 uint32_t                         version;        //{ +0x0000    } | .Version
        _m01 enum nt::disk_performance_type_t type;           //{ +0x0004    } | .Type
        _m02 int64_t                          query_time;     //{ +0x0008    } | .QueryTime
        _m03 int64_t                          bytes_read;     //{ +0x0010    } | .BytesRead
        _m04 int64_t                          bytes_written;  //{ +0x0018    } | .BytesWritten
        _m05 int64_t                          read_time;      //{ +0x0020    } | .ReadTime
        _m06 int64_t                          write_time;     //{ +0x0028    } | .WriteTime
        _m07 int64_t                          flush_time;     //{ +0x0030    } | .FlushTime
        _m08 int64_t                          idle_time;      //{ +0x0038    } | .IdleTime
        _m09 uint32_t                         read_count;     //{ +0x0040    } | .ReadCount
        _m10 uint32_t                         write_count;    //{ +0x0044    } | .WriteCount
        _m11 uint32_t                         flush_count;    //{ +0x0048    } | .FlushCount
        _m12 uint32_t                         queue_depth;    //{ +0x004c    } | .QueueDepth
        _m13 uint32_t                         split_count;    //{ +0x0050    } | .SplitCount
                                                            
        SDK_NONVOL_PROPERTIES( "_DISK_PERFORMANCE_INFO.$", 0x0, false, 0xb270ebbf4b73bd55 );              
        SDK_FIXED_SIZE( disk_performance_info_t, 0x58 );              
    };                                                      
};
#include "magic/disk_performance_info_t.end.hpp"
SDK_VERIFY( struct nt::disk_performance_info_t, 0x58 );
