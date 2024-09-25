#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/push_lock_auto_expand_state_t.start.hpp"
namespace ex
{
    // [struct _EX_PUSH_LOCK_AUTO_EXPAND_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct push_lock_auto_expand_state_t
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint1_t  expanded;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Expanded
        _m01 uint1_t  transitioning;      //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Transitioning
        _m02 uint1_t  pageable;           //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Pageable
        _m03 uint32_t value;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                        
        SDK_MAGIC_PROPERTIES( "_EX_PUSH_LOCK_AUTO_EXPAND_STATE.$", 0x4, true, 0xe890dabfbf8dfe76 );              
        SDK_FIXED_SIZE( push_lock_auto_expand_state_t, 0x4 );              
    };                                  
};
#include "magic/push_lock_auto_expand_state_t.end.hpp"
SDK_VERIFY( struct ex::push_lock_auto_expand_state_t, 0x4 );
