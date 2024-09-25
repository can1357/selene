#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COVERAGE_MODULE_INFO.ModuleInfoSize", module_info_size, 0x0, 0x20, true, 0x788b9b0666fa3123)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COVERAGE_MODULE_INFO.IsBinaryLoaded", is_binary_loaded, 0x20, 0x20, true, 0xda61eb5deaaf55c2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_COVERAGE_MODULE_INFO.ModulePathName", module_path_name, 0x40, 0x80, true, 0x8eebc9965e54bbcc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COVERAGE_MODULE_INFO.CoverageSectionSize", coverage_section_size, 0xc0, 0x20, true, 0xb548d12faef32052)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_COVERAGE_MODULE_INFO.CoverageSection", coverage_section, 0xe0, 0x8, true, 0x84805cafd785801b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif