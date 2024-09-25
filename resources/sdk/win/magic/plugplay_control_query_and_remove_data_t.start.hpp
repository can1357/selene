#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_PLUGPLAY_CONTROL_QUERY_AND_REMOVE_DATA.DeviceInstance", device_instance, 0x0, 0x80, true, 0xf7a3d8f264b4b64)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_QUERY_AND_REMOVE_DATA.Flags", flags, 0x80, 0x20, true, 0x7ce4293aa69e7916)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pnp::veto_type_t), "_PLUGPLAY_CONTROL_QUERY_AND_REMOVE_DATA.VetoType", veto_type, 0xa0, 0x20, true, 0x764e1079955f94)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_PLUGPLAY_CONTROL_QUERY_AND_REMOVE_DATA.VetoName", veto_name, 0xc0, 0x40, true, 0xeffeb7675d10094d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PLUGPLAY_CONTROL_QUERY_AND_REMOVE_DATA.VetoNameLength", veto_name_length, 0x100, 0x20, true, 0x712ed3b7c81e9cf5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif