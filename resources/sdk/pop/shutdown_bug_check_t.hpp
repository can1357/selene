#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct eprocess_t; }
namespace nt { struct ethread_t;  }

#include "magic/shutdown_bug_check_t.start.hpp"
namespace pop
{
    // [struct _POP_SHUTDOWN_BUG_CHECK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct shutdown_bug_check_t                        
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                             
        _m00 struct nt::ethread_t*  initiating_thread;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InitiatingThread
        _m01 struct nt::eprocess_t* initiating_process;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InitiatingProcess
        _m02 void*                  thread_id;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ThreadId
        _m03 void*                  process_id;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ProcessId
        _m04 uint32_t               code;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Code
        _m05 uint64_t               parameter1;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Parameter1
        _m06 uint64_t               parameter2;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Parameter2
        _m07 uint64_t               parameter3;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Parameter3
        _m08 uint64_t               parameter4;          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Parameter4
                                                       
        SDK_MAGIC_PROPERTIES( "_POP_SHUTDOWN_BUG_CHECK.$", 0x48, true, 0xe19a7c623dd3197d );                   
        SDK_FIXED_SIZE( shutdown_bug_check_t, 0x48 );                   
    };                                                 
};
#include "magic/shutdown_bug_check_t.end.hpp"
SDK_VERIFY( struct pop::shutdown_bug_check_t, 0x48 );
