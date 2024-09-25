#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/pd_filter_parameters_t.start.hpp"
namespace ndis
{
    struct pd_queue_t;
    struct pd_counter_handle_t;

    // [struct _NDIS_PD_FILTER_PARAMETERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_filter_parameters_t                                                    
    {                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                           
        _m00 struct ndis::object_header_t      header;                                 //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                          flags;                                  //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                          match_profile_id;                       //{ +0x0008    +0x0008    +0x0008    } | .MatchProfileId
        _m03 uint32_t                          priority;                               //{ +0x000c    +0x000c    +0x000c    } | .Priority
        _m04 struct ndis::pd_counter_handle_t* counter_handle;                         //{ +0x0010    +0x0010    +0x0010    } | .CounterHandle
        _m05 struct ndis::pd_queue_t*          target_receive_queue;                   //{ +0x0018    +0x0018    +0x0018    } | .TargetReceiveQueue
        _m06 uint64_t                          rx_filter_context;                      //{ +0x0020    +0x0020    +0x0020    } | .RxFilterContext
        _m07 uint8_t*                          header_group_match_array;               //{ +0x0028    +0x0028    +0x0028    } | .HeaderGroupMatchArray
        _m08 uint32_t                          header_group_match_array_num_elements;  //{ +0x0030    +0x0030    +0x0030    } | .HeaderGroupMatchArrayNumElements
        _m09 uint32_t                          header_group_match_array_element_size;  //{ +0x0034    +0x0034    +0x0034    } | .HeaderGroupMatchArrayElementSize
        _m10 uint32_t                          header_group_match_array_total_size;    //{ +0x0038    +0x0038    +0x0038    } | .HeaderGroupMatchArrayTotalSize
                                                                                     
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_FILTER_PARAMETERS.$", 0x40, true, 0xfe1a1db194dc7a86 );                                      
        SDK_FIXED_SIZE( pd_filter_parameters_t, 0x40 );                                      
    };                                                                               
};
#include "magic/pd_filter_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::pd_filter_parameters_t, 0x40 );
