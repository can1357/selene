#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_MULTIPLANE_OVERLAY_CAPS.MaxPlanes", max_planes, 0x0, 0x20, true, 0xee455a37f63e32e3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_MULTIPLANE_OVERLAY_CAPS.NumCapabilityGroups", num_capability_groups, 0x20, 0x20, true, 0xc8a1eed494889d0b)
#else
#define _m00
#define _m01
#endif