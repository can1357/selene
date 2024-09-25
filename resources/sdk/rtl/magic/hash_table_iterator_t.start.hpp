#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::hash_table_t*), "_RTL_HASH_TABLE_ITERATOR.Hash", hash, 0x0, 0x40, true, 0x877321ad412e9afe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::hash_entry_t*), "_RTL_HASH_TABLE_ITERATOR.HashEntry", hash_entry, 0x40, 0x40, true, 0x9a775650367f29c1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t*), "_RTL_HASH_TABLE_ITERATOR.Bucket", bucket, 0x80, 0x40, true, 0x92ba91d314286040)
#else
#define _m00
#define _m01
#define _m02
#endif