#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_APPCOMPAT_EXE_DATA.cbSize", cb_size, 0x1040, 0x20, true, 0xb0b603c9bb855c4)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_APPCOMPAT_EXE_DATA.dwMagic", dw_magic, 0x1060, 0x20, true, 0xb7adb08ae7de463)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_APPCOMPAT_EXE_DATA.uExeType", u_exe_type, 0x10a0, 0x10, true, 0xc9d66c562c0f281)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::sdbqueryresult_t), "_APPCOMPAT_EXE_DATA.SdbQueryResult", sdb_query_result, 0x10c0, 0x40, true, 0x5f90fdf5360f607b)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 128>), "_APPCOMPAT_EXE_DATA.DbgLogChannels", dbg_log_channels, 0x1f00, 0x0, true, 0x627f614dfed5bba0)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<uint64_t, 128>, struct tag::switch_context_t>), "_APPCOMPAT_EXE_DATA.SwitchContext", switch_context, 0x3f00, 0xc0, true, 0x9c0b6918f95e3e09)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_APPCOMPAT_EXE_DATA.dwParentProcessId", dw_parent_process_id, 0x59c0, 0x20, true, 0xd76f1f944298b57b)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_APPCOMPAT_EXE_DATA.szParentImageName", sz_parent_image_name, 0x59e0, 0x40, true, 0x1e43c3e0ea9c433f)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_APPCOMPAT_EXE_DATA.szParentCompatLayers", sz_parent_compat_layers, 0x6a20, 0x0, true, 0xa06dc0cb85efc0b4)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_APPCOMPAT_EXE_DATA.szActiveCompatLayers", sz_active_compat_layers, 0x7a20, 0x0, true, 0x2185b6fae81158dd)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_APPCOMPAT_EXE_DATA.uImageFileSize", u_image_file_size, 0x8a20, 0x20, true, 0xcf723ca64671e3b5)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_APPCOMPAT_EXE_DATA.uImageCheckSum", u_image_check_sum, 0x8a40, 0x20, true, 0x99aa0df2da9b87ca)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_APPCOMPAT_EXE_DATA.bLatestOs", b_latest_os, 0x8a60, 0x20, true, 0x7bc1d3efbe4feeb2)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_APPCOMPAT_EXE_DATA.bPackageId", b_package_id, 0x8a80, 0x20, true, 0xd296386c780fa3f7)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_APPCOMPAT_EXE_DATA.bSwitchBackManifest", b_switch_back_manifest, 0x8aa0, 0x20, true, 0x26b4df80b7f7ff81)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_APPCOMPAT_EXE_DATA.bUacManifest", b_uac_manifest, 0x8ac0, 0x20, true, 0xd00439809bf2fbe4)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_APPCOMPAT_EXE_DATA.bLegacyInstaller", b_legacy_installer, 0x8ae0, 0x20, true, 0x1279724cc8a0fffe)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_APPCOMPAT_EXE_DATA.dwRunLevel", dw_run_level, 0x8b00, 0x20, true, 0xa713cec6976cae83)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_APPCOMPAT_EXE_DATA.qwWinRTFlags", qw_win_rt_flags, 0x8b40, 0x40, true, 0x767cd93517bb8afa)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_APPCOMPAT_EXE_DATA.pHookCOM", p_hook_com, 0x8b80, 0x40, true, 0x78e04eb7ce0d5feb)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_APPCOMPAT_EXE_DATA.pComponentOnDemandEvent", p_component_on_demand_event, 0x8bc0, 0x40, true, 0xca83076ac266f9c2)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_APPCOMPAT_EXE_DATA.pQuirks", p_quirks, 0x8c00, 0x40, true, 0x1b54153cf72002bc)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_APPCOMPAT_EXE_DATA.ulQuirksSize", ul_quirks_size, 0x8c40, 0x20, true, 0x2c0dd9cf322616b3)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_APPCOMPAT_EXE_DATA.bLoadShimEngine", b_load_shim_engine, 0x1080, 0x20, true, 0xca3a5a83e27a952f)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sdb::cstruct_cobalt_procflag_t), "_APPCOMPAT_EXE_DATA.CobaltProcFlags", cobalt_proc_flags, 0x8c80, 0x40, true, 0x34d0229ff2550d0d)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_APPCOMPAT_EXE_DATA.FullMatchDbSizeCb", full_match_db_size_cb, 0x8dc0, 0x20, true, 0x74cf5986118de0fb)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_APPCOMPAT_EXE_DATA.FullMatchDbOffset", full_match_db_offset, 0x8de0, 0x20, true, 0x7b057dfdf656f55f)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_APPCOMPAT_EXE_DATA.szShimEngine", sz_shim_engine, 0x0, 0x0, false, 0x16b9717fdebb7636)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_APPCOMPAT_EXE_DATA.uParentExeType", u_parent_exe_type, 0x0, 0x0, false, 0x6665ba3ca5fc9068)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_APPCOMPAT_EXE_DATA.ulSubSystemType", ul_sub_system_type, 0x0, 0x0, false, 0x8f382857e51d13de)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_APPCOMPAT_EXE_DATA.uSubSystemMinorVersion", u_sub_system_minor_version, 0x0, 0x0, false, 0xaf6772ca0fca6576)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_APPCOMPAT_EXE_DATA.uSubSystemMajorVersion", u_sub_system_major_version, 0x0, 0x0, false, 0x76b29679b203b7e8)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_APPCOMPAT_EXE_DATA.uMinorOperatingSystemVersion", u_minor_operating_system_version, 0x0, 0x0, false, 0x656f2b2894b4c908)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_APPCOMPAT_EXE_DATA.uMajorOperatingSystemVersion", u_major_operating_system_version, 0x0, 0x0, false, 0x9e1d950edec9b30f)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_APPCOMPAT_EXE_DATA.dwReason", dw_reason, 0x0, 0x0, false, 0xc75e945271b2710d)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_APPCOMPAT_EXE_DATA.bSystem", b_system, 0x0, 0x0, false, 0x306340007a7bc6cb)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_APPCOMPAT_EXE_DATA.dwElevationReason", dw_elevation_reason, 0x0, 0x0, false, 0x7450b862b8cade6e)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_APPCOMPAT_EXE_DATA.dwElevationFlags", dw_elevation_flags, 0x0, 0x0, false, 0x93e5c860465100c0)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_APPCOMPAT_EXE_DATA.dwInstallerFlags", dw_installer_flags, 0x0, 0x0, false, 0xe2faee0d50cbdc11)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_APPCOMPAT_EXE_DATA.ulSamplingFlag", ul_sampling_flag, 0x0, 0x0, false, 0xfe67d1da2ed96366)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_APPCOMPAT_EXE_DATA.pAmiStoreHandle", p_ami_store_handle, 0x0, 0x0, false, 0x6455e02ff44b35e9)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#endif