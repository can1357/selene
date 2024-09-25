#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kstack_count_t.start.hpp"
namespace nt
{
    // [union _KSTACK_COUNT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union kstack_count_t          
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 int32_t  value;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
        _m01 uint3_t  state;        //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .State
        _m02 uint29_t stack_count;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .StackCount
                                  
        SDK_MAGIC_PROPERTIES( "_KSTACK_COUNT.$", 0x4, true, 0xf58826d4b5e9de59 );            
        SDK_FIXED_SIZE( kstack_count_t, 0x4 );            
    };                            
};
#include "magic/kstack_count_t.end.hpp"
SDK_VERIFY( union nt::kstack_count_t, 0x4 );
