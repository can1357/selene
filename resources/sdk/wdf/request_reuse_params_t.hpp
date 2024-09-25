#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t; }

#include "magic/request_reuse_params_t.start.hpp"
namespace wdf
{
    // [struct _WDF_REQUEST_REUSE_PARAMS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct request_reuse_params_t      
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                             
        _m00 uint32_t          size;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t          flags;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 int32_t           status;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Status
        _m03 struct nt::irp_t* new_irp;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NewIrp
                                       
        SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_REUSE_PARAMS.$", 0x18, true, 0xc13de133c1807a34 );        
        SDK_FIXED_SIZE( request_reuse_params_t, 0x18 );        
    };                                 
};
#include "magic/request_reuse_params_t.end.hpp"
SDK_VERIFY( struct wdf::request_reuse_params_t, 0x18 );
