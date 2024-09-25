#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/klock_queue_handle_t.hpp"

#include "magic/lock_context_t.start.hpp"
namespace stor::port
{
    // [union _LOCK_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union lock_context_t                                 
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                               
        _m00 struct nt::klock_queue_handle_t lock_handle;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LockHandle
        _m01 uint8_t                         old_irql;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OldIrql
                                                         
        SDK_MAGIC_PROPERTIES( "_LOCK_CONTEXT.$", 0x18, true, 0x5576b57e06050c6e );            
        SDK_FIXED_SIZE( lock_context_t, 0x18 );            
    };                                                   
};
#include "magic/lock_context_t.end.hpp"
SDK_VERIFY( union stor::port::lock_context_t, 0x18 );
