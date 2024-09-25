#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::journal_change_information_class_t), "_JOURNAL_SET_KEY_USER_FLAGS_INFORMATION.Action", action, 0x0, 0x20, true, 0x83b5c91b22e1e8cf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOURNAL_SET_KEY_USER_FLAGS_INFORMATION.RecordNumber", record_number, 0x40, 0x40, true, 0xa50de9b485e0a1c2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOURNAL_SET_KEY_USER_FLAGS_INFORMATION.TimeStamp", time_stamp, 0x80, 0x40, true, 0x4aa078453b7f1c31)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_JOURNAL_SET_KEY_USER_FLAGS_INFORMATION.KeyPathName", key_path_name, 0xc0, 0x80, true, 0x403ca10c3a74994e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOURNAL_SET_KEY_USER_FLAGS_INFORMATION.OldFlags", old_flags, 0x140, 0x20, true, 0xd57d27e850dbb1b0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOURNAL_SET_KEY_USER_FLAGS_INFORMATION.NewFlags", new_flags, 0x160, 0x20, true, 0x6692bc15360cc745)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif