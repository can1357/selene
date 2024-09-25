#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PPM_THERMAL_CONSTRAINT.Constraint", constraint, 0x0, 0x20, true, 0x6a832c25d4080f1e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PPM_THERMAL_CONSTRAINT.Processors", processors, 0x40, 0x40, true, 0xbd2f58bb5f0ba940)
#else
#define _m00
#define _m01
#endif