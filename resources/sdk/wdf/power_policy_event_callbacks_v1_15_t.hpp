#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/power_policy_event_callbacks_v1_15_t.start.hpp"
namespace wdf
{
    struct wdfdevice_t;

    // [struct _WDF_POWER_POLICY_EVENT_CALLBACKS_V1_15]
    // => Windows 10 v1607
    //
    struct power_policy_event_callbacks_v1_15_t                                                     
    {                                                                                               
        using evt_device_arm_wake_from_s0_t =                 sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                        
        using evt_device_arm_wake_from_sx_t =                 sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                        
        using pfn_wdf_device_arm_wake_from_sx_with_reason_t = sdk::function<int32_t(struct wdf::wdfdevice_t*, uint8_t, uint8_t)>*;                                        
                                                                                                    
        // Windows 10 v1607                                                                         
        //                                                                                          
        _m00 uint32_t                                       size;                                     //{ +0x0000    } | .Size
        _m01 evt_device_arm_wake_from_s0_t                  evt_device_arm_wake_from_s0;              //{ +0x0008    } | .EvtDeviceArmWakeFromS0
        _m02 sdk::function<void(struct wdf::wdfdevice_t*)>* evt_device_disarm_wake_from_s0;           //{ +0x0010    } | .EvtDeviceDisarmWakeFromS0
        _m03 sdk::function<void(struct wdf::wdfdevice_t*)>* evt_device_wake_from_s0_triggered;        //{ +0x0018    } | .EvtDeviceWakeFromS0Triggered
        _m04 evt_device_arm_wake_from_sx_t                  evt_device_arm_wake_from_sx;              //{ +0x0020    } | .EvtDeviceArmWakeFromSx
        _m05 sdk::function<void(struct wdf::wdfdevice_t*)>* evt_device_disarm_wake_from_sx;           //{ +0x0028    } | .EvtDeviceDisarmWakeFromSx
        _m06 sdk::function<void(struct wdf::wdfdevice_t*)>* evt_device_wake_from_sx_triggered;        //{ +0x0030    } | .EvtDeviceWakeFromSxTriggered
        _m07 pfn_wdf_device_arm_wake_from_sx_with_reason_t  evt_device_arm_wake_from_sx_with_reason;  //{ +0x0038    } | .EvtDeviceArmWakeFromSxWithReason
                                                                                                    
        SDK_MAGIC_PROPERTIES( "_WDF_POWER_POLICY_EVENT_CALLBACKS_V1_15.$", 0x0, false, 0x9accb2c5bf16c82c );                                        
        SDK_FIXED_SIZE( power_policy_event_callbacks_v1_15_t, 0x40 );                                        
    };                                                                                              
};
#include "magic/power_policy_event_callbacks_v1_15_t.end.hpp"
SDK_VERIFY( struct wdf::power_policy_event_callbacks_v1_15_t, 0x40 );
