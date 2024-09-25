#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MIDL_INTERCEPTION_INFO.Version", version, 0x0, 0x20, true, 0xeb87c7b934306767)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "_MIDL_INTERCEPTION_INFO.ProcString", proc_string, 0x40, 0x40, true, 0x4d229921f75d7c1f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint16_t*), "_MIDL_INTERCEPTION_INFO.ProcFormatOffsetTable", proc_format_offset_table, 0x80, 0x40, true, 0x1fca5e741a727ca5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MIDL_INTERCEPTION_INFO.ProcCount", proc_count, 0xc0, 0x20, true, 0xe910d0d6281cf61c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t*), "_MIDL_INTERCEPTION_INFO.TypeString", type_string, 0x100, 0x40, true, 0x153acc393ab9e45c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif