#pragma once
#include <sdkgen/support_library.hpp>

namespace pox { struct settings_t; }

#include "magic/idle_timeout_management_t.start.hpp"
namespace wdf
{
    // [class IdleTimeoutManagement]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class idle_timeout_management_t                                           
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                    
        _m00 volatile int32_t        m_idle_timeout_status;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_IdleTimeoutStatus
        _m01 struct pox::settings_t* m_pox_settings;                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_PoxSettings
                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                    
        _m02 uint8_t                 m_directed_transitions_supported;          //{ +0x0010    +0x0010    +0x0010    } | .m_DirectedTransitionsSupported
                                                                              
        // Windows 10 v2004, Windows 10 v20H2                                         
        //                                                                    
        _m03 uint8_t                 m_directed_transitions_children_optional;  //{ +0x0011    +0x0011    } | .m_DirectedTransitionsChildrenOptional
                                                                              
        // Windows 11                                                         
        //                                                                    
        _m04 uint64_t                m_po_fx_device_flags;                      //{ +0x0018    } | .m_PoFxDeviceFlags
        _m05 uint8_t                 m_use_wdf_timer_for_pofx;                  //{ +0x0020    } | .m_UseWdfTimerForPofx
                                                                              
        SDK_MAGIC_PROPERTIES( "IdleTimeoutManagement.$", 0x18, true, 0x838430e9cbf73bc8 );                                         
        SDK_DYNAMIC_SIZE( idle_timeout_management_t );                                         
    };                                                                        
};
#include "magic/idle_timeout_management_t.end.hpp"
