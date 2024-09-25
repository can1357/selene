#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_VOLUME_NAME_INFORMATION.DeviceNameLength", device_name_length, 0x0, 0x20, true, 0xefaebe9afecf497)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_VOLUME_NAME_INFORMATION.DeviceName", device_name, 0x20, 0x10, true, 0x638fbaa1d7bc0395)
#else
#define _m00
#define _m01
#endif