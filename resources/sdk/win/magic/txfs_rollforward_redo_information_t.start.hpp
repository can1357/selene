#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_TXFS_ROLLFORWARD_REDO_INFORMATION.LastVirtualClock", last_virtual_clock, 0x0, 0x40, true, 0x7717ba590fa9c1f2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_ROLLFORWARD_REDO_INFORMATION.LastRedoLsn", last_redo_lsn, 0x40, 0x40, true, 0xb1a19e6e21f3ed64)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_ROLLFORWARD_REDO_INFORMATION.HighestRecoveryLsn", highest_recovery_lsn, 0x80, 0x40, true, 0x7d7d28922718a9cf)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_ROLLFORWARD_REDO_INFORMATION.Flags", flags, 0xc0, 0x20, true, 0x71eca82860e7cdcd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif