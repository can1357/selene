#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_NOTIFY_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x12108632b7f58db2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_NOTIFY_INFORMATION.Action", action, 0x20, 0x20, true, 0x198a19343c1404fd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_NOTIFY_INFORMATION.FileNameLength", file_name_length, 0x40, 0x20, true, 0xb36f13983baeeeb0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_NOTIFY_INFORMATION.FileName", file_name, 0x60, 0x10, true, 0xe99395ba170d4d40)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif