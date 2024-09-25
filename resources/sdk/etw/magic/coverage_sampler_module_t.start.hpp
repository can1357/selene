#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_MODULE.PathOffset", path_offset, 0x0, 0x20, true, 0x45f709e82686d9f9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_MODULE.PathLength", path_length, 0x20, 0x20, true, 0xc221c14af29ca837)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_MODULE.DebugInfoOffset", debug_info_offset, 0x40, 0x20, true, 0x62bcb34a7e64ee59)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_MODULE.DebugInfoLength", debug_info_length, 0x60, 0x20, true, 0x2e25e108d4a8b626)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_MODULE.TimeDateStamp", time_date_stamp, 0x80, 0x20, true, 0xaacd0b0e601bb6b8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_MODULE.ImageChecksum", image_checksum, 0xa0, 0x20, true, 0xc11b0bbae14fc3f4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_MODULE.ImageSize", image_size, 0xc0, 0x20, true, 0x3b616292c28387e8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_MODULE.ModuleId", module_id, 0xe0, 0x20, true, 0x8494574b947c0249)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_MODULE.ModuleSequence", module_sequence, 0x100, 0x20, true, 0xf1c2ee517abf5bf9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_MODULE.ExeModuleId", exe_module_id, 0x120, 0x20, true, 0x1689f341cd1c4525)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_MODULE.ExeModuleSequence", exe_module_sequence, 0x140, 0x20, true, 0xc5b738f568fe9f97)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_MODULE.ExeProcessId", exe_process_id, 0x160, 0x20, true, 0xbe2b7aaa86ba5174)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#endif