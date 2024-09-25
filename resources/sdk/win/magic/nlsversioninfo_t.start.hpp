#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_nlsversioninfo.dwNLSVersionInfoSize", dw_nls_version_info_size, 0x0, 0x20, true, 0x70cfb1d4a2ae418e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_nlsversioninfo.dwNLSVersion", dw_nls_version, 0x20, 0x20, true, 0x232d5d0ec0cd0a3e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_nlsversioninfo.dwDefinedVersion", dw_defined_version, 0x40, 0x20, true, 0xa3578d88c15e5874)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_nlsversioninfo.dwEffectiveId", dw_effective_id, 0x60, 0x20, true, 0x5cba70a70c011e14)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_nlsversioninfo.guidCustomVersion", guid_custom_version, 0x80, 0x80, true, 0x2a600eece5d52e52)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif