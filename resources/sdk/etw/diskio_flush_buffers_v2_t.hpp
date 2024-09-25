#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/diskio_flush_buffers_v2_t.start.hpp"
namespace etw
{
    // [struct _ETW_DISKIO_FLUSH_BUFFERS_V2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct diskio_flush_buffers_v2_t         
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t disk_number;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DiskNumber
        _m01 uint32_t irp_flags;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .IrpFlags
        _m02 uint64_t high_res_response_time;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HighResResponseTime
        _m03 void*    irp_addr;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IrpAddr
                                             
        SDK_MAGIC_PROPERTIES( "_ETW_DISKIO_FLUSH_BUFFERS_V2.$", 0x18, true, 0x529dfc970c9c7c3e );                       
        SDK_FIXED_SIZE( diskio_flush_buffers_v2_t, 0x18 );                       
    };                                       
};
#include "magic/diskio_flush_buffers_v2_t.end.hpp"
SDK_VERIFY( struct etw::diskio_flush_buffers_v2_t, 0x18 );
