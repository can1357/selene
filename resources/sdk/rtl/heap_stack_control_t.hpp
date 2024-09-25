#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/heap_stack_control_t.start.hpp"
namespace rtl
{
    // [struct _RTL_HEAP_STACK_CONTROL]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct heap_stack_control_t
    {                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint16_t version;   //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t flags;     //{ +0x0002    +0x0002    +0x0002    } | .Flags
        _m02 void*    process;   //{ +0x0008    +0x0008    +0x0008    } | .Process
                               
        SDK_MAGIC_PROPERTIES( "_RTL_HEAP_STACK_CONTROL.$", 0x10, true, 0x33f95a515a31f93b );        
        SDK_FIXED_SIZE( heap_stack_control_t, 0x10 );        
    };                         
};
#include "magic/heap_stack_control_t.end.hpp"
SDK_VERIFY( struct rtl::heap_stack_control_t, 0x10 );
