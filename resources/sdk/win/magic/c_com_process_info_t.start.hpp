#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const enum win::registration_source_t), "CComProcessInfo.m_source", m_source, 0x140, 0x20, true, 0x5f25567888e8434d)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CComProcessInfo.m_cRef", m_c_ref, 0x160, 0x20, true, 0x6073934da3604fd0)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CComProcessInfo.m_guidProcessId", m_guid_process_id, 0x180, 0x80, true, 0x3808cd5b18b7ee75)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComProcessInfo.m_pwszProcessName", m_pwsz_process_name, 0x200, 0x40, true, 0xbdb75defd0a0cf4d)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::process_type_t), "CComProcessInfo.m_eProcessType", m_e_process_type, 0x240, 0x20, true, 0xbee8dd87bcffbb06)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComProcessInfo.m_pwszServiceName", m_pwsz_service_name, 0x280, 0x40, true, 0x86c3c73ffd934456)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComProcessInfo.m_pwszServiceParameters", m_pwsz_service_parameters, 0x2c0, 0x40, true, 0xb974831e98685b48)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CComProcessInfo.m_fActivateAtStorage", m_f_activate_at_storage, 0x300, 0x20, true, 0xbb65052a5259d66)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComProcessInfo.m_pwszRunAsUser", m_pwsz_run_as_user, 0x340, 0x40, true, 0x147d3e1cbc334534)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::run_as_type_t), "CComProcessInfo.m_eRunAsType", m_e_run_as_type, 0x380, 0x20, true, 0xbf9b432a61b3cd69)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComProcessInfo.m_pwszSurrogatePath", m_pwsz_surrogate_path, 0x3c0, 0x40, true, 0xdf95920e61b667c9)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sec::descriptor_t*), "CComProcessInfo.m_pLaunchPermission", m_p_launch_permission, 0x400, 0x40, true, 0xa06ce0e37a2fc88a)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComProcessInfo.m_cbLaunchPermission", m_cb_launch_permission, 0x440, 0x20, true, 0x6113ae7c4341386c)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComProcessInfo.m_dwAuthenticationLevel", m_dw_authentication_level, 0x460, 0x20, true, 0x48d527fbb4b01b7c)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComProcessInfo.m_dwROTFlags", m_dw_rot_flags, 0x480, 0x20, true, 0x8447e8258c4f7f02)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComProcessInfo.m_dwMGOTFlags", m_dw_mgot_flags, 0x4a0, 0x20, true, 0xb80c6d7cddf497e4)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComProcessInfo.m_dwAppIDFlags", m_dw_app_id_flags, 0x4c0, 0x20, true, 0x43cb5d3e97ebae1b)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComProcessInfo.m_pwszRemoteServerName", m_pwsz_remote_server_name, 0x5c0, 0x40, true, 0x4c6718ce6f00b133)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComProcessInfo.m_dwFlags", m_dw_flags, 0x600, 0x20, true, 0x5f3f4394731918a1)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComProcessInfo.m_dwSaferTrustLevel", m_dw_safer_trust_level, 0x620, 0x20, true, 0x505dcecc387cfcc8)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::key_refresh_info_t), "CComProcessInfo.m_keyRefreshInfo", m_key_refresh_info, 0x640, 0x80, true, 0xbe18a0132963aed5)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CComProcessInfo.m_fIsMachineHive", m_f_is_machine_hive, 0x6c0, 0x20, true, 0xdad398f31df53043)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComProcessInfo.m_dwPreferredServerBitness", m_dw_preferred_server_bitness, 0x6e0, 0x20, true, 0x98ecb8cc93ba6247)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComProcessInfo.m_pwszSurrogateCommandDebug", m_pwsz_surrogate_command_debug, 0x700, 0x40, true, 0x6bbd8fe6990494de)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComProcessInfo.m_pwszServerExecutable", m_pwsz_server_executable, 0x740, 0x40, true, 0x9d1cb33839932763)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CComProcessInfo.m_bLoadUserSettings", m_b_load_user_settings, 0x780, 0x20, true, 0x51f2ccfe8376276)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CComProcessInfo.m_fDebugSurrogate", m_f_debug_surrogate, 0x7a0, 0x20, true, 0x28ee5050651e1485)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComProcessInfo.m_pwszApplicationId", m_pwsz_application_id, 0x7c0, 0x40, true, 0xa754d9d6c3ff13e4)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CComProcessInfo.m_changeDetectionSequence", m_change_detection_sequence, 0x880, 0x40, true, 0x68756826ac33a39f)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::blob_t), "CComProcessInfo.m_processMitigationPolicy", m_process_mitigation_policy, 0x500, 0x80, true, 0x31d929a6cc609ab9)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::server_protection_level_t), "CComProcessInfo.m_protectionLevel", m_protection_level, 0x580, 0x20, true, 0x8d0b095dcc7a9fd6)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComProcessInfo.m_pwszPackageName", m_pwsz_package_name, 0x800, 0x40, true, 0xdac00b3f77170f76)
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
#endif