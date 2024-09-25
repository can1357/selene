#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_PROCESSOR_INFORMATION.ProcessorArchitecture", processor_architecture, 0x0, 0x10, true, 0x2530835c9fd8c52f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_PROCESSOR_INFORMATION.ProcessorLevel", processor_level, 0x10, 0x10, true, 0x740da52a0a995727)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_PROCESSOR_INFORMATION.ProcessorRevision", processor_revision, 0x20, 0x10, true, 0x42051cb9070c9105)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_PROCESSOR_INFORMATION.MaximumProcessors", maximum_processors, 0x30, 0x10, true, 0xaa53339dc1feae87)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESSOR_INFORMATION.ProcessorFeatureBits", processor_feature_bits, 0x40, 0x20, true, 0xd9efaf1841b7e30a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif