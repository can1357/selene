#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_COMMIT.PeakCommitment", peak_commitment, 0x0, 0x40, true, 0x50294987ed02b156)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_COMMIT.TotalCommitLimitMaximum", total_commit_limit_maximum, 0x40, 0x40, true, 0x31562a28cc505b0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<volatile int32_t, 2>), "_MI_PARTITION_COMMIT.Popups", popups, 0x80, 0x40, true, 0x1be5e43e8a813725)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_COMMIT.LowCommitThreshold", low_commit_threshold, 0xc0, 0x40, true, 0x946700b0b75ca758)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_COMMIT.HighCommitThreshold", high_commit_threshold, 0x100, 0x40, true, 0xa0a859fcfec016c7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_COMMIT.EventLock", event_lock, 0x140, 0x40, true, 0x91de7ba3bcd5d012)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_COMMIT.SystemCommitReserve", system_commit_reserve, 0x180, 0x40, true, 0xd801a3fc949e2be1)
#define _m07 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint64_t), "_MI_PARTITION_COMMIT.OverCommit", over_commit, 0x1c0, 0x40, true, 0xb1c04ded37da0cf3, 64, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif