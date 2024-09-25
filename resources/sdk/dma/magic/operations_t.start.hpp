#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMA_OPERATIONS.Size", size, 0x0, 0x20, true, 0x3be629c065a651d4)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct dma::adapter_t*)>*), "_DMA_OPERATIONS.PutDmaAdapter", put_dma_adapter, 0x40, 0x40, true, 0xefbed658a2954278)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pallocate_common_buffer_t ), "_DMA_OPERATIONS.AllocateCommonBuffer", allocate_common_buffer, 0x80, 0x40, true, 0xbe2cb63c78a86584)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfree_common_buffer_t ), "_DMA_OPERATIONS.FreeCommonBuffer", free_common_buffer, 0xc0, 0x40, true, 0xfab84edae7a625d6)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pallocate_adapter_channel_t ), "_DMA_OPERATIONS.AllocateAdapterChannel", allocate_adapter_channel, 0x100, 0x40, true, 0x372bd4e1dbc145a)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pflush_adapter_buffers_t ), "_DMA_OPERATIONS.FlushAdapterBuffers", flush_adapter_buffers, 0x140, 0x40, true, 0xa6f7fec710df8974)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct dma::adapter_t*)>*), "_DMA_OPERATIONS.FreeAdapterChannel", free_adapter_channel, 0x180, 0x40, true, 0xf9c64f4d178a87b9)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfree_map_registers_t ), "_DMA_OPERATIONS.FreeMapRegisters", free_map_registers, 0x1c0, 0x40, true, 0x6b2ac9049c2153c4)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pmap_transfer_t ), "_DMA_OPERATIONS.MapTransfer", map_transfer, 0x200, 0x40, true, 0x5ccdca0dbd681b52)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct dma::adapter_t*)>*), "_DMA_OPERATIONS.GetDmaAlignment", get_dma_alignment, 0x240, 0x40, true, 0xcd043622f0cc7f7c)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct dma::adapter_t*)>*), "_DMA_OPERATIONS.ReadDmaCounter", read_dma_counter, 0x280, 0x40, true, 0xcb64395638c9d025)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pget_scatter_gather_list_t ), "_DMA_OPERATIONS.GetScatterGatherList", get_scatter_gather_list, 0x2c0, 0x40, true, 0x4d13c28d2ad5dcc8)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pput_scatter_gather_list_t ), "_DMA_OPERATIONS.PutScatterGatherList", put_scatter_gather_list, 0x300, 0x40, true, 0xc57723428ceb682)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pcalculate_scatter_gather_list_size_t ), "_DMA_OPERATIONS.CalculateScatterGatherList", calculate_scatter_gather_list, 0x340, 0x40, true, 0xa9689957a78aa0dc)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pbuild_scatter_gather_list_t ), "_DMA_OPERATIONS.BuildScatterGatherList", build_scatter_gather_list, 0x380, 0x40, true, 0x4a83b9e6022f0c26)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pbuild_mdl_from_scatter_gather_list_t ), "_DMA_OPERATIONS.BuildMdlFromScatterGatherList", build_mdl_from_scatter_gather_list, 0x3c0, 0x40, true, 0x37166197f08ad162)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pget_dma_adapter_info_t ), "_DMA_OPERATIONS.GetDmaAdapterInfo", get_dma_adapter_info, 0x400, 0x40, true, 0x8374a1865391dcbf)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pget_dma_transfer_info_t ), "_DMA_OPERATIONS.GetDmaTransferInfo", get_dma_transfer_info, 0x440, 0x40, true, 0xbaa17de14dd0bf33)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct dma::adapter_t*, void*)>*), "_DMA_OPERATIONS.InitializeDmaTransferContext", initialize_dma_transfer_context, 0x480, 0x40, true, 0x5e9b0d7cf91dfc74)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pallocate_common_buffer_ex_t ), "_DMA_OPERATIONS.AllocateCommonBufferEx", allocate_common_buffer_ex, 0x4c0, 0x40, true, 0x2565549c4f1a7bec)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pallocate_adapter_channel_ex_t ), "_DMA_OPERATIONS.AllocateAdapterChannelEx", allocate_adapter_channel_ex, 0x500, 0x40, true, 0xd7b1e9af80df3971)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pconfigure_adapter_channel_t ), "_DMA_OPERATIONS.ConfigureAdapterChannel", configure_adapter_channel, 0x540, 0x40, true, 0x41db58bc5acb8bfc)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pcancel_adapter_channel_t ), "_DMA_OPERATIONS.CancelAdapterChannel", cancel_adapter_channel, 0x580, 0x40, true, 0x92f2509ac9628dfd)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pmap_transfer_ex_t ), "_DMA_OPERATIONS.MapTransferEx", map_transfer_ex, 0x5c0, 0x40, true, 0x9be7815aea3f5361)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pget_scatter_gather_list_ex_t ), "_DMA_OPERATIONS.GetScatterGatherListEx", get_scatter_gather_list_ex, 0x600, 0x40, true, 0xa2bcbfa3025d83f7)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pbuild_scatter_gather_list_ex_t ), "_DMA_OPERATIONS.BuildScatterGatherListEx", build_scatter_gather_list_ex, 0x640, 0x40, true, 0x76d8c4aa3d500375)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pflush_adapter_buffers_ex_t ), "_DMA_OPERATIONS.FlushAdapterBuffersEx", flush_adapter_buffers_ex, 0x680, 0x40, true, 0xb40a2526060463ab)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfree_adapter_object_t ), "_DMA_OPERATIONS.FreeAdapterObject", free_adapter_object, 0x6c0, 0x40, true, 0x9c7c3f5a37169d2a)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct dma::adapter_t*, void*)>*), "_DMA_OPERATIONS.CancelMappedTransfer", cancel_mapped_transfer, 0x700, 0x40, true, 0xd9f478abf8ae1417)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pallocate_domain_common_buffer_t ), "_DMA_OPERATIONS.AllocateDomainCommonBuffer", allocate_domain_common_buffer, 0x740, 0x40, true, 0x12ceb6f33bf57ffb)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pflush_dma_buffer_t ), "_DMA_OPERATIONS.FlushDmaBuffer", flush_dma_buffer, 0x780, 0x40, true, 0x6ab4703d090adbd1)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct dma::adapter_t*, void*)>*), "_DMA_OPERATIONS.JoinDmaDomain", join_dma_domain, 0x7c0, 0x40, true, 0x7c8a6fcd807b59c8)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct dma::adapter_t*)>*), "_DMA_OPERATIONS.LeaveDmaDomain", leave_dma_domain, 0x800, 0x40, true, 0x6d1a7838e1ca7e18)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void*(struct dma::adapter_t*)>*), "_DMA_OPERATIONS.GetDmaDomain", get_dma_domain, 0x840, 0x40, true, 0x7f3add1d6c64c327)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pallocate_common_buffer_with_bounds_t ), "_DMA_OPERATIONS.AllocateCommonBufferWithBounds", allocate_common_buffer_with_bounds, 0x880, 0x40, true, 0x52216e1ec9ba5326)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pallocate_common_buffer_vector_t ), "_DMA_OPERATIONS.AllocateCommonBufferVector", allocate_common_buffer_vector, 0x8c0, 0x40, true, 0x8599bbb8b1bbfbb6)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pget_common_buffer_from_vector_by_index_t ), "_DMA_OPERATIONS.GetCommonBufferFromVectorByIndex", get_common_buffer_from_vector_by_index, 0x900, 0x40, true, 0x3e333966fefe7398)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfree_common_buffer_from_vector_t ), "_DMA_OPERATIONS.FreeCommonBufferFromVector", free_common_buffer_from_vector, 0x940, 0x40, true, 0xe624637d14955998)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfree_common_buffer_vector_t ), "_DMA_OPERATIONS.FreeCommonBufferVector", free_common_buffer_vector, 0x980, 0x40, true, 0x91fc0a4795d221c6)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct dma::adapter_t*, struct nt::mdl_t*, struct dma::common_buffer_extended_configuration_t*, uint32_t, int64_t*)>*), "_DMA_OPERATIONS.CreateCommonBufferFromMdl", create_common_buffer_from_mdl, 0x9c0, 0x40, true, 0x14291a8a2654e341)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#endif