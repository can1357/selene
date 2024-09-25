#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_LEARNING_MODE_OBJECT_INFORMATION.ListEntry", list_entry, 0x0, 0x40, true, 0xd6a3e2fd62c34b4d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::learning_mode_log_level_t), "_LEARNING_MODE_OBJECT_INFORMATION.LogLevel", log_level, 0x40, 0x20, true, 0xae0989611dead92b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_LEARNING_MODE_OBJECT_INFORMATION.ObjectType", object_type, 0x80, 0x40, true, 0x287ba82c21425723)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_LEARNING_MODE_OBJECT_INFORMATION.ObjectName", object_name, 0xc0, 0x40, true, 0x617425e425acfd3a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LEARNING_MODE_OBJECT_INFORMATION.RootDirectory", root_directory, 0x100, 0x40, true, 0x6a1da2be0d293be6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_LEARNING_MODE_OBJECT_INFORMATION.FullObjectName", full_object_name, 0x140, 0x80, true, 0x752a2fd51c2535b8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif