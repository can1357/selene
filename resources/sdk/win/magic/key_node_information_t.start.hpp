#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_KEY_NODE_INFORMATION.LastWriteTime", last_write_time, 0x0, 0x40, true, 0x231bb7f92a66fa06)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_NODE_INFORMATION.TitleIndex", title_index, 0x40, 0x20, true, 0xb6f78bccd6a27a74)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_NODE_INFORMATION.ClassOffset", class_offset, 0x60, 0x20, true, 0x87e5c6d672427470)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_NODE_INFORMATION.ClassLength", class_length, 0x80, 0x20, true, 0xcec536d2757def22)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KEY_NODE_INFORMATION.NameLength", name_length, 0xa0, 0x20, true, 0x1c24e6f06f024f09)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_KEY_NODE_INFORMATION.Name", name, 0xc0, 0x10, true, 0x68c25d102e22e91d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif