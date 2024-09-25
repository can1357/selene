#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_SEGMENT_CAPS.Size", size, 0x0, 0x40, true, 0x9f536271aec2081a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SEGMENT_CAPS.PageSize", page_size, 0x40, 0x20, true, 0xc1333ce2891a4d35)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SEGMENT_CAPS.SegmentId", segment_id, 0x60, 0x20, true, 0x6465cb13bcb16e06)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMT_SEGMENT_CAPS.bAperture", b_aperture, 0x80, 0x8, true, 0x5221bd8af795a1e2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMT_SEGMENT_CAPS.bReservedSysMem", b_reserved_sys_mem, 0x88, 0x8, true, 0x11560a1400e62d78)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::memory_segment_group_t), "_D3DKMT_SEGMENT_CAPS.BudgetGroup", budget_group, 0xa0, 0x20, true, 0x6158646a3f697c2e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif