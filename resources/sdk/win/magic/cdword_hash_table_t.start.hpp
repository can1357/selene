#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ole_static_mutex_sem_t*), "CDWORDHashTable._pExLock", p_ex_lock, 0x40, 0x40, true, 0x263286c461001a20)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::crw_lock_t*), "CDWORDHashTable._pRWLock", p_rw_lock, 0x80, 0x40, true, 0x2c00a99e76705772)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t*), "CDWORDHashTable._buckets", buckets, 0xc0, 0x40, true, 0x3cdd251d0d68955f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CDWORDHashTable._cCurEntries", c_cur_entries, 0x100, 0x20, true, 0x170f59ff4564906b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CDWORDHashTable._cMaxEntries", c_max_entries, 0x120, 0x20, true, 0xf5ca2c5d56340105)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif