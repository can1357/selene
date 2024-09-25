#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TXFS_LIST_TRANSACTIONS_ENTRY.TransactionId", transaction_id, 0x0, 0x80, true, 0xeb2fe901803bbd8a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_LIST_TRANSACTIONS_ENTRY.TransactionState", transaction_state, 0x80, 0x20, true, 0x2c8bfad6090e1f72)
#else
#define _m00
#define _m01
#endif