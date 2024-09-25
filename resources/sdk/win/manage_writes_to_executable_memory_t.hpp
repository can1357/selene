#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/manage_writes_to_executable_memory_t.start.hpp"
namespace win
{
    // [struct _MANAGE_WRITES_TO_EXECUTABLE_MEMORY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct manage_writes_to_executable_memory_t        
    {                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                             
        _m00 uint8_t version;                            //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .Version
        _m01 uint1_t process_enable_write_exceptions;    //{ +0x0000@8  +0x0000@8  +0x0000@8  } | .ProcessEnableWriteExceptions
        _m02 uint1_t thread_allow_writes;                //{ +0x0000@9  +0x0000@9  +0x0000@9  } | .ThreadAllowWrites
        _m03 void*   kernel_write_to_executable_signal;  //{ +0x0008    +0x0008    +0x0008    } | .KernelWriteToExecutableSignal
                                                       
        SDK_MAGIC_PROPERTIES( "_MANAGE_WRITES_TO_EXECUTABLE_MEMORY.$", 0x10, true, 0xdc484e82a3af3f4d );                                  
        SDK_FIXED_SIZE( manage_writes_to_executable_memory_t, 0x10 );                                  
    };                                                 
};
#include "magic/manage_writes_to_executable_memory_t.end.hpp"
SDK_VERIFY( struct win::manage_writes_to_executable_memory_t, 0x10 );
