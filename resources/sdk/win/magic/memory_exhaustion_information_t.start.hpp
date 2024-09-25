#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MEMORY_EXHAUSTION_INFORMATION.Version", version, 0x0, 0x10, true, 0x40de3bcfaea99309)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::memory_exhaustion_type_t), "_MEMORY_EXHAUSTION_INFORMATION.Type", type, 0x20, 0x20, true, 0x34395a7e18c61af6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_EXHAUSTION_INFORMATION.Value", value, 0x40, 0x40, true, 0xa81afc199cee1966)
#else
#define _m00
#define _m01
#define _m02
#endif