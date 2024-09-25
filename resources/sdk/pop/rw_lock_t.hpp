#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"

namespace nt { struct kthread_t; }

#include "magic/rw_lock_t.start.hpp"
namespace pop
{
    // [struct _POP_RW_LOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rw_lock_t                       
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                 
        _m00 struct ex::push_lock_t lock;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 struct nt::kthread_t*  thread;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Thread
                                           
        SDK_MAGIC_PROPERTIES( "_POP_RW_LOCK.$", 0x10, true, 0x7e4471e5c96ef521 );       
        SDK_FIXED_SIZE( rw_lock_t, 0x10 );       
    };                                     
};
#include "magic/rw_lock_t.end.hpp"
SDK_VERIFY( struct pop::rw_lock_t, 0x10 );
