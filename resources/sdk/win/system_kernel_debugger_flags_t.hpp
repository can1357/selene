#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_kernel_debugger_flags_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_KERNEL_DEBUGGER_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_kernel_debugger_flags_t                 
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                
        _m00 uint8_t kernel_debugger_ignore_um_exceptions;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KernelDebuggerIgnoreUmExceptions
                                                          
        SDK_MAGIC_PROPERTIES( "_SYSTEM_KERNEL_DEBUGGER_FLAGS.$", 0x1, true, 0xe193803ba3055f64 );                                     
        SDK_FIXED_SIZE( system_kernel_debugger_flags_t, 0x1 );                                     
    };                                                    
};
#include "magic/system_kernel_debugger_flags_t.end.hpp"
SDK_VERIFY( struct win::system_kernel_debugger_flags_t, 0x1 );
