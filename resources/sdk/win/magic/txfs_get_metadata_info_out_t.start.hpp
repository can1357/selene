#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_TXFS_GET_METADATA_INFO_OUT.TxfFileId.LowPart", low_part, 0x0, 0x40, true, 0x7ca8cdfaecd7a19e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_TXFS_GET_METADATA_INFO_OUT.TxfFileId.HighPart", high_part, 0x40, 0x40, true, 0x4d54e1e8c2d6056f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_txf_file_id_t), "_TXFS_GET_METADATA_INFO_OUT.TxfFileId", txf_file_id, 0x0, 0x80, true, 0xb02d1e7eb04024ad)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TXFS_GET_METADATA_INFO_OUT.LockingTransaction", locking_transaction, 0x80, 0x80, true, 0x2d5bdf6c7fb156ce)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_GET_METADATA_INFO_OUT.LastLsn", last_lsn, 0x100, 0x40, true, 0xf0c316f4d643b04f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_GET_METADATA_INFO_OUT.TransactionState", transaction_state, 0x140, 0x20, true, 0xd90a77ec7cd3b6b0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif