#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pd_post_and_drain_arg_t.start.hpp"
namespace ndis
{
    struct pd_buffer_t;

    // [struct _NDIS_PD_POST_AND_DRAIN_ARG]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_post_and_drain_arg_t                                    
    {                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                            
        _m00 struct ndis::pd_buffer_t*  post_buffer_list_head;          //{ +0x0000    +0x0000    +0x0000    } | .PostBufferListHead
        _m01 struct ndis::pd_buffer_t** drain_buffer_list_tail;         //{ +0x0008    +0x0008    +0x0008    } | .DrainBufferListTail
        _m02 uint32_t                   max_drain_count;                //{ +0x0010    +0x0010    +0x0010    } | .MaxDrainCount
        _m03 uint32_t                   drain_count;                    //{ +0x0014    +0x0014    +0x0014    } | .DrainCount
        _m04 uint32_t                   post_count;                     //{ +0x0018    +0x0018    +0x0018    } | .PostCount
        _m05 uint8_t                    queue_depth_threshold_reached;  //{ +0x001c    +0x001c    +0x001c    } | .QueueDepthThresholdReached
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_POST_AND_DRAIN_ARG.$", 0x20, true, 0xc35de473c22bd9ca );                              
        SDK_FIXED_SIZE( pd_post_and_drain_arg_t, 0x20 );                              
    };                                                                
};
#include "magic/pd_post_and_drain_arg_t.end.hpp"
SDK_VERIFY( struct ndis::pd_post_and_drain_arg_t, 0x20 );
