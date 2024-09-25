#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/diskio_readwrite_v2_t.start.hpp"
namespace etw
{
    // [struct _ETW_DISKIO_READWRITE_V2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct diskio_readwrite_v2_t             
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t disk_number;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DiskNumber
        _m01 uint32_t irp_flags;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .IrpFlags
        _m02 uint32_t size;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m03 uint64_t byte_offset;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ByteOffset
        _m04 void*    file_object;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FileObject
        _m05 void*    irp_addr;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .IrpAddr
        _m06 uint64_t high_res_response_time;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .HighResResponseTime
                                             
        SDK_MAGIC_PROPERTIES( "_ETW_DISKIO_READWRITE_V2.$", 0x30, true, 0x6e98c40f1878e599 );                       
        SDK_FIXED_SIZE( diskio_readwrite_v2_t, 0x30 );                       
    };                                       
};
#include "magic/diskio_readwrite_v2_t.end.hpp"
SDK_VERIFY( struct etw::diskio_readwrite_v2_t, 0x30 );
