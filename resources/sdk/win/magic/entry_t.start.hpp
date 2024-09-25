#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "ENTRY.sz", sz, 0x0, 0x40, true, 0xa969833ca3d63842)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t*), "ENTRY.pclsid", pclsid, 0x40, 0x40, true, 0xde79ea3fc6cebeed)
#else
#define _m00
#define _m01
#endif