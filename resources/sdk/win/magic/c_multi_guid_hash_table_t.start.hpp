#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ole_static_mutex_sem_t*), "CMultiGUIDHashTable._pExLock", p_ex_lock, 0x40, 0x40, true, 0x7835015ff0faed7b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::crw_lock_t*), "CMultiGUIDHashTable._pRWLock", p_rw_lock, 0x80, 0x40, true, 0x3ecc3302dec2e1b5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t*), "CMultiGUIDHashTable._buckets", buckets, 0xc0, 0x40, true, 0x7e379efb073d125)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMultiGUIDHashTable._cCurEntries", c_cur_entries, 0x100, 0x20, true, 0x287fe70f6b09343d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMultiGUIDHashTable._cMaxEntries", c_max_entries, 0x120, 0x20, true, 0x1f866dd1c927feb9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif