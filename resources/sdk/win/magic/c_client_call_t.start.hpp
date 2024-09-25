#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "CClientCall.m_hThread", m_h_thread, 0x1540, 0x40, true, 0xfbfa88fe30978651)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "CClientCall.m_dwThreadId", m_dw_thread_id, 0x1580, 0x20, true, 0x9d7c5589d0daad14)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "CClientCall.m_callCompleteTickCount", m_call_complete_tick_count, 0x15c0, 0x40, true, 0xbb028cd9be7f49d9)
#else
#define _m00
#define _m01
#define _m02
#endif