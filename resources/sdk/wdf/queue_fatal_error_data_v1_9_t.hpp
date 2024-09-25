#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/queue_fatal_error_data_v1_9_t.start.hpp"
namespace wdf
{
    struct wdfqueue_t;
    struct wdfrequest_t;

    // [struct _WDF_QUEUE_FATAL_ERROR_DATA_V1_9]
    // => Windows 10 v1607
    //
    struct queue_fatal_error_data_v1_9_t       
    {                                          
        // Windows 10 v1607                    
        //                                     
        _m00 struct wdf::wdfqueue_t*   queue;    //{ +0x0000    } | .Queue
        _m01 struct wdf::wdfrequest_t* request;  //{ +0x0008    } | .Request
        _m02 int32_t                   status;   //{ +0x0010    } | .Status
                                               
        SDK_MAGIC_PROPERTIES( "_WDF_QUEUE_FATAL_ERROR_DATA_V1_9.$", 0x0, false, 0x39feb828d29cf2be );        
        SDK_FIXED_SIZE( queue_fatal_error_data_v1_9_t, 0x18 );        
    };                                         
};
#include "magic/queue_fatal_error_data_v1_9_t.end.hpp"
SDK_VERIFY( struct wdf::queue_fatal_error_data_v1_9_t, 0x18 );
