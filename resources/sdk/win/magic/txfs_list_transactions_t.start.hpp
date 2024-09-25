#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_LIST_TRANSACTIONS.NumberOfTransactions", number_of_transactions, 0x0, 0x40, true, 0xa3f18a9c3c395c7a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_LIST_TRANSACTIONS.BufferSizeRequired", buffer_size_required, 0x40, 0x40, true, 0x72085235daa02ed3)
#else
#define _m00
#define _m01
#endif