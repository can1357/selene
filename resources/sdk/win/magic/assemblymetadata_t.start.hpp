#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ASSEMBLYMETADATA.usMajorVersion", us_major_version, 0x0, 0x10, true, 0x15338c234358f8c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ASSEMBLYMETADATA.usMinorVersion", us_minor_version, 0x10, 0x10, true, 0xf2dee18810dc4f28)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ASSEMBLYMETADATA.usBuildNumber", us_build_number, 0x20, 0x10, true, 0xe1d00a1d0aada774)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "ASSEMBLYMETADATA.usRevisionNumber", us_revision_number, 0x30, 0x10, true, 0xc7bcfe396b9f3233)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "ASSEMBLYMETADATA.szLocale", sz_locale, 0x40, 0x40, true, 0x26648288453f4657)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ASSEMBLYMETADATA.cbLocale", cb_locale, 0x80, 0x20, true, 0xe3558b1503bf5158)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "ASSEMBLYMETADATA.rProcessor", r_processor, 0xc0, 0x40, true, 0x1fae3efdaeed2b16)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ASSEMBLYMETADATA.ulProcessor", ul_processor, 0x100, 0x20, true, 0xad4aae0d008c0464)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::osinfo_t*), "ASSEMBLYMETADATA.rOS", r_os, 0x140, 0x40, true, 0x2ed4c0a2b6bc5b80)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ASSEMBLYMETADATA.ulOS", ul_os, 0x180, 0x20, true, 0x9a485eefbd9c173f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif