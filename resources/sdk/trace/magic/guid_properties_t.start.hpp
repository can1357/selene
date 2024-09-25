#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TRACE_GUID_PROPERTIES.Guid", guid, 0x0, 0x80, true, 0x39e4e0275590534d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_GUID_PROPERTIES.GuidType", guid_type, 0x80, 0x20, true, 0xe0028ae2164069d0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_GUID_PROPERTIES.LoggerId", logger_id, 0xa0, 0x20, true, 0xd7af1fd885447eec)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_GUID_PROPERTIES.EnableLevel", enable_level, 0xc0, 0x20, true, 0x65444edf2ba40366)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRACE_GUID_PROPERTIES.EnableFlags", enable_flags, 0xe0, 0x20, true, 0x7b677bcbb0068e2d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_TRACE_GUID_PROPERTIES.IsEnable", is_enable, 0x100, 0x8, true, 0x8f78c4c05aeb9111)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif