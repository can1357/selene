#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/request_forward_options_v1_15_t.start.hpp"
namespace wdf
{
    // [struct _WDF_REQUEST_FORWARD_OPTIONS_V1_15]
    // => Windows 10 v1607
    //
    struct request_forward_options_v1_15_t
    {                                     
        // Windows 10 v1607      
        //                  
        _m00 uint32_t size;                 //{ +0x0000    } | .Size
        _m01 uint32_t flags;                //{ +0x0004    } | .Flags
                                          
        SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_FORWARD_OPTIONS_V1_15.$", 0x0, false, 0x57eb620eb44c6488 );      
        SDK_FIXED_SIZE( request_forward_options_v1_15_t, 0x8 );      
    };                                    
};
#include "magic/request_forward_options_v1_15_t.end.hpp"
SDK_VERIFY( struct wdf::request_forward_options_v1_15_t, 0x8 );
