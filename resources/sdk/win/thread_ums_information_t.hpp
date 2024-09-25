#pragma once
#include <sdkgen/support_library.hpp>
#include "thread_ums_information_command_t.hpp"

namespace rtl { struct ums_completion_list_t; }
namespace rtl { struct ums_context_t;         }

#include "magic/thread_ums_information_t.start.hpp"
namespace win
{
    // [struct _THREAD_UMS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_ums_information_t                                             
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                      
        _m00 enum win::thread_ums_information_command_t command;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Command
        _m01 struct rtl::ums_completion_list_t*         completion_list;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CompletionList
        _m02 struct rtl::ums_context_t*                 ums_context;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UmsContext
        _m03 uint32_t                                   flags;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m04 uint1_t                                    is_ums_scheduler_thread;  //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .IsUmsSchedulerThread
        _m05 uint1_t                                    is_ums_worker_thread;     //{ +0x0008@1  +0x0008@1  +0x0008@1  +0x0008@1  } | .IsUmsWorkerThread
                                                                                
        SDK_MAGIC_PROPERTIES( "_THREAD_UMS_INFORMATION.$", 0x18, true, 0x33492253c39a9c80 );                        
        SDK_FIXED_SIZE( thread_ums_information_t, 0x18 );                        
    };                                                                          
};
#include "magic/thread_ums_information_t.end.hpp"
SDK_VERIFY( struct win::thread_ums_information_t, 0x18 );
