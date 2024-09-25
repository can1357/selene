#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_CRYPTO_KEY_ENTRY.KeyTableIndex", key_table_index, 0x0, 0x20, true, 0x455d51ad37be8326)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_RAID_ADAPTER_CRYPTO_KEY_ENTRY.KeyHash", key_hash, 0x20, 0x0, true, 0xe315df57a35d7b38)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_CRYPTO_KEY_ENTRY.CryptoCapabilityIndex", crypto_capability_index, 0x120, 0x20, true, 0xb7dbc92a7bf75cd4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_RAID_ADAPTER_CRYPTO_KEY_ENTRY.NumOutstandingIOs", num_outstanding_i_os, 0x140, 0x20, true, 0x66d5b11eba679a3c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::crypto_key_state_t), "_RAID_ADAPTER_CRYPTO_KEY_ENTRY.KeyState", key_state, 0x160, 0x20, true, 0x340639a3783ccf9c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_RAID_ADAPTER_CRYPTO_KEY_ENTRY.PendingXrbList", pending_xrb_list, 0x180, 0x80, true, 0xb599344586db2955)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif