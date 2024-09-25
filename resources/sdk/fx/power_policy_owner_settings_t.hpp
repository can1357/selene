#pragma once
#include <sdkgen/support_library.hpp>
#include "pox_interface_t.hpp"
#include "power_idle_machine_t.hpp"
#include "device_power_irp_tracker_t.hpp"
#include "../wdf/idle_policy_settings_t.hpp"
#include "../wdf/wake_policy_settings_t.hpp"
#include "power_device_arm_wake_from_s0_t.hpp"
#include "power_device_arm_wake_from_sx_t.hpp"
#include "power_device_disarm_wake_from_s0_t.hpp"
#include "power_device_disarm_wake_from_sx_t.hpp"
#include "power_device_wake_from_s0_triggered_t.hpp"
#include "power_device_wake_from_sx_triggered_t.hpp"

namespace nt { struct callback_object_t; }

#include "magic/power_policy_owner_settings_t.start.hpp"
namespace fx
{
    class pkg_pnp_t;
    struct usb_idle_info_t;

    // [struct FxPowerPolicyOwnerSettings]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct power_policy_owner_settings_t                                                              
    {                                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                            
        _m000 class fx::power_idle_machine_t                  m_power_idle_machine;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_PowerIdleMachine
        _m001 class fx::pox_interface_t                       m_pox_interface;                          //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .m_PoxInterface
        _m002 class fx::power_device_arm_wake_from_s0_t       m_device_arm_wake_from_s0;                //{ +0x0168    +0x0168    +0x0168    +0x0168    } | .m_DeviceArmWakeFromS0
        _m003 class fx::power_device_arm_wake_from_sx_t       m_device_arm_wake_from_sx;                //{ +0x0170    +0x0190    +0x0190    +0x0190    } | .m_DeviceArmWakeFromSx
        _m004 class fx::power_device_disarm_wake_from_s0_t    m_device_disarm_wake_from_s0;             //{ +0x0180    +0x01c8    +0x01c8    +0x01c8    } | .m_DeviceDisarmWakeFromS0
        _m005 class fx::power_device_disarm_wake_from_sx_t    m_device_disarm_wake_from_sx;             //{ +0x0188    +0x01f0    +0x01f0    +0x01f0    } | .m_DeviceDisarmWakeFromSx
        _m006 class fx::power_device_wake_from_s0_triggered_t m_device_wake_from_s0_triggered;          //{ +0x0190    +0x0218    +0x0218    +0x0218    } | .m_DeviceWakeFromS0Triggered
        _m007 class fx::power_device_wake_from_sx_triggered_t m_device_wake_from_sx_triggered;          //{ +0x0198    +0x0240    +0x0240    +0x0240    } | .m_DeviceWakeFromSxTriggered
        _m008 struct fx::usb_idle_info_t*                     m_usb_idle;                               //{ +0x01a0    +0x0268    +0x0268    +0x0268    } | .m_UsbIdle
        _m009 class fx::pkg_pnp_t*                            m_pkg_pnp;                                //{ +0x01a8    +0x0270    +0x0270    +0x0270    } | .m_PkgPnp
        _m010 struct wdf::wake_policy_settings_t              m_wake_settings;                          //{ +0x01b0    +0x0278    +0x0278    +0x0278    } | .m_WakeSettings
        _m011 struct wdf::idle_policy_settings_t              m_idle_settings;                          //{ +0x01d0    +0x0298    +0x0298    +0x0298    } | .m_IdleSettings
        _m012 uint32_t                                        m_system_to_device_state_map;             //{ +0x0200    +0x0360    +0x0370    +0x0360    } | .m_SystemToDeviceStateMap
        _m013 uint32_t                                        m_children_powered_on_count;              //{ +0x0204    +0x0364    +0x0374    +0x0364    } | .m_ChildrenPoweredOnCount
        _m014 int32_t                                         m_children_armed_count;                   //{ +0x0208    +0x0368    +0x0378    +0x0368    } | .m_ChildrenArmedCount
        _m015 int32_t                                         m_wait_wake_status;                       //{ +0x020c    +0x036c    +0x037c    +0x036c    } | .m_WaitWakeStatus
        _m016 uint8_t                                         m_ideal_dx_state_for_sx;                  //{ +0x0210    +0x0370    +0x0380    +0x0370    } | .m_IdealDxStateForSx
        _m017 uint8_t                                         m_requested_power_up_irp;                 //{ +0x0211    +0x0371    +0x0381    +0x0371    } | .m_RequestedPowerUpIrp
        _m018 uint8_t                                         m_requested_power_down_irp;               //{ +0x0212    +0x0372    +0x0382    +0x0372    } | .m_RequestedPowerDownIrp
        _m019 uint8_t                                         m_requested_wait_wake_irp;                //{ +0x0213    +0x0373    +0x0383    +0x0373    } | .m_RequestedWaitWakeIrp
        _m020 uint8_t                                         m_wake_completion_event_dropped;          //{ +0x0214    +0x0374    +0x0384    +0x0374    } | .m_WakeCompletionEventDropped
        _m021 uint8_t                                         m_power_failed;                           //{ +0x0215    +0x0375    +0x0385    +0x0375    } | .m_PowerFailed
        _m022 uint8_t                                         m_can_save_state;                         //{ +0x0216    +0x0376    +0x0386    +0x0376    } | .m_CanSaveState
        _m023 uint8_t                                         m_children_can_power_up;                  //{ +0x0217    +0x0377    +0x0387    +0x0377    } | .m_ChildrenCanPowerUp
        _m024 uint8_t                                         m_system_wake_source;                     //{ +0x0218    +0x0378    +0x0388    +0x0378    } | .m_SystemWakeSource
        _m025 struct nt::callback_object_t*                   m_power_callback_object;                  //{ +0x0220    +0x0380    +0x0390    +0x0380    } | .m_PowerCallbackObject
        _m026 void*                                           m_power_callback_registration;            //{ +0x0228    +0x0388    +0x0398    +0x0388    } | .m_PowerCallbackRegistration
        _m027 int32_t                                         m_wait_wake_cancel_completion_ownership;  //{ +0x0230    +0x0390    +0x03a0    +0x0390    } | .m_WaitWakeCancelCompletionOwnership
                                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                                            
        _m028 class fx::device_power_irp_tracker_t            m_device_power_irp_tracker;               //{ +0x02d0    +0x02e0    +0x02d0    } | .m_DevicePowerIrpTracker
                                                                                                      
        SDK_MAGIC_PROPERTIES( "FxPowerPolicyOwnerSettings.$", 0x398, true, 0xc2f119f2a9faab46 );                                        
        SDK_DYNAMIC_SIZE( power_policy_owner_settings_t );                                            
    };                                                                                                
};
#include "magic/power_policy_owner_settings_t.end.hpp"
