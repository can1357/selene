#pragma once
#include <sdkgen/support_library.hpp>
#include "urb_header_t.hpp"
#include "endpoint_offload_response_event_type_t.hpp"
#include "endpoint_offload_notification_event_type_t.hpp"

#include "magic/urb_async_notification_request_during_endpoint_offload_t.start.hpp"
namespace wdf
{
    // [struct _URB_ASYNC_NOTIFICATION_REQUEST_DURING_ENDPOINT_OFFLOAD]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct urb_async_notification_request_during_endpoint_offload_t       
    {                                                                     
        using endpoint_offload_notification_event_type_t = enum wdf::endpoint_offload_notification_event_type_t;            
                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                
        _m00 struct wdf::urb_header_t                         hdr;          //{ +0x0000    +0x0000    +0x0000    } | .Hdr
        _m01 void*                                            pipe_handle;  //{ +0x0018    +0x0018    +0x0018    } | .PipeHandle
        _m02 endpoint_offload_notification_event_type_t       event;        //{ +0x0020    +0x0020    +0x0020    } | .Event
        _m03 enum wdf::endpoint_offload_response_event_type_t response;     //{ +0x0024    +0x0024    +0x0024    } | .Response
                                                                          
        SDK_MAGIC_PROPERTIES( "_URB_ASYNC_NOTIFICATION_REQUEST_DURING_ENDPOINT_OFFLOAD.$", 0x28, true, 0xe5617c7d1d4c2c8e );            
        SDK_FIXED_SIZE( urb_async_notification_request_during_endpoint_offload_t, 0x28 );            
    };                                                                    
};
#include "magic/urb_async_notification_request_during_endpoint_offload_t.end.hpp"
SDK_VERIFY( struct wdf::urb_async_notification_request_during_endpoint_offload_t, 0x28 );
