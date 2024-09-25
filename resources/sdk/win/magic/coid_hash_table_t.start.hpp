#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::c_ole_static_mutex_sem_t*), "COIDHashTable._pExLock", p_ex_lock, 0x40, 0x40, true, 0xcad334951db31cf7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::crw_lock_t*), "COIDHashTable._pRWLock", p_rw_lock, 0x80, 0x40, true, 0x161d9e3f76025eb6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::s_hash_chain_t*), "COIDHashTable._buckets", buckets, 0xc0, 0x40, true, 0x80f50d72427bd2ce)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COIDHashTable._cCurEntries", c_cur_entries, 0x100, 0x20, true, 0xb2142dcc9e92f54b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COIDHashTable._cMaxEntries", c_max_entries, 0x120, 0x20, true, 0x4a251fe682c278f9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif