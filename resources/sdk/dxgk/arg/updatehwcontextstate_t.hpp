#pragma once
#include <sdkgen/support_library.hpp>
#include "../updatehwcontextstate_flags_t.hpp"

#include "magic/updatehwcontextstate_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_UPDATEHWCONTEXTSTATE]
    // => WDK 10 (NV)
    //
    struct updatehwcontextstate_t                                           
    {                                                                       
        // WDK 10                                                           
        //                                                                  
        _m00 void*                                     h_hw_context;          //{ +0x0000    } | .hHwContext
        _m01 uint64_t                                  context_switch_fence;  //{ +0x0008    } | .ContextSwitchFence
        _m02 uint32_t                                  priority;              //{ +0x0010    } | .Priority
        _m03 struct dxgk::updatehwcontextstate_flags_t flags;                 //{ +0x0014    } | .Flags
                                                                            
        SDK_NONVOL_PROPERTIES( "_DXGKARG_UPDATEHWCONTEXTSTATE.$", 0x0, false, 0xd8a692fc62ba61bc );                     
        SDK_FIXED_SIZE( updatehwcontextstate_t, 0x18 );                     
    };                                                                      
};
#include "magic/updatehwcontextstate_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::updatehwcontextstate_t, 0x18 );
