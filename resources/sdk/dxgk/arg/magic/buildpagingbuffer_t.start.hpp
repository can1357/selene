#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_BUILDPAGINGBUFFER.pDmaBuffer", p_dma_buffer, 0x0, 0x40, true, 0x76da6b2dea0307ef)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_BUILDPAGINGBUFFER.DmaSize", dma_size, 0x40, 0x20, true, 0x68494b83bb579441)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_BUILDPAGINGBUFFER.pDmaBufferPrivateData", p_dma_buffer_private_data, 0x80, 0x40, true, 0x8d177ddaf3c90152)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_BUILDPAGINGBUFFER.DmaBufferPrivateDataSize", dma_buffer_private_data_size, 0xc0, 0x20, true, 0x7919741ca8b3422a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::buildpagingbuffer_operation_t), "_DXGKARG_BUILDPAGINGBUFFER.Operation", operation, 0xe0, 0x20, true, 0x78bb039c993b4103)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_BUILDPAGINGBUFFER.MultipassOffset", multipass_offset, 0x100, 0x20, true, 0xde5c296921b7f219)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_BUILDPAGINGBUFFER.Transfer.hAllocation", h_allocation, 0x0, 0x40, true, 0xaf6ef027f03aed28)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_BUILDPAGINGBUFFER.Transfer.TransferOffset", transfer_offset, 0x40, 0x20, true, 0xe795e97be983041d)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_BUILDPAGINGBUFFER.Transfer.TransferSize", transfer_size, 0x80, 0x40, true, 0xce85d3d39a259e4a)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_BUILDPAGINGBUFFER.Transfer.Source.SegmentId", segment_id, 0x0, 0x20, true, 0xc9defeb8ec7cda24)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARG_BUILDPAGINGBUFFER.Transfer.Source.SegmentAddress", segment_address, 0x40, 0x40, true, 0xa029cbc76a7e7667)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_DXGKARG_BUILDPAGINGBUFFER.Transfer.Source.pMdl", p_mdl, 0x40, 0x40, true, 0x40603d44c36288db)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_source_t), "_DXGKARG_BUILDPAGINGBUFFER.Transfer.Source", source, 0xc0, 0x80, true, 0xdf9b618f03959b8a)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_BUILDPAGINGBUFFER.Transfer.Destination.SegmentId", segment_id, 0x0, 0x20, true, 0x1db5bb3688a401da)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARG_BUILDPAGINGBUFFER.Transfer.Destination.SegmentAddress", segment_address, 0x40, 0x40, true, 0x1c79366cc5dce7ee)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_DXGKARG_BUILDPAGINGBUFFER.Transfer.Destination.pMdl", p_mdl, 0x40, 0x40, true, 0xd53dc78d84447748)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_source_t), "_DXGKARG_BUILDPAGINGBUFFER.Transfer.Destination", destination, 0x140, 0x80, true, 0x29dda34ae6f8be25)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::transferflags_t), "_DXGKARG_BUILDPAGINGBUFFER.Transfer.Flags", flags, 0x1c0, 0x20, true, 0xe3e9b796f8a9dd7e)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_BUILDPAGINGBUFFER.Transfer.MdlOffset", mdl_offset, 0x1e0, 0x20, true, 0x1329634aa3a6b2b4)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_transfer_t), "_DXGKARG_BUILDPAGINGBUFFER.Transfer", transfer, 0x140, 0x0, true, 0xb0f0ff02e8744787)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_BUILDPAGINGBUFFER.DiscardContent.hAllocation", h_allocation, 0x0, 0x40, true, 0x91d7f3ef539a7cec)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::discardcontentflags_t), "_DXGKARG_BUILDPAGINGBUFFER.DiscardContent.Flags", flags, 0x40, 0x20, true, 0x1c5606579c32afe8)
#define _m22 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_BUILDPAGINGBUFFER.DiscardContent.SegmentId", segment_id, 0x60, 0x20, true, 0xfa44b851ddd41072)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARG_BUILDPAGINGBUFFER.DiscardContent.SegmentAddress", segment_address, 0x80, 0x40, true, 0x458712f5bf563109)
#define _m24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u2_discard_content_t), "_DXGKARG_BUILDPAGINGBUFFER.DiscardContent", discard_content, 0x140, 0xc0, true, 0x8eed6e32412324c2)
#define _m25 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_BUILDPAGINGBUFFER.ReadPhysical.SegmentId", segment_id, 0x0, 0x20, true, 0x82a84c601b7dbad1)
#define _m26 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARG_BUILDPAGINGBUFFER.ReadPhysical.PhysicalAddress", physical_address, 0x40, 0x40, true, 0xc41a52c096777f89)
#define _m27 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u3_read_physical_t), "_DXGKARG_BUILDPAGINGBUFFER.ReadPhysical", read_physical, 0x140, 0x80, true, 0x5af8e8ad06c5bd36)
#define _m28 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_BUILDPAGINGBUFFER.WritePhysical.SegmentId", segment_id, 0x0, 0x20, true, 0xe8def51a47ff7864)
#define _m29 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARG_BUILDPAGINGBUFFER.WritePhysical.PhysicalAddress", physical_address, 0x40, 0x40, true, 0xc88bd209ae045468)
#define _m30 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u3_read_physical_t), "_DXGKARG_BUILDPAGINGBUFFER.WritePhysical", write_physical, 0x140, 0x80, true, 0xda54324b14c23d29)
#define _m31 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_BUILDPAGINGBUFFER.MapApertureSegment.hDevice", h_device, 0x0, 0x40, true, 0xe2ae61af0cf3be33)
#define _m32 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_BUILDPAGINGBUFFER.MapApertureSegment.hAllocation", h_allocation, 0x40, 0x40, true, 0xe94cca14cf68b892)
#define _m33 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_BUILDPAGINGBUFFER.MapApertureSegment.SegmentId", segment_id, 0x80, 0x20, true, 0x2e3bf71fa6e91853)
#define _m34 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_BUILDPAGINGBUFFER.MapApertureSegment.OffsetInPages", offset_in_pages, 0xc0, 0x40, true, 0xdecc341804d1c16e)
#define _m35 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_BUILDPAGINGBUFFER.MapApertureSegment.NumberOfPages", number_of_pages, 0x100, 0x40, true, 0xaf22235010125d56)
#define _m36 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_DXGKARG_BUILDPAGINGBUFFER.MapApertureSegment.pMdl", p_mdl, 0x140, 0x40, true, 0x757a31ee263e0355)
#define _m37 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::mapapertureflags_t), "_DXGKARG_BUILDPAGINGBUFFER.MapApertureSegment.Flags", flags, 0x180, 0x20, true, 0x8781ee42a6f92654)
#define _m38 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_BUILDPAGINGBUFFER.MapApertureSegment.MdlOffset", mdl_offset, 0x1a0, 0x20, true, 0x9777e96ccd507502)
#define _m39 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u4_map_aperture_segment_t), "_DXGKARG_BUILDPAGINGBUFFER.MapApertureSegment", map_aperture_segment, 0x140, 0xc0, true, 0xeb8068d4e2c9b71b)
#define _m40 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_BUILDPAGINGBUFFER.UnmapApertureSegment.hDevice", h_device, 0x0, 0x40, true, 0x9243e65cfeddd066)
#define _m41 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_BUILDPAGINGBUFFER.UnmapApertureSegment.hAllocation", h_allocation, 0x40, 0x40, true, 0x78ff194c1e375ee6)
#define _m42 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_BUILDPAGINGBUFFER.UnmapApertureSegment.SegmentId", segment_id, 0x80, 0x20, true, 0x75f21f0977f7ecc9)
#define _m43 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_BUILDPAGINGBUFFER.UnmapApertureSegment.OffsetInPages", offset_in_pages, 0xc0, 0x40, true, 0xc0597e214c8b1218)
#define _m44 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_BUILDPAGINGBUFFER.UnmapApertureSegment.NumberOfPages", number_of_pages, 0x100, 0x40, true, 0xa08e22989c448072)
#define _m45 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARG_BUILDPAGINGBUFFER.UnmapApertureSegment.DummyPage", dummy_page, 0x140, 0x40, true, 0x64e0089364728504)
#define _m46 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_unmap_aperture_segment_t), "_DXGKARG_BUILDPAGINGBUFFER.UnmapApertureSegment", unmap_aperture_segment, 0x140, 0x80, true, 0xf0546f31e9910fbc)
#define _m47 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_BUILDPAGINGBUFFER.SpecialLockTransfer.hAllocation", h_allocation, 0x0, 0x40, true, 0x13dfad5b2ac4342e)
#define _m48 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_BUILDPAGINGBUFFER.SpecialLockTransfer.TransferOffset", transfer_offset, 0x40, 0x20, true, 0x820757fc9a7b6514)
#define _m49 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_BUILDPAGINGBUFFER.SpecialLockTransfer.TransferSize", transfer_size, 0x80, 0x40, true, 0xdf913eeae136946a)
#define _m50 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_BUILDPAGINGBUFFER.SpecialLockTransfer.Source.SegmentId", segment_id, 0x0, 0x20, true, 0x2f937f8aaa957572)
#define _m51 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARG_BUILDPAGINGBUFFER.SpecialLockTransfer.Source.SegmentAddress", segment_address, 0x40, 0x40, true, 0xb3c40131d68f78e5)
#define _m52 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_DXGKARG_BUILDPAGINGBUFFER.SpecialLockTransfer.Source.pMdl", p_mdl, 0x40, 0x40, true, 0x3e0a166e5ba5e349)
#define _m53 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_source_t), "_DXGKARG_BUILDPAGINGBUFFER.SpecialLockTransfer.Source", source, 0xc0, 0x80, true, 0x2fcb0182c00ccf68)
#define _m54 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_BUILDPAGINGBUFFER.SpecialLockTransfer.Destination.SegmentId", segment_id, 0x0, 0x20, true, 0xf58755ba5a4e86b4)
#define _m55 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARG_BUILDPAGINGBUFFER.SpecialLockTransfer.Destination.SegmentAddress", segment_address, 0x40, 0x40, true, 0xb3363505b2d71f1f)
#define _m56 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_DXGKARG_BUILDPAGINGBUFFER.SpecialLockTransfer.Destination.pMdl", p_mdl, 0x40, 0x40, true, 0x6113a987594b8051)
#define _m57 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u1_source_t), "_DXGKARG_BUILDPAGINGBUFFER.SpecialLockTransfer.Destination", destination, 0x140, 0x80, true, 0x7aa987044ad3df76)
#define _m58 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::transferflags_t), "_DXGKARG_BUILDPAGINGBUFFER.SpecialLockTransfer.Flags", flags, 0x1c0, 0x20, true, 0x204aa69934dcc4cf)
#define _m59 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_BUILDPAGINGBUFFER.SpecialLockTransfer.SwizzlingRangeId", swizzling_range_id, 0x1e0, 0x20, true, 0x407dfabb21a7ddfa)
#define _m60 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_BUILDPAGINGBUFFER.SpecialLockTransfer.SwizzlingRangeData", swizzling_range_data, 0x200, 0x20, true, 0x929d4de15f5f1998)
#define _m61 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u6_special_lock_transfer_t), "_DXGKARG_BUILDPAGINGBUFFER.SpecialLockTransfer", special_lock_transfer, 0x140, 0x40, true, 0xe97b46cd05d30a89)
#define _m62 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_BUILDPAGINGBUFFER.InitContextResource.hAllocation", h_allocation, 0x0, 0x40, true, 0x8b5e064e4ff6ba95)
#define _m63 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_BUILDPAGINGBUFFER.InitContextResource.Destination.SegmentId", segment_id, 0x0, 0x20, true, 0xe10dfb950d8c5a02)
#define _m64 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGKARG_BUILDPAGINGBUFFER.InitContextResource.Destination.SegmentAddress", segment_address, 0x40, 0x40, true, 0x99c256cda267bc1)
#define _m65 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_DXGKARG_BUILDPAGINGBUFFER.InitContextResource.Destination.pMdl", p_mdl, 0x40, 0x40, true, 0xa9f56d38bd3d0781)
#define _m66 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_BUILDPAGINGBUFFER.InitContextResource.Destination.VirtualAddress", virtual_address, 0x80, 0x40, true, 0x47be2465f9e723d8)
#define _m67 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_BUILDPAGINGBUFFER.InitContextResource.Destination.GpuVirtualAddress", gpu_virtual_address, 0xc0, 0x40, true, 0xa9f2ac1e77834eb)
#define _m68 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u8_destination_t), "_DXGKARG_BUILDPAGINGBUFFER.InitContextResource.Destination", destination, 0x40, 0x0, true, 0xbc6163b02ad4b19)
#define _m69 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u7_init_context_resource_t), "_DXGKARG_BUILDPAGINGBUFFER.InitContextResource", init_context_resource, 0x140, 0x40, true, 0x89b298409596386b)
#define _m70 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::buildpagingbuffer_transfervirtual_t), "_DXGKARG_BUILDPAGINGBUFFER.TransferVirtual", transfer_virtual, 0x140, 0x0, true, 0xcb84f8098082409c)
#define _m71 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::buildpagingbuffer_fillvirtual_t), "_DXGKARG_BUILDPAGINGBUFFER.FillVirtual", fill_virtual, 0x140, 0x40, true, 0x207c5273f94bb815)
#define _m72 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::buildpagingbuffer_updatepagetable_t), "_DXGKARG_BUILDPAGINGBUFFER.UpdatePageTable", update_page_table, 0x140, 0x40, true, 0x2a3a5b549502b89b)
#define _m73 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::buildpagingbuffer_flushtlb_t), "_DXGKARG_BUILDPAGINGBUFFER.FlushTlb", flush_tlb, 0x140, 0x40, true, 0x44f957980b5fba34)
#define _m74 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::buildpagingbuffer_copypagetableentries_t), "_DXGKARG_BUILDPAGINGBUFFER.CopyPageTableEntries", copy_page_table_entries, 0x140, 0x80, true, 0x5b6b6017dbc89129)
#define _m75 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::buildpagingbuffer_updatecontextallocation_t), "_DXGKARG_BUILDPAGINGBUFFER.UpdateContextAllocation", update_context_allocation, 0x140, 0x0, true, 0xd8ce807b9d70314a)
#define _m76 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::buildpagingbuffer_notifyresidency_t), "_DXGKARG_BUILDPAGINGBUFFER.NotifyResidency", notify_residency, 0x140, 0x0, true, 0x7d6127df2948de5d)
#define _m77 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::buildpagingbuffer_signalmonitoredfence_t), "_DXGKARG_BUILDPAGINGBUFFER.SignalMonitoredFence", signal_monitored_fence, 0x140, 0x80, true, 0xc3e4ece77237d3b3)
#define _m78 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_BUILDPAGINGBUFFER.hSystemContext", h_system_context, 0x940, 0x40, true, 0x464c77a147e2cce0)
#define _m79 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_BUILDPAGINGBUFFER.DmaBufferGpuVirtualAddress", dma_buffer_gpu_virtual_address, 0x980, 0x40, true, 0x96f444908c95b7d5)
#define _m80 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_BUILDPAGINGBUFFER.DmaBufferWriteOffset", dma_buffer_write_offset, 0x9c0, 0x20, true, 0xb1716ca026135f27)
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
#define _m24
#define _m25
#define _m26
#define _m27
#define _m28
#define _m29
#define _m30
#define _m31
#define _m32
#define _m33
#define _m34
#define _m35
#define _m36
#define _m37
#define _m38
#define _m39
#define _m40
#define _m41
#define _m42
#define _m43
#define _m44
#define _m45
#define _m46
#define _m47
#define _m48
#define _m49
#define _m50
#define _m51
#define _m52
#define _m53
#define _m54
#define _m55
#define _m56
#define _m57
#define _m58
#define _m59
#define _m60
#define _m61
#define _m62
#define _m63
#define _m64
#define _m65
#define _m66
#define _m67
#define _m68
#define _m69
#define _m70
#define _m71
#define _m72
#define _m73
#define _m74
#define _m75
#define _m76
#define _m77
#define _m78
#define _m79
#define _m80
#endif