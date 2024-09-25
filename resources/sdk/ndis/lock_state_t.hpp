#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lock_state_t.start.hpp"
namespace ndis
{
    // [struct _LOCK_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lock_state_t          
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint16_t lock_state;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LockState
        _m01 uint8_t  old_irql;    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .OldIrql
                                 
        SDK_MAGIC_PROPERTIES( "_LOCK_STATE.$", 0x4, true, 0x48dd2b857f652c26 );           
        SDK_FIXED_SIZE( lock_state_t, 0x4 );           
    };                           
};
#include "magic/lock_state_t.end.hpp"
SDK_VERIFY( struct ndis::lock_state_t, 0x4 );
