#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::createcontextallocationflags_t), "_DXGKARGCB_CREATECONTEXTALLOCATION.ContextAllocationFlags", context_allocation_flags, 0x0, 0x20, true, 0xf0b2c4d2e7650fe8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_CREATECONTEXTALLOCATION.hAdapter", h_adapter, 0x40, 0x40, true, 0x62131c1058f6a068)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_CREATECONTEXTALLOCATION.hDevice", h_device, 0x80, 0x40, true, 0x83aba6f8022a0f71)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_CREATECONTEXTALLOCATION.hContext", h_context, 0xc0, 0x40, true, 0x765fca76e2e19fd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_CREATECONTEXTALLOCATION.hDriverAllocation", h_driver_allocation, 0x100, 0x40, true, 0xc2921a5d2ab69366)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARGCB_CREATECONTEXTALLOCATION.Size", size, 0x140, 0x40, true, 0xb5af769855efd41a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_CREATECONTEXTALLOCATION.Alignment", alignment, 0x180, 0x20, true, 0x899d41f49c578087)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_CREATECONTEXTALLOCATION.SupportedSegmentSet", supported_segment_set, 0x1a0, 0x20, true, 0xa793b545cfcaaab5)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_CREATECONTEXTALLOCATION.EvictionSegmentSet", eviction_segment_set, 0x1c0, 0x20, true, 0x84cbef6d5978925f)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::segmentpreference_t), "_DXGKARGCB_CREATECONTEXTALLOCATION.PreferredSegment", preferred_segment, 0x1e0, 0x20, true, 0xb4dac8202914796a)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::segmentbankpreference_t), "_DXGKARGCB_CREATECONTEXTALLOCATION.HintedBank", hinted_bank, 0x200, 0x20, true, 0xccef7368fc7134e9)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::allocationinfoflags_t), "_DXGKARGCB_CREATECONTEXTALLOCATION.Flags", flags, 0x220, 0x20, true, 0xd1252c938f57649)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARGCB_CREATECONTEXTALLOCATION.hAllocation", h_allocation, 0x240, 0x40, true, 0x17889bb7bf5f3df8)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARGCB_CREATECONTEXTALLOCATION.PhysicalAdapterIndex", physical_adapter_index, 0x280, 0x20, true, 0xc75db66cc1ad91f2)
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
#endif