#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/updatehwcontextstate_flags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_UPDATEHWCONTEXTSTATE_FLAGS]
    // => WDK 10 (NV)
    //
    struct updatehwcontextstate_flags_t              
    {                                                
        // WDK 10                                    
        //                                           
        _m00 uint1_t  suspended;                       //{ +0x0000@0  } | .Suspended
        _m01 uint1_t  interrupt_on_switch_completion;  //{ +0x0000@1  } | .InterruptOnSwitchCompletion
        _m02 uint32_t value;                           //{ +0x0000    } | .Value
                                                     
        SDK_NONVOL_PROPERTIES( "_DXGK_UPDATEHWCONTEXTSTATE_FLAGS.$", 0x0, false, 0x7461eb43f2d9149c );                               
        SDK_FIXED_SIZE( updatehwcontextstate_flags_t, 0x4 );                               
    };                                               
};
#include "magic/updatehwcontextstate_flags_t.end.hpp"
SDK_VERIFY( struct dxgk::updatehwcontextstate_flags_t, 0x4 );
