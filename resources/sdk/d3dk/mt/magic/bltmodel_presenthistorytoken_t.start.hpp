#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_BLTMODEL_PRESENTHISTORYTOKEN.hLogicalSurface", h_logical_surface, 0x0, 0x40, true, 0xd5860677a45b8025)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_BLTMODEL_PRESENTHISTORYTOKEN.hPhysicalSurface", h_physical_surface, 0x40, 0x40, true, 0x62f87956a373764)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_BLTMODEL_PRESENTHISTORYTOKEN.EventId", event_id, 0x80, 0x40, true, 0x30bebe426a9c5d8b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::dirtyregions_t), "_D3DKMT_BLTMODEL_PRESENTHISTORYTOKEN.DirtyRegions", dirty_regions, 0xc0, 0x20, true, 0x15d9dcc985cef224)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif