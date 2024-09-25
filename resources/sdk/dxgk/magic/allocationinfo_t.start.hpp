#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_ALLOCATIONINFO.pPrivateDriverData", p_private_driver_data, 0x0, 0x40, true, 0x2bd2a2e8e1200249)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ALLOCATIONINFO.PrivateDriverDataSize", private_driver_data_size, 0x40, 0x20, true, 0x4815616917242b18)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ALLOCATIONINFO.Alignment", alignment, 0x60, 0x20, true, 0xa5c9f1fd7f43ed10)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_ALLOCATIONINFO.Size", size, 0x80, 0x40, true, 0xc72c80e814177137)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_ALLOCATIONINFO.PitchAlignedSize", pitch_aligned_size, 0xc0, 0x40, true, 0x8b1b251b05df97dd)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::segmentbankpreference_t), "_DXGK_ALLOCATIONINFO.HintedBank", hinted_bank, 0x100, 0x20, true, 0x4016fdd560945e4f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::segmentpreference_t), "_DXGK_ALLOCATIONINFO.PreferredSegment", preferred_segment, 0x120, 0x20, true, 0x391602e04a57024a)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ALLOCATIONINFO.SupportedReadSegmentSet", supported_read_segment_set, 0x140, 0x20, true, 0xdc964cfa6b078fe7)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ALLOCATIONINFO.SupportedWriteSegmentSet", supported_write_segment_set, 0x160, 0x20, true, 0x964f69b81bf10914)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ALLOCATIONINFO.EvictionSegmentSet", eviction_segment_set, 0x180, 0x20, true, 0x18027e6d0b8e3c96)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ALLOCATIONINFO.MaximumRenamingListLength", maximum_renaming_list_length, 0x1a0, 0x20, true, 0x5309366ba4f2d236)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ALLOCATIONINFO.PhysicalAdapterIndex", physical_adapter_index, 0x1a0, 0x20, true, 0xfb872ca67722186)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_ALLOCATIONINFO.hAllocation", h_allocation, 0x1c0, 0x40, true, 0x19c129e0a05cff61)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::allocationinfoflags_t), "_DXGK_ALLOCATIONINFO.Flags", flags, 0x200, 0x20, true, 0x2c8676c5a8707d46)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::allocationinfoflags_wddm2_0_t), "_DXGK_ALLOCATIONINFO.FlagsWddm2", flags_wddm2, 0x200, 0x20, true, 0x5d26850a1ff22d0e)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::allocationusagehint_t*), "_DXGK_ALLOCATIONINFO.pAllocationUsageHint", p_allocation_usage_hint, 0x240, 0x40, true, 0xc4e12e0711ebe3c8)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ALLOCATIONINFO.AllocationPriority", allocation_priority, 0x280, 0x20, true, 0xe2915e5827d2c8d3)
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
#endif