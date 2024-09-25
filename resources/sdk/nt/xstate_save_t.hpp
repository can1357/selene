#pragma once
#include <sdkgen/support_library.hpp>
#include "xstate_context_t.hpp"

#include "magic/xstate_save_t.start.hpp"
namespace nt
{
    struct kthread_t;
    struct xstate_save_t;

    // [struct _XSTATE_SAVE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct xstate_save_t                                 
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                               
        _m00 struct nt::xstate_save_t*   prev;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Prev
        _m01 struct nt::kthread_t*       thread;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Thread
        _m02 uint8_t                     level;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Level
        _m03 struct nt::xstate_context_t x_state_context;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .XStateContext
                                                         
        SDK_NONVOL_PROPERTIES( "_XSTATE_SAVE.$", 0x38, true, 0xf2275eef3d4a970f );                
        SDK_FIXED_SIZE( xstate_save_t, 0x38 );                
    };                                                   
};
#include "magic/xstate_save_t.end.hpp"
SDK_VERIFY( struct nt::xstate_save_t, 0x38 );
