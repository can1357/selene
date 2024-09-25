#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stack_context_entry_t.start.hpp"
namespace rtl
{
    // [struct _RTL_STACK_CONTEXT_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stack_context_entry_t
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint64_t address;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
        _m01 uint64_t data;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Data
                                
        SDK_MAGIC_PROPERTIES( "_RTL_STACK_CONTEXT_ENTRY.$", 0x10, true, 0x1c33059e8b22ad34 );        
        SDK_FIXED_SIZE( stack_context_entry_t, 0x10 );        
    };                          
};
#include "magic/stack_context_entry_t.end.hpp"
SDK_VERIFY( struct rtl::stack_context_entry_t, 0x10 );
