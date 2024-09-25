#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_DEV_INFO.DeviceExtensionSize", device_extension_size, 0x0, 0x20, true, 0x7f131c30a0539b10)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_DEV_INFO.DeviceType", device_type, 0x20, 0x20, true, 0xa8213862c94d6515)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CLASS_DEV_INFO.StackSize", stack_size, 0x40, 0x8, true, 0x475bfb8f0c8b03e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLASS_DEV_INFO.DeviceCharacteristics", device_characteristics, 0x60, 0x20, true, 0x2a2ba672bb5e7388)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pclass_error_t ), "_CLASS_DEV_INFO.ClassError", class_error, 0x80, 0x40, true, 0x2d8d73260719a477)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*), "_CLASS_DEV_INFO.ClassReadWriteVerification", class_read_write_verification, 0xc0, 0x40, true, 0x3274b500924f53f3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*), "_CLASS_DEV_INFO.ClassDeviceControl", class_device_control, 0x100, 0x40, true, 0xd9d925f2bfcdacd6)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*), "_CLASS_DEV_INFO.ClassShutdownFlush", class_shutdown_flush, 0x140, 0x40, true, 0x750b1187633c3691)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*), "_CLASS_DEV_INFO.ClassCreateClose", class_create_close, 0x180, 0x40, true, 0x3744469e8deb604b)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*)>*), "_CLASS_DEV_INFO.ClassInitDevice", class_init_device, 0x1c0, 0x40, true, 0x70c263c7a843ddb7)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*)>*), "_CLASS_DEV_INFO.ClassStartDevice", class_start_device, 0x200, 0x40, true, 0xbe176ada4d39c97)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, struct nt::irp_t*)>*), "_CLASS_DEV_INFO.ClassPowerDevice", class_power_device, 0x240, 0x40, true, 0x68508426cede3f)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, uint8_t)>*), "_CLASS_DEV_INFO.ClassStopDevice", class_stop_device, 0x280, 0x40, true, 0xae834f57f4faab87)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::device_object_t*, uint8_t)>*), "_CLASS_DEV_INFO.ClassRemoveDevice", class_remove_device, 0x2c0, 0x40, true, 0x3cee03fb375c143e)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pclass_query_pnp_capabilities_t ), "_CLASS_DEV_INFO.ClassQueryPnpCapabilities", class_query_pnp_capabilities, 0x300, 0x40, true, 0xf1024035780c9e46)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::class_wmi_info_t), "_CLASS_DEV_INFO.ClassWmiInfo", class_wmi_info, 0x340, 0x0, true, 0xd97cc59aa2e4c5eb)
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
#endif