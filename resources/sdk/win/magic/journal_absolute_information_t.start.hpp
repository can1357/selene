#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOURNAL_ABSOLUTE_INFORMATION.StartTimeStamp", start_time_stamp, 0x0, 0x40, true, 0x17cc108697313139)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOURNAL_ABSOLUTE_INFORMATION.EndTimeStamp", end_time_stamp, 0x40, 0x40, true, 0xba0f0f7620e8b5ec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOURNAL_ABSOLUTE_INFORMATION.NumberOfRecords", number_of_records, 0x80, 0x40, true, 0xc00c8f27d92929ba)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOURNAL_ABSOLUTE_INFORMATION.FillLevel", fill_level, 0xc0, 0x20, true, 0xfa3bb1e1d1dfa3c6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif