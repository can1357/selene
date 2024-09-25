#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_SCATTERBLT.hLogicalSurfaceDestination", h_logical_surface_destination, 0x0, 0x40, true, 0xaa31b67fb37ca93e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_D3DKMT_SCATTERBLT.hDestinationCompSurfDWM", h_destination_comp_surf_dwm, 0x40, 0x40, true, 0xf46fe561e7761464)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_SCATTERBLT.DestinationCompositionBindingId", destination_composition_binding_id, 0x80, 0x40, true, 0x2e1876dfae6de425)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_D3DKMT_SCATTERBLT.SourceRect", source_rect, 0xc0, 0x80, true, 0x2f310f66a756f9e2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "_D3DKMT_SCATTERBLT.DestinationOffset", destination_offset, 0x140, 0x40, true, 0xa923225ea95c549a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif