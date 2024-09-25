#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wdfcx_power_policy_event_callbacks_t.start.hpp"
namespace wdf
{
    struct wdfdevice_t;

    // [struct _WDFCX_POWER_POLICY_EVENT_CALLBACKS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfcx_power_policy_event_callbacks_t                                                                                             
    {                                                                                                                                       
        using evt_cx_device_pre_arm_wake_from_s0_t =                               sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                              
        using evt_cx_device_post_arm_wake_from_s0_t =                              sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                              
        using evt_cx_device_pre_arm_wake_from_sx_t =                               sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                              
        using evt_cx_device_post_arm_wake_from_sx_t =                              sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                              
        using evt_cx_device_pre_arm_wake_from_sx_with_reason_t =                   sdk::function<int32_t(struct wdf::wdfdevice_t*, uint8_t, uint8_t)>*;                                                              
        using pfn_wdfcx_device_pre_arm_wake_from_sx_with_reason_failed_cleanup_t = sdk::function<void(struct wdf::wdfdevice_t*, uint8_t, uint8_t)>*;                                                              
        using evt_cx_device_pre_arm_wake_from_sx_with_reason_failed_cleanup_t =    pfn_wdfcx_device_pre_arm_wake_from_sx_with_reason_failed_cleanup_t ;                                                              
        using evt_cx_device_post_arm_wake_from_sx_with_reason_t =                  sdk::function<int32_t(struct wdf::wdfdevice_t*, uint8_t, uint8_t)>*;                                                              
                                                                                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                   
        //                                                                                                                                  
        _m00 uint32_t                                                         size;                                                           //{ +0x0000    +0x0000    +0x0000    } | .Size
        _m01 evt_cx_device_pre_arm_wake_from_s0_t                             evt_cx_device_pre_arm_wake_from_s0;                             //{ +0x0008    +0x0008    +0x0008    } | .EvtCxDevicePreArmWakeFromS0
        _m02 sdk::function<void(struct wdf::wdfdevice_t*)>*                   evt_cx_device_pre_arm_wake_from_s0_failed_cleanup;              //{ +0x0010    +0x0010    +0x0010    } | .EvtCxDevicePreArmWakeFromS0FailedCleanup
        _m03 evt_cx_device_post_arm_wake_from_s0_t                            evt_cx_device_post_arm_wake_from_s0;                            //{ +0x0018    +0x0018    +0x0018    } | .EvtCxDevicePostArmWakeFromS0
        _m04 sdk::function<void(struct wdf::wdfdevice_t*)>*                   evt_cx_device_pre_disarm_wake_from_s0;                          //{ +0x0020    +0x0020    +0x0020    } | .EvtCxDevicePreDisarmWakeFromS0
        _m05 sdk::function<void(struct wdf::wdfdevice_t*)>*                   evt_cx_device_post_disarm_wake_from_s0;                         //{ +0x0028    +0x0028    +0x0028    } | .EvtCxDevicePostDisarmWakeFromS0
        _m06 sdk::function<void(struct wdf::wdfdevice_t*)>*                   evt_cx_device_pre_wake_from_s0_triggered;                       //{ +0x0030    +0x0030    +0x0030    } | .EvtCxDevicePreWakeFromS0Triggered
        _m07 sdk::function<void(struct wdf::wdfdevice_t*)>*                   evt_cx_device_post_wake_from_s0_triggered;                      //{ +0x0038    +0x0038    +0x0038    } | .EvtCxDevicePostWakeFromS0Triggered
        _m08 evt_cx_device_pre_arm_wake_from_sx_t                             evt_cx_device_pre_arm_wake_from_sx;                             //{ +0x0040    +0x0040    +0x0040    } | .EvtCxDevicePreArmWakeFromSx
        _m09 sdk::function<void(struct wdf::wdfdevice_t*)>*                   evt_cx_device_pre_arm_wake_from_sx_failed_cleanup;              //{ +0x0048    +0x0048    +0x0048    } | .EvtCxDevicePreArmWakeFromSxFailedCleanup
        _m10 evt_cx_device_post_arm_wake_from_sx_t                            evt_cx_device_post_arm_wake_from_sx;                            //{ +0x0050    +0x0050    +0x0050    } | .EvtCxDevicePostArmWakeFromSx
        _m11 evt_cx_device_pre_arm_wake_from_sx_with_reason_t                 evt_cx_device_pre_arm_wake_from_sx_with_reason;                 //{ +0x0058    +0x0058    +0x0058    } | .EvtCxDevicePreArmWakeFromSxWithReason
        _m12 evt_cx_device_pre_arm_wake_from_sx_with_reason_failed_cleanup_t  evt_cx_device_pre_arm_wake_from_sx_with_reason_failed_cleanup;  //{ +0x0060    +0x0060    +0x0060    } | .EvtCxDevicePreArmWakeFromSxWithReasonFailedCleanup
        _m13 evt_cx_device_post_arm_wake_from_sx_with_reason_t                evt_cx_device_post_arm_wake_from_sx_with_reason;                //{ +0x0068    +0x0068    +0x0068    } | .EvtCxDevicePostArmWakeFromSxWithReason
        _m14 sdk::function<void(struct wdf::wdfdevice_t*)>*                   evt_cx_device_pre_disarm_wake_from_sx;                          //{ +0x0070    +0x0070    +0x0070    } | .EvtCxDevicePreDisarmWakeFromSx
        _m15 sdk::function<void(struct wdf::wdfdevice_t*)>*                   evt_cx_device_post_disarm_wake_from_sx;                         //{ +0x0078    +0x0078    +0x0078    } | .EvtCxDevicePostDisarmWakeFromSx
        _m16 sdk::function<void(struct wdf::wdfdevice_t*)>*                   evt_cx_device_pre_wake_from_sx_triggered;                       //{ +0x0080    +0x0080    +0x0080    } | .EvtCxDevicePreWakeFromSxTriggered
        _m17 sdk::function<void(struct wdf::wdfdevice_t*)>*                   evt_cx_device_post_wake_from_sx_triggered;                      //{ +0x0088    +0x0088    +0x0088    } | .EvtCxDevicePostWakeFromSxTriggered
                                                                                                                                            
        SDK_MAGIC_PROPERTIES( "_WDFCX_POWER_POLICY_EVENT_CALLBACKS.$", 0x90, true, 0x3d508d15dc775b40 );                                                              
        SDK_FIXED_SIZE( wdfcx_power_policy_event_callbacks_t, 0x90 );                                                                       
    };                                                                                                                                      
};
#include "magic/wdfcx_power_policy_event_callbacks_t.end.hpp"
SDK_VERIFY( struct wdf::wdfcx_power_policy_event_callbacks_t, 0x90 );
