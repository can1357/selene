#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ole_static_mutex_sem_t*), "CMIPIDHashTable._pExLock", p_ex_lock, 0x40, 0x40, true, 0x81fc4d9036afb1d2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::crw_lock_t*), "CMIPIDHashTable._pRWLock", p_rw_lock, 0x80, 0x40, true, 0x69c54358026ddd27)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t*), "CMIPIDHashTable._buckets", buckets, 0xc0, 0x40, true, 0x23cde09effb386c3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMIPIDHashTable._cCurEntries", c_cur_entries, 0x100, 0x20, true, 0xf84fd538b9ebaf80)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMIPIDHashTable._cMaxEntries", c_max_entries, 0x120, 0x20, true, 0x52882235d5307ab)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif