#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_CRYPTO_KEY_TABLE.NumKeyEntries", num_key_entries, 0x0, 0x20, true, 0x437d9b47982a1c0a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_RAID_CRYPTO_KEY_TABLE.KeyTableFull", key_table_full, 0x20, 0x8, true, 0x264713e8cd6a62da)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_adapter_crypto_key_entry_t*), "_RAID_CRYPTO_KEY_TABLE.Table", table, 0x40, 0x40, true, 0x94f405b6da91eaf3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_RAID_CRYPTO_KEY_TABLE.KeyTableLock", key_table_lock, 0x80, 0x20, true, 0x647beb2c64bbc4eb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif