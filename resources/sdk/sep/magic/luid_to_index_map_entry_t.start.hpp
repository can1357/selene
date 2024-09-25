#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::dynamic_hash_table_entry_t), "_SEP_LUID_TO_INDEX_MAP_ENTRY.HashEntry", hash_entry, 0x0, 0xc0, true, 0xf19fd04410fc6502)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SEP_LUID_TO_INDEX_MAP_ENTRY.ReferenceCount", reference_count, 0xc0, 0x40, true, 0xe763ee889a178442)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SEP_LUID_TO_INDEX_MAP_ENTRY.Luid", luid, 0x100, 0x40, true, 0x3cd7eb0338106c1c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SEP_LUID_TO_INDEX_MAP_ENTRY.IndexIntoGlobalSingletonTable", index_into_global_singleton_table, 0x140, 0x40, true, 0x79c6aa8577b19d48)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SEP_LUID_TO_INDEX_MAP_ENTRY.MarkedForDeletion", marked_for_deletion, 0x180, 0x8, true, 0x6c1fc754d6f070e1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif