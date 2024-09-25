#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_kernel_debugger_information_ex_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_KERNEL_DEBUGGER_INFORMATION_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_kernel_debugger_information_ex_t
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                            
        _m00 uint8_t debugger_allowed;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DebuggerAllowed
        _m01 uint8_t debugger_enabled;              //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .DebuggerEnabled
        _m02 uint8_t debugger_present;              //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .DebuggerPresent
                                                  
        SDK_MAGIC_PROPERTIES( "_SYSTEM_KERNEL_DEBUGGER_INFORMATION_EX.$", 0x3, true, 0xfc1969e1fbb1a9c1 );                 
        SDK_FIXED_SIZE( system_kernel_debugger_information_ex_t, 0x3 );                 
    };                                            
};
#include "magic/system_kernel_debugger_information_ex_t.end.hpp"
SDK_VERIFY( struct win::system_kernel_debugger_information_ex_t, 0x3 );
