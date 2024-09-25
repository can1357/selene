#pragma once
#include <sdkgen/support_library.hpp>
#include "pd_filter_counter_t.hpp"
#include "pd_receive_queue_counter_t.hpp"
#include "pd_transmit_queue_counter_t.hpp"

#include "magic/pd_counter_value_t.start.hpp"
namespace ndis
{
    // [union _NDIS_PD_COUNTER_VALUE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union pd_counter_value_t                                         
    {                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                           
        _m00 struct ndis::pd_receive_queue_counter_t  receive_queue;   //{ +0x0000    +0x0000    +0x0000    } | .ReceiveQueue
        _m01 struct ndis::pd_transmit_queue_counter_t transmit_queue;  //{ +0x0000    +0x0000    +0x0000    } | .TransmitQueue
        _m02 struct ndis::pd_filter_counter_t         filter;          //{ +0x0000    +0x0000    +0x0000    } | .Filter
                                                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_COUNTER_VALUE.$", 0x18, true, 0x196c6fe52c332a05 );               
        SDK_FIXED_SIZE( pd_counter_value_t, 0x18 );                  
    };                                                               
};
#include "magic/pd_counter_value_t.end.hpp"
SDK_VERIFY( union ndis::pd_counter_value_t, 0x18 );
