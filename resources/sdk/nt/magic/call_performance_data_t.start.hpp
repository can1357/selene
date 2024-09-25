#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CALL_PERFORMANCE_DATA.SpinLock", spin_lock, 0x0, 0x40, true, 0x245f77028350b245)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<nt::list_entry_t, 64>), "_CALL_PERFORMANCE_DATA.HashTable", hash_table, 0x40, 0x0, true, 0x9dcb21e814cf9914)
#else
#define _m00
#define _m01
#endif