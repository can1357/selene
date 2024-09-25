#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_PATCH.hDevice", h_device, 0x0, 0x40, true, 0x232c221a368c6089)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_PATCH.hContext", h_context, 0x0, 0x40, true, 0x4ab3eafbff6c851c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PATCH.DmaBufferSegmentId", dma_buffer_segment_id, 0x40, 0x20, true, 0xf0023bb69f03506f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARG_PATCH.DmaBufferPhysicalAddress", dma_buffer_physical_address, 0x80, 0x40, true, 0xcde0e87b016f3611)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_PATCH.pDmaBuffer", p_dma_buffer, 0xc0, 0x40, true, 0x295a7d2cc126af0f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PATCH.DmaBufferSize", dma_buffer_size, 0x100, 0x20, true, 0xc759eecce5c43e6b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PATCH.DmaBufferSubmissionStartOffset", dma_buffer_submission_start_offset, 0x120, 0x20, true, 0xc68b47f248d1d939)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PATCH.DmaBufferSubmissionEndOffset", dma_buffer_submission_end_offset, 0x140, 0x20, true, 0xc22e31b41e2b75cc)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_PATCH.pDmaBufferPrivateData", p_dma_buffer_private_data, 0x180, 0x40, true, 0xae4ebb5b1de8be49)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PATCH.DmaBufferPrivateDataSize", dma_buffer_private_data_size, 0x1c0, 0x20, true, 0x141327a73f866f19)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PATCH.DmaBufferPrivateDataSubmissionStartOffset", dma_buffer_private_data_submission_start_offset, 0x1e0, 0x20, true, 0x50be4eeb65315da9)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PATCH.DmaBufferPrivateDataSubmissionEndOffset", dma_buffer_private_data_submission_end_offset, 0x200, 0x20, true, 0xd913a172c702c76c)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct dxgk::allocationlist_t*), "_DXGKARG_PATCH.pAllocationList", p_allocation_list, 0x240, 0x40, true, 0xebd2749e00a665e9)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PATCH.AllocationListSize", allocation_list_size, 0x280, 0x20, true, 0x799a8f7ecc467fc8)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct d3d::ddi::patchlocationlist_t*), "_DXGKARG_PATCH.pPatchLocationList", p_patch_location_list, 0x2c0, 0x40, true, 0x98e46e95369c37c)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PATCH.PatchLocationListSize", patch_location_list_size, 0x300, 0x20, true, 0xc5d1b826788efbd8)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PATCH.PatchLocationListSubmissionStart", patch_location_list_submission_start, 0x320, 0x20, true, 0x9684bfb87265b60b)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PATCH.PatchLocationListSubmissionLength", patch_location_list_submission_length, 0x340, 0x20, true, 0x2aef10792782faf3)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PATCH.SubmissionFenceId", submission_fence_id, 0x360, 0x20, true, 0x4f270755360a44c1)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::patchflags_t), "_DXGKARG_PATCH.Flags", flags, 0x380, 0x20, true, 0xd0b4baaa1c8ec562)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PATCH.EngineOrdinal", engine_ordinal, 0x3a0, 0x20, true, 0xfbf53eabd13a65f4)
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
#endif