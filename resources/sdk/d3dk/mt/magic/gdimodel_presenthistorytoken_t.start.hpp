#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_GDIMODEL_PRESENTHISTORYTOKEN.hLogicalSurface", h_logical_surface, 0x0, 0x40, true, 0xd38997f9c39f9c5a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_GDIMODEL_PRESENTHISTORYTOKEN.hPhysicalSurface", h_physical_surface, 0x40, 0x40, true, 0x86c34e98384ea1f0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_D3DKMT_GDIMODEL_PRESENTHISTORYTOKEN.ScrollRect", scroll_rect, 0x80, 0x80, true, 0xeeef3de8730e3206)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "_D3DKMT_GDIMODEL_PRESENTHISTORYTOKEN.ScrollOffset", scroll_offset, 0x100, 0x40, true, 0x6dead70883c573c5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::dirtyregions_t), "_D3DKMT_GDIMODEL_PRESENTHISTORYTOKEN.DirtyRegions", dirty_regions, 0x140, 0x20, true, 0x1f80b16aee054a42)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif