#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kspin_lock_queue_t.start.hpp"
namespace nt
{
    struct kspin_lock_queue_t;

    // [struct _KSPIN_LOCK_QUEUE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kspin_lock_queue_t                             
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                                
        _m00 struct nt::kspin_lock_queue_t volatile* next;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 uint64_t volatile*                      lock;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Lock
                                                          
        SDK_NONVOL_PROPERTIES( "_KSPIN_LOCK_QUEUE.$", 0x10, true, 0x363c3b483411b9c8 );     
        SDK_FIXED_SIZE( kspin_lock_queue_t, 0x10 );       
    };                                                    
};
#include "magic/kspin_lock_queue_t.end.hpp"
SDK_VERIFY( struct nt::kspin_lock_queue_t, 0x10 );
