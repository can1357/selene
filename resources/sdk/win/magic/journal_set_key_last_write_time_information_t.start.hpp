#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::journal_change_information_class_t), "_JOURNAL_SET_KEY_LAST_WRITE_TIME_INFORMATION.Action", action, 0x0, 0x20, true, 0x6b3bfa8710a37c9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOURNAL_SET_KEY_LAST_WRITE_TIME_INFORMATION.RecordNumber", record_number, 0x40, 0x40, true, 0x50ac0a7b194b84ab)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOURNAL_SET_KEY_LAST_WRITE_TIME_INFORMATION.TimeStamp", time_stamp, 0x80, 0x40, true, 0x242bd36ea82a207c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_JOURNAL_SET_KEY_LAST_WRITE_TIME_INFORMATION.KeyPathName", key_path_name, 0xc0, 0x80, true, 0x5ded0b1569709292)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOURNAL_SET_KEY_LAST_WRITE_TIME_INFORMATION.OldLastWriteTime", old_last_write_time, 0x140, 0x40, true, 0xa6153dd4d9d6f27)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOURNAL_SET_KEY_LAST_WRITE_TIME_INFORMATION.NewLastWriteTime", new_last_write_time, 0x180, 0x40, true, 0x94cb33ad2140a1ca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif