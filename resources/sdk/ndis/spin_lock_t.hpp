#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/spin_lock_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_SPIN_LOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct spin_lock_t          
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint64_t spin_lock;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SpinLock
        _m01 uint8_t  old_irql;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OldIrql
                                
        SDK_MAGIC_PROPERTIES( "_NDIS_SPIN_LOCK.$", 0x10, true, 0xf9c8c6a7834a7c45 );          
        SDK_FIXED_SIZE( spin_lock_t, 0x10 );          
    };                          
};
#include "magic/spin_lock_t.end.hpp"
SDK_VERIFY( struct ndis::spin_lock_t, 0x10 );
