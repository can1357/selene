#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_information_t.start.hpp"
namespace win
{
    // [struct _PROCESS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_information_t    
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 void*    h_process;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .hProcess
        _m01 void*    h_thread;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hThread
        _m02 uint32_t dw_process_id;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwProcessId
        _m03 uint32_t dw_thread_id;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwThreadId
                                    
        SDK_MAGIC_PROPERTIES( "_PROCESS_INFORMATION.$", 0x18, true, 0x4cfb37dad6f72d73 );              
        SDK_FIXED_SIZE( process_information_t, 0x18 );              
    };                              
};
#include "magic/process_information_t.end.hpp"
SDK_VERIFY( struct win::process_information_t, 0x18 );
