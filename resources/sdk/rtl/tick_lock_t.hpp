#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tick_lock_t.start.hpp"
namespace rtl
{
    // [union _RTL_TICK_LOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union tick_lock_t             
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint64_t as_u_long64;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULong64
        _m01 uint1_t  busy;         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Busy
        _m02 uint63_t ticks;        //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Ticks
                                  
        SDK_MAGIC_PROPERTIES( "_RTL_TICK_LOCK.$", 0x8, true, 0x4bc58a44c08f15a0 );            
        SDK_FIXED_SIZE( tick_lock_t, 0x8 );            
    };                            
};
#include "magic/tick_lock_t.end.hpp"
SDK_VERIFY( union rtl::tick_lock_t, 0x8 );
