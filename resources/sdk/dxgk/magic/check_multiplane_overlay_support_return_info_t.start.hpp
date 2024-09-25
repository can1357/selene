#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO.FailingPlane", failing_plane, 0x0, 0x4, true, 0x3c4f9d269c05b096, 4, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO.TryAgain", try_again, 0x4, 0x1, true, 0xef4bf7581a6f7474, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO.Value", value, 0x0, 0x20, true, 0x373f9c013ded4798)
#else
#define _m00
#define _m01
#define _m02
#endif