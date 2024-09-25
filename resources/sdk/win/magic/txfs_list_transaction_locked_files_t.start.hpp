#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TXFS_LIST_TRANSACTION_LOCKED_FILES.KtmTransaction", ktm_transaction, 0x0, 0x80, true, 0xa75e2ce1425ce717)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_LIST_TRANSACTION_LOCKED_FILES.NumberOfFiles", number_of_files, 0x80, 0x40, true, 0x4fda60090292a2bc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_LIST_TRANSACTION_LOCKED_FILES.BufferSizeRequired", buffer_size_required, 0xc0, 0x40, true, 0x2f57e111b7bdb5c6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_LIST_TRANSACTION_LOCKED_FILES.Offset", offset, 0x100, 0x40, true, 0xf815cb3a3ed068a6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif