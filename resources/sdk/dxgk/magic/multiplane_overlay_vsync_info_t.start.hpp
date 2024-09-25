#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO.LayerIndex", layer_index, 0x0, 0x20, true, 0x5f2aaf1ca46d984b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO.Enabled", enabled, 0x20, 0x20, true, 0x18e4c06830e40395)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO.PhysicalAddress", physical_address, 0x40, 0x40, true, 0x8d0757ba8b303c9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_attributes_t), "_DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO.PlaneAttributes", plane_attributes, 0x80, 0xc0, true, 0x1677c0d2c4e8b5fe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif