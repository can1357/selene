#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/client_id_t.hpp"

#include "magic/system_thread_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_THREAD_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_thread_information_t               
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                           
        _m00 int64_t                kernel_time;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KernelTime
        _m01 int64_t                user_time;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UserTime
        _m02 int64_t                create_time;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CreateTime
        _m03 uint32_t               wait_time;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .WaitTime
        _m04 void*                  start_address;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .StartAddress
        _m05 struct nt::client_id_t client_id;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ClientId
        _m06 int32_t                priority;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Priority
        _m07 int32_t                base_priority;     //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .BasePriority
        _m08 uint32_t               context_switches;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ContextSwitches
        _m09 uint32_t               thread_state;      //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .ThreadState
        _m10 uint32_t               wait_reason;       //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .WaitReason
                                                     
        SDK_MAGIC_PROPERTIES( "_SYSTEM_THREAD_INFORMATION.$", 0x50, true, 0x568a6f0be6fd5a2c );                 
        SDK_FIXED_SIZE( system_thread_information_t, 0x50 );                 
    };                                               
};
#include "magic/system_thread_information_t.end.hpp"
SDK_VERIFY( struct win::system_thread_information_t, 0x50 );
