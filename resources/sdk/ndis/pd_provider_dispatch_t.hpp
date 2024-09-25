#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "pd_control_type_t.hpp"
#include "pd_queue_control_code_t.hpp"
#include "pd_provider_control_code_t.hpp"

#include "magic/pd_provider_dispatch_t.start.hpp"
namespace ndis
{
    struct pd_queue_t;
    union pd_counter_value_t;
    struct pd_filter_handle_t;
    struct pd_counter_handle_t;
    struct pd_provider_handle_t;
    struct pd_queue_parameters_t;
    struct pd_filter_parameters_t;
    struct pd_counter_parameters_t;
    struct pd_acquire_queues_parameters_t;

    // [struct _NDIS_PD_PROVIDER_DISPATCH]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_provider_dispatch_t                                                              
    {                                                                                          
        using ndis_pd_allocate_queue_t =         sdk::function<int32_t(struct ndis::pd_provider_handle_t*, const struct ndis::pd_queue_parameters_t*, struct ndis::pd_queue_t**)>*;                                   
        using ndis_pd_acquire_receive_queues_t = sdk::function<int32_t(struct ndis::pd_provider_handle_t*, const struct ndis::pd_acquire_queues_parameters_t*, struct ndis::pd_queue_t**, uint32_t*, struct ndis::pd_queue_parameters_t*, uint32_t*, uint32_t*)>*;                                   
        using ndis_pd_release_receive_queues_t = sdk::function<void(struct ndis::pd_provider_handle_t*)>*;                                   
        using ndis_pd_allocate_counter_t =       sdk::function<int32_t(struct ndis::pd_provider_handle_t*, const struct ndis::pd_counter_parameters_t*, struct ndis::pd_counter_handle_t**)>*;                                   
        using ndis_pd_free_counter_t =           sdk::function<void(struct ndis::pd_counter_handle_t*)>*;                                   
        using ndis_pd_query_counter_t =          sdk::function<void(struct ndis::pd_counter_handle_t*, union ndis::pd_counter_value_t*)>*;                                   
        using ndis_pd_set_receive_filter_t =     sdk::function<int32_t(struct ndis::pd_provider_handle_t*, const struct ndis::pd_filter_parameters_t*, struct ndis::pd_filter_handle_t**)>*;                                   
        using ndis_pd_clear_receive_filter_t =   sdk::function<void(struct ndis::pd_filter_handle_t*)>*;                                   
        using ndis_pd_queue_control_t =          sdk::function<int32_t(struct ndis::pd_queue_t*, enum ndis::pd_control_type_t, enum ndis::pd_queue_control_code_t, void*, uint32_t, void*, uint32_t, uint32_t*)>*;                                   
        using ndis_pd_provider_control_t =       sdk::function<int32_t(struct ndis::pd_provider_handle_t*, enum ndis::pd_control_type_t, enum ndis::pd_provider_control_code_t, void*, uint32_t, void*, uint32_t, uint32_t*)>*;                                   
                                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                     
        _m00 struct ndis::object_header_t                   header;                              //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                       flags;                               //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 ndis_pd_allocate_queue_t                       ndis_pd_allocate_queue;              //{ +0x0008    +0x0008    +0x0008    } | .NdisPDAllocateQueue
        _m03 sdk::function<void(struct ndis::pd_queue_t*)>* ndis_pd_free_queue;                  //{ +0x0010    +0x0010    +0x0010    } | .NdisPDFreeQueue
        _m04 ndis_pd_acquire_receive_queues_t               ndis_pd_acquire_receive_queues;      //{ +0x0018    +0x0018    +0x0018    } | .NdisPDAcquireReceiveQueues
        _m05 ndis_pd_release_receive_queues_t               ndis_pd_release_receive_queues;      //{ +0x0020    +0x0020    +0x0020    } | .NdisPDReleaseReceiveQueues
        _m06 ndis_pd_allocate_counter_t                     ndis_pd_allocate_counter;            //{ +0x0028    +0x0028    +0x0028    } | .NdisPDAllocateCounter
        _m07 ndis_pd_free_counter_t                         ndis_pd_free_counter;                //{ +0x0030    +0x0030    +0x0030    } | .NdisPDFreeCounter
        _m08 ndis_pd_query_counter_t                        ndis_pd_query_counter;               //{ +0x0038    +0x0038    +0x0038    } | .NdisPDQueryCounter
        _m09 ndis_pd_set_receive_filter_t                   ndis_pd_set_receive_filter;          //{ +0x0040    +0x0040    +0x0040    } | .NdisPDSetReceiveFilter
        _m10 ndis_pd_clear_receive_filter_t                 ndis_pd_clear_receive_filter;        //{ +0x0048    +0x0048    +0x0048    } | .NdisPDClearReceiveFilter
        _m11 sdk::function<void(struct ndis::pd_queue_t*)>* ndis_pd_request_drain_notification;  //{ +0x0050    +0x0050    +0x0050    } | .NdisPDRequestDrainNotification
        _m12 ndis_pd_queue_control_t                        ndis_pd_queue_control;               //{ +0x0058    +0x0058    +0x0058    } | .NdisPDQueueControl
        _m13 ndis_pd_provider_control_t                     ndis_pd_provider_control;            //{ +0x0060    +0x0060    +0x0060    } | .NdisPDProviderControl
                                                                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_PROVIDER_DISPATCH.$", 0x68, true, 0x765a3d421ef9dc7e );                                   
        SDK_FIXED_SIZE( pd_provider_dispatch_t, 0x68 );                                        
    };                                                                                         
};
#include "magic/pd_provider_dispatch_t.end.hpp"
SDK_VERIFY( struct ndis::pd_provider_dispatch_t, 0x68 );
