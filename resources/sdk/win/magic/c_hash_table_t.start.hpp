#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ole_static_mutex_sem_t*), "CHashTable._pExLock", p_ex_lock, 0x40, 0x40, true, 0xc9f542fe8e4e1d72)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::crw_lock_t*), "CHashTable._pRWLock", p_rw_lock, 0x80, 0x40, true, 0x7aea6a89f4486278)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t*), "CHashTable._buckets", buckets, 0xc0, 0x40, true, 0xfc263820771106d0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CHashTable._cCurEntries", c_cur_entries, 0x100, 0x20, true, 0x60ab3972fed3a28d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CHashTable._cMaxEntries", c_max_entries, 0x120, 0x20, true, 0xa30e3b7bc9688ffe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif