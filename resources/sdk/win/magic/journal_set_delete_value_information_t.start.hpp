#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::journal_change_information_class_t), "_JOURNAL_SET_DELETE_VALUE_INFORMATION.Action", action, 0x0, 0x20, true, 0xe918edc30d79728e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOURNAL_SET_DELETE_VALUE_INFORMATION.RecordNumber", record_number, 0x40, 0x40, true, 0x5fcfd0f027e0369b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOURNAL_SET_DELETE_VALUE_INFORMATION.TimeStamp", time_stamp, 0x80, 0x40, true, 0x9be715b2397d042a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_JOURNAL_SET_DELETE_VALUE_INFORMATION.KeyPathName", key_path_name, 0xc0, 0x80, true, 0xfa19b58a764b8932)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_JOURNAL_SET_DELETE_VALUE_INFORMATION.ValueName", value_name, 0x140, 0x80, true, 0xb53d61c881ae10c2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOURNAL_SET_DELETE_VALUE_INFORMATION.OldValueType", old_value_type, 0x1c0, 0x20, true, 0x68df1b9f62e74e00)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOURNAL_SET_DELETE_VALUE_INFORMATION.OldDataLength", old_data_length, 0x1e0, 0x20, true, 0x44706ea1106da777)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_JOURNAL_SET_DELETE_VALUE_INFORMATION.OldData", old_data, 0x200, 0x40, true, 0x170229aa951ce450)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOURNAL_SET_DELETE_VALUE_INFORMATION.NewValueType", new_value_type, 0x240, 0x20, true, 0xdb1912c6037017d1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOURNAL_SET_DELETE_VALUE_INFORMATION.NewDataLength", new_data_length, 0x260, 0x20, true, 0x5e011a734007186f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_JOURNAL_SET_DELETE_VALUE_INFORMATION.NewData", new_data, 0x280, 0x40, true, 0xbf2132bf5a1d0c65)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif