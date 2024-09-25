#pragma once
#include <sdkgen/support_library.hpp>
#include "../power/action_t.hpp"
#include "../wdf/request_d_irp_reason_t.hpp"

#include "magic/device_power_irp_tracker_t.start.hpp"
namespace fx
{
    // [class FxDevicePowerIrpTracker]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class device_power_irp_tracker_t                                      
    {                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                
        _m00 enum wdf::request_d_irp_reason_t m_d_irp_requested_for_s_irp;  //{ +0x0000    +0x0000    +0x0000    } | .m_DIrpRequestedForSIrp
        _m01 enum power::action_t             m_s0_power_action;            //{ +0x0004    +0x0004    +0x0004    } | .m_S0PowerAction
        _m02 enum power::action_t             m_sx_power_action;            //{ +0x0008    +0x0008    +0x0008    } | .m_SxPowerAction
        _m03 uint8_t                          m_history_index;              //{ +0x000c    +0x000c    +0x000c    } | .m_HistoryIndex
                                                                          
        SDK_MAGIC_PROPERTIES( "FxDevicePowerIrpTracker.$", 0x90, true, 0xa8ca51ca50b91134 );                            
        SDK_FIXED_SIZE( device_power_irp_tracker_t, 0x90 );                            
    };                                                                    
};
#include "magic/device_power_irp_tracker_t.end.hpp"
SDK_VERIFY( class fx::device_power_irp_tracker_t, 0x90 );
