#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ole_static_mutex_sem_t*), "CPIDHashTable._pExLock", p_ex_lock, 0x40, 0x40, true, 0xd01a68174be97062)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::crw_lock_t*), "CPIDHashTable._pRWLock", p_rw_lock, 0x80, 0x40, true, 0xec4a84b5d640d90a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t*), "CPIDHashTable._buckets", buckets, 0xc0, 0x40, true, 0xbe769d2a013a901c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CPIDHashTable._cCurEntries", c_cur_entries, 0x100, 0x20, true, 0x6eedc0ea2b36cdd1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CPIDHashTable._cMaxEntries", c_max_entries, 0x120, 0x20, true, 0x5f58dd1af6950ded)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif