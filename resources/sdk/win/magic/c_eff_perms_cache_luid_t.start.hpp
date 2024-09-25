#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::critical_section_t), "CEffPermsCacheLUID.m_CacheLock", m_cache_lock, 0x8c0, 0x40, true, 0xe3a0a7fa45867f8c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "CEffPermsCacheLUID.m_bLockValid", m_b_lock_valid, 0xa00, 0x20, true, 0xa8c81556d866a6e4)
#else
#define _m00
#define _m01
#endif