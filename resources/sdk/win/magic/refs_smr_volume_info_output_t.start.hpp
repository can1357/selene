#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REFS_SMR_VOLUME_INFO_OUTPUT.Version", version, 0x0, 0x20, true, 0xa003ecb5f80dc50a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REFS_SMR_VOLUME_INFO_OUTPUT.Flags", flags, 0x20, 0x20, true, 0x973646c143fa778f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_REFS_SMR_VOLUME_INFO_OUTPUT.SizeOfRandomlyWritableTier", size_of_randomly_writable_tier, 0x40, 0x40, true, 0x32de5edbc31090f9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_REFS_SMR_VOLUME_INFO_OUTPUT.FreeSpaceInRandomlyWritableTier", free_space_in_randomly_writable_tier, 0x80, 0x40, true, 0x543db7e12c0b34f9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_REFS_SMR_VOLUME_INFO_OUTPUT.SizeofSMRTier", sizeof_smr_tier, 0xc0, 0x40, true, 0x24909c6dc52fd763)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_REFS_SMR_VOLUME_INFO_OUTPUT.FreeSpaceInSMRTier", free_space_in_smr_tier, 0x100, 0x40, true, 0xbdd84c55c6022b89)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_REFS_SMR_VOLUME_INFO_OUTPUT.UsableFreeSpaceInSMRTier", usable_free_space_in_smr_tier, 0x140, 0x40, true, 0x62edde8f438965b0)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum win::refs_smr_volume_gc_state_t), "_REFS_SMR_VOLUME_INFO_OUTPUT.VolumeGcState", volume_gc_state, 0x180, 0x20, true, 0x153e094fbe0ad18e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_REFS_SMR_VOLUME_INFO_OUTPUT.VolumeGcLastStatus", volume_gc_last_status, 0x1a0, 0x20, true, 0x8f1c2d5d846bd40b)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_REFS_SMR_VOLUME_INFO_OUTPUT.CurrentGcBandFillPercentage", current_gc_band_fill_percentage, 0x1c0, 0x20, true, 0x9220aeb96ec1f83f)
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
#endif