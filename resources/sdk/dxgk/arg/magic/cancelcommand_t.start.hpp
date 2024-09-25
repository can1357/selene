#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CANCELCOMMAND.hContext", h_context, 0x0, 0x40, true, 0xec3fbfc8494c08b0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CANCELCOMMAND.pDmaBuffer", p_dma_buffer, 0x40, 0x40, true, 0x7799e80fbd368a4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CANCELCOMMAND.DmaBufferSize", dma_buffer_size, 0x80, 0x20, true, 0xfe965cbf73ee4f6f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CANCELCOMMAND.DmaBufferSubmissionStartOffset", dma_buffer_submission_start_offset, 0xa0, 0x20, true, 0x16976262184662ef)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CANCELCOMMAND.DmaBufferSubmissionEndOffset", dma_buffer_submission_end_offset, 0xc0, 0x20, true, 0x591c8d35eaeefae7)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CANCELCOMMAND.pDmaBufferPrivateData", p_dma_buffer_private_data, 0x100, 0x40, true, 0x81295433435c6b81)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CANCELCOMMAND.DmaBufferPrivateDataSize", dma_buffer_private_data_size, 0x140, 0x20, true, 0x28c8ae3fba03a1cb)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CANCELCOMMAND.DmaBufferPrivateDataSubmissionStartOffset", dma_buffer_private_data_submission_start_offset, 0x160, 0x20, true, 0x3e4abe425de0a139)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CANCELCOMMAND.DmaBufferPrivateDataSubmissionEndOffset", dma_buffer_private_data_submission_end_offset, 0x180, 0x20, true, 0xf66be26c4d69c37b)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct dxgk::allocationlist_t*), "_DXGKARG_CANCELCOMMAND.pAllocationList", p_allocation_list, 0x1c0, 0x40, true, 0x1804245a40125231)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CANCELCOMMAND.AllocationListSize", allocation_list_size, 0x200, 0x20, true, 0x7d7c503751ea2601)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct d3d::ddi::patchlocationlist_t*), "_DXGKARG_CANCELCOMMAND.pPatchLocationList", p_patch_location_list, 0x240, 0x40, true, 0xbfddff2b196752bf)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CANCELCOMMAND.PatchLocationListSize", patch_location_list_size, 0x280, 0x20, true, 0x35db240238454984)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CANCELCOMMAND.PatchLocationListSubmissionStart", patch_location_list_submission_start, 0x2a0, 0x20, true, 0xa3c63181ae89c85)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CANCELCOMMAND.PatchLocationListSubmissionLength", patch_location_list_submission_length, 0x2c0, 0x20, true, 0x63b09cd628e6a0c1)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_CANCELCOMMAND.DmaBufferVirtualAddress", dma_buffer_virtual_address, 0x300, 0x40, true, 0xb1bb10bb2c73fbf4)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CANCELCOMMAND.DmaBufferUmdPrivateDataSize", dma_buffer_umd_private_data_size, 0x340, 0x20, true, 0xf03b67a2ea6c0e79)
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