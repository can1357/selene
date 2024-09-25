#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_SEP_CACHED_HANDLES_TABLE.Lock", lock, 0x0, 0x40, true, 0x81c63990549f6bb4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::dynamic_hash_table_t*), "_SEP_CACHED_HANDLES_TABLE.HashTable", hash_table, 0x40, 0x40, true, 0x8d7a012834687798)
#else
#define _m00
#define _m01
#endif