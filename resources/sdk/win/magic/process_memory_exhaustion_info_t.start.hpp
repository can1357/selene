#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROCESS_MEMORY_EXHAUSTION_INFO.Version", version, 0x0, 0x10, true, 0xe33b4ff7c6acfb4b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::process_memory_exhaustion_type_t), "_PROCESS_MEMORY_EXHAUSTION_INFO.Type", type, 0x20, 0x20, true, 0x9b658d67addd385a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PROCESS_MEMORY_EXHAUSTION_INFO.Value", value, 0x40, 0x40, true, 0xc2394df24de5bbca)
#else
#define _m00
#define _m01
#define _m02
#endif