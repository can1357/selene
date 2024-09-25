#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/pd_queue_dispatch_t.start.hpp"
namespace ndis
{
    struct pd_queue_t;
    struct pd_buffer_t;
    struct pd_post_and_drain_arg_t;

    // [struct _NDIS_PD_QUEUE_DISPATCH]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_queue_dispatch_t                                                               
    {                                                                                        
        using pd_post_and_drain_buffer_list_t =    sdk::function<void(struct ndis::pd_queue_t*, struct ndis::pd_buffer_t**, struct ndis::pd_buffer_t***, uint32_t)>*;                                 
        using pd_query_queue_depth_t =             sdk::function<void(const struct ndis::pd_queue_t*, uint64_t*)>*;                                 
        using pd_post_and_drain_buffer_list_ex_t = sdk::function<void(struct ndis::pd_queue_t*, struct ndis::pd_post_and_drain_arg_t*)>*;                                 
                                                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                                   
        _m00 struct ndis::object_header_t                   header;                            //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                       flags;                             //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 pd_post_and_drain_buffer_list_t                pd_post_and_drain_buffer_list;     //{ +0x0008    +0x0008    +0x0008    } | .PDPostAndDrainBufferList
        _m03 pd_query_queue_depth_t                         pd_query_queue_depth;              //{ +0x0010    +0x0010    +0x0010    } | .PDQueryQueueDepth
        _m04 sdk::function<void(struct ndis::pd_queue_t*)>* pd_flush_queue;                    //{ +0x0018    +0x0018    +0x0018    } | .PDFlushQueue
        _m05 pd_post_and_drain_buffer_list_ex_t             pd_post_and_drain_buffer_list_ex;  //{ +0x0020    +0x0020    +0x0020    } | .PDPostAndDrainBufferListEx
                                                                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_QUEUE_DISPATCH.$", 0x28, true, 0x2afb9b2e28f319df );                                 
        SDK_FIXED_SIZE( pd_queue_dispatch_t, 0x28 );                                         
    };                                                                                       
};
#include "magic/pd_queue_dispatch_t.end.hpp"
SDK_VERIFY( struct ndis::pd_queue_dispatch_t, 0x28 );
