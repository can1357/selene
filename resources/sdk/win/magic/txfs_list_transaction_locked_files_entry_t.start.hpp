#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY.Offset", offset, 0x0, 0x40, true, 0xd1679849282660cb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY.NameFlags", name_flags, 0x40, 0x20, true, 0x99b4e07c4c3a17a4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY.FileId", file_id, 0x80, 0x40, true, 0xb6cbde4e3ea4155e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY.FileName", file_name, 0x140, 0x10, true, 0x7c0b2df968a7835f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif