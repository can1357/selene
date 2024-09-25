#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PLUGPLAY_CONTROL_DEVICE_RELATIONS_DATA.DeviceInstance", device_instance, 0x0, 0x80, true, 0x51969eaca2af3ea0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pnp::query_relation_t), "_PLUGPLAY_CONTROL_DEVICE_RELATIONS_DATA.Operation", operation, 0x80, 0x20, true, 0x9742723e4c770ecd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_DEVICE_RELATIONS_DATA.BufferLength", buffer_length, 0xa0, 0x20, true, 0x16722a1a3777511)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_PLUGPLAY_CONTROL_DEVICE_RELATIONS_DATA.Buffer", buffer, 0xc0, 0x40, true, 0x72923b90852866ae)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif