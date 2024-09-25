#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO.FailingPlane", failing_plane, 0x0, 0x4, true, 0xf346f015dcd0a86b, 4, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO.TryAgain", try_again, 0x4, 0x1, true, 0xb0cf778925deac61, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO.Value", value, 0x0, 0x20, true, 0x568c0c1f0b7504b0)
#else
#define _m00
#define _m01
#define _m02
#endif