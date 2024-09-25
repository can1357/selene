#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ole_static_mutex_sem_t*), "CPSHashTable._pExLock", p_ex_lock, 0x40, 0x40, true, 0x1075a724fd931dfa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::crw_lock_t*), "CPSHashTable._pRWLock", p_rw_lock, 0x80, 0x40, true, 0x8875c82167051d16)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t*), "CPSHashTable._buckets", buckets, 0xc0, 0x40, true, 0x2aadcd562365c2e2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CPSHashTable._cCurEntries", c_cur_entries, 0x100, 0x20, true, 0xc4163bd79299f296)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CPSHashTable._cMaxEntries", c_max_entries, 0x120, 0x20, true, 0xe38a83af702632c6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif