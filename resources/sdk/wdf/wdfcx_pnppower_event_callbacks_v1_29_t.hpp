#pragma once
#include <sdkgen/support_library.hpp>
#include "power_device_state_t.hpp"

#include "magic/wdfcx_pnppower_event_callbacks_v1_29_t.start.hpp"
namespace wdf
{
    struct wdfdevice_t;
    struct wdfcmreslist_t;

    // [struct _WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfcx_pnppower_event_callbacks_v1_29_t                                                                          
    {                                                                                                                      
        using evt_cx_device_pre_prepare_hardware_t =                   sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*;                                                         
        using pfn_wdfcx_device_pre_prepare_hardware_failed_cleanup_t = sdk::function<void(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*;                                                         
        using evt_cx_device_pre_prepare_hardware_failed_cleanup_t =    pfn_wdfcx_device_pre_prepare_hardware_failed_cleanup_t ;                                                         
        using evt_cx_device_post_prepare_hardware_t =                  sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*;                                                         
        using evt_cx_device_pre_release_hardware_t =                   sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*;                                                         
        using evt_cx_device_post_release_hardware_t =                  sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*;                                                         
        using evt_cx_device_pre_d0_entry_t =                           sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                         
        using evt_cx_device_pre_d0_entry_failed_cleanup_t =            sdk::function<void(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                         
        using evt_cx_device_post_d0_entry_t =                          sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                         
        using evt_cx_device_pre_d0_exit_t =                            sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                         
        using evt_cx_device_post_d0_exit_t =                           sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                         
        using evt_cx_device_pre_self_managed_io_init_t =               sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                         
        using evt_cx_device_post_self_managed_io_init_t =              sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                         
        using evt_cx_device_pre_self_managed_io_restart_t =            sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                         
        using evt_cx_device_post_self_managed_io_restart_t =           sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                         
        using evt_cx_device_pre_self_managed_io_suspend_t =            sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                         
        using evt_cx_device_post_self_managed_io_suspend_t =           sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                         
                                                                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                  
        //                                                                                                                 
        _m00 uint32_t                                             size;                                                      //{ +0x0000    +0x0000    +0x0000    } | .Size
        _m01 evt_cx_device_pre_prepare_hardware_t                 evt_cx_device_pre_prepare_hardware;                        //{ +0x0008    +0x0008    +0x0008    } | .EvtCxDevicePrePrepareHardware
        _m02 evt_cx_device_pre_prepare_hardware_failed_cleanup_t  evt_cx_device_pre_prepare_hardware_failed_cleanup;         //{ +0x0010    +0x0010    +0x0010    } | .EvtCxDevicePrePrepareHardwareFailedCleanup
        _m03 evt_cx_device_post_prepare_hardware_t                evt_cx_device_post_prepare_hardware;                       //{ +0x0018    +0x0018    +0x0018    } | .EvtCxDevicePostPrepareHardware
        _m04 evt_cx_device_pre_release_hardware_t                 evt_cx_device_pre_release_hardware;                        //{ +0x0020    +0x0020    +0x0020    } | .EvtCxDevicePreReleaseHardware
        _m05 evt_cx_device_post_release_hardware_t                evt_cx_device_post_release_hardware;                       //{ +0x0028    +0x0028    +0x0028    } | .EvtCxDevicePostReleaseHardware
        _m06 evt_cx_device_pre_d0_entry_t                         evt_cx_device_pre_d0_entry;                                //{ +0x0030    +0x0030    +0x0030    } | .EvtCxDevicePreD0Entry
        _m07 evt_cx_device_pre_d0_entry_failed_cleanup_t          evt_cx_device_pre_d0_entry_failed_cleanup;                 //{ +0x0038    +0x0038    +0x0038    } | .EvtCxDevicePreD0EntryFailedCleanup
        _m08 evt_cx_device_post_d0_entry_t                        evt_cx_device_post_d0_entry;                               //{ +0x0040    +0x0040    +0x0040    } | .EvtCxDevicePostD0Entry
        _m09 evt_cx_device_pre_d0_exit_t                          evt_cx_device_pre_d0_exit;                                 //{ +0x0048    +0x0048    +0x0048    } | .EvtCxDevicePreD0Exit
        _m10 evt_cx_device_post_d0_exit_t                         evt_cx_device_post_d0_exit;                                //{ +0x0050    +0x0050    +0x0050    } | .EvtCxDevicePostD0Exit
        _m11 sdk::function<void(struct wdf::wdfdevice_t*)>*       evt_cx_device_pre_surprise_removal;                        //{ +0x0058    +0x0058    +0x0058    } | .EvtCxDevicePreSurpriseRemoval
        _m12 sdk::function<void(struct wdf::wdfdevice_t*)>*       evt_cx_device_post_surprise_removal;                       //{ +0x0060    +0x0060    +0x0060    } | .EvtCxDevicePostSurpriseRemoval
        _m13 evt_cx_device_pre_self_managed_io_init_t             evt_cx_device_pre_self_managed_io_init;                    //{ +0x0068    +0x0068    +0x0068    } | .EvtCxDevicePreSelfManagedIoInit
        _m14 sdk::function<void(struct wdf::wdfdevice_t*)>*       evt_cx_device_pre_self_managed_io_init_failed_cleanup;     //{ +0x0070    +0x0070    +0x0070    } | .EvtCxDevicePreSelfManagedIoInitFailedCleanup
        _m15 evt_cx_device_post_self_managed_io_init_t            evt_cx_device_post_self_managed_io_init;                   //{ +0x0078    +0x0078    +0x0078    } | .EvtCxDevicePostSelfManagedIoInit
        _m16 evt_cx_device_pre_self_managed_io_restart_t          evt_cx_device_pre_self_managed_io_restart;                 //{ +0x0080    +0x0080    +0x0080    } | .EvtCxDevicePreSelfManagedIoRestart
        _m17 sdk::function<void(struct wdf::wdfdevice_t*)>*       evt_cx_device_pre_self_managed_io_restart_failed_cleanup;  //{ +0x0088    +0x0088    +0x0088    } | .EvtCxDevicePreSelfManagedIoRestartFailedCleanup
        _m18 evt_cx_device_post_self_managed_io_restart_t         evt_cx_device_post_self_managed_io_restart;                //{ +0x0090    +0x0090    +0x0090    } | .EvtCxDevicePostSelfManagedIoRestart
        _m19 evt_cx_device_pre_self_managed_io_suspend_t          evt_cx_device_pre_self_managed_io_suspend;                 //{ +0x0098    +0x0098    +0x0098    } | .EvtCxDevicePreSelfManagedIoSuspend
        _m20 evt_cx_device_post_self_managed_io_suspend_t         evt_cx_device_post_self_managed_io_suspend;                //{ +0x00a0    +0x00a0    +0x00a0    } | .EvtCxDevicePostSelfManagedIoSuspend
        _m21 sdk::function<void(struct wdf::wdfdevice_t*)>*       evt_cx_device_pre_self_managed_io_flush;                   //{ +0x00a8    +0x00a8    +0x00a8    } | .EvtCxDevicePreSelfManagedIoFlush
        _m22 sdk::function<void(struct wdf::wdfdevice_t*)>*       evt_cx_device_post_self_managed_io_flush;                  //{ +0x00b0    +0x00b0    +0x00b0    } | .EvtCxDevicePostSelfManagedIoFlush
        _m23 sdk::function<void(struct wdf::wdfdevice_t*)>*       evt_cx_device_pre_self_managed_io_cleanup;                 //{ +0x00b8    +0x00b8    +0x00b8    } | .EvtCxDevicePreSelfManagedIoCleanup
        _m24 sdk::function<void(struct wdf::wdfdevice_t*)>*       evt_cx_device_post_self_managed_io_cleanup;                //{ +0x00c0    +0x00c0    +0x00c0    } | .EvtCxDevicePostSelfManagedIoCleanup
                                                                                                                           
        SDK_MAGIC_PROPERTIES( "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.$", 0xc8, true, 0xaa9fbd351bbc7821 );                                                         
        SDK_FIXED_SIZE( wdfcx_pnppower_event_callbacks_v1_29_t, 0xc8 );                                                         
    };                                                                                                                     
};
#include "magic/wdfcx_pnppower_event_callbacks_v1_29_t.end.hpp"
SDK_VERIFY( struct wdf::wdfcx_pnppower_event_callbacks_v1_29_t, 0xc8 );
