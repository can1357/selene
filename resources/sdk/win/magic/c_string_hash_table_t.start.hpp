#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ole_static_mutex_sem_t*), "CStringHashTable._pExLock", p_ex_lock, 0x40, 0x40, true, 0x94c30ecf678f14a0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::crw_lock_t*), "CStringHashTable._pRWLock", p_rw_lock, 0x80, 0x40, true, 0x84cc6c25a55b2607)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t*), "CStringHashTable._buckets", buckets, 0xc0, 0x40, true, 0x2a9aaf00a4eead33)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStringHashTable._cCurEntries", c_cur_entries, 0x100, 0x20, true, 0x274fa46dbe13408a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CStringHashTable._cMaxEntries", c_max_entries, 0x120, 0x20, true, 0x7a68ca270e0ecb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif