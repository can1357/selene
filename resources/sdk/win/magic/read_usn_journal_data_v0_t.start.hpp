#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "READ_USN_JOURNAL_DATA_V0.StartUsn", start_usn, 0x0, 0x40, true, 0x8e619aba3f4b8bcd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "READ_USN_JOURNAL_DATA_V0.ReasonMask", reason_mask, 0x40, 0x20, true, 0x8178372c9d82e81e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "READ_USN_JOURNAL_DATA_V0.ReturnOnlyOnClose", return_only_on_close, 0x60, 0x20, true, 0x347389b3df611b47)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "READ_USN_JOURNAL_DATA_V0.Timeout", timeout, 0x80, 0x40, true, 0xc9ee33a00d4337e5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "READ_USN_JOURNAL_DATA_V0.BytesToWaitFor", bytes_to_wait_for, 0xc0, 0x40, true, 0xacab58f87ca97bc1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "READ_USN_JOURNAL_DATA_V0.UsnJournalID", usn_journal_id, 0x100, 0x40, true, 0x535b7ba84677584)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif