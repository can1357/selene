#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_CPU_RATE_CONTROL_INFORMATION.ControlFlags", control_flags, 0x0, 0x20, true, 0xddf289e847475272)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_CPU_RATE_CONTROL_INFORMATION.CpuRate", cpu_rate, 0x20, 0x20, true, 0x8e83c109826c8ce3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_CPU_RATE_CONTROL_INFORMATION.Weight", weight, 0x20, 0x20, true, 0xac878357e50de2f4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_JOBOBJECT_CPU_RATE_CONTROL_INFORMATION.MinRate", min_rate, 0x20, 0x10, true, 0xe42120d46cd7c09)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_JOBOBJECT_CPU_RATE_CONTROL_INFORMATION.MaxRate", max_rate, 0x30, 0x10, true, 0x441e9868dbc0a754)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif