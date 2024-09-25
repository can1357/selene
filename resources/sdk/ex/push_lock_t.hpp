#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/push_lock_t.start.hpp"
namespace ex
{
    // [struct _EX_PUSH_LOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct push_lock_t                
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint1_t  locked;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Locked
        _m01 uint1_t  waiting;          //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Waiting
        _m02 uint1_t  waking;           //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Waking
        _m03 uint1_t  multiple_shared;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .MultipleShared
        _m04 uint60_t shared;           //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Shared
        _m05 uint64_t value;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
        _m06 void*    ptr;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Ptr
                                      
        SDK_MAGIC_PROPERTIES( "_EX_PUSH_LOCK.$", 0x8, true, 0x24677590b8245581 );                
        SDK_FIXED_SIZE( push_lock_t, 0x8 );                
    };                                
};
#include "magic/push_lock_t.end.hpp"
SDK_VERIFY( struct ex::push_lock_t, 0x8 );
