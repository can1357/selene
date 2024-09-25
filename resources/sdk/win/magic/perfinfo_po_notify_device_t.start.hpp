#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_PO_NOTIFY_DEVICE.Irp", irp, 0x0, 0x40, true, 0x7b61b4731b09aeb9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_PO_NOTIFY_DEVICE.DriverStart", driver_start, 0x40, 0x40, true, 0x2b651f62f8a1b364)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_PO_NOTIFY_DEVICE.OrderLevel", order_level, 0x80, 0x8, true, 0xc4b2ee1671afd25e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_PO_NOTIFY_DEVICE.MajorFunction", major_function, 0x88, 0x8, true, 0x5a5f0dbd02054a1b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_PO_NOTIFY_DEVICE.MinorFunction", minor_function, 0x90, 0x8, true, 0x5a25f2dff82ad456)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum power::state_type_t), "_PERFINFO_PO_NOTIFY_DEVICE.Type", type, 0xa0, 0x20, true, 0x7b09165d506d549c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union power::state_t), "_PERFINFO_PO_NOTIFY_DEVICE.State", state, 0xc0, 0x20, true, 0x13772bbb4cadc306)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PO_NOTIFY_DEVICE.DeviceNameLength", device_name_length, 0xe0, 0x20, true, 0x1261ed9344ab5fa1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_PERFINFO_PO_NOTIFY_DEVICE.DeviceName", device_name, 0x100, 0x10, true, 0xf4bc05782c42d75b)
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
#endif