#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile bool), "WatchdogTimeoutReport.m_bIsActive", m_b_is_active, 0x0, 0x0, false, 0x97711e333fda8559)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "WatchdogTimeoutReport.m_TimeoutTimer", m_timeout_timer, 0x0, 0x0, false, 0x370744f3af21bea9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "WatchdogTimeoutReport.m_TimeoutDpc", m_timeout_dpc, 0x0, 0x0, false, 0xd17c68c51b4e30d2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "WatchdogTimeoutReport.m_LiveDumpWorkItem", m_live_dump_work_item, 0x0, 0x0, false, 0xa166184f176cb0e4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "WatchdogTimeoutReport.m_LiveDumpWorkItemEvent", m_live_dump_work_item_event, 0x0, 0x0, false, 0xd5459be5075db972)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WatchdogTimeoutReport.m_Code", m_code, 0x0, 0x0, false, 0x67882babeef4f9d9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WatchdogTimeoutReport.m_pArg1", m_p_arg1, 0x0, 0x0, false, 0xea34327901189b5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WatchdogTimeoutReport.m_pArg2", m_p_arg2, 0x0, 0x0, false, 0x62c58dd6248efce6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WatchdogTimeoutReport.m_pArg3", m_p_arg3, 0x0, 0x0, false, 0x36fb71bb2ecd0b16)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WatchdogTimeoutReport.m_pArg4", m_p_arg4, 0x0, 0x0, false, 0x2689679a6e78ead6)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union kuser::wd_livereport_flags_t), "WatchdogTimeoutReport.m_Flags", m_flags, 0x0, 0x0, false, 0x2b93623c50ed9b59)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(class kuser::watchdog_timeout_report_t*)>*), "WatchdogTimeoutReport.m_Callback", m_callback, 0x0, 0x0, false, 0xe2f7f3ce33a0bec8)
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