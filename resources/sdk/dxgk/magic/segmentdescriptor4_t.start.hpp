#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::segmentflags_t), "_DXGK_SEGMENTDESCRIPTOR4.Flags", flags, 0x0, 0x20, true, 0x4494550eada0f067)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_SEGMENTDESCRIPTOR4.BaseAddress", base_address, 0x40, 0x40, true, 0xe0ae7893cf3d24d7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_SEGMENTDESCRIPTOR4.Size", size, 0x80, 0x40, true, 0xfba6d0b2b2069b0a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_SEGMENTDESCRIPTOR4.CommitLimit", commit_limit, 0xc0, 0x40, true, 0x10ea9d24325bc2ae)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_SEGMENTDESCRIPTOR4.SystemMemoryEndAddress", system_memory_end_address, 0x100, 0x40, true, 0x48099554da6177b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_SEGMENTDESCRIPTOR4.CpuTranslatedAddress", cpu_translated_address, 0x140, 0x40, true, 0x7403605dc8864912)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::cpuhostaperture_t), "_DXGK_SEGMENTDESCRIPTOR4.CpuHostAperture", cpu_host_aperture, 0x140, 0x80, true, 0xe34dd48fb171595e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SEGMENTDESCRIPTOR4.NumInvalidMemoryRanges", num_invalid_memory_ranges, 0x1c0, 0x20, true, 0xeda714abbe9b6dd0)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_SEGMENTDESCRIPTOR4.VprRangeStartOffset", vpr_range_start_offset, 0x200, 0x40, true, 0x26287d3f7cb4396e)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_SEGMENTDESCRIPTOR4.VprRangeSize", vpr_range_size, 0x240, 0x40, true, 0x8246b45a0e414856)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SEGMENTDESCRIPTOR4.VprAlignment", vpr_alignment, 0x280, 0x20, true, 0xaf211d3b85766f04)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SEGMENTDESCRIPTOR4.NumVprSupported", num_vpr_supported, 0x2a0, 0x20, true, 0x2813af7b12eb79c1)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SEGMENTDESCRIPTOR4.VprReserveSize", vpr_reserve_size, 0x2c0, 0x20, true, 0xeb1bbae3042c6784)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SEGMENTDESCRIPTOR4.NumUEFIFrameBufferRanges", num_uefi_frame_buffer_ranges, 0x2e0, 0x20, true, 0xc8775ba00a668700)
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