#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DDDI_UPDATEALLOCPROPERTY.hPagingQueue", h_paging_queue, 0x0, 0x20, true, 0xac574e4712552fd2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DDDI_UPDATEALLOCPROPERTY.hAllocation", h_allocation, 0x20, 0x20, true, 0xad50c5579578b1e1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DDDI_UPDATEALLOCPROPERTY.SupportedSegmentSet", supported_segment_set, 0x40, 0x20, true, 0x8faa2854847375aa)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::segmentpreference_t), "D3DDDI_UPDATEALLOCPROPERTY.PreferredSegment", preferred_segment, 0x60, 0x20, true, 0x1fd9e71dbcf69141)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::updateallocproperty_flags_t), "D3DDDI_UPDATEALLOCPROPERTY.Flags", flags, 0x80, 0x20, true, 0x6e9c0a16154b94a5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "D3DDDI_UPDATEALLOCPROPERTY.PagingFenceValue", paging_fence_value, 0xc0, 0x40, true, 0xeb5b28c39ca4c363)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "D3DDDI_UPDATEALLOCPROPERTY.SetAccessedPhysically", set_accessed_physically, 0x100, 0x1, true, 0x92e8a486c93e5834, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "D3DDDI_UPDATEALLOCPROPERTY.SetSupportedSegmentSet", set_supported_segment_set, 0x101, 0x1, true, 0x886060a149cbe35c, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "D3DDDI_UPDATEALLOCPROPERTY.SetPreferredSegment", set_preferred_segment, 0x102, 0x1, true, 0x2a5ce1dbd935ca9c, 1, uint32_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DDDI_UPDATEALLOCPROPERTY.PropertyMaskValue", property_mask_value, 0x100, 0x20, true, 0x21eb10cfe784b610)
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
#endif