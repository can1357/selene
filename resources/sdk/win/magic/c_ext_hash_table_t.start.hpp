#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ole_static_mutex_sem_t*), "CExtHashTable._pExLock", p_ex_lock, 0x40, 0x40, true, 0xb4a7feae8e5de89c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::crw_lock_t*), "CExtHashTable._pRWLock", p_rw_lock, 0x80, 0x40, true, 0xdc52ca61e3f52e30)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t*), "CExtHashTable._buckets", buckets, 0xc0, 0x40, true, 0x8c3e1672e9b56403)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CExtHashTable._cCurEntries", c_cur_entries, 0x100, 0x20, true, 0x44b2b50878ef7416)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CExtHashTable._cMaxEntries", c_max_entries, 0x120, 0x20, true, 0x66047b74e0be2828)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif