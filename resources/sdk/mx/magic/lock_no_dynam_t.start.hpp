#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "MxLockNoDynam.m_DbgFlagIsInitialized", m_dbg_flag_is_initialized, 0x0, 0x8, true, 0x9199250d565bb318)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "MxLockNoDynam.m_Lock", m_lock, 0x40, 0x40, true, 0x84aaa8ea3a4de669)
#else
#define _m00
#define _m01
#endif