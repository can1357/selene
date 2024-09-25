#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ole_static_mutex_sem_t*), "CActivatableClassIdHashTable._pExLock", p_ex_lock, 0x40, 0x40, true, 0x6bba895005abff1c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::crw_lock_t*), "CActivatableClassIdHashTable._pRWLock", p_rw_lock, 0x80, 0x40, true, 0x3b9cdf6914d4a1fd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t*), "CActivatableClassIdHashTable._buckets", buckets, 0xc0, 0x40, true, 0x7c0462b5bbd8bbf7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CActivatableClassIdHashTable._cCurEntries", c_cur_entries, 0x100, 0x20, true, 0x213be15c53f05a53)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CActivatableClassIdHashTable._cMaxEntries", c_max_entries, 0x120, 0x20, true, 0xf330da755ba07a6f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif