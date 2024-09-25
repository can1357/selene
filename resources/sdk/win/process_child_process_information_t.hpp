#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_child_process_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_CHILD_PROCESS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_child_process_information_t         
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                             
        _m00 uint8_t prohibit_child_processes;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProhibitChildProcesses
                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                             
        _m01 uint8_t always_allow_secure_child_process;  //{ +0x0001    +0x0001    +0x0001    } | .AlwaysAllowSecureChildProcess
        _m02 uint8_t audit_prohibit_child_processes;     //{ +0x0002    +0x0002    +0x0002    } | .AuditProhibitChildProcesses
                                                       
        // Windows 10 v1607                                  
        //                                             
        _m03 uint8_t enable_automatic_override;          //{ +0x0001    } | .EnableAutomaticOverride
                                                       
        SDK_MAGIC_PROPERTIES( "_PROCESS_CHILD_PROCESS_INFORMATION.$", 0x3, true, 0x92f7c115dc65bfe5 );                                  
        SDK_DYNAMIC_SIZE( process_child_process_information_t );                                  
    };                                                 
};
#include "magic/process_child_process_information_t.end.hpp"
