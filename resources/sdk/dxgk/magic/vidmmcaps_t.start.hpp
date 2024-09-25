#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDMMCAPS.OutOfOrderLock", out_of_order_lock, 0x0, 0x1, true, 0xd5182ccd26ac4c56, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDMMCAPS.DedicatedPagingEngine", dedicated_paging_engine, 0x1, 0x1, true, 0xd22cb70970d3f82f, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDMMCAPS.PagingEngineCanSwizzle", paging_engine_can_swizzle, 0x2, 0x1, true, 0x105e7a9a2e17a8f, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDMMCAPS.SectionBackedPrimary", section_backed_primary, 0x3, 0x1, true, 0xba40b8db4587e68, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDMMCAPS.CrossAdapterResource", cross_adapter_resource, 0x4, 0x1, true, 0xbf9a567f941cb61a, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDMMCAPS.VirtualAddressingSupported", virtual_addressing_supported, 0x5, 0x1, true, 0x35d6b68d39486da0, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDMMCAPS.GpuMmuSupported", gpu_mmu_supported, 0x6, 0x1, true, 0x2e016db635f0c703, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDMMCAPS.IoMmuSupported", io_mmu_supported, 0x7, 0x1, true, 0xf3723ce746be59b2, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDMMCAPS.ReplicateGdiContent", replicate_gdi_content, 0x8, 0x1, true, 0xf169588473a2748c, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDMMCAPS.NonCpuVisiblePrimary", non_cpu_visible_primary, 0x9, 0x1, true, 0xc041ee0035c546b8, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDMMCAPS.ParavirtualizationSupported", paravirtualization_supported, 0xa, 0x1, true, 0x75d50b0d120b8e37, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDMMCAPS.IoMmuSecureModeSupported", io_mmu_secure_mode_supported, 0xb, 0x1, true, 0xd2b401f10f4d9e2b, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDMMCAPS.DisableSelfRefreshVRAMInS3", disable_self_refresh_vram_in_s3, 0xc, 0x1, true, 0x28053135463d1da0, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_VIDMMCAPS.IoMmuSecureModeRequired", io_mmu_secure_mode_required, 0xd, 0x1, true, 0x369d17923448eb51, 1, uint32_t)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VIDMMCAPS.Value", value, 0x0, 0x20, true, 0x16a69f1e6337656b)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_VIDMMCAPS.PagingNode", paging_node, 0x20, 0x20, true, 0xd182ccb0233e1c60)
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
#endif