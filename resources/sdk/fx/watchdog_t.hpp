#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/timer_t.hpp"

namespace nt { struct kthread_t; }

#include "magic/watchdog_t.start.hpp"
namespace fx
{
    class pkg_pnp_t;

    // [struct FxWatchdog]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct watchdog_t                               
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                          
        _m00 class mx::timer_t     m_timer;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Timer
        _m01 class fx::pkg_pnp_t*  m_pkg_pnp;         //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .m_PkgPnp
        _m02 struct nt::kthread_t* m_calling_thread;  //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .m_CallingThread
                                                    
        SDK_MAGIC_PROPERTIES( "FxWatchdog.$", 0xa8, true, 0xc661eb3e97361e1a );                 
        SDK_FIXED_SIZE( watchdog_t, 0xa8 );                 
    };                                              
};
#include "magic/watchdog_t.end.hpp"
SDK_VERIFY( struct fx::watchdog_t, 0xa8 );
