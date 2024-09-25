#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOURNAL_CLIENT_INFORMATION.StartTimeStamp", start_time_stamp, 0x0, 0x40, true, 0xc128c04d80f1f103)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOURNAL_CLIENT_INFORMATION.CurrentTimeStamp", current_time_stamp, 0x40, 0x40, true, 0x5c842a9e5c017101)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOURNAL_CLIENT_INFORMATION.RecordsToProcess", records_to_process, 0x80, 0x40, true, 0x83db56f23fabd4c7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOURNAL_CLIENT_INFORMATION.RelativeFillLevel", relative_fill_level, 0xc0, 0x20, true, 0x82f6ea13bdaf6342)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif