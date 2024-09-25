#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY1.LayerIndex", layer_index, 0x0, 0x20, true, 0xfc7daeb242a1f186)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY1.Enabled", enabled, 0x20, 0x20, true, 0xa02fc9c088b11fce)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY1.hResource", h_resource, 0x40, 0x40, true, 0xc1f0212b27167020)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY1.SubResourceIndex", sub_resource_index, 0x80, 0x20, true, 0xb6dae8098fb61bba)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgi_ddi_multiplane_overlay_attributes1_t ), "_DXGI_DDI_PRESENT_MULTIPLANE_OVERLAY1.PlaneAttributes", plane_attributes, 0xc0, 0x40, true, 0x7877da5767ec4a4e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif