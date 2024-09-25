#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/request_send_options_v1_13_t.start.hpp"
namespace wdf
{
    // [struct _WDF_REQUEST_SEND_OPTIONS_V1_13]
    // => Windows 10 v1607
    //
    struct request_send_options_v1_13_t
    {                                  
        // Windows 10 v1607        
        //                    
        _m00 uint32_t size;              //{ +0x0000    } | .Size
        _m01 uint32_t flags;             //{ +0x0004    } | .Flags
        _m02 int64_t  timeout;           //{ +0x0008    } | .Timeout
                                       
        SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_SEND_OPTIONS_V1_13.$", 0x0, false, 0x85fab204d807ccb1 );        
        SDK_FIXED_SIZE( request_send_options_v1_13_t, 0x10 );        
    };                                 
};
#include "magic/request_send_options_v1_13_t.end.hpp"
SDK_VERIFY( struct wdf::request_send_options_v1_13_t, 0x10 );