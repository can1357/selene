#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::journal_change_information_class_t), "_JOURNAL_TRANSACTION_BOUNDARY_INFORMATION.Action", action, 0x0, 0x20, true, 0x8e271629013ddd40)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOURNAL_TRANSACTION_BOUNDARY_INFORMATION.RecordNumber", record_number, 0x40, 0x40, true, 0x3ccb3c3cdd6d0e0a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOURNAL_TRANSACTION_BOUNDARY_INFORMATION.TimeStamp", time_stamp, 0x80, 0x40, true, 0x87f8dcc88b2adc84)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_JOURNAL_TRANSACTION_BOUNDARY_INFORMATION.TransactionID", transaction_id, 0xc0, 0x80, true, 0x5c1c799a7cb1e31b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif