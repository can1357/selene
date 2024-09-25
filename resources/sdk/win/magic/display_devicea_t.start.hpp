#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISPLAY_DEVICEA.cb", cb, 0x0, 0x20, true, 0xab7a6e3b0211546)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "_DISPLAY_DEVICEA.DeviceName", device_name, 0x20, 0x0, true, 0x633ade97d477d503)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 128>), "_DISPLAY_DEVICEA.DeviceString", device_string, 0x120, 0x0, true, 0xb1932d68692b42b6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISPLAY_DEVICEA.StateFlags", state_flags, 0x520, 0x20, true, 0x3549ac8d8a42b1d9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 128>), "_DISPLAY_DEVICEA.DeviceID", device_id, 0x540, 0x0, true, 0x898de5cb71f31577)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 128>), "_DISPLAY_DEVICEA.DeviceKey", device_key, 0x940, 0x0, true, 0xe851744e1d94c439)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif