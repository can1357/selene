#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_COMMON_BUFFER_CONFIG_V1_9.Size", size, 0x0, 0x0, false, 0x6ed73fbc443357b6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_COMMON_BUFFER_CONFIG_V1_9.AlignmentRequirement", alignment_requirement, 0x0, 0x0, false, 0xcbdb7ebc3238edca)
#else
#define _m00
#define _m01
#endif