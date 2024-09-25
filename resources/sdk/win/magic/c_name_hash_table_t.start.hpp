#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ole_static_mutex_sem_t*), "CNameHashTable._pExLock", p_ex_lock, 0x40, 0x40, true, 0xa305b17bd1db76fe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::crw_lock_t*), "CNameHashTable._pRWLock", p_rw_lock, 0x80, 0x40, true, 0x84174c08b2eed565)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t*), "CNameHashTable._buckets", buckets, 0xc0, 0x40, true, 0x550ad575780dda0d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CNameHashTable._cCurEntries", c_cur_entries, 0x100, 0x20, true, 0xfb2a83a722d8a1a0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CNameHashTable._cMaxEntries", c_max_entries, 0x120, 0x20, true, 0xb322a9853261402a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif