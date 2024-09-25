#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ums_system_thread_information_t.start.hpp"
namespace win
{
    // [struct _UMS_SYSTEM_THREAD_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ums_system_thread_information_t    
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint32_t ums_version;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UmsVersion
        _m01 uint1_t  is_ums_scheduler_thread;  //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .IsUmsSchedulerThread
        _m02 uint1_t  is_ums_worker_thread;     //{ +0x0004@1  +0x0004@1  +0x0004@1  +0x0004@1  } | .IsUmsWorkerThread
        _m03 uint32_t thread_ums_flags;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ThreadUmsFlags
                                              
        SDK_MAGIC_PROPERTIES( "_UMS_SYSTEM_THREAD_INFORMATION.$", 0x8, true, 0x4782fb956d62e918 );                        
        SDK_FIXED_SIZE( ums_system_thread_information_t, 0x8 );                        
    };                                        
};
#include "magic/ums_system_thread_information_t.end.hpp"
SDK_VERIFY( struct win::ums_system_thread_information_t, 0x8 );
