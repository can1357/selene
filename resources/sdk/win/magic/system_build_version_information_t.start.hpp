#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_BUILD_VERSION_INFORMATION.LayerNumber", layer_number, 0x0, 0x0, false, 0x354342e898c7c5ce)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_BUILD_VERSION_INFORMATION.LayerCount", layer_count, 0x0, 0x0, false, 0x11b6ee403881e7c9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_BUILD_VERSION_INFORMATION.OsMajorVersion", os_major_version, 0x0, 0x0, false, 0xd55c8721c0767e94)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_BUILD_VERSION_INFORMATION.OsMinorVersion", os_minor_version, 0x0, 0x0, false, 0xc7214b728b82749e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_BUILD_VERSION_INFORMATION.NtBuildNumber", nt_build_number, 0x0, 0x0, false, 0x6f841da06bbdbfa7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_BUILD_VERSION_INFORMATION.NtBuildQfe", nt_build_qfe, 0x0, 0x0, false, 0xd704c3c52e9471b9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 128>), "_SYSTEM_BUILD_VERSION_INFORMATION.LayerName", layer_name, 0x0, 0x0, false, 0x552e78bb46e5e87c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 128>), "_SYSTEM_BUILD_VERSION_INFORMATION.NtBuildBranch", nt_build_branch, 0x0, 0x0, false, 0x3df3eb91a92e958f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 128>), "_SYSTEM_BUILD_VERSION_INFORMATION.NtBuildLab", nt_build_lab, 0x0, 0x0, false, 0xf6173a8c024cfdf3)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 128>), "_SYSTEM_BUILD_VERSION_INFORMATION.NtBuildLabEx", nt_build_lab_ex, 0x0, 0x0, false, 0x8c7dca56e1b800d8)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 26>), "_SYSTEM_BUILD_VERSION_INFORMATION.NtBuildStamp", nt_build_stamp, 0x0, 0x0, false, 0x3fb44c61a9ac66)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_SYSTEM_BUILD_VERSION_INFORMATION.NtBuildArch", nt_build_arch, 0x0, 0x0, false, 0x5f025e4998285968)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_BUILD_VERSION_INFORMATION.Flags.Value32", value32, 0x0, 0x0, false, 0x5a7c14d561c98f3b)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_BUILD_VERSION_INFORMATION.Flags.IsTopLevel", is_top_level, 0x0, 0x0, false, 0xfedaf771a515fea0, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_BUILD_VERSION_INFORMATION.Flags.IsChecked", is_checked, 0x0, 0x0, false, 0x68cd8436e253dc0d, 1, uint32_t)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_SYSTEM_BUILD_VERSION_INFORMATION.Flags", flags, 0x0, 0x0, false, 0xe977589a7a8e56f8)
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
#define _m12
#define _m13
#define _m14
#define _m15
#endif