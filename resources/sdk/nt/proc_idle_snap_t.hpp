#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/proc_idle_snap_t.start.hpp"
namespace nt
{
    // [struct _PROC_IDLE_SNAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct proc_idle_snap_t
    {                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                 
        _m00 uint64_t time;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Time
        _m01 uint64_t idle;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Idle
                           
        SDK_MAGIC_PROPERTIES( "_PROC_IDLE_SNAP.$", 0x10, true, 0xfba56058dc60524 );     
        SDK_FIXED_SIZE( proc_idle_snap_t, 0x10 );     
    };                     
};
#include "magic/proc_idle_snap_t.end.hpp"
SDK_VERIFY( struct nt::proc_idle_snap_t, 0x10 );
