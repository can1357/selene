#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::journal_change_information_class_t), "_JOURNAL_CREATE_DELETE_KEY_INFORMATION.Action", action, 0x0, 0x20, true, 0xca3b5a5c5bc6f882)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOURNAL_CREATE_DELETE_KEY_INFORMATION.RecordNumber", record_number, 0x40, 0x40, true, 0x31ebbc12f20df866)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOURNAL_CREATE_DELETE_KEY_INFORMATION.TimeStamp", time_stamp, 0x80, 0x40, true, 0x14b875459a402aa1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_JOURNAL_CREATE_DELETE_KEY_INFORMATION.KeyPathName", key_path_name, 0xc0, 0x80, true, 0xe386d8861b5528dc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOURNAL_CREATE_DELETE_KEY_INFORMATION.SecurityDescriptorLength", security_descriptor_length, 0x140, 0x20, true, 0x892f236af6d7673b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_JOURNAL_CREATE_DELETE_KEY_INFORMATION.SecurityDescriptor", security_descriptor, 0x180, 0x40, true, 0xdcaf624ee7a460f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_JOURNAL_CREATE_DELETE_KEY_INFORMATION.ClassLength", class_length, 0x1c0, 0x10, true, 0x487691a8f245e307)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_JOURNAL_CREATE_DELETE_KEY_INFORMATION.ClassData", class_data, 0x200, 0x40, true, 0x6981bd077c57bc84)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_JOURNAL_CREATE_DELETE_KEY_INFORMATION.SymbolicLink", symbolic_link, 0x240, 0x8, true, 0x159b5a256bc66067)
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
#endif