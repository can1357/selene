#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_syscall_exit_data_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_SYSCALL_EXIT_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_syscall_exit_data_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                        
        _m00 int32_t return_value;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReturnValue
                                       
        SDK_MAGIC_PROPERTIES( "_PERFINFO_SYSCALL_EXIT_DATA.$", 0x4, true, 0x1a39d644c9a618d8 );             
        SDK_FIXED_SIZE( perfinfo_syscall_exit_data_t, 0x4 );             
    };                                 
};
#include "magic/perfinfo_syscall_exit_data_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_syscall_exit_data_t, 0x4 );
