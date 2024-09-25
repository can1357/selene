#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISK_PERFORMANCE_PARAMETERS.Version", version, 0x0, 0x20, true, 0x9beb078e74aaabb6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::disk_performance_type_t), "_DISK_PERFORMANCE_PARAMETERS.Type", type, 0x20, 0x20, true, 0xc215047e38cc18a9)
#else
#define _m00
#define _m01
#endif