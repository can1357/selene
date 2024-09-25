#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DETAILED_INFORMATION.dwFlags", dw_flags, 0x0, 0x20, true, 0x23b2fa3f2a286072)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DETAILED_INFORMATION.ulFormatVersion", ul_format_version, 0x20, 0x20, true, 0x3fa75ea005bbe943)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DETAILED_INFORMATION.ulAssemblyCount", ul_assembly_count, 0x40, 0x20, true, 0x92e5bb8020a024f3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DETAILED_INFORMATION.ulRootManifestPathType", ul_root_manifest_path_type, 0x60, 0x20, true, 0x74fb616ee981ee05)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DETAILED_INFORMATION.ulRootManifestPathChars", ul_root_manifest_path_chars, 0x80, 0x20, true, 0x733a99ff8e8712a3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DETAILED_INFORMATION.ulRootConfigurationPathType", ul_root_configuration_path_type, 0xa0, 0x20, true, 0x4f4b87b348f70447)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DETAILED_INFORMATION.ulRootConfigurationPathChars", ul_root_configuration_path_chars, 0xc0, 0x20, true, 0x9e29ee10c8307487)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DETAILED_INFORMATION.ulAppDirPathType", ul_app_dir_path_type, 0xe0, 0x20, true, 0x4d540e8af80d496e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DETAILED_INFORMATION.ulAppDirPathChars", ul_app_dir_path_chars, 0x100, 0x20, true, 0x8bbd4df7ad0ce56c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_ACTIVATION_CONTEXT_DETAILED_INFORMATION.lpRootManifestPath", lp_root_manifest_path, 0x140, 0x40, true, 0x7a1261f80db61a4e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_ACTIVATION_CONTEXT_DETAILED_INFORMATION.lpRootConfigurationPath", lp_root_configuration_path, 0x180, 0x40, true, 0x313f726602df8ca9)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_ACTIVATION_CONTEXT_DETAILED_INFORMATION.lpAppDirPath", lp_app_dir_path, 0x1c0, 0x40, true, 0xaf771626d80ffcd9)
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
#define _m10
#define _m11
#endif