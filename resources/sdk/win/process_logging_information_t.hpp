#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_logging_information_t.start.hpp"
namespace win
{
    // [union _PROCESS_LOGGING_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union process_logging_information_t                     
    {                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                  
        _m00 uint32_t flags;                                  //{ +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t  enable_read_vm_logging;                 //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .EnableReadVmLogging
        _m02 uint1_t  enable_write_vm_logging;                //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .EnableWriteVmLogging
        _m03 uint1_t  enable_process_suspend_resume_logging;  //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .EnableProcessSuspendResumeLogging
        _m04 uint1_t  enable_thread_suspend_resume_logging;   //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .EnableThreadSuspendResumeLogging
                                                            
        // Windows 11                                       
        //                                                  
        _m05 uint1_t  enable_local_exec_protect_vm_logging;   //{ +0x0000@4  } | .EnableLocalExecProtectVmLogging
        _m06 uint1_t  enable_remote_exec_protect_vm_logging;  //{ +0x0000@5  } | .EnableRemoteExecProtectVmLogging
                                                            
        SDK_MAGIC_PROPERTIES( "_PROCESS_LOGGING_INFORMATION.$", 0x4, true, 0xc7ddfb491b56c6ed );                                      
        SDK_FIXED_SIZE( process_logging_information_t, 0x4 );                                      
    };                                                      
};
#include "magic/process_logging_information_t.end.hpp"
SDK_VERIFY( union win::process_logging_information_t, 0x4 );
