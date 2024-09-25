#pragma once
#include <sdkgen/support_library.hpp>
#include "process_ws_watch_information_t.hpp"

#include "magic/process_ws_watch_information_ex_t.start.hpp"
namespace win
{
    // [struct _PROCESS_WS_WATCH_INFORMATION_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_ws_watch_information_ex_t                               
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                 
        _m00 struct win::process_ws_watch_information_t basic_info;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BasicInfo
        _m01 uint64_t                                   faulting_thread_id;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FaultingThreadId
        _m02 uint64_t                                   flags;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Flags
                                                                           
        SDK_MAGIC_PROPERTIES( "_PROCESS_WS_WATCH_INFORMATION_EX.$", 0x20, true, 0x8dfa679f8c859782 );                   
        SDK_FIXED_SIZE( process_ws_watch_information_ex_t, 0x20 );                   
    };                                                                     
};
#include "magic/process_ws_watch_information_ex_t.end.hpp"
SDK_VERIFY( struct win::process_ws_watch_information_ex_t, 0x20 );
