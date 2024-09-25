#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lock_state_ex_t.start.hpp"
namespace ndis
{
    // [struct _LOCK_STATE_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lock_state_ex_t      
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                      
        _m00 uint8_t old_irql;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OldIrql
        _m01 uint8_t lock_state;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .LockState
        _m02 uint8_t flags;       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
                                
        SDK_MAGIC_PROPERTIES( "_LOCK_STATE_EX.$", 0x3, true, 0x64661b4589ed2a58 );           
        SDK_FIXED_SIZE( lock_state_ex_t, 0x3 );           
    };                          
};
#include "magic/lock_state_ex_t.end.hpp"
SDK_VERIFY( struct ndis::lock_state_ex_t, 0x3 );
