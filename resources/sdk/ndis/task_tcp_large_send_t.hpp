#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/task_tcp_large_send_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_TASK_TCP_LARGE_SEND]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct task_tcp_large_send_t        
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t version;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t max_off_load_size;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaxOffLoadSize
        _m02 uint32_t min_segment_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MinSegmentCount
        _m03 uint8_t  tcp_options;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TcpOptions
        _m04 uint8_t  ip_options;         //{ +0x000d    +0x000d    +0x000d    +0x000d    } | .IpOptions
                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_TASK_TCP_LARGE_SEND.$", 0x10, true, 0x5121ec00d660803e );                  
        SDK_FIXED_SIZE( task_tcp_large_send_t, 0x10 );                  
    };                                  
};
#include "magic/task_tcp_large_send_t.end.hpp"
SDK_VERIFY( struct ndis::task_tcp_large_send_t, 0x10 );
