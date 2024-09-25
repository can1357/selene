#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pd_receive_queue_counter_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PD_RECEIVE_QUEUE_COUNTER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_receive_queue_counter_t  
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint64_t packets_received;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PacketsReceived
        _m01 uint64_t bytes_received;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BytesReceived
        _m02 uint64_t packets_dropped;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PacketsDropped
                                       
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_RECEIVE_QUEUE_COUNTER.$", 0x18, true, 0x63f2c82385632bb0 );                 
        SDK_FIXED_SIZE( pd_receive_queue_counter_t, 0x18 );                 
    };                                 
};
#include "magic/pd_receive_queue_counter_t.end.hpp"
SDK_VERIFY( struct ndis::pd_receive_queue_counter_t, 0x18 );
