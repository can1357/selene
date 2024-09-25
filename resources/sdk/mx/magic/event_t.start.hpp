#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "MxEvent.m_Event", m_event, 0x0, 0xc0, true, 0x13713e35e833151)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "MxEvent.m_DbgFlagIsInitialized", m_dbg_flag_is_initialized, 0xc0, 0x8, true, 0xb1a6e9fae1e306e2)
#else
#define _m00
#define _m01
#endif