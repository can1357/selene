#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pd_queue_depth_counter_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PD_QUEUE_DEPTH_COUNTER]
    // => Windows 10 v1607
    //
    struct pd_queue_depth_counter_t         
    {                                       
        // Windows 10 v1607                      
        //                                  
        _m00 uint32_t avg_queue_depth;        //{ +0x0000    } | .AvgQueueDepth
        _m01 uint32_t avg_queue_utilization;  //{ +0x0004    } | .AvgQueueUtilization
                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_QUEUE_DEPTH_COUNTER.$", 0x0, false, 0xf46696cee89ca03 );                      
        SDK_FIXED_SIZE( pd_queue_depth_counter_t, 0x8 );                      
    };                                      
};
#include "magic/pd_queue_depth_counter_t.end.hpp"
SDK_VERIFY( struct ndis::pd_queue_depth_counter_t, 0x8 );
