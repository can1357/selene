#pragma once
#include <sdkgen/support_library.hpp>
#include "io_forward_progress_reserved_policy_t.hpp"
#include "io_forward_progress_reserved_policy_settings_t.hpp"

#include "magic/io_queue_forward_progress_policy_v1_15_t.start.hpp"
namespace wdf
{
    struct wdfqueue_t;
    struct wdfrequest_t;

    // [struct _WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_15]
    // => Windows 10 v1607
    //
    struct io_queue_forward_progress_policy_v1_15_t                                                           
    {                                                                                                         
        using wdf_io_forward_progress_reserved_policy_settings_t = struct wdf::io_forward_progress_reserved_policy_settings_t;                                               
        using forward_progress_reserve_policy_settings_t =         wdf_io_forward_progress_reserved_policy_settings_t ;                                               
        using evt_io_allocate_resources_for_reserved_request_t =   sdk::function<int32_t(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*;                                               
        using evt_io_allocate_request_resources_t =                sdk::function<int32_t(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*;                                               
                                                                                                              
        // Windows 10 v1607                                                                                   
        //                                                                                                    
        _m00 uint32_t                                          size;                                            //{ +0x0000    } | .Size
        _m01 uint32_t                                          total_forward_progress_requests;                 //{ +0x0004    } | .TotalForwardProgressRequests
        _m02 enum wdf::io_forward_progress_reserved_policy_t   forward_progress_reserved_policy;                //{ +0x0008    } | .ForwardProgressReservedPolicy
        _m03 forward_progress_reserve_policy_settings_t        forward_progress_reserve_policy_settings;        //{ +0x0010    } | .ForwardProgressReservePolicySettings
        _m04 evt_io_allocate_resources_for_reserved_request_t  evt_io_allocate_resources_for_reserved_request;  //{ +0x0018    } | .EvtIoAllocateResourcesForReservedRequest
        _m05 evt_io_allocate_request_resources_t               evt_io_allocate_request_resources;               //{ +0x0020    } | .EvtIoAllocateRequestResources
                                                                                                              
        SDK_MAGIC_PROPERTIES( "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_15.$", 0x0, false, 0xea6280316dca68ce );                                               
        SDK_FIXED_SIZE( io_queue_forward_progress_policy_v1_15_t, 0x28 );                                               
    };                                                                                                        
};
#include "magic/io_queue_forward_progress_policy_v1_15_t.end.hpp"
SDK_VERIFY( struct wdf::io_queue_forward_progress_policy_v1_15_t, 0x28 );
