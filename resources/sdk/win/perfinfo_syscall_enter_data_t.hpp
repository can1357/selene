#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_syscall_enter_data_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_SYSCALL_ENTER_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_syscall_enter_data_t
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                       
        _m00 void* sys_call_addr;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SysCallAddr
                                        
        SDK_MAGIC_PROPERTIES( "_PERFINFO_SYSCALL_ENTER_DATA.$", 0x8, true, 0xd879ab0b5376961c );              
        SDK_FIXED_SIZE( perfinfo_syscall_enter_data_t, 0x8 );              
    };                                  
};
#include "magic/perfinfo_syscall_enter_data_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_syscall_enter_data_t, 0x8 );
