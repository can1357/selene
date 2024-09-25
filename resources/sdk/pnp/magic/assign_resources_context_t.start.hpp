#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_ASSIGN_RESOURCES_CONTEXT.IncludeFailedDevices", include_failed_devices, 0x0, 0x20, true, 0x1cc38df4f6ac98af)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_ASSIGN_RESOURCES_CONTEXT.DeviceCount", device_count, 0x20, 0x20, true, 0xbfc3a19e7ba35035)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::device_object_t*, 1>), "_PNP_ASSIGN_RESOURCES_CONTEXT.DeviceList", device_list, 0x40, 0x40, true, 0x669501a3828315cb)
#else
#define _m00
#define _m01
#define _m02
#endif