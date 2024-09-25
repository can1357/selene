#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "MxPagedLockNoDynam.m_DbgFlagIsInitialized", m_dbg_flag_is_initialized, 0x0, 0x8, true, 0x6d2c913869efcae3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t), "MxPagedLockNoDynam.m_Lock", m_lock, 0x40, 0xc0, true, 0x785a3fc4784f274e)
#else
#define _m00
#define _m01
#endif