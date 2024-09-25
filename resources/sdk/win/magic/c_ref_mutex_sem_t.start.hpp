#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CRefMutexSem.m_lRefs", m_l_refs, 0x0, 0x20, true, 0x5c410a2c65e2297f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_mutex_sem2_t), "CRefMutexSem.m_mxs", m_mxs, 0x40, 0x80, true, 0x945b487ebc50144)
#else
#define _m00
#define _m01
#endif