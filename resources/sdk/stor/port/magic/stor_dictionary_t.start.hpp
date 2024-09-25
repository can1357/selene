#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_DICTIONARY.EntryCount", entry_count, 0x0, 0x20, true, 0x57a4f3b389c7331c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_DICTIONARY.MaxEntryCount", max_entry_count, 0x20, 0x20, true, 0x71d1d9f2df4b08d4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::pool_type_t), "_STOR_DICTIONARY.PoolType", pool_type, 0x40, 0x20, true, 0xb7677b35893828b8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_STOR_DICTIONARY.Entries", entries, 0x80, 0x40, true, 0x1d2adac3cef6a405)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void*(nt::list_entry_t*)>*), "_STOR_DICTIONARY.GetKeyRoutine", get_key_routine, 0xc0, 0x40, true, 0x7c54b5a56d56bb31)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_STOR_DICTIONARY.CompareKeyRoutine", compare_key_routine, 0x100, 0x40, true, 0x4b3c0ec339b72af0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*)>*), "_STOR_DICTIONARY.HashKeyRoutine", hash_key_routine, 0x140, 0x40, true, 0xcde49f5768ce7484)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif