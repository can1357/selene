#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/disk_performance_t.start.hpp"
namespace nt
{
    // [struct _DISK_PERFORMANCE]
    // => WDK 10 (NV)
    //
    struct disk_performance_t                             
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 int64_t                bytes_read;             //{ +0x0000    } | .BytesRead
        _m01 int64_t                bytes_written;          //{ +0x0008    } | .BytesWritten
        _m02 int64_t                read_time;              //{ +0x0010    } | .ReadTime
        _m03 int64_t                write_time;             //{ +0x0018    } | .WriteTime
        _m04 int64_t                idle_time;              //{ +0x0020    } | .IdleTime
        _m05 uint32_t               read_count;             //{ +0x0028    } | .ReadCount
        _m06 uint32_t               write_count;            //{ +0x002c    } | .WriteCount
        _m07 uint32_t               queue_depth;            //{ +0x0030    } | .QueueDepth
        _m08 uint32_t               split_count;            //{ +0x0034    } | .SplitCount
        _m09 int64_t                query_time;             //{ +0x0038    } | .QueryTime
        _m10 uint32_t               storage_device_number;  //{ +0x0040    } | .StorageDeviceNumber
        _m11 sdk::array<wchar_t, 8> storage_manager_name;   //{ +0x0044    } | .StorageManagerName
                                                          
        SDK_NONVOL_PROPERTIES( "_DISK_PERFORMANCE.$", 0x0, false, 0x999ac8e2fa1013bc );                      
        SDK_FIXED_SIZE( disk_performance_t, 0x58 );                      
    };                                                    
};
#include "magic/disk_performance_t.end.hpp"
SDK_VERIFY( struct nt::disk_performance_t, 0x58 );
