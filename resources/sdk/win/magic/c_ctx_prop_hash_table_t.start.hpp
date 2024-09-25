#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ole_static_mutex_sem_t*), "CCtxPropHashTable._pExLock", p_ex_lock, 0x40, 0x40, true, 0xd48a7aab378a906)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::crw_lock_t*), "CCtxPropHashTable._pRWLock", p_rw_lock, 0x80, 0x40, true, 0x97f5fc5bd5736022)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t*), "CCtxPropHashTable._buckets", buckets, 0xc0, 0x40, true, 0x32f5ae7ba77348ba)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCtxPropHashTable._cCurEntries", c_cur_entries, 0x100, 0x20, true, 0xb6efc42838aea44)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCtxPropHashTable._cMaxEntries", c_max_entries, 0x120, 0x20, true, 0x996d5695b89a39b3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif