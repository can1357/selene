#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::mem_dedicated_attribute_type_t), "_MEMORY_PARTITION_DEDICATED_MEMORY_ATTRIBUTE.Type", type, 0x0, 0x0, false, 0x9ad968b984860ce7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_PARTITION_DEDICATED_MEMORY_ATTRIBUTE.Value", value, 0x0, 0x0, false, 0xa2a6b397922cb7a)
#else
#define _m00
#define _m01
#endif