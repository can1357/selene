#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void*), "_DXGKARG_RENDER.pCommand", p_command, 0x0, 0x40, true, 0x996f9964ee8895a0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RENDER.CommandLength", command_length, 0x40, 0x20, true, 0xe3469f3c8443450c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_RENDER.pDmaBuffer", p_dma_buffer, 0x80, 0x40, true, 0x47b9f40341c83336)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RENDER.DmaSize", dma_size, 0xc0, 0x20, true, 0x3b50fd13d4d5c258)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_RENDER.pDmaBufferPrivateData", p_dma_buffer_private_data, 0x100, 0x40, true, 0xeb9a82d87dbe7865)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RENDER.DmaBufferPrivateDataSize", dma_buffer_private_data_size, 0x140, 0x20, true, 0xc0ea9ac418e4f232)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::allocationlist_t*), "_DXGKARG_RENDER.pAllocationList", p_allocation_list, 0x180, 0x40, true, 0xbf63a25fd3642fc2)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RENDER.AllocationListSize", allocation_list_size, 0x1c0, 0x20, true, 0x9bd69053c9c1e43e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::patchlocationlist_t*), "_DXGKARG_RENDER.pPatchLocationListIn", p_patch_location_list_in, 0x200, 0x40, true, 0xbef3d8baeffa2587)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RENDER.PatchLocationListInSize", patch_location_list_in_size, 0x240, 0x20, true, 0xab85ba81b2c890f7)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::patchlocationlist_t*), "_DXGKARG_RENDER.pPatchLocationListOut", p_patch_location_list_out, 0x280, 0x40, true, 0x3a377a8ce59f430f)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RENDER.PatchLocationListOutSize", patch_location_list_out_size, 0x2c0, 0x20, true, 0xd453c3b71894f8fd)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RENDER.MultipassOffset", multipass_offset, 0x2e0, 0x20, true, 0x912e4f308902130a)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RENDER.DmaBufferSegmentId", dma_buffer_segment_id, 0x300, 0x20, true, 0x1ec8ba1e28342b68)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARG_RENDER.DmaBufferPhysicalAddress", dma_buffer_physical_address, 0x340, 0x40, true, 0x7c31d561d031f16c)
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
#endif