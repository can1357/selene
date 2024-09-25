#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_COVERAGE_SAMPLER_BLOOM_FILTER.FileMapping", file_mapping, 0x0, 0x40, true, 0xaf92b3669dafe3c7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_BLOOM_FILTER.Size", size, 0x40, 0x20, true, 0xdb96403e2c72a147)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_BLOOM_FILTER.HashSeed", hash_seed, 0x60, 0x20, true, 0x86a2f619bf00469a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_COVERAGE_SAMPLER_BLOOM_FILTER.HashCount", hash_count, 0x80, 0x20, true, 0xfd2ebc0a302fda29)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif