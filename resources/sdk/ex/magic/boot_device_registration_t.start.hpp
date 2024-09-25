#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EX_BOOT_DEVICE_REGISTRATION.Version", version, 0x0, 0x20, true, 0x799bcd2910ef88a1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EX_BOOT_DEVICE_REGISTRATION.Flags", flags, 0x20, 0x20, true, 0x7016589ddaf5e0ff)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::driver_object_t*), "_EX_BOOT_DEVICE_REGISTRATION.DriverObject", driver_object, 0x40, 0x40, true, 0xff5c2e8438b25332)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_EX_BOOT_DEVICE_REGISTRATION.DeviceObject", device_object, 0x80, 0x40, true, 0x2193f6bacb03ff7e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pex_is_boot_device_ready_t ), "_EX_BOOT_DEVICE_REGISTRATION.IsBootDeviceReady", is_boot_device_ready, 0xc0, 0x40, true, 0x451c9f5e2b7a02f3)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_EX_BOOT_DEVICE_REGISTRATION.Context", context, 0x100, 0x40, true, 0x6f2cca2354291cc0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif