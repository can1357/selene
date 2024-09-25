#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_COVERAGE_UNLOADED_MODULE_ENTRY.NextEntry", next_entry, 0x0, 0x80, true, 0xdafee5d0496c88fd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_COVERAGE_UNLOADED_MODULE_ENTRY.BaseDllName", base_dll_name, 0x80, 0x80, true, 0xc4e8e0798fe76f5f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_COVERAGE_UNLOADED_MODULE_ENTRY.FullDllName", full_dll_name, 0x100, 0x80, true, 0x5bc181ba568a0c11)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COVERAGE_UNLOADED_MODULE_ENTRY.CoverageSectionSize", coverage_section_size, 0x180, 0x20, true, 0x372e872114fcdddc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_COVERAGE_UNLOADED_MODULE_ENTRY.CoverageSection", coverage_section, 0x1c0, 0x40, true, 0x1c9f9d188e41fae0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif