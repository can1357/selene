#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_CRITICAL_PROCESS_EXCEPTION_DATA.ReportId", report_id, 0x0, 0x80, true, 0x8c23936061686768)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_CRITICAL_PROCESS_EXCEPTION_DATA.ModuleName", module_name, 0x80, 0x80, true, 0xf67cbadfb360e9e3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRITICAL_PROCESS_EXCEPTION_DATA.ModuleTimestamp", module_timestamp, 0x100, 0x20, true, 0x9e310eaf77721bd6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRITICAL_PROCESS_EXCEPTION_DATA.ModuleSize", module_size, 0x120, 0x20, true, 0x409a5c02a21b243a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CRITICAL_PROCESS_EXCEPTION_DATA.Offset", offset, 0x140, 0x40, true, 0x407cfec85f0817a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif