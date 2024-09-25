#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/pd_capabilities_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PD_CAPABILITIES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_capabilities_t                                                            
    {                                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                              
        //                                                                              
        _m00 struct ndis::object_header_t header;                                         //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                                          //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     maximum_tx_partial_buffer_count;                //{ +0x0008    +0x0008    +0x0008    } | .MaximumTxPartialBufferCount
        _m03 uint32_t                     maximum_rx_partial_buffer_count;                //{ +0x000c    +0x000c    +0x000c    } | .MaximumRxPartialBufferCount
        _m04 uint8_t                      rx_filter_context_width;                        //{ +0x0010    +0x0010    +0x0010    } | .RxFilterContextWidth
        _m05 uint32_t                     capability_flags;                               //{ +0x0014    +0x0014    +0x0014    } | .CapabilityFlags
        _m06 uint32_t                     max_number_of_rx_queues;                        //{ +0x0018    +0x0018    +0x0018    } | .MaxNumberOfRxQueues
        _m07 uint32_t                     max_number_of_tx_queues;                        //{ +0x001c    +0x001c    +0x001c    } | .MaxNumberOfTxQueues
        _m08 uint32_t                     max_number_of_rx_queues_for_default_vport;      //{ +0x0020    +0x0020    +0x0020    } | .MaxNumberOfRxQueuesForDefaultVport
        _m09 uint32_t                     max_number_of_tx_queues_for_default_vport;      //{ +0x0024    +0x0024    +0x0024    } | .MaxNumberOfTxQueuesForDefaultVport
        _m10 uint32_t                     max_number_of_rx_queues_per_non_default_vport;  //{ +0x0028    +0x0028    +0x0028    } | .MaxNumberOfRxQueuesPerNonDefaultVport
        _m11 uint32_t                     max_number_of_tx_queues_per_non_default_vport;  //{ +0x002c    +0x002c    +0x002c    } | .MaxNumberOfTxQueuesPerNonDefaultVport
        _m12 uint32_t                     exact_match_profile_array_offset;               //{ +0x0030    +0x0030    +0x0030    } | .ExactMatchProfileArrayOffset
        _m13 uint32_t                     exact_match_profile_array_num_elements;         //{ +0x0034    +0x0034    +0x0034    } | .ExactMatchProfileArrayNumElements
        _m14 uint32_t                     exact_match_profile_array_element_size;         //{ +0x0038    +0x0038    +0x0038    } | .ExactMatchProfileArrayElementSize
        _m15 uint32_t                     wildcard_match_profile_array_offset;            //{ +0x003c    +0x003c    +0x003c    } | .WildcardMatchProfileArrayOffset
        _m16 uint32_t                     wildcard_match_profile_array_num_elements;      //{ +0x0040    +0x0040    +0x0040    } | .WildcardMatchProfileArrayNumElements
        _m17 uint32_t                     wildcard_match_profile_array_element_size;      //{ +0x0044    +0x0044    +0x0044    } | .WildcardMatchProfileArrayElementSize
        _m18 uint32_t                     minimum_moderation_interval;                    //{ +0x0048    +0x0048    +0x0048    } | .MinimumModerationInterval
        _m19 uint32_t                     maximum_moderation_interval;                    //{ +0x004c    +0x004c    +0x004c    } | .MaximumModerationInterval
        _m20 uint32_t                     moderation_interval_granularity;                //{ +0x0050    +0x0050    +0x0050    } | .ModerationIntervalGranularity
        _m21 uint32_t                     max_rx_queue_size;                              //{ +0x0054    +0x0054    +0x0054    } | .MaxRxQueueSize
        _m22 uint32_t                     max_tx_queue_size;                              //{ +0x0058    +0x0058    +0x0058    } | .MaxTxQueueSize
                                                                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_CAPABILITIES.$", 0x60, true, 0x850742ec101851aa );                                              
        SDK_FIXED_SIZE( pd_capabilities_t, 0x60 );                                              
    };                                                                                  
};
#include "magic/pd_capabilities_t.end.hpp"
SDK_VERIFY( struct ndis::pd_capabilities_t, 0x60 );
