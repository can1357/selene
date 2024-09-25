#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_t.hpp"

namespace nt { struct pohandle_t; }

#include "magic/pox_interface_t.start.hpp"
namespace fx
{
    class pkg_pnp_t;
    class device_pwr_requirement_machine_t;

    // [class FxPoxInterface]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class pox_interface_t                                                                   
    {                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                                  
        _m00 class fx::device_pwr_requirement_machine_t* m_device_power_requirement_machine;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_DevicePowerRequirementMachine
        _m01 uint32_t                                    m_next_idle_timeout_hint;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_NextIdleTimeoutHint
        _m02 class fx::pkg_pnp_t*                        m_pkg_pnp;                           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_PkgPnp
        _m03 struct nt::pohandle_t*                      m_po_handle;                         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_PoHandle
        _m04 uint8_t                                     m_device_power_required;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_DevicePowerRequired
        _m05 class mx::lock_t                            m_device_power_required_lock;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_DevicePowerRequiredLock
        _m06 uint32_t                                    m_current_idle_timeout_hint;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .m_CurrentIdleTimeoutHint
                                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                                  
        _m07 volatile int32_t                            m_directed_transition_active;        //{ +0x003c    +0x003c    +0x003c    } | .m_DirectedTransitionActive
                                                                                            
        SDK_MAGIC_PROPERTIES( "FxPoxInterface.$", 0x40, true, 0xffafbf8e2a5111b6 );                                   
        SDK_FIXED_SIZE( pox_interface_t, 0x40 );                                            
    };                                                                                      
};
#include "magic/pox_interface_t.end.hpp"
SDK_VERIFY( class fx::pox_interface_t, 0x40 );
