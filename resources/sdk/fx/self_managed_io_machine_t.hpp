#pragma once
#include <sdkgen/support_library.hpp>
#include "wait_lock_internal_t.hpp"
#include "pnp_device_self_managed_io_init_t.hpp"
#include "pnp_device_self_managed_io_flush_t.hpp"
#include "pnp_device_self_managed_io_cleanup_t.hpp"
#include "pnp_device_self_managed_io_restart_t.hpp"
#include "pnp_device_self_managed_io_suspend_t.hpp"
#include "self_managed_io_machine_event_history_t.hpp"
#include "self_managed_io_machine_state_history_t.hpp"

#include "magic/self_managed_io_machine_t.start.hpp"
namespace fx
{
    class pkg_pnp_t;

    // [class FxSelfManagedIoMachine]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class self_managed_io_machine_t                                                          
    {                                                                                        
        using m_events_t = union fx::self_managed_io_machine_event_history_t;                                 
        using m_states_t = union fx::self_managed_io_machine_state_history_t;                                 
                                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                                   
        _m00 class fx::pnp_device_self_managed_io_cleanup_t m_device_self_managed_io_cleanup;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_DeviceSelfManagedIoCleanup
        _m01 class fx::pnp_device_self_managed_io_flush_t   m_device_self_managed_io_flush;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_DeviceSelfManagedIoFlush
        _m02 class fx::pnp_device_self_managed_io_init_t    m_device_self_managed_io_init;     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .m_DeviceSelfManagedIoInit
        _m03 class fx::pnp_device_self_managed_io_suspend_t m_device_self_managed_io_suspend;  //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .m_DeviceSelfManagedIoSuspend
        _m04 class fx::pnp_device_self_managed_io_restart_t m_device_self_managed_io_restart;  //{ +0x00a0    +0x00a8    +0x00a8    +0x00a8    } | .m_DeviceSelfManagedIoRestart
        _m05 class fx::wait_lock_internal_t                 m_state_machine_lock;              //{ +0x00c8    +0x00d0    +0x00d0    +0x00d0    } | .m_StateMachineLock
        _m06 class fx::pkg_pnp_t*                           m_pkg_pnp;                         //{ +0x00f0    +0x00f8    +0x00f8    +0x00f8    } | .m_PkgPnp
        _m07 uint8_t                                        m_current_state;                   //{ +0x00f8    +0x0100    +0x0100    +0x0100    } | .m_CurrentState
        _m08 uint8_t                                        m_event_history_index;             //{ +0x00f9    +0x0101    +0x0101    +0x0101    } | .m_EventHistoryIndex
        _m09 uint8_t                                        m_state_history_index;             //{ +0x00fa    +0x0102    +0x0102    +0x0102    } | .m_StateHistoryIndex
        _m10 m_events_t                                     m_events;                          //{ +0x00fc    +0x0104    +0x0104    +0x0104    } | .m_Events
        _m11 m_states_t                                     m_states;                          //{ +0x0104    +0x010c    +0x010c    +0x010c    } | .m_States
                                                                                             
        SDK_MAGIC_PROPERTIES( "FxSelfManagedIoMachine.$", 0x118, true, 0x2494333117e50504 );                                 
        SDK_DYNAMIC_SIZE( self_managed_io_machine_t );                                       
    };                                                                                       
};
#include "magic/self_managed_io_machine_t.end.hpp"
