#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CSurrogateProcessActivator.m_processGuid", m_process_guid, 0x40, 0x80, true, 0xb20efca46dcccde0)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CSurrogateProcessActivator.m_fServicesConfigured", m_f_services_configured, 0xc0, 0x20, true, 0xda4e885ad139370)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CSurrogateProcessActivator.m_dwObjectCountAtIdleTime", m_dw_object_count_at_idle_time, 0xe0, 0x20, true, 0x4b15539c292dc1d2)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CSurrogateProcessActivator.m_lRC", m_l_rc, 0x1c0, 0x20, true, 0x5c5d1b84a35d0f71)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CSurrogateProcessActivator.m_hInitThread", m_h_init_thread, 0x200, 0x40, true, 0xc97357b719f6d4f0)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CSurrogateProcessActivator.m_hStopPingingSCM", m_h_stop_pinging_scm, 0x240, 0x40, true, 0xf9e7a88948b39ba4)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_com_process_info_t*), "CSurrogateProcessActivator.m_pIComProcessInfo", m_p_i_com_process_info, 0x280, 0x40, true, 0xdf42a7d606cfe36b)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_process_server_info_t*), "CSurrogateProcessActivator.m_pIProcessServerInfo", m_p_i_process_server_info, 0x2c0, 0x40, true, 0x6d2dcea9d7d1a5bb)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_std_identity_t*), "CSurrogateProcessActivator.m_pStdID", m_p_std_id, 0x300, 0x40, true, 0x813a512f88ade1d8)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_surrogate_t*), "CSurrogateProcessActivator.m_pISurrogate", m_p_i_surrogate, 0x340, 0x40, true, 0x5e6e72558b996976)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hinstance_t*), "CSurrogateProcessActivator.m_hCOMSVCS", m_h_comsvcs, 0x380, 0x40, true, 0xb279659cf84eef3d)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_services_sink_t*), "CSurrogateProcessActivator.m_pServices", m_p_services, 0x3c0, 0x40, true, 0x189f36505c2432c9)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CSurrogateProcessActivator.m_hInitCompleted", m_h_init_completed, 0x400, 0x40, true, 0x716d089fd6100804)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CSurrogateProcessActivator.m_hFusionContext", m_h_fusion_context, 0x440, 0x40, true, 0xea561af62b24278b)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CSurrogateProcessActivator.m_ulServicesPing", m_ul_services_ping, 0x480, 0x20, true, 0x771128d894d85365)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CSurrogateProcessActivator.m_ulInitTimeout", m_ul_init_timeout, 0x4a0, 0x20, true, 0x8c57b6467240f807)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CSurrogateProcessActivator.m_lProcessRefCount", m_l_process_ref_count, 0x4c0, 0x20, true, 0x986b97af9a2776c1)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::critical_section_t), "CSurrogateProcessActivator.m_timeoutLock", m_timeout_lock, 0x500, 0x40, true, 0x7013171298b4b5bb)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CSurrogateProcessActivator.m_bLockValid", m_b_lock_valid, 0x640, 0x20, true, 0x3b83c9b586818757)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CSurrogateProcessActivator.m_hTimeoutEvent", m_h_timeout_event, 0x680, 0x40, true, 0x87267a331c08e0ec)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_timeout_state_t), "CSurrogateProcessActivator.m_timeoutState", m_timeout_state, 0x6c0, 0x20, true, 0xc3e3e9ab36c54809)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CSurrogateProcessActivator.m_cActivations", m_c_activations, 0x6e0, 0x20, true, 0x144e5b5dc3e432fb)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CSurrogateProcessActivator.m_cMillisecondsTilDeath", m_c_milliseconds_til_death, 0x700, 0x20, true, 0xee89bafedfe10fb2)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CSurrogateProcessActivator.m_cTimeoutPeriod", m_c_timeout_period, 0x720, 0x20, true, 0x736bc3b0eef3eef0)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CSurrogateProcessActivator.m_bPaused", m_b_paused, 0x740, 0x20, true, 0xd903f033a2896f72)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CSurrogateProcessActivator.m_bInitNotified", m_b_init_notified, 0x760, 0x20, true, 0xd43852f6f0560cef)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CSurrogateProcessActivator.m_hNTServiceThread", m_h_nt_service_thread, 0x780, 0x40, true, 0x3f4fa7342ec412ec)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CSurrogateProcessActivator.m_hServiceStarted", m_h_service_started, 0x7c0, 0x40, true, 0xa3b13bbe7ad928ac)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::service_status_handle_t*), "CSurrogateProcessActivator.m_hNTServiceHandle", m_h_nt_service_handle, 0x800, 0x40, true, 0xe15fc5b88718b2e0)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::service_status_t), "CSurrogateProcessActivator.m_NTServiceStatus", m_nt_service_status, 0x840, 0xe0, true, 0xa2f13fd1ed40cbcb)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::critical_section_t), "CSurrogateProcessActivator.m_serviceStatusLock", m_service_status_lock, 0x940, 0x40, true, 0x365c985718e7a3bc)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CSurrogateProcessActivator.m_fServiceStatusLockValid", m_f_service_status_lock_valid, 0xa80, 0x20, true, 0x18905a1100361c3e)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "CSurrogateProcessActivator.m_NTServiceName", m_nt_service_name, 0xaa0, 0x0, true, 0xe81318348d7c592)
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
#endif