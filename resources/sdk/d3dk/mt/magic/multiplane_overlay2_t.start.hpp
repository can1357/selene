#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MULTIPLANE_OVERLAY2.LayerIndex", layer_index, 0x0, 0x20, true, 0xaf05f60c2bae62f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_MULTIPLANE_OVERLAY2.Enabled", enabled, 0x20, 0x20, true, 0xa7791297a88e49bb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MULTIPLANE_OVERLAY2.hAllocation", h_allocation, 0x40, 0x20, true, 0xd82633331ac48ab0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::multiplane_overlay_attributes2_t), "_D3DKMT_MULTIPLANE_OVERLAY2.PlaneAttributes", plane_attributes, 0x80, 0x40, true, 0xb6c75c1e20dafdba)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif