#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_MULTIPLANE_OVERLAY_CAPS.Rotation", rotation, 0x0, 0x1, true, 0x1666d439db90b6b2, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_MULTIPLANE_OVERLAY_CAPS.RotationWithoutIndependentFlip", rotation_without_independent_flip, 0x1, 0x1, true, 0x1e439ce2856e0d78, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_MULTIPLANE_OVERLAY_CAPS.VerticalFlip", vertical_flip, 0x2, 0x1, true, 0xaa3cba2e5f68258c, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_MULTIPLANE_OVERLAY_CAPS.HorizontalFlip", horizontal_flip, 0x3, 0x1, true, 0x7ca04b49f99f3a31, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_MULTIPLANE_OVERLAY_CAPS.StretchRGB", stretch_rgb, 0x4, 0x1, true, 0xb6b830ecedd6268d, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_MULTIPLANE_OVERLAY_CAPS.StretchYUV", stretch_yuv, 0x5, 0x1, true, 0xdb86c2ba311cb679, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_MULTIPLANE_OVERLAY_CAPS.BilinearFilter", bilinear_filter, 0x6, 0x1, true, 0xcdd8e9f6bb7ec0c2, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_MULTIPLANE_OVERLAY_CAPS.HighFilter", high_filter, 0x7, 0x1, true, 0x2ff6143a706599da, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_MULTIPLANE_OVERLAY_CAPS.Shared", shared, 0x8, 0x1, true, 0x9a79ccb4161d0250, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_MULTIPLANE_OVERLAY_CAPS.Immediate", immediate, 0x9, 0x1, true, 0xf4a803548037da7a, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_MULTIPLANE_OVERLAY_CAPS.Plane0ForVirtualModeOnly", plane0_for_virtual_mode_only, 0xa, 0x1, true, 0xf967eff156f0c229, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_MULTIPLANE_OVERLAY_CAPS.Version3DDISupport", version3ddi_support, 0xb, 0x1, true, 0x28ca62971ad585d8, 1, uint32_t)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MULTIPLANE_OVERLAY_CAPS.Value", value, 0x0, 0x20, true, 0xbd622c2a62fa9105)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif