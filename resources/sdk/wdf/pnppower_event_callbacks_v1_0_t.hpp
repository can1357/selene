#pragma once
#include <sdkgen/support_library.hpp>
#include "special_file_type_t.hpp"
#include "power_device_state_t.hpp"
#include "../nt/device_relation_type_t.hpp"

#include "magic/pnppower_event_callbacks_v1_0_t.start.hpp"
namespace wdf
{
    struct wdfdevice_t;
    struct wdfcmreslist_t;

    // [struct _WDF_PNPPOWER_EVENT_CALLBACKS_V1_0]
    // => Windows 10 v1607
    //
    struct pnppower_event_callbacks_v1_0_t                                                              
    {                                                                                                   
        using evt_device_d0_entry_t =                         sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                            
        using evt_device_d0_entry_post_interrupts_enabled_t = sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                            
        using evt_device_d0_exit_t =                          sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                            
        using evt_device_d0_exit_pre_interrupts_disabled_t =  sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*;                                            
        using evt_device_prepare_hardware_t =                 sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*;                                            
        using evt_device_release_hardware_t =                 sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*;                                            
        using evt_device_self_managed_io_init_t =             sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                            
        using evt_device_self_managed_io_suspend_t =          sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                            
        using evt_device_self_managed_io_restart_t =          sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                            
        using evt_device_query_remove_t =                     sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                            
        using evt_device_query_stop_t =                       sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                            
        using pfn_wdf_device_usage_notification_t =           sdk::function<void(struct wdf::wdfdevice_t*, enum wdf::special_file_type_t, uint8_t)>*;                                            
        using pfn_wdf_device_relations_query_t =              sdk::function<void(struct wdf::wdfdevice_t*, enum nt::device_relation_type_t)>*;                                            
                                                                                                        
        // Windows 10 v1607                                                                             
        //                                                                                              
        _m00 uint32_t                                       size;                                         //{ +0x0000    } | .Size
        _m01 evt_device_d0_entry_t                          evt_device_d0_entry;                          //{ +0x0008    } | .EvtDeviceD0Entry
        _m02 evt_device_d0_entry_post_interrupts_enabled_t  evt_device_d0_entry_post_interrupts_enabled;  //{ +0x0010    } | .EvtDeviceD0EntryPostInterruptsEnabled
        _m03 evt_device_d0_exit_t                           evt_device_d0_exit;                           //{ +0x0018    } | .EvtDeviceD0Exit
        _m04 evt_device_d0_exit_pre_interrupts_disabled_t   evt_device_d0_exit_pre_interrupts_disabled;   //{ +0x0020    } | .EvtDeviceD0ExitPreInterruptsDisabled
        _m05 evt_device_prepare_hardware_t                  evt_device_prepare_hardware;                  //{ +0x0028    } | .EvtDevicePrepareHardware
        _m06 evt_device_release_hardware_t                  evt_device_release_hardware;                  //{ +0x0030    } | .EvtDeviceReleaseHardware
        _m07 sdk::function<void(struct wdf::wdfdevice_t*)>* evt_device_self_managed_io_cleanup;           //{ +0x0038    } | .EvtDeviceSelfManagedIoCleanup
        _m08 sdk::function<void(struct wdf::wdfdevice_t*)>* evt_device_self_managed_io_flush;             //{ +0x0040    } | .EvtDeviceSelfManagedIoFlush
        _m09 evt_device_self_managed_io_init_t              evt_device_self_managed_io_init;              //{ +0x0048    } | .EvtDeviceSelfManagedIoInit
        _m10 evt_device_self_managed_io_suspend_t           evt_device_self_managed_io_suspend;           //{ +0x0050    } | .EvtDeviceSelfManagedIoSuspend
        _m11 evt_device_self_managed_io_restart_t           evt_device_self_managed_io_restart;           //{ +0x0058    } | .EvtDeviceSelfManagedIoRestart
        _m12 sdk::function<void(struct wdf::wdfdevice_t*)>* evt_device_surprise_removal;                  //{ +0x0060    } | .EvtDeviceSurpriseRemoval
        _m13 evt_device_query_remove_t                      evt_device_query_remove;                      //{ +0x0068    } | .EvtDeviceQueryRemove
        _m14 evt_device_query_stop_t                        evt_device_query_stop;                        //{ +0x0070    } | .EvtDeviceQueryStop
        _m15 pfn_wdf_device_usage_notification_t            evt_device_usage_notification;                //{ +0x0078    } | .EvtDeviceUsageNotification
        _m16 pfn_wdf_device_relations_query_t               evt_device_relations_query;                   //{ +0x0080    } | .EvtDeviceRelationsQuery
                                                                                                        
        SDK_MAGIC_PROPERTIES( "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_0.$", 0x0, false, 0xf4a3f6500052fb05 );                                            
        SDK_FIXED_SIZE( pnppower_event_callbacks_v1_0_t, 0x88 );                                            
    };                                                                                                  
};
#include "magic/pnppower_event_callbacks_v1_0_t.end.hpp"
SDK_VERIFY( struct wdf::pnppower_event_callbacks_v1_0_t, 0x88 );
