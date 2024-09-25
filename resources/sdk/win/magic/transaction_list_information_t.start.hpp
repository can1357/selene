#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRANSACTION_LIST_INFORMATION.NumberOfTransactions", number_of_transactions, 0x0, 0x20, true, 0xe7bbb66ddc8e3f13)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::transaction_list_entry_t, 1>), "_TRANSACTION_LIST_INFORMATION.TransactionInformation", transaction_information, 0x20, 0x80, true, 0x222c6f96b12c9b87)
#else
#define _m00
#define _m01
#endif