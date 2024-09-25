#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "MxPagedLock.m_DbgFlagIsInitialized", m_dbg_flag_is_initialized, 0x0, 0x8, true, 0x4c72f611dcfc23ec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t), "MxPagedLock.m_Lock", m_lock, 0x40, 0xc0, true, 0xfc1b2251865e5d83)
#else
#define _m00
#define _m01
#endif