#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "READ_USN_JOURNAL_DATA_V1.StartUsn", start_usn, 0x0, 0x40, true, 0xddffcbb7a6f20f76)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "READ_USN_JOURNAL_DATA_V1.ReasonMask", reason_mask, 0x40, 0x20, true, 0x14ac6a09baac314)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "READ_USN_JOURNAL_DATA_V1.ReturnOnlyOnClose", return_only_on_close, 0x60, 0x20, true, 0x764af2c01dca8744)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "READ_USN_JOURNAL_DATA_V1.Timeout", timeout, 0x80, 0x40, true, 0xbd32f6691a697a07)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "READ_USN_JOURNAL_DATA_V1.BytesToWaitFor", bytes_to_wait_for, 0xc0, 0x40, true, 0x8f426632b509115a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "READ_USN_JOURNAL_DATA_V1.UsnJournalID", usn_journal_id, 0x100, 0x40, true, 0xfdaf404f4a946d77)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "READ_USN_JOURNAL_DATA_V1.MinMajorVersion", min_major_version, 0x140, 0x10, true, 0xdcab692ebb18124d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "READ_USN_JOURNAL_DATA_V1.MaxMajorVersion", max_major_version, 0x150, 0x10, true, 0xc1c9cc157ac86d3b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif