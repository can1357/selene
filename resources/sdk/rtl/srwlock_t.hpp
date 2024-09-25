#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/srwlock_t.start.hpp"
namespace rtl
{
    // [struct _RTL_SRWLOCK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct srwlock_t                  
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 void*    ptr;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Ptr
                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m01 uint1_t  locked;           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Locked
        _m02 uint1_t  waiting;          //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Waiting
        _m03 uint1_t  waking;           //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Waking
        _m04 uint1_t  multiple_shared;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .MultipleShared
        _m05 uint60_t shared;           //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Shared
        _m06 uint64_t value;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                      
        SDK_NONVOL_PROPERTIES( "_RTL_SRWLOCK.$", 0x8, true, 0x92454846bd0cebb6 );                
        SDK_FIXED_SIZE( srwlock_t, 0x8 );                
    };                                
};
#include "magic/srwlock_t.end.hpp"
SDK_VERIFY( struct rtl::srwlock_t, 0x8 );
