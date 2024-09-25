#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCSPLATFORM.dwPlatformId", dw_platform_id, 0x0, 0x20, true, 0x667e3cd3bfc4b827)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCSPLATFORM.dwVersionHi", dw_version_hi, 0x20, 0x20, true, 0x3ebff4058c042c9f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCSPLATFORM.dwVersionLo", dw_version_lo, 0x40, 0x20, true, 0x18cd4d18b177fb5e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCSPLATFORM.dwProcessorArch", dw_processor_arch, 0x60, 0x20, true, 0x23184b14a61fd17c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif