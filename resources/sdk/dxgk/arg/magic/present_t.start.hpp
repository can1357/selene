#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_PRESENT.pDmaBuffer", p_dma_buffer, 0x0, 0x40, true, 0xad203160c440f43f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PRESENT.DmaSize", dma_size, 0x40, 0x20, true, 0x6ca2485ad40ae4d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_PRESENT.pDmaBufferPrivateData", p_dma_buffer_private_data, 0x80, 0x40, true, 0x29ea052d8ed01a73)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PRESENT.DmaBufferPrivateDataSize", dma_buffer_private_data_size, 0xc0, 0x20, true, 0xf45e7809be1e287)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::allocationlist_t*), "_DXGKARG_PRESENT.pAllocationList", p_allocation_list, 0x100, 0x40, true, 0xeb896a51e7f800ce)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::presentallocationinfo_t*), "_DXGKARG_PRESENT.pAllocationInfo", p_allocation_info, 0x100, 0x40, true, 0xc64b29eaab552f77)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::presentmultiplaneoverlayinfo_t*), "_DXGKARG_PRESENT.pPresentMultiPlaneOverlayInfo", p_present_multi_plane_overlay_info, 0x100, 0x40, true, 0xe9fa75d7f2ff4831)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::patchlocationlist_t*), "_DXGKARG_PRESENT.pPatchLocationListOut", p_patch_location_list_out, 0x140, 0x40, true, 0x1a5e1487d9488183)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PRESENT.PatchLocationListOutSize", patch_location_list_out_size, 0x180, 0x20, true, 0x4e8c71983955f1e8)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PRESENT.MultipassOffset", multipass_offset, 0x1a0, 0x20, true, 0x4d39b49a00fe6585)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PRESENT.Color", color, 0x1c0, 0x20, true, 0x72a91789924eef1)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGKARG_PRESENT.DstRect", dst_rect, 0x1e0, 0x80, true, 0x25e2c5b35b430220)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGKARG_PRESENT.SrcRect", src_rect, 0x260, 0x80, true, 0x2353826f6c8eec28)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PRESENT.SubRectCnt", sub_rect_cnt, 0x2e0, 0x20, true, 0x7595fd49f55fdb58)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct tag::rect_t*), "_DXGKARG_PRESENT.pDstSubRects", p_dst_sub_rects, 0x300, 0x40, true, 0xe30ac6188737f85b)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::flipinterval_type_t), "_DXGKARG_PRESENT.FlipInterval", flip_interval, 0x340, 0x20, true, 0x88bd5b1a274f29d0)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::presentflags_t), "_DXGKARG_PRESENT.Flags", flags, 0x360, 0x20, true, 0x363db66c9cb03f27)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PRESENT.DmaBufferSegmentId", dma_buffer_segment_id, 0x380, 0x20, true, 0x967036c9d35e198b)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARG_PRESENT.DmaBufferPhysicalAddress", dma_buffer_physical_address, 0x3c0, 0x40, true, 0x5101feb00a171f94)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_PRESENT.DmaBufferGpuVirtualAddress", dma_buffer_gpu_virtual_address, 0x440, 0x40, true, 0x13bc1257a3520fcd)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PRESENT.NumSrcAllocations", num_src_allocations, 0x480, 0x20, true, 0x9b9ace220b21d121)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PRESENT.NumDstAllocations", num_dst_allocations, 0x4a0, 0x20, true, 0xcaf196bb6804cac8)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_PRESENT.PrivateDriverDataSize", private_driver_data_size, 0x4c0, 0x20, true, 0x586f5a590af13957)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_PRESENT.pPrivateDriverData", p_private_driver_data, 0x500, 0x40, true, 0x4c964133fe4b10c6)
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
#endif