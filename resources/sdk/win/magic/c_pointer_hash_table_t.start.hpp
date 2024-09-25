#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ole_static_mutex_sem_t*), "CPointerHashTable._pExLock", p_ex_lock, 0x40, 0x40, true, 0x5d0efa066b4bd71b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::crw_lock_t*), "CPointerHashTable._pRWLock", p_rw_lock, 0x80, 0x40, true, 0x9cbf6b049547de05)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t*), "CPointerHashTable._buckets", buckets, 0xc0, 0x40, true, 0xa7d133646092b1f5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CPointerHashTable._cCurEntries", c_cur_entries, 0x100, 0x20, true, 0x5f076a7289b7fbdb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CPointerHashTable._cMaxEntries", c_max_entries, 0x120, 0x20, true, 0x4553b175c3d1fd0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif