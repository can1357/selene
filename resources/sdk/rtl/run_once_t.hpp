#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/run_once_t.start.hpp"
namespace rtl
{
    // [union _RTL_RUN_ONCE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union run_once_t        
    {                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 void*    ptr;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Ptr
                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m01 uint64_t value;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
        _m02 uint2_t  state;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .State
                            
        SDK_NONVOL_PROPERTIES( "_RTL_RUN_ONCE.$", 0x8, true, 0xd5b87a7b50983658 );      
        SDK_FIXED_SIZE( run_once_t, 0x8 );      
    };                      
};
#include "magic/run_once_t.end.hpp"
SDK_VERIFY( union rtl::run_once_t, 0x8 );
