#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "pd_queue_type_t.hpp"
#include "../nt/group_affinity_t.hpp"

#include "magic/pd_queue_parameters_t.start.hpp"
namespace ndis
{
    struct pd_counter_handle_t;

    // [struct _NDIS_PD_QUEUE_PARAMETERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_queue_parameters_t                                            
    {                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                  
        _m00 struct ndis::object_header_t      header;                        //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                          flags;                         //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 enum ndis::pd_queue_type_t        queue_type;                    //{ +0x0008    +0x0008    +0x0008    } | .QueueType
        _m03 uint32_t                          queue_size;                    //{ +0x000c    +0x000c    +0x000c    } | .QueueSize
        _m04 uint32_t                          receive_data_length;           //{ +0x0010    +0x0010    +0x0010    } | .ReceiveDataLength
        _m05 struct nt::group_affinity_t       affinity;                      //{ +0x0018    +0x0018    +0x0018    } | .Affinity
        _m06 uint32_t                          traffic_class_id;              //{ +0x0028    +0x0028    +0x0028    } | .TrafficClassId
        _m07 uint32_t                          maximum_partial_buffer_count;  //{ +0x002c    +0x002c    +0x002c    } | .MaximumPartialBufferCount
        _m08 struct ndis::pd_counter_handle_t* counter_handle;                //{ +0x0030    +0x0030    +0x0030    } | .CounterHandle
                                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_QUEUE_PARAMETERS.$", 0x38, true, 0xe6c22f8c7fb9a182 );                             
        SDK_FIXED_SIZE( pd_queue_parameters_t, 0x38 );                             
    };                                                                      
};
#include "magic/pd_queue_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::pd_queue_parameters_t, 0x38 );
