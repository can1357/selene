#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const enum win::registration_source_t), "CComClassInfo.m_source", m_source, 0x180, 0x20, true, 0x19d2dc0965b7ead3)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CComClassInfo.m_cRef", m_c_ref, 0x1a0, 0x20, true, 0x27c6435f58de9c9b)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CComClassInfo.m_cLocks", m_c_locks, 0x1c0, 0x20, true, 0x50d40e453cdc32c2)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CComClassInfo.m_clsid", m_clsid, 0x1e0, 0x80, true, 0xe90c03a24165f811)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CComClassInfo.m_guidProcessId", m_guid_process_id, 0x260, 0x80, true, 0x88746e01ca1cf01b)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum tag::local_server_type_t), "CComClassInfo.m_serverType", m_server_type, 0x2e0, 0x20, true, 0x9788888738d5ba87)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t*), "CComClassInfo.m_pProcessInfo", m_p_process_info, 0x300, 0x40, true, 0x64430521e95654a)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 45>), "CComClassInfo.m_wszClsidString", m_wsz_clsid_string, 0x340, 0xd0, true, 0x9d51988682c53541)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComClassInfo.m_pwszProgid", m_pwsz_progid, 0x640, 0x40, true, 0xb0b1eaba8bdc8f6d)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComClassInfo.m_pwszClassName", m_pwsz_class_name, 0x680, 0x40, true, 0xdfd2ef0456c350d8)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CComClassInfo.m_clsctx", m_clsctx, 0x6c0, 0x20, true, 0xa2684da78f77e2dc)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CComClassInfo.m_threadingmodel", m_threadingmodel, 0x6e0, 0x20, true, 0x926cf9d789ce1847)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComClassInfo.m_regOwningCatalog", m_reg_owning_catalog, 0x700, 0x20, true, 0xdf6d640a7866c018)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComClassInfo.m_regView", m_reg_view, 0x720, 0x20, true, 0xd1a080f3b23d3e1c)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComClassInfo.m_pwszInprocServer32", m_pwsz_inproc_server32, 0x780, 0x40, true, 0xee864ae89e6dbfbb)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComClassInfo.m_pwszInprocHandler32", m_pwsz_inproc_handler32, 0x7c0, 0x40, true, 0x3e2f02f93ec6ad00)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComClassInfo.m_pwszLocalServer", m_pwsz_local_server, 0x800, 0x40, true, 0x2c900e771510c689)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComClassInfo.m_pwszInprocServer16", m_pwsz_inproc_server16, 0x840, 0x40, true, 0xd7113152b097cb16)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComClassInfo.m_pwszInprocHandler16", m_pwsz_inproc_handler16, 0x880, 0x40, true, 0x20c9a9118f48de5a)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComClassInfo.m_pwszSurrogateCommand", m_pwsz_surrogate_command, 0x8c0, 0x40, true, 0xc8203dab51c39adb)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComClassInfo.m_pwszServerExecutable", m_pwsz_server_executable, 0x900, 0x40, true, 0xa8f91fa5ad419dbc)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CComClassInfo.m_bLUAEnabled", m_b_lua_enabled, 0x960, 0x20, true, 0x28d009613fb7e568)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CComClassInfo.m_bProgIDRead", m_b_prog_id_read, 0x980, 0x20, true, 0x970e2f7cce30fc2e)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComClassInfo.m_pwszDisplayName", m_pwsz_display_name, 0x9c0, 0x40, true, 0x22468a85b05dd5f)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComClassInfo.m_pwszBinaryName", m_pwsz_binary_name, 0xa00, 0x40, true, 0x200e1c013bb5ac8f)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComClassInfo.m_pwszIconReference", m_pwsz_icon_reference, 0xa40, 0x40, true, 0xe5900299f5c025ab)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::key_refresh_info_t), "CComClassInfo.m_keyRefreshInfo", m_key_refresh_info, 0xb00, 0x80, true, 0xb647bb9137d1c952)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "CComClassInfo.m_supportsGetProgId", m_supports_get_prog_id, 0xb80, 0x8, true, 0x23c8fe0ccd549972)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CComClassInfo.m_changeDetectionSequence", m_change_detection_sequence, 0xc00, 0x40, true, 0xd0c95d513a808f76)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "CComClassInfo.m_regWowArchitecture", m_reg_wow_architecture, 0x740, 0x10, true, 0x6874f25af7eefa14)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComClassInfo.m_dwOutofprocServerBinaryArchitecture", m_dw_outofproc_server_binary_architecture, 0x940, 0x20, true, 0xbdf65d7a1e79138f)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComClassInfo.m_dwActivateOnHostFlags", m_dw_activate_on_host_flags, 0xac0, 0x20, true, 0x82940ea93681901)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "CComClassInfo.m_pwszPackageName", m_pwsz_package_name, 0xa80, 0x40, true, 0x64d3150654a29540)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "CComClassInfo.m_usRegViewMachineType", m_us_reg_view_machine_type, 0x0, 0x0, false, 0x7b1c630c49863458)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComClassInfo.m_dwPreferredServerBitness", m_dw_preferred_server_bitness, 0x0, 0x0, false, 0x10503680aa538277)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CComClassInfo.m_dwLocalServer32BinaryBitness", m_dw_local_server32_binary_bitness, 0x0, 0x0, false, 0x76ac846c713f6df7)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "CComClassInfo.m_hasVerifiedMachineScope", m_has_verified_machine_scope, 0x0, 0x0, false, 0x7eaebb1d50c6a1b)
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
#endif