#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pd_transmit_queue_counter_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PD_TRANSMIT_QUEUE_COUNTER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_transmit_queue_counter_t    
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint64_t packets_transmitted;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PacketsTransmitted
        _m01 uint64_t bytes_transmitted;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BytesTransmitted
                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_TRANSMIT_QUEUE_COUNTER.$", 0x10, true, 0xae2840d468db05e3 );                    
        SDK_FIXED_SIZE( pd_transmit_queue_counter_t, 0x10 );                    
    };                                    
};
#include "magic/pd_transmit_queue_counter_t.end.hpp"
SDK_VERIFY( struct ndis::pd_transmit_queue_counter_t, 0x10 );
