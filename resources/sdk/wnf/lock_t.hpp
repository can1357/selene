#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"

#include "magic/lock_t.start.hpp"
namespace wnf
{
    // [struct _WNF_LOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lock_t                             
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                    
        _m00 struct ex::push_lock_t push_lock;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PushLock
                                              
        SDK_MAGIC_PROPERTIES( "_WNF_LOCK.$", 0x8, true, 0xdecd45586863d679 );          
        SDK_FIXED_SIZE( lock_t, 0x8 );          
    };                                        
};
#include "magic/lock_t.end.hpp"
SDK_VERIFY( struct wnf::lock_t, 0x8 );
