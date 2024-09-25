#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SUBMITCOMMAND.hDevice", h_device, 0x0, 0x40, true, 0xad514510d301e3f6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SUBMITCOMMAND.hContext", h_context, 0x0, 0x40, true, 0x44a697da0a939b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SUBMITCOMMAND.DmaBufferSegmentId", dma_buffer_segment_id, 0x40, 0x20, true, 0x21ced84ced3b179)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARG_SUBMITCOMMAND.DmaBufferPhysicalAddress", dma_buffer_physical_address, 0x80, 0x40, true, 0xe3d42f18674ada85)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SUBMITCOMMAND.DmaBufferSize", dma_buffer_size, 0xc0, 0x20, true, 0xf1a864b65418358e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SUBMITCOMMAND.DmaBufferSubmissionStartOffset", dma_buffer_submission_start_offset, 0xe0, 0x20, true, 0xab79c791f5156a03)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SUBMITCOMMAND.DmaBufferSubmissionEndOffset", dma_buffer_submission_end_offset, 0x100, 0x20, true, 0xa99f441db8f20dc2)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SUBMITCOMMAND.pDmaBufferPrivateData", p_dma_buffer_private_data, 0x140, 0x40, true, 0x6fecd88005a824f)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SUBMITCOMMAND.DmaBufferPrivateDataSize", dma_buffer_private_data_size, 0x180, 0x20, true, 0xeea2020e68f64b46)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SUBMITCOMMAND.DmaBufferPrivateDataSubmissionStartOffset", dma_buffer_private_data_submission_start_offset, 0x1a0, 0x20, true, 0xe0a24e4df75839a5)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SUBMITCOMMAND.DmaBufferPrivateDataSubmissionEndOffset", dma_buffer_private_data_submission_end_offset, 0x1c0, 0x20, true, 0x45f7aa96eea4942d)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SUBMITCOMMAND.SubmissionFenceId", submission_fence_id, 0x1e0, 0x20, true, 0x8ad7ccf00dba1fd7)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SUBMITCOMMAND.VidPnSourceId", vid_pn_source_id, 0x200, 0x20, true, 0x7de8ba16a348493e)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::flipinterval_type_t), "_DXGKARG_SUBMITCOMMAND.FlipInterval", flip_interval, 0x220, 0x20, true, 0xeaaea0afbbf8cd06)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::submitcommandflags_t), "_DXGKARG_SUBMITCOMMAND.Flags", flags, 0x240, 0x20, true, 0x684cf6c5a910eb02)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SUBMITCOMMAND.EngineOrdinal", engine_ordinal, 0x260, 0x20, true, 0xc983ad074b464f63)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_SUBMITCOMMAND.DmaBufferVirtualAddress", dma_buffer_virtual_address, 0x280, 0x40, true, 0x498f7d91a59b8fb6)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SUBMITCOMMAND.NodeOrdinal", node_ordinal, 0x2c0, 0x20, true, 0x65e9eebe939470c1)
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
#endif