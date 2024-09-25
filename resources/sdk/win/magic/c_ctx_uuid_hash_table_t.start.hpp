#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ole_static_mutex_sem_t*), "CCtxUUIDHashTable._pExLock", p_ex_lock, 0x40, 0x40, true, 0x7b4ca678da31eb1a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::crw_lock_t*), "CCtxUUIDHashTable._pRWLock", p_rw_lock, 0x80, 0x40, true, 0xf5147bcf7412cf0a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t*), "CCtxUUIDHashTable._buckets", buckets, 0xc0, 0x40, true, 0x6a305cc5ce08871f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCtxUUIDHashTable._cCurEntries", c_cur_entries, 0x100, 0x20, true, 0x7367effad416dc08)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CCtxUUIDHashTable._cMaxEntries", c_max_entries, 0x120, 0x20, true, 0x6e8d2526af6bfecc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif