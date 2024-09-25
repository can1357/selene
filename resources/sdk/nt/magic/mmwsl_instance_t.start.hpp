#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMWSL_INSTANCE.LastAccessClearingRemainder", last_access_clearing_remainder, 0xc0, 0x20, true, 0xb72406f3b9c17f5c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMWSL_INSTANCE.LastAgingRemainder", last_aging_remainder, 0xe0, 0x20, true, 0x714130a06e9aed73)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_MMWSL_INSTANCE.NextPteToTrim", next_pte_to_trim, 0x0, 0x40, true, 0xcb43a7a533fd1b68)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_MMWSL_INSTANCE.NextPteToAge", next_pte_to_age, 0x40, 0x40, true, 0xedf1a30e93789d53)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_MMWSL_INSTANCE.NextPteToAccessClear", next_pte_to_access_clear, 0x80, 0x40, true, 0xcf542fa4bf77a09e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMWSL_INSTANCE.LockedEntries", locked_entries, 0x100, 0x40, true, 0x757918a58576665f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMWSL_INSTANCE.NextSlot", next_slot, 0x0, 0x0, false, 0x85191dc1ec779703)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMWSL_INSTANCE.NextAgingSlot", next_aging_slot, 0x0, 0x0, false, 0x6002bc7267a493f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMWSL_INSTANCE.NextAccessClearingSlot", next_access_clearing_slot, 0x0, 0x0, false, 0x1a32a854d39db7e4)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 16>), "_MMWSL_INSTANCE.ActiveWsleCounts", active_wsle_counts, 0x0, 0x0, false, 0x1db087889d87893)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::active_wsle_listhead_t, 16>), "_MMWSL_INSTANCE.ActiveWsles", active_wsles, 0x0, 0x0, false, 0xf60616e5f23202a)
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
#endif