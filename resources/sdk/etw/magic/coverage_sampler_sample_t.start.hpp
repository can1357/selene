#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_SAMPLE.ModuleId", module_id, 0x0, 0x20, true, 0xc8170cf13d3d412c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_SAMPLE.Offset", offset, 0x20, 0x20, true, 0x91704b354df47da6)
#else
#define _m00
#define _m01
#endif