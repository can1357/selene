#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISPLAY_DEVICEW.cb", cb, 0x0, 0x20, true, 0xdfc4d3090afb3b78)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_DISPLAY_DEVICEW.DeviceName", device_name, 0x20, 0x0, true, 0x5a788ac5e0c4b18b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 128>), "_DISPLAY_DEVICEW.DeviceString", device_string, 0x220, 0x0, true, 0x3a14c07ea428311e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISPLAY_DEVICEW.StateFlags", state_flags, 0xa20, 0x20, true, 0xde9286f95a72e071)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 128>), "_DISPLAY_DEVICEW.DeviceID", device_id, 0xa40, 0x0, true, 0x1a22a69bb6d8cef4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 128>), "_DISPLAY_DEVICEW.DeviceKey", device_key, 0x1240, 0x0, true, 0xb0f82036731420d4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif