#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_suspend_monitor_t.start.hpp"
namespace win
{
    // [class CSuspendMonitor]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_suspend_monitor_t                      
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                         
        _m00 int32_t           f_registered;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._fRegistered
        _m01 int32_t           f_suspended;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | ._fSuspended
        _m02 int32_t           rundown_count;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._RundownCount
        _m03 volatile uint32_t ul_rundown_complete;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | ._ulRundownComplete
                                                   
        SDK_MAGIC_PROPERTIES( "CSuspendMonitor.$", 0x30, true, 0x46a3c883c4a365b8 );                    
        SDK_FIXED_SIZE( c_suspend_monitor_t, 0x30 );                    
    };                                             
};
#include "magic/c_suspend_monitor_t.end.hpp"
SDK_VERIFY( class win::c_suspend_monitor_t, 0x30 );
