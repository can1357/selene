#pragma once
#include <sdkgen/support_library.hpp>
#include "push_lock_t.hpp"
#include "push_lock_auto_expand_state_t.hpp"

#include "magic/push_lock_auto_expand_t.start.hpp"
namespace ex
{
    // [struct _EX_PUSH_LOCK_AUTO_EXPAND]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct push_lock_auto_expand_t                               
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                       
        _m00 struct ex::push_lock_t                   local_lock;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LocalLock
        _m01 struct ex::push_lock_auto_expand_state_t state;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .State
        _m02 uint32_t                                 stats;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Stats
                                                                 
        SDK_MAGIC_PROPERTIES( "_EX_PUSH_LOCK_AUTO_EXPAND.$", 0x10, true, 0xd7495a8e7abe80d5 );           
        SDK_DYNAMIC_SIZE( push_lock_auto_expand_t );             
    };                                                           
};
#include "magic/push_lock_auto_expand_t.end.hpp"
