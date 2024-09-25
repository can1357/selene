#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_SEP_LOWBOX_HANDLES_TABLE.Lock", lock, 0x0, 0x0, false, 0x3987712a182dae7b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::dynamic_hash_table_t*), "_SEP_LOWBOX_HANDLES_TABLE.HashTable", hash_table, 0x0, 0x0, false, 0xef196a04a4d4dacc)
#else
#define _m00
#define _m01
#endif