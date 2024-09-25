#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEBUGGING_DEVICE_IN_USE_INFORMATION.DeviceCount", device_count, 0x0, 0x20, true, 0x57f808cced722090)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct wdf::debugging_device_in_use_t, 1>), "_DEBUGGING_DEVICE_IN_USE_INFORMATION.Device", device, 0x20, 0xa0, true, 0xf81e405326414e21)
#else
#define _m00
#define _m01
#endif