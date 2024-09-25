#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_MULTIPLANE_OVERLAY_GROUP_CAPS.NumPlanes", num_planes, 0x0, 0x20, true, 0xc14cd6965f5075a3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "DXGI_DDI_MULTIPLANE_OVERLAY_GROUP_CAPS.MaxStretchFactor", max_stretch_factor, 0x20, 0x20, true, 0x5bd07323e639fc42)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "DXGI_DDI_MULTIPLANE_OVERLAY_GROUP_CAPS.MaxShrinkFactor", max_shrink_factor, 0x40, 0x20, true, 0xa3eb8c6ce2169831)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_MULTIPLANE_OVERLAY_GROUP_CAPS.OverlayCaps", overlay_caps, 0x60, 0x20, true, 0x2e12e4828ab9f53d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_MULTIPLANE_OVERLAY_GROUP_CAPS.StereoCaps", stereo_caps, 0x80, 0x20, true, 0xd81c40654ae93313)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif