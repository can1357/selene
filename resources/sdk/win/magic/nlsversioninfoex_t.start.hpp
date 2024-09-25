#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_nlsversioninfoex.dwNLSVersionInfoSize", dw_nls_version_info_size, 0x0, 0x20, true, 0x6f3e0b3f5c304ac4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_nlsversioninfoex.dwNLSVersion", dw_nls_version, 0x20, 0x20, true, 0x65786420cbbe9839)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_nlsversioninfoex.dwDefinedVersion", dw_defined_version, 0x40, 0x20, true, 0x33525bcec3e0f958)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_nlsversioninfoex.dwEffectiveId", dw_effective_id, 0x60, 0x20, true, 0xaaede1a4a4fda5b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_nlsversioninfoex.guidCustomVersion", guid_custom_version, 0x80, 0x80, true, 0xadd97f2da0bb1739)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif