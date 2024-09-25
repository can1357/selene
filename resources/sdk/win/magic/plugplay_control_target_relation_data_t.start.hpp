#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PLUGPLAY_CONTROL_TARGET_RELATION_DATA.UserFileHandle", user_file_handle, 0x0, 0x40, true, 0xe5e762d7e9b6fa17)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PLUGPLAY_CONTROL_TARGET_RELATION_DATA.Status", status, 0x40, 0x20, true, 0x1ea0b98a718b443b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_TARGET_RELATION_DATA.DeviceInstanceLen", device_instance_len, 0x60, 0x20, true, 0x15806977b4abbd5a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_PLUGPLAY_CONTROL_TARGET_RELATION_DATA.DeviceInstance", device_instance, 0x80, 0x40, true, 0xc8b0178d8b5c72b4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif