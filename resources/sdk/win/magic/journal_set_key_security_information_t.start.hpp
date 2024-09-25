#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::journal_change_information_class_t), "_JOURNAL_SET_KEY_SECURITY_INFORMATION.Action", action, 0x0, 0x20, true, 0x30eb1a3b32e2d265)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_JOURNAL_SET_KEY_SECURITY_INFORMATION.RecordNumber", record_number, 0x40, 0x40, true, 0x69805346e6df9f58)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_JOURNAL_SET_KEY_SECURITY_INFORMATION.TimeStamp", time_stamp, 0x80, 0x40, true, 0xe8c0767bb975ddb0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_JOURNAL_SET_KEY_SECURITY_INFORMATION.KeyPathName", key_path_name, 0xc0, 0x80, true, 0x229edb16710e798a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOURNAL_SET_KEY_SECURITY_INFORMATION.OldSecurityDescriptorLength", old_security_descriptor_length, 0x140, 0x20, true, 0x40d91ac8a081dd15)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_JOURNAL_SET_KEY_SECURITY_INFORMATION.OldSecurityDescriptor", old_security_descriptor, 0x180, 0x40, true, 0xadb92c888a183a88)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOURNAL_SET_KEY_SECURITY_INFORMATION.NewSecurityDescriptorLength", new_security_descriptor_length, 0x1c0, 0x20, true, 0x5b3a3b0a04308599)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_JOURNAL_SET_KEY_SECURITY_INFORMATION.NewSecurityDescriptor", new_security_descriptor, 0x200, 0x40, true, 0x4fc7fd285c1f8a5e)
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