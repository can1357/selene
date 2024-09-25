#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/thread_last_syscall_information_t.start.hpp"
namespace win
{
    // [struct _THREAD_LAST_SYSCALL_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_last_syscall_information_t
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 void*    first_argument;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FirstArgument
        _m01 uint16_t system_call_number;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SystemCallNumber
        _m02 uint64_t wait_time;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .WaitTime
                                            
        SDK_MAGIC_PROPERTIES( "_THREAD_LAST_SYSCALL_INFORMATION.$", 0x18, true, 0x359721067144d9a1 );                   
        SDK_FIXED_SIZE( thread_last_syscall_information_t, 0x18 );                   
    };                                      
};
#include "magic/thread_last_syscall_information_t.end.hpp"
SDK_VERIFY( struct win::thread_last_syscall_information_t, 0x18 );
