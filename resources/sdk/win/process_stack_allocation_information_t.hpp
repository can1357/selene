#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_stack_allocation_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_STACK_ALLOCATION_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_stack_allocation_information_t
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint64_t reserve_size;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReserveSize
        _m01 uint64_t zero_bits;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ZeroBits
        _m02 void*    stack_base;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .StackBase
                                                 
        SDK_MAGIC_PROPERTIES( "_PROCESS_STACK_ALLOCATION_INFORMATION.$", 0x18, true, 0x7608cfff0d2d028c );             
        SDK_FIXED_SIZE( process_stack_allocation_information_t, 0x18 );             
    };                                           
};
#include "magic/process_stack_allocation_information_t.end.hpp"
SDK_VERIFY( struct win::process_stack_allocation_information_t, 0x18 );
