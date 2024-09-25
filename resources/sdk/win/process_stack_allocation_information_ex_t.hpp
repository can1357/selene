#pragma once
#include <sdkgen/support_library.hpp>
#include "process_stack_allocation_information_t.hpp"

#include "magic/process_stack_allocation_information_ex_t.start.hpp"
namespace win
{
    // [struct _PROCESS_STACK_ALLOCATION_INFORMATION_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_stack_allocation_information_ex_t                
    {                                                               
        using process_stack_allocation_information_t = struct win::process_stack_allocation_information_t;               
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                          
        _m00 uint32_t                                preferred_node;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PreferredNode
        _m01 process_stack_allocation_information_t  alloc_info;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AllocInfo
                                                                    
        SDK_MAGIC_PROPERTIES( "_PROCESS_STACK_ALLOCATION_INFORMATION_EX.$", 0x28, true, 0x41dfde4687de5a94 );               
        SDK_FIXED_SIZE( process_stack_allocation_information_ex_t, 0x28 );               
    };                                                              
};
#include "magic/process_stack_allocation_information_ex_t.end.hpp"
SDK_VERIFY( struct win::process_stack_allocation_information_ex_t, 0x28 );
