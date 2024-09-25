#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_kernel_debugger_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_KERNEL_DEBUGGER_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_kernel_debugger_information_t  
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                       
        _m00 uint8_t kernel_debugger_enabled;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KernelDebuggerEnabled
        _m01 uint8_t kernel_debugger_not_present;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .KernelDebuggerNotPresent
                                                 
        SDK_MAGIC_PROPERTIES( "_SYSTEM_KERNEL_DEBUGGER_INFORMATION.$", 0x2, true, 0xf8bc071893d43e4c );                            
        SDK_FIXED_SIZE( system_kernel_debugger_information_t, 0x2 );                            
    };                                           
};
#include "magic/system_kernel_debugger_information_t.end.hpp"
SDK_VERIFY( struct win::system_kernel_debugger_information_t, 0x2 );
