#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY.LayerIndex", layer_index, 0x0, 0x20, true, 0x8dc624b82ee1266f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY.Enabled", enabled, 0x20, 0x20, true, 0x82bfdaac443b8c3e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY.hResource", h_resource, 0x40, 0x40, true, 0x599e0b275edf7a2b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY.SubResourceIndex", sub_resource_index, 0x80, 0x20, true, 0x2b396f66894b6d30)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::ddi_multiplane_overlay_attributes_t), "_DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY.PlaneAttributes", plane_attributes, 0xc0, 0x40, true, 0x2e4c20bca2add27c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif