#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct obp::silodriverstate_t), "_ESERVERSILO_GLOBALS.ObSiloState", ob_silo_state, 0x0, 0x0, true, 0x3fb201bb291d3bb2)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sep::silostate_t), "_ESERVERSILO_GLOBALS.SeSiloState", se_silo_state, 0x1700, 0x80, true, 0x9893e00e8b7d3057)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sep::rm_lsa_connection_state_t), "_ESERVERSILO_GLOBALS.SeRmSiloState", se_rm_silo_state, 0x1880, 0x80, true, 0xfe75a710491ffe0f)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::silodriverstate_t*), "_ESERVERSILO_GLOBALS.EtwSiloState", etw_silo_state, 0x1b00, 0x40, true, 0xc7f66ee280ace926)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_ESERVERSILO_GLOBALS.MiSessionLeaderProcess", mi_session_leader_process, 0x1b40, 0x40, true, 0xd2a508e2d4fc1a50)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_ESERVERSILO_GLOBALS.ExpDefaultErrorPortProcess", exp_default_error_port_process, 0x1b80, 0x40, true, 0x8eeddeedb2368062)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ESERVERSILO_GLOBALS.ExpDefaultErrorPort", exp_default_error_port, 0x1bc0, 0x40, true, 0x609301489021f84f)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ESERVERSILO_GLOBALS.HardErrorState", hard_error_state, 0x1c00, 0x20, true, 0x276e405ee27034a4)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wnf::silodriverstate_t), "_ESERVERSILO_GLOBALS.WnfSiloState", wnf_silo_state, 0x1c80, 0xc0, true, 0xa5bb1692bfbf2d62)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ESERVERSILO_GLOBALS.ApiSetSection", api_set_section, 0x2040, 0x40, true, 0x1c027eea960620c9)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ESERVERSILO_GLOBALS.ApiSetSchema", api_set_schema, 0x2080, 0x40, true, 0x36745b7b92d1b284)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ESERVERSILO_GLOBALS.OneCoreForwardersEnabled", one_core_forwarders_enabled, 0x20c0, 0x8, true, 0x2dd12f3c38d356e8)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_ESERVERSILO_GLOBALS.SiloRootDirectoryName", silo_root_directory_name, 0x2180, 0x80, true, 0xa827de31661b52e7)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct psp::storage_t*), "_ESERVERSILO_GLOBALS.Storage", storage, 0x2200, 0x40, true, 0x5cf34c270bcf70af)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::serversilo_state_t), "_ESERVERSILO_GLOBALS.State", state, 0x2240, 0x20, true, 0x1b2f3b1171c475fb)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ESERVERSILO_GLOBALS.ExitStatus", exit_status, 0x2260, 0x20, true, 0x3c9b41687bbe3f83)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_ESERVERSILO_GLOBALS.DeleteEvent", delete_event, 0x2280, 0x40, true, 0x125cf86c19a16b43)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::silo_user_shared_data_t, struct nt::silo_user_shared_data_t*>), "_ESERVERSILO_GLOBALS.UserSharedData", user_shared_data, 0x22c0, 0x40, true, 0x6d719f3dafabbec5)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_ESERVERSILO_GLOBALS.TerminateWorkItem", terminate_work_item, 0x2340, 0x0, true, 0xa23bb38052897e87)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct expi::license_state_t*), "_ESERVERSILO_GLOBALS.ExpLicenseState", exp_license_state, 0x1c40, 0x40, true, 0x2aa6976ae4da2b1c)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgk::silostate_t), "_ESERVERSILO_GLOBALS.DbgkSiloState", dbgk_silo_state, 0x1e40, 0x0, true, 0x744757f5d8eb0a2f)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_ESERVERSILO_GLOBALS.PsProtectedCurrentDirectory", ps_protected_current_directory, 0x1f40, 0x80, true, 0xf48eeae2e16482e8)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_ESERVERSILO_GLOBALS.PsProtectedEnvironment", ps_protected_environment, 0x1fc0, 0x80, true, 0xe5c8b81bfb6a5b9d)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_ESERVERSILO_GLOBALS.NtSystemRoot", nt_system_root, 0x2100, 0x80, true, 0xe725e847cce84b6b)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ESERVERSILO_GLOBALS.UserSharedSection", user_shared_section, 0x2300, 0x40, true, 0xd44a168e14bb1ef3)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ESERVERSILO_GLOBALS.IsDownlevelContainer", is_downlevel_container, 0x2440, 0x8, true, 0xb0811160dfe18cd5)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nls::state_t*), "_ESERVERSILO_GLOBALS.NlsState", nls_state, 0x0, 0x0, false, 0x8401f0cbeee71d92)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::nls_state_t), "_ESERVERSILO_GLOBALS.RtlNlsState", rtl_nls_state, 0x0, 0x0, false, 0x237faeef8921e35d)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ESERVERSILO_GLOBALS.ImgFileExecOptions", img_file_exec_options, 0x0, 0x0, false, 0x45038e6099c76281)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::timezone_state_t*), "_ESERVERSILO_GLOBALS.ExTimeZoneState", ex_time_zone_state, 0x0, 0x0, false, 0x43649d91f5cff08b)
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
#endif