#pragma once
#include <sdkgen/support_library.hpp>
#include "stack_context_entry_t.hpp"

#include "magic/stack_context_t.start.hpp"
namespace rtl
{
    // [struct _RTL_STACK_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stack_context_t                                                      
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                      
        _m00 uint32_t                                         number_of_entries;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfEntries
        _m01 sdk::array<struct rtl::stack_context_entry_t, 1> entry;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Entry
                                                                                
        SDK_MAGIC_PROPERTIES( "_RTL_STACK_CONTEXT.$", 0x18, true, 0x958213180d234eff );                  
        SDK_FIXED_SIZE( stack_context_t, 0x18 );                                
    };                                                                          
};
#include "magic/stack_context_t.end.hpp"
SDK_VERIFY( struct rtl::stack_context_t, 0x18 );
