#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_VALIDATEUPDATEALLOCPROPERTY.hAllocation", h_allocation, 0x0, 0x40, true, 0x2fcc6933b820f59e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_VALIDATEUPDATEALLOCPROPERTY.SupportedSegmentSet", supported_segment_set, 0x40, 0x20, true, 0xd96168d89a3b29f1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::segmentpreference_t), "_DXGKARG_VALIDATEUPDATEALLOCPROPERTY.PreferredSegment", preferred_segment, 0x60, 0x20, true, 0x44513e1aa7cbc6e4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::updateallocproperty_flags_t), "_DXGKARG_VALIDATEUPDATEALLOCPROPERTY.Flags", flags, 0x80, 0x20, true, 0xbb3d0e37ba5654fb)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGKARG_VALIDATEUPDATEALLOCPROPERTY.SetAccessedPhysically", set_accessed_physically, 0xa0, 0x1, true, 0x8b545b9b91fd6ca5, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGKARG_VALIDATEUPDATEALLOCPROPERTY.SetSupportedSegmentSet", set_supported_segment_set, 0xa1, 0x1, true, 0xc47b99de99b9ef2b, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGKARG_VALIDATEUPDATEALLOCPROPERTY.SetPreferredSegment", set_preferred_segment, 0xa2, 0x1, true, 0x4d9ff4cd9f6e152a, 1, uint32_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_VALIDATEUPDATEALLOCPROPERTY.PropertyMaskValue", property_mask_value, 0xa0, 0x20, true, 0xc1796d7edae644e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif