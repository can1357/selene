#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ole_static_mutex_sem_t*), "CUUIDHashTable._pExLock", p_ex_lock, 0x40, 0x40, true, 0x75d47359a9700418)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::crw_lock_t*), "CUUIDHashTable._pRWLock", p_rw_lock, 0x80, 0x40, true, 0x23bf29a37578f2a2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t*), "CUUIDHashTable._buckets", buckets, 0xc0, 0x40, true, 0x8074076e0377db93)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CUUIDHashTable._cCurEntries", c_cur_entries, 0x100, 0x20, true, 0xa4afa897b342a614)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CUUIDHashTable._cMaxEntries", c_max_entries, 0x120, 0x20, true, 0x490351fbc447ccf3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif