#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_GLOBAL_TX_DIR_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x2d957e68dde2959d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_GLOBAL_TX_DIR_INFORMATION.FileIndex", file_index, 0x20, 0x20, true, 0xa9978f1cdbd2bc59)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_GLOBAL_TX_DIR_INFORMATION.CreationTime", creation_time, 0x40, 0x40, true, 0xc99ab27b055b3c73)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_GLOBAL_TX_DIR_INFORMATION.LastAccessTime", last_access_time, 0x80, 0x40, true, 0x99a29ffc9c271bf4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_GLOBAL_TX_DIR_INFORMATION.LastWriteTime", last_write_time, 0xc0, 0x40, true, 0x68d960814e2ea063)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_GLOBAL_TX_DIR_INFORMATION.ChangeTime", change_time, 0x100, 0x40, true, 0xa2e6366084b662ca)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_GLOBAL_TX_DIR_INFORMATION.EndOfFile", end_of_file, 0x140, 0x40, true, 0x356e10170e7416f4)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_GLOBAL_TX_DIR_INFORMATION.AllocationSize", allocation_size, 0x180, 0x40, true, 0xdd6b490d155be17a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_GLOBAL_TX_DIR_INFORMATION.FileAttributes", file_attributes, 0x1c0, 0x20, true, 0xff351c82f6ee542f)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_GLOBAL_TX_DIR_INFORMATION.FileNameLength", file_name_length, 0x1e0, 0x20, true, 0x63580b80ebd92d)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_GLOBAL_TX_DIR_INFORMATION.FileId", file_id, 0x200, 0x40, true, 0x69813b6624c561d6)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_FILE_ID_GLOBAL_TX_DIR_INFORMATION.LockingTransactionId", locking_transaction_id, 0x240, 0x80, true, 0x102f034fe2ea7717)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_GLOBAL_TX_DIR_INFORMATION.TxInfoFlags", tx_info_flags, 0x2c0, 0x20, true, 0xbc6c9bef96ea155e)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_ID_GLOBAL_TX_DIR_INFORMATION.FileName", file_name, 0x2e0, 0x10, true, 0x8781ea87ab83a69f)
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