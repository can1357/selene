#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_NOTIFY_EXTENDED_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0xada143d387efc00d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_NOTIFY_EXTENDED_INFORMATION.Action", action, 0x20, 0x20, true, 0x7a1eb5776480728b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_NOTIFY_EXTENDED_INFORMATION.CreationTime", creation_time, 0x40, 0x40, true, 0x355ed6dd5ca42c0c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_NOTIFY_EXTENDED_INFORMATION.LastModificationTime", last_modification_time, 0x80, 0x40, true, 0xe8f2929a19faed97)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_NOTIFY_EXTENDED_INFORMATION.LastChangeTime", last_change_time, 0xc0, 0x40, true, 0xb330638e6cf43f9c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_NOTIFY_EXTENDED_INFORMATION.LastAccessTime", last_access_time, 0x100, 0x40, true, 0xb062d6161fa6e433)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_NOTIFY_EXTENDED_INFORMATION.AllocatedLength", allocated_length, 0x140, 0x40, true, 0xb20c43f302eeb604)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_NOTIFY_EXTENDED_INFORMATION.FileSize", file_size, 0x180, 0x40, true, 0x94e5337c608b1279)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_NOTIFY_EXTENDED_INFORMATION.FileAttributes", file_attributes, 0x1c0, 0x20, true, 0x72c02f7fe045311e)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_NOTIFY_EXTENDED_INFORMATION.ReparsePointTag", reparse_point_tag, 0x1e0, 0x20, true, 0x160201f02f96a1df)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_NOTIFY_EXTENDED_INFORMATION.FileId", file_id, 0x200, 0x40, true, 0x85ddeef9f9e7d8f1)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_NOTIFY_EXTENDED_INFORMATION.ParentFileId", parent_file_id, 0x240, 0x40, true, 0x1d0845894354456b)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_NOTIFY_EXTENDED_INFORMATION.FileNameLength", file_name_length, 0x280, 0x20, true, 0x66ce386f27004206)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_NOTIFY_EXTENDED_INFORMATION.FileName", file_name, 0x2a0, 0x10, true, 0x1a4c7ee18116c7fc)
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
#define _m11
#define _m12
#define _m13
#endif