#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/proc_idle_state_bucket_t.start.hpp"
namespace nt
{
    // [struct _PROC_IDLE_STATE_BUCKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proc_idle_state_bucket_t
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint64_t total_time;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalTime
        _m01 uint64_t min_time;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MinTime
        _m02 uint64_t max_time;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaxTime
        _m03 uint32_t count;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Count
                                   
        SDK_MAGIC_PROPERTIES( "_PROC_IDLE_STATE_BUCKET.$", 0x20, true, 0xe22ec8dc1310a9f6 );           
        SDK_FIXED_SIZE( proc_idle_state_bucket_t, 0x20 );           
    };                             
};
#include "magic/proc_idle_state_bucket_t.end.hpp"
SDK_VERIFY( struct nt::proc_idle_state_bucket_t, 0x20 );
