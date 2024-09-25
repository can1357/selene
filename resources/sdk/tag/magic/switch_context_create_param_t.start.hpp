#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagSWITCH_CONTEXT_CREATE_PARAM.OsMaxVersionTested", os_max_version_tested, 0x0, 0x40, true, 0x8698ff1fafe4de92)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSWITCH_CONTEXT_CREATE_PARAM.TargetPlatform", target_platform, 0x40, 0x20, true, 0x3b7d43e63bde5099)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagSWITCH_CONTEXT_CREATE_PARAM.ShimData", shim_data, 0x80, 0x40, true, 0xc54ffce4b9a72730)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagSWITCH_CONTEXT_CREATE_PARAM.SubSystemMajorVersion", sub_system_major_version, 0xc0, 0x10, true, 0x3920a3fe785b8592)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagSWITCH_CONTEXT_CREATE_PARAM.SubSystemMinorVersion", sub_system_minor_version, 0xd0, 0x10, true, 0x11c28223b1573741)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagSWITCH_CONTEXT_CREATE_PARAM.MajorOperatingSystemVersion", major_operating_system_version, 0xe0, 0x10, true, 0x55f2c1ebf5048553)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagSWITCH_CONTEXT_CREATE_PARAM.MinorOperatingSystemVersion", minor_operating_system_version, 0xf0, 0x10, true, 0x1f689c9a1a023da2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagSWITCH_CONTEXT_CREATE_PARAM.SupportedOsInfo", supported_os_info, 0x100, 0x40, true, 0x77183443fb8de94b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagSWITCH_CONTEXT_CREATE_PARAM.lpwzApplicationName", lpwz_application_name, 0x0, 0x0, false, 0xef973ef736514e6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagSWITCH_CONTEXT_CREATE_PARAM.lpwzPackageMoniker", lpwz_package_moniker, 0x0, 0x0, false, 0xa53a3ba77b175d85)
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