#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_QUERY_RM_INFORMATION.BytesRequired", bytes_required, 0x0, 0x20, true, 0x17f8d26b9dc61081)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_QUERY_RM_INFORMATION.TailLsn", tail_lsn, 0x40, 0x40, true, 0xa1c9d879080501c2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_QUERY_RM_INFORMATION.CurrentLsn", current_lsn, 0x80, 0x40, true, 0x25f0521adf6de51b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_QUERY_RM_INFORMATION.ArchiveTailLsn", archive_tail_lsn, 0xc0, 0x40, true, 0x7c1eff2bac880a38)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_QUERY_RM_INFORMATION.LogContainerSize", log_container_size, 0x100, 0x40, true, 0xb142f55a337b073e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_TXFS_QUERY_RM_INFORMATION.HighestVirtualClock", highest_virtual_clock, 0x140, 0x40, true, 0x7d52c48507a2823f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_QUERY_RM_INFORMATION.LogContainerCount", log_container_count, 0x180, 0x20, true, 0x4067217db41ffa7)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_QUERY_RM_INFORMATION.LogContainerCountMax", log_container_count_max, 0x1a0, 0x20, true, 0x94d9206777a6830d)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_QUERY_RM_INFORMATION.LogContainerCountMin", log_container_count_min, 0x1c0, 0x20, true, 0x49298e9ecc7b7572)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_QUERY_RM_INFORMATION.LogGrowthIncrement", log_growth_increment, 0x1e0, 0x20, true, 0x1646e25d298f4596)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_QUERY_RM_INFORMATION.LogAutoShrinkPercentage", log_auto_shrink_percentage, 0x200, 0x20, true, 0xc233b950021c3b19)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_QUERY_RM_INFORMATION.Flags", flags, 0x220, 0x20, true, 0xe429ab18c6e1fd3b)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_TXFS_QUERY_RM_INFORMATION.LoggingMode", logging_mode, 0x240, 0x10, true, 0x5286ce82f71fa079)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_QUERY_RM_INFORMATION.RmState", rm_state, 0x260, 0x20, true, 0x9c12dd6b07650a4c)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_QUERY_RM_INFORMATION.LogCapacity", log_capacity, 0x280, 0x40, true, 0xc5786994d15a4b4b)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_QUERY_RM_INFORMATION.LogFree", log_free, 0x2c0, 0x40, true, 0xa3d99522ddb2515e)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_QUERY_RM_INFORMATION.TopsSize", tops_size, 0x300, 0x40, true, 0x3b87f89edab2e203)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_QUERY_RM_INFORMATION.TopsUsed", tops_used, 0x340, 0x40, true, 0x9779dc5be17e6358)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_QUERY_RM_INFORMATION.TransactionCount", transaction_count, 0x380, 0x40, true, 0x26eaf693f415d7ad)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_QUERY_RM_INFORMATION.OnePCCount", one_pc_count, 0x3c0, 0x40, true, 0xd80a9bfe528b8fd5)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_QUERY_RM_INFORMATION.TwoPCCount", two_pc_count, 0x400, 0x40, true, 0xd7bc6c074c4692fc)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_QUERY_RM_INFORMATION.NumberLogFileFull", number_log_file_full, 0x440, 0x40, true, 0x74ecf2b9611c7010)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TXFS_QUERY_RM_INFORMATION.OldestTransactionAge", oldest_transaction_age, 0x480, 0x40, true, 0x7935c41005baea49)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_TXFS_QUERY_RM_INFORMATION.RMName", rm_name, 0x4c0, 0x80, true, 0x8ddb2151cb2cee1b)
#define _m24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TXFS_QUERY_RM_INFORMATION.TmLogPathOffset", tm_log_path_offset, 0x540, 0x20, true, 0xc77a7d2130083e4a)
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
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#endif