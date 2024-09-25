#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.Size", size, 0x0, 0x20, true, 0x455ab982265a6f3f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePrePrepareHardware", evt_cx_device_pre_prepare_hardware, 0x40, 0x40, true, 0x2b056059dd03214)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcx_device_pre_prepare_hardware_failed_cleanup_t ), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePrePrepareHardwareFailedCleanup", evt_cx_device_pre_prepare_hardware_failed_cleanup, 0x80, 0x40, true, 0x296dd801619d8ed)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePostPrepareHardware", evt_cx_device_post_prepare_hardware, 0xc0, 0x40, true, 0x8a4a77f298773fb1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePreReleaseHardware", evt_cx_device_pre_release_hardware, 0x100, 0x40, true, 0xd3cc4fed3b0933f0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePostReleaseHardware", evt_cx_device_post_release_hardware, 0x140, 0x40, true, 0x176054a3997ba16f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePreD0Entry", evt_cx_device_pre_d0_entry, 0x180, 0x40, true, 0x3d53c1ce304b647)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePreD0EntryFailedCleanup", evt_cx_device_pre_d0_entry_failed_cleanup, 0x1c0, 0x40, true, 0xd6d0ad297f4765ba)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePostD0Entry", evt_cx_device_post_d0_entry, 0x200, 0x40, true, 0x36fd4ac4b48a7357)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePreD0Exit", evt_cx_device_pre_d0_exit, 0x240, 0x40, true, 0x3893615b2a82541d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePostD0Exit", evt_cx_device_post_d0_exit, 0x280, 0x40, true, 0x80295ed681990b4b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePreSurpriseRemoval", evt_cx_device_pre_surprise_removal, 0x2c0, 0x40, true, 0x6e450350d4cab5bb)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePostSurpriseRemoval", evt_cx_device_post_surprise_removal, 0x300, 0x40, true, 0x1d47a0f67f046264)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePreSelfManagedIoInit", evt_cx_device_pre_self_managed_io_init, 0x340, 0x40, true, 0x1aaec97642264b)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePreSelfManagedIoInitFailedCleanup", evt_cx_device_pre_self_managed_io_init_failed_cleanup, 0x380, 0x40, true, 0xb9ea63416e23051)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePostSelfManagedIoInit", evt_cx_device_post_self_managed_io_init, 0x3c0, 0x40, true, 0x616812ba20f9d40b)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePreSelfManagedIoRestart", evt_cx_device_pre_self_managed_io_restart, 0x400, 0x40, true, 0xc906aa763bd5606c)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePreSelfManagedIoRestartFailedCleanup", evt_cx_device_pre_self_managed_io_restart_failed_cleanup, 0x440, 0x40, true, 0x1215b342d7452997)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePostSelfManagedIoRestart", evt_cx_device_post_self_managed_io_restart, 0x480, 0x40, true, 0x182259e996712765)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePreSelfManagedIoSuspend", evt_cx_device_pre_self_managed_io_suspend, 0x4c0, 0x40, true, 0x2e798c13f0d58e3e)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePostSelfManagedIoSuspend", evt_cx_device_post_self_managed_io_suspend, 0x500, 0x40, true, 0xec01b4223011ea9e)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePreSelfManagedIoFlush", evt_cx_device_pre_self_managed_io_flush, 0x540, 0x40, true, 0x8ceeaf7f35d37eaa)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePostSelfManagedIoFlush", evt_cx_device_post_self_managed_io_flush, 0x580, 0x40, true, 0x2d5f173659f79c2e)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePreSelfManagedIoCleanup", evt_cx_device_pre_self_managed_io_cleanup, 0x5c0, 0x40, true, 0x9b3cd6ae366fafd1)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDFCX_PNPPOWER_EVENT_CALLBACKS_V1_29.EvtCxDevicePostSelfManagedIoCleanup", evt_cx_device_post_self_managed_io_cleanup, 0x600, 0x40, true, 0xe082972dde738588)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#endif