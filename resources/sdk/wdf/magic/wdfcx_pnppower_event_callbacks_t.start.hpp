#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.Size", size, 0x0, 0x20, true, 0xed15aa9585a9a6a4)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePrePrepareHardware", evt_cx_device_pre_prepare_hardware, 0x40, 0x40, true, 0x329360ceb6fc77ec)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcx_device_pre_prepare_hardware_failed_cleanup_t ), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePrePrepareHardwareFailedCleanup", evt_cx_device_pre_prepare_hardware_failed_cleanup, 0x80, 0x40, true, 0xaa0b152d763a4e4a)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePostPrepareHardware", evt_cx_device_post_prepare_hardware, 0xc0, 0x40, true, 0x44ae055333a19a9c)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePreReleaseHardware", evt_cx_device_pre_release_hardware, 0x100, 0x40, true, 0x43a44ccf981083aa)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePostReleaseHardware", evt_cx_device_post_release_hardware, 0x140, 0x40, true, 0x8eeadc420c73edeb)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePreD0Entry", evt_cx_device_pre_d0_entry, 0x180, 0x40, true, 0xa6beea64248c477)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcx_device_pre_d0_entry_failed_cleanup_t ), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePreD0EntryFailedCleanup", evt_cx_device_pre_d0_entry_failed_cleanup, 0x1c0, 0x40, true, 0xb086ce1761d8b5e1)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePostD0Entry", evt_cx_device_post_d0_entry, 0x200, 0x40, true, 0x74732b96ea97ef4d)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePreD0Exit", evt_cx_device_pre_d0_exit, 0x240, 0x40, true, 0x6c7ab074ca7a97e)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePostD0Exit", evt_cx_device_post_d0_exit, 0x280, 0x40, true, 0x9e462acec594b913)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePreSurpriseRemoval", evt_cx_device_pre_surprise_removal, 0x2c0, 0x40, true, 0xdd197645ccf190f9)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePostSurpriseRemoval", evt_cx_device_post_surprise_removal, 0x300, 0x40, true, 0x2f1a04f32deea259)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePreSelfManagedIoInit", evt_cx_device_pre_self_managed_io_init, 0x340, 0x40, true, 0xfc389cfc01aa654d)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePreSelfManagedIoInitFailedCleanup", evt_cx_device_pre_self_managed_io_init_failed_cleanup, 0x380, 0x40, true, 0xb1e35c695a7158ed)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePostSelfManagedIoInit", evt_cx_device_post_self_managed_io_init, 0x3c0, 0x40, true, 0x23e5fcfb770ad856)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePreSelfManagedIoRestart", evt_cx_device_pre_self_managed_io_restart, 0x400, 0x40, true, 0xadf9abb150d5027f)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePreSelfManagedIoRestartFailedCleanup", evt_cx_device_pre_self_managed_io_restart_failed_cleanup, 0x440, 0x40, true, 0x72c2a35397cb8c62)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePostSelfManagedIoRestart", evt_cx_device_post_self_managed_io_restart, 0x480, 0x40, true, 0x807f0fe992da2f5d)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePreSelfManagedIoSuspend", evt_cx_device_pre_self_managed_io_suspend, 0x4c0, 0x40, true, 0x4741a74fa25c9063)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePostSelfManagedIoSuspend", evt_cx_device_post_self_managed_io_suspend, 0x500, 0x40, true, 0x76f46652ae23db17)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePreSelfManagedIoFlush", evt_cx_device_pre_self_managed_io_flush, 0x540, 0x40, true, 0x5ccc0204cf1ab2bc)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePostSelfManagedIoFlush", evt_cx_device_post_self_managed_io_flush, 0x580, 0x40, true, 0x91e0b922487f443e)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePreSelfManagedIoCleanup", evt_cx_device_pre_self_managed_io_cleanup, 0x5c0, 0x40, true, 0x9105ad558f8b9c0)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePostSelfManagedIoCleanup", evt_cx_device_post_self_managed_io_cleanup, 0x600, 0x40, true, 0x3c34538e7d3ba5bd)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePreSelfManagedIoRestartEx", evt_cx_device_pre_self_managed_io_restart_ex, 0x640, 0x40, true, 0x3c5febf76b7f10e)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePreSelfManagedIoRestartExFailedCleanup", evt_cx_device_pre_self_managed_io_restart_ex_failed_cleanup, 0x680, 0x40, true, 0x66eec21ccc1aea39)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePostSelfManagedIoRestartEx", evt_cx_device_post_self_managed_io_restart_ex, 0x6c0, 0x40, true, 0x79db1a1cdf50ddcb)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePreSelfManagedIoSuspendEx", evt_cx_device_pre_self_managed_io_suspend_ex, 0x700, 0x40, true, 0x512969f6cec3c432)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePostSelfManagedIoSuspendEx", evt_cx_device_post_self_managed_io_suspend_ex, 0x740, 0x40, true, 0xdf78b18faae19a43)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePreD0EntryPostHardwareEnabled", evt_cx_device_pre_d0_entry_post_hardware_enabled, 0x780, 0x40, true, 0x93543103a05d47d5)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePostD0EntryPostHardwareEnabled", evt_cx_device_post_d0_entry_post_hardware_enabled, 0x7c0, 0x40, true, 0xfc3ee829808a826d)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePreD0EntryPostHardwareEnabledFailedCleanup", evt_cx_device_pre_d0_entry_post_hardware_enabled_failed_cleanup, 0x800, 0x40, true, 0xbcb0fafd3c93a83a)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePreD0ExitPreHardwareDisabled", evt_cx_device_pre_d0_exit_pre_hardware_disabled, 0x840, 0x40, true, 0xd87dca13325eb64d)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS.EvtCxDevicePostD0ExitPreHardwareDisabled", evt_cx_device_post_d0_exit_pre_hardware_disabled, 0x880, 0x40, true, 0xda90a88cdf8c3418)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#endif