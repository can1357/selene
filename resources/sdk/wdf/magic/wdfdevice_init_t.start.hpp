#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "WDFDEVICE_INIT.DriverGlobals", driver_globals, 0x0, 0x40, true, 0x9d0b700de3e4b15a)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::driver_t*), "WDFDEVICE_INIT.Driver", driver, 0x40, 0x40, true, 0x73c6c06315a64f2a)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<class fx::device_t*, void*>), "WDFDEVICE_INIT.CreatedDevice", created_device, 0x80, 0x40, true, 0x6091bc35b677e70e)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "WDFDEVICE_INIT.CreatedOnStack", created_on_stack, 0xc0, 0x8, true, 0x3d6fdb6504d94299)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "WDFDEVICE_INIT.Exclusive", exclusive, 0xc8, 0x8, true, 0x1eeb5df05bc030f0)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "WDFDEVICE_INIT.PowerPageable", power_pageable, 0xd0, 0x8, true, 0xdd41f0e772a08003)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "WDFDEVICE_INIT.Inrush", inrush, 0xd8, 0x8, true, 0x78127f0f0b4b056)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "WDFDEVICE_INIT.RequiresSelfIoTarget", requires_self_io_target, 0xe0, 0x8, true, 0x1c056622724d82b0)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WDFDEVICE_INIT.RemoveLockOptionFlags", remove_lock_option_flags, 0x100, 0x20, true, 0xc5a856a2fc7a9758)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::device_init_type_t), "WDFDEVICE_INIT.InitType", init_type, 0x120, 0x20, true, 0x4a8d225d46f2a55e)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_io_type_t), "WDFDEVICE_INIT.ReadWriteIoType", read_write_io_type, 0x140, 0x20, true, 0x2a35457d6a0e93ea)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WDFDEVICE_INIT.DeviceType", device_type, 0x160, 0x20, true, 0x7cab0b0931c8e027)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::string_t*), "WDFDEVICE_INIT.DeviceName", device_name, 0x180, 0x40, true, 0x6066821f7675c8ef)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WDFDEVICE_INIT.Characteristics", characteristics, 0x1c0, 0x20, true, 0xf742768c1b0c6e2)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::file_object_init_t), "WDFDEVICE_INIT.FileObject", file_object, 0x200, 0x80, true, 0xbc438878269d0002)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::init_t), "WDFDEVICE_INIT.Security", security, 0x580, 0x0, true, 0x3a154fd9468b5a9f)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::object_attributes_t), "WDFDEVICE_INIT.RequestAttributes", request_attributes, 0x680, 0xc0, true, 0x8b24b26cc1294fe4)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::irp_preprocess_info_t*), "WDFDEVICE_INIT.PreprocessInfo", preprocess_info, 0x840, 0x40, true, 0xd0feb4b7d66cdbb5)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_in_caller_context_t ), "WDFDEVICE_INIT.IoInCallerContextCallback", io_in_caller_context_callback, 0x880, 0x40, true, 0x543edcad0990f497)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::release_hardware_order_on_failure_t), "WDFDEVICE_INIT.ReleaseHardwareOrderOnFailure", release_hardware_order_on_failure, 0x8c0, 0x20, true, 0xa26503dd1aaac264)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pnp::power_init_t), "WDFDEVICE_INIT.PnpPower", pnp_power, 0x900, 0x80, true, 0xab9f73262e32796c)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::fdo_init_t), "WDFDEVICE_INIT.Fdo", fdo, 0x1080, 0x40, true, 0xda95177f49f4f4c8)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::pdo_init_t), "WDFDEVICE_INIT.Pdo", pdo, 0x16c0, 0x80, true, 0x30cf204c5d1012e7)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::control_init_t), "WDFDEVICE_INIT.Control", control, 0x1c40, 0x80, true, 0xdf8dc638dc0467dc)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "WDFDEVICE_INIT.CxDeviceInitListHead", cx_device_init_list_head, 0x1cc0, 0x80, true, 0x494382554d7b2788)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::user_object_t*), "WDFDEVICE_INIT.CxContextObject", cx_context_object, 0x1d40, 0x40, true, 0x34efc4d1f8e6079f)
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
#endif