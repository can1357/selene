#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/suspendcontext_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SUSPENDCONTEXT]
    // => WDK 10 (NV)
    //
    struct suspendcontext_t                 
    {                                       
        // WDK 10                           
        //                                  
        _m00 void*    h_context;              //{ +0x0000    } | .hContext
        _m01 uint64_t context_suspend_fence;  //{ +0x0008    } | .contextSuspendFence
                                            
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SUSPENDCONTEXT.$", 0x0, false, 0x655ce7b6dc64b8cc );                      
        SDK_FIXED_SIZE( suspendcontext_t, 0x10 );                      
    };                                      
};
#include "magic/suspendcontext_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::suspendcontext_t, 0x10 );
