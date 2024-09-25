#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::srwlock_t), "CCache.m_srwLock", m_srw_lock, 0x0, 0x40, true, 0x8706aed8ec3cf37)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::element_t**), "CCache.m_paBuckets", m_pa_buckets, 0x40, 0x40, true, 0x5f396740a0cf0931)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCache.m_cBuckets", m_c_buckets, 0x80, 0x20, true, 0xfddcb94d452472ca)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCache.m_cElements", m_c_elements, 0xa0, 0x20, true, 0x82b16a230bdff4e6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "CCache.m_i64LocalCacheCount", m_i64_local_cache_count, 0xc0, 0x40, true, 0xb26c9209e629f378)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif