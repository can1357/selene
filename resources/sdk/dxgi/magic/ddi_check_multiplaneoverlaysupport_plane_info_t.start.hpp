#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO.hResource", h_resource, 0x0, 0x40, true, 0x1cb0564e55736576)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO.SubResourceIndex", sub_resource_index, 0x40, 0x20, true, 0x491d729fcfe4929b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::ddi_multiplane_overlay_attributes_t), "DXGI_DDI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO.PlaneAttributes", plane_attributes, 0x80, 0x40, true, 0x6e0b5180d15c06c5)
#else
#define _m00
#define _m01
#define _m02
#endif