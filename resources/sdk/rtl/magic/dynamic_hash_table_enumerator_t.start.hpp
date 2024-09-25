#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct rtl::dynamic_hash_table_entry_t), "_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR.HashEntry", hash_entry, 0x0, 0xc0, true, 0xd65e83767217a0ec)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR.CurEntry", cur_entry, 0x0, 0x40, true, 0xf889a893d196f5ca)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR.ChainHead", chain_head, 0xc0, 0x40, true, 0x561b0dca01e0d0dc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_DYNAMIC_HASH_TABLE_ENUMERATOR.BucketIndex", bucket_index, 0x100, 0x20, true, 0xd8734fec26a572c1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif