#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::journal_change_information_class_t), "_JOURNAL_RENAME_KEY_INFORMATION.Action", action, 0x0, 0x20, true, 0x5fab3843137339df)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOURNAL_RENAME_KEY_INFORMATION.RecordNumber", record_number, 0x40, 0x40, true, 0x64ccd059adb15458)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOURNAL_RENAME_KEY_INFORMATION.TimeStamp", time_stamp, 0x80, 0x40, true, 0xd508f91707f82d02)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_JOURNAL_RENAME_KEY_INFORMATION.KeyPathName", key_path_name, 0xc0, 0x80, true, 0xa665cf4fd7d1ee15)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_JOURNAL_RENAME_KEY_INFORMATION.KeyKeyName", key_key_name, 0x140, 0x80, true, 0x46b5fef47280b80)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif