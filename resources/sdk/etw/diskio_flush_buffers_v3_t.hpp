#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/diskio_flush_buffers_v3_t.start.hpp"
namespace etw
{
    // [struct _ETW_DISKIO_FLUSH_BUFFERS_V3]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct diskio_flush_buffers_v3_t         
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t disk_number;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DiskNumber
        _m01 uint32_t irp_flags;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .IrpFlags
        _m02 uint64_t high_res_response_time;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HighResResponseTime
        _m03 void*    irp_addr;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IrpAddr
        _m04 uint32_t issuing_thread_id;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IssuingThreadId
                                             
        SDK_MAGIC_PROPERTIES( "_ETW_DISKIO_FLUSH_BUFFERS_V3.$", 0x20, true, 0xe66209ac9195fbed );                       
        SDK_FIXED_SIZE( diskio_flush_buffers_v3_t, 0x20 );                       
    };                                       
};
#include "magic/diskio_flush_buffers_v3_t.end.hpp"
SDK_VERIFY( struct etw::diskio_flush_buffers_v3_t, 0x20 );
