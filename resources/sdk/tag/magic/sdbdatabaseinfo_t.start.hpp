#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBDATABASEINFO.dwFlags", dw_flags, 0x0, 0x20, true, 0xd957ff5f4c25cd1c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBDATABASEINFO.dwVersionMajor", dw_version_major, 0x20, 0x20, true, 0xcd07d5f1b1dcad21)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBDATABASEINFO.dwVersionMinor", dw_version_minor, 0x40, 0x20, true, 0xee3932dc597fe5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagSDBDATABASEINFO.pszDescription", psz_description, 0x80, 0x40, true, 0xebee2add26256043)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagSDBDATABASEINFO.guidDB", guid_db, 0xc0, 0x80, true, 0xaa5086d2fd089b2a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSDBDATABASEINFO.dwRuntimePlatform", dw_runtime_platform, 0x140, 0x20, true, 0x4f1f9ab961de87f7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif