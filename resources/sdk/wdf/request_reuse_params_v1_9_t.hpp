#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t; }

#include "magic/request_reuse_params_v1_9_t.start.hpp"
namespace wdf
{
    // [struct _WDF_REQUEST_REUSE_PARAMS_V1_9]
    // => Windows 10 v1607
    //
    struct request_reuse_params_v1_9_t 
    {                                  
        // Windows 10 v1607            
        //                             
        _m00 uint32_t          size;     //{ +0x0000    } | .Size
        _m01 uint32_t          flags;    //{ +0x0004    } | .Flags
        _m02 int32_t           status;   //{ +0x0008    } | .Status
        _m03 struct nt::irp_t* new_irp;  //{ +0x0010    } | .NewIrp
                                       
        SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_REUSE_PARAMS_V1_9.$", 0x0, false, 0x11d60c9fab3097d3 );        
        SDK_FIXED_SIZE( request_reuse_params_v1_9_t, 0x18 );        
    };                                 
};
#include "magic/request_reuse_params_v1_9_t.end.hpp"
SDK_VERIFY( struct wdf::request_reuse_params_v1_9_t, 0x18 );
