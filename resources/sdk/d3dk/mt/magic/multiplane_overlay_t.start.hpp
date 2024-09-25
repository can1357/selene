#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DKMT_MULTIPLANE_OVERLAY.LayerIndex", layer_index, 0x0, 0x20, true, 0x5f7b1cc121ca3a49)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "D3DKMT_MULTIPLANE_OVERLAY.Enabled", enabled, 0x20, 0x20, true, 0x5ec00ff5b80c0a90)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DKMT_MULTIPLANE_OVERLAY.hAllocation", h_allocation, 0x40, 0x20, true, 0x7affbee916ffe0ad)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::multiplane_overlay_attributes_t), "D3DKMT_MULTIPLANE_OVERLAY.PlaneAttributes", plane_attributes, 0x80, 0x40, true, 0x433556c6187408f7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif