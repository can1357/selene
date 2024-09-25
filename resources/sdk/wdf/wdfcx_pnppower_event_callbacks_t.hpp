#pragma once
#include <sdkgen/support_library.hpp>
#include "power_device_state_t.hpp"

#include "magic/wdfcx_pnppower_event_callbacks_t.start.hpp"
namespace wdf
{
    struct wdfdevice_t;
    struct wdfcmreslist_t;

    // [struct _WDFCX_PNPPOWER_EVENT_CALLBACKS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfcx_pnppower_event_callbacks_t                                                                                                      
    {                                                                                                                                            
        using evt_cx_device_pre_prepare_hardware_t =                              sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*;                                                                
        using pfn_wdfcx_device_pre_prepare_hardware_failed_cleanup_t =            sdk::function<void(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*;                                                                
        using evt_cx_device_pre_prepare_hardware_failed_cleanup_t =               pfn_wdfcx_device_pre_prepare_hardware_failed_cleanup_t ;                                                                
        using evt_cx_device_post_prepare_hardware_t =                             sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*;                                                                
        using evt_cx_device_pre_release_hardware_t =                              sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*;                                                                
        using evt_cx_device_post_release_hardware_t =                             sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*;                                                                
        using evt_cx_device_pre_d0_entry_t =                                      sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                                
        using pfn_wdfcx_device_pre_d0_entry_failed_cleanup_t =                    sdk::function<void(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                                
        using evt_cx_device_post_d0_entry_t =                                     sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                                
        using evt_cx_device_pre_d0_exit_t =                                       sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                                
        using evt_cx_device_post_d0_exit_t =                                      sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                                
        using evt_cx_device_pre_self_managed_io_init_t =                          sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                                
        using evt_cx_device_post_self_managed_io_init_t =                         sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                                
        using evt_cx_device_pre_self_managed_io_restart_t =                       sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                                
        using evt_cx_device_post_self_managed_io_restart_t =                      sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                                
        using evt_cx_device_pre_self_managed_io_suspend_t =                       sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                                
        using evt_cx_device_post_self_managed_io_suspend_t =                      sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                                                
        using evt_cx_device_pre_self_managed_io_restart_ex_t =                    sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                                
        using evt_cx_device_pre_self_managed_io_restart_ex_failed_cleanup_t =     sdk::function<void(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                                
        using evt_cx_device_post_self_managed_io_restart_ex_t =                   sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                                
        using evt_cx_device_pre_self_managed_io_suspend_ex_t =                    sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                                
        using evt_cx_device_post_self_managed_io_suspend_ex_t =                   sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                                
        using evt_cx_device_pre_d0_entry_post_hardware_enabled_t =                sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                                
        using evt_cx_device_post_d0_entry_post_hardware_enabled_t =               sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                                
        using evt_cx_device_pre_d0_entry_post_hardware_enabled_failed_cleanup_t = sdk::function<void(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                                
        using evt_cx_device_pre_d0_exit_pre_hardware_disabled_t =                 sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                                
        using evt_cx_device_post_d0_exit_pre_hardware_disabled_t =                sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                                                
                                                                                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                      
        //                                                                                                                                       
        _m000 uint32_t                                                           size;                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m001 evt_cx_device_pre_prepare_hardware_t                               evt_cx_device_pre_prepare_hardware;                               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EvtCxDevicePrePrepareHardware
        _m002 evt_cx_device_pre_prepare_hardware_failed_cleanup_t                evt_cx_device_pre_prepare_hardware_failed_cleanup;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .EvtCxDevicePrePrepareHardwareFailedCleanup
        _m003 evt_cx_device_post_prepare_hardware_t                              evt_cx_device_post_prepare_hardware;                              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EvtCxDevicePostPrepareHardware
        _m004 evt_cx_device_pre_release_hardware_t                               evt_cx_device_pre_release_hardware;                               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .EvtCxDevicePreReleaseHardware
        _m005 evt_cx_device_post_release_hardware_t                              evt_cx_device_post_release_hardware;                              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .EvtCxDevicePostReleaseHardware
        _m006 evt_cx_device_pre_d0_entry_t                                       evt_cx_device_pre_d0_entry;                                       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .EvtCxDevicePreD0Entry
        _m007 pfn_wdfcx_device_pre_d0_entry_failed_cleanup_t                     evt_cx_device_pre_d0_entry_failed_cleanup;                        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .EvtCxDevicePreD0EntryFailedCleanup
        _m008 evt_cx_device_post_d0_entry_t                                      evt_cx_device_post_d0_entry;                                      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .EvtCxDevicePostD0Entry
        _m009 evt_cx_device_pre_d0_exit_t                                        evt_cx_device_pre_d0_exit;                                        //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .EvtCxDevicePreD0Exit
        _m010 evt_cx_device_post_d0_exit_t                                       evt_cx_device_post_d0_exit;                                       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .EvtCxDevicePostD0Exit
        _m011 sdk::function<void(struct wdf::wdfdevice_t*)>*                     evt_cx_device_pre_surprise_removal;                               //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .EvtCxDevicePreSurpriseRemoval
        _m012 sdk::function<void(struct wdf::wdfdevice_t*)>*                     evt_cx_device_post_surprise_removal;                              //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .EvtCxDevicePostSurpriseRemoval
        _m013 evt_cx_device_pre_self_managed_io_init_t                           evt_cx_device_pre_self_managed_io_init;                           //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .EvtCxDevicePreSelfManagedIoInit
        _m014 sdk::function<void(struct wdf::wdfdevice_t*)>*                     evt_cx_device_pre_self_managed_io_init_failed_cleanup;            //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .EvtCxDevicePreSelfManagedIoInitFailedCleanup
        _m015 evt_cx_device_post_self_managed_io_init_t                          evt_cx_device_post_self_managed_io_init;                          //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .EvtCxDevicePostSelfManagedIoInit
        _m016 evt_cx_device_pre_self_managed_io_restart_t                        evt_cx_device_pre_self_managed_io_restart;                        //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .EvtCxDevicePreSelfManagedIoRestart
        _m017 sdk::function<void(struct wdf::wdfdevice_t*)>*                     evt_cx_device_pre_self_managed_io_restart_failed_cleanup;         //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .EvtCxDevicePreSelfManagedIoRestartFailedCleanup
        _m018 evt_cx_device_post_self_managed_io_restart_t                       evt_cx_device_post_self_managed_io_restart;                       //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .EvtCxDevicePostSelfManagedIoRestart
        _m019 evt_cx_device_pre_self_managed_io_suspend_t                        evt_cx_device_pre_self_managed_io_suspend;                        //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .EvtCxDevicePreSelfManagedIoSuspend
        _m020 evt_cx_device_post_self_managed_io_suspend_t                       evt_cx_device_post_self_managed_io_suspend;                       //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .EvtCxDevicePostSelfManagedIoSuspend
        _m021 sdk::function<void(struct wdf::wdfdevice_t*)>*                     evt_cx_device_pre_self_managed_io_flush;                          //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .EvtCxDevicePreSelfManagedIoFlush
        _m022 sdk::function<void(struct wdf::wdfdevice_t*)>*                     evt_cx_device_post_self_managed_io_flush;                         //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .EvtCxDevicePostSelfManagedIoFlush
        _m023 sdk::function<void(struct wdf::wdfdevice_t*)>*                     evt_cx_device_pre_self_managed_io_cleanup;                        //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .EvtCxDevicePreSelfManagedIoCleanup
        _m024 sdk::function<void(struct wdf::wdfdevice_t*)>*                     evt_cx_device_post_self_managed_io_cleanup;                       //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .EvtCxDevicePostSelfManagedIoCleanup
                                                                                                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                        
        //                                                                                                                                       
        _m025 evt_cx_device_pre_self_managed_io_restart_ex_t                     evt_cx_device_pre_self_managed_io_restart_ex;                     //{ +0x00c8    +0x00c8    +0x00c8    } | .EvtCxDevicePreSelfManagedIoRestartEx
        _m026 evt_cx_device_pre_self_managed_io_restart_ex_failed_cleanup_t      evt_cx_device_pre_self_managed_io_restart_ex_failed_cleanup;      //{ +0x00d0    +0x00d0    +0x00d0    } | .EvtCxDevicePreSelfManagedIoRestartExFailedCleanup
        _m027 evt_cx_device_post_self_managed_io_restart_ex_t                    evt_cx_device_post_self_managed_io_restart_ex;                    //{ +0x00d8    +0x00d8    +0x00d8    } | .EvtCxDevicePostSelfManagedIoRestartEx
        _m028 evt_cx_device_pre_self_managed_io_suspend_ex_t                     evt_cx_device_pre_self_managed_io_suspend_ex;                     //{ +0x00e0    +0x00e0    +0x00e0    } | .EvtCxDevicePreSelfManagedIoSuspendEx
        _m029 evt_cx_device_post_self_managed_io_suspend_ex_t                    evt_cx_device_post_self_managed_io_suspend_ex;                    //{ +0x00e8    +0x00e8    +0x00e8    } | .EvtCxDevicePostSelfManagedIoSuspendEx
        _m030 evt_cx_device_pre_d0_entry_post_hardware_enabled_t                 evt_cx_device_pre_d0_entry_post_hardware_enabled;                 //{ +0x00f0    +0x00f0    +0x00f0    } | .EvtCxDevicePreD0EntryPostHardwareEnabled
        _m031 evt_cx_device_post_d0_entry_post_hardware_enabled_t                evt_cx_device_post_d0_entry_post_hardware_enabled;                //{ +0x00f8    +0x00f8    +0x00f8    } | .EvtCxDevicePostD0EntryPostHardwareEnabled
        _m032 evt_cx_device_pre_d0_entry_post_hardware_enabled_failed_cleanup_t  evt_cx_device_pre_d0_entry_post_hardware_enabled_failed_cleanup;  //{ +0x0100    +0x0100    +0x0100    } | .EvtCxDevicePreD0EntryPostHardwareEnabledFailedCleanup
        _m033 evt_cx_device_pre_d0_exit_pre_hardware_disabled_t                  evt_cx_device_pre_d0_exit_pre_hardware_disabled;                  //{ +0x0108    +0x0108    +0x0108    } | .EvtCxDevicePreD0ExitPreHardwareDisabled
        _m034 evt_cx_device_post_d0_exit_pre_hardware_disabled_t                 evt_cx_device_post_d0_exit_pre_hardware_disabled;                 //{ +0x0110    +0x0110    +0x0110    } | .EvtCxDevicePostD0ExitPreHardwareDisabled
                                                                                                                                                 
        SDK_MAGIC_PROPERTIES( "_WDFCX_PNPPOWER_EVENT_CALLBACKS.$", 0x118, true, 0x46f16fff00e95697 );                                                                
        SDK_DYNAMIC_SIZE( wdfcx_pnppower_event_callbacks_t );                                                                                    
    };                                                                                                                                           
};
#include "magic/wdfcx_pnppower_event_callbacks_t.end.hpp"
