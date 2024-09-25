#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "MxLock.m_DbgFlagIsInitialized", m_dbg_flag_is_initialized, 0x0, 0x8, true, 0xd23ca3cc8d1b6458)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "MxLock.m_Lock", m_lock, 0x40, 0x40, true, 0xb26203e45454a5e7)
#else
#define _m00
#define _m01
#endif