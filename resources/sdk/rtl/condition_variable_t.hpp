#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/condition_variable_t.start.hpp"
namespace rtl
{
    // [struct _RTL_CONDITION_VARIABLE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct condition_variable_t  
    {                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 void*    ptr;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Ptr
                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m01 uint3_t  wake_count;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .WakeCount
        _m02 uint1_t  waking;      //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Waking
        _m03 uint64_t value;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                 
        SDK_NONVOL_PROPERTIES( "_RTL_CONDITION_VARIABLE.$", 0x8, true, 0x4c84ca8f4d7f2049 );           
        SDK_FIXED_SIZE( condition_variable_t, 0x8 );           
    };                           
};
#include "magic/condition_variable_t.end.hpp"
SDK_VERIFY( struct rtl::condition_variable_t, 0x8 );
