#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_CM_KEY_HASH_TABLE_ENTRY.Lock", lock, 0x0, 0x40, true, 0xb015c485dc44adcb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_CM_KEY_HASH_TABLE_ENTRY.Owner", owner, 0x40, 0x40, true, 0xf55859b27dd4a077)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::key_hash_t*), "_CM_KEY_HASH_TABLE_ENTRY.Entry", entry, 0x80, 0x40, true, 0x6bdda67d7a43929e)
#else
#define _m00
#define _m01
#define _m02
#endif