#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SUBMITCOMMANDVIRTUAL.hContext", h_context, 0x0, 0x40, true, 0xc13102a58f86cbeb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_SUBMITCOMMANDVIRTUAL.DmaBufferVirtualAddress", dma_buffer_virtual_address, 0x40, 0x40, true, 0x12367ea01576a33)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SUBMITCOMMANDVIRTUAL.DmaBufferSize", dma_buffer_size, 0x80, 0x20, true, 0xc15944e12b004193)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SUBMITCOMMANDVIRTUAL.pDmaBufferPrivateData", p_dma_buffer_private_data, 0xc0, 0x40, true, 0x9648d276e0bc7c02)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SUBMITCOMMANDVIRTUAL.DmaBufferPrivateDataSize", dma_buffer_private_data_size, 0x100, 0x20, true, 0xe8a644d65d8c0174)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SUBMITCOMMANDVIRTUAL.DmaBufferUmdPrivateDataSize", dma_buffer_umd_private_data_size, 0x120, 0x20, true, 0x309145f8a3b7b0e8)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SUBMITCOMMANDVIRTUAL.SubmissionFenceId", submission_fence_id, 0x140, 0x20, true, 0x9be924c09dbfbf4)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SUBMITCOMMANDVIRTUAL.VidPnSourceId", vid_pn_source_id, 0x160, 0x20, true, 0xb43beb26d4c446fe)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::flipinterval_type_t), "_DXGKARG_SUBMITCOMMANDVIRTUAL.FlipInterval", flip_interval, 0x180, 0x20, true, 0x8091d2fc341e4a04)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::submitcommandflags_t), "_DXGKARG_SUBMITCOMMANDVIRTUAL.Flags", flags, 0x1a0, 0x20, true, 0x1450bbdc7e4be653)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SUBMITCOMMANDVIRTUAL.EngineOrdinal", engine_ordinal, 0x1c0, 0x20, true, 0xf7bd0cf1417095a8)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SUBMITCOMMANDVIRTUAL.NodeOrdinal", node_ordinal, 0x1e0, 0x20, true, 0xe460a72534f0592d)
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
#endif