#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POWER_SETTING_NOTIFICATION.GuidsCount", guids_count, 0x0, 0x20, true, 0xe0d12a1fbd5feb98)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t*), "_STOR_POWER_SETTING_NOTIFICATION.Guid", guid, 0x40, 0x40, true, 0x6f0f5119b3d8a86b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_STOR_POWER_SETTING_NOTIFICATION.Handle", handle, 0x80, 0x40, true, 0x5e2f71b8a52b985c)
#else
#define _m00
#define _m01
#define _m02
#endif