#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DIAGNOSTIC_PSR_REFRESH_REASON.Present", present, 0x0, 0x1, true, 0x103ecbc631629aab, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DIAGNOSTIC_PSR_REFRESH_REASON.CursorUpdate", cursor_update, 0x1, 0x1, true, 0x1dd244c02840af2f, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DIAGNOSTIC_PSR_REFRESH_REASON.VSyncEnabled", v_sync_enabled, 0x2, 0x1, true, 0xe27fdb6a2bc7a059, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DIAGNOSTIC_PSR_REFRESH_REASON.ColorTransformationChange", color_transformation_change, 0x3, 0x1, true, 0xd698b306bd54ed05, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DIAGNOSTIC_PSR_REFRESH_REASON.BrightnessChange", brightness_change, 0x4, 0x1, true, 0xbb00847ba0cd808e, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DIAGNOSTIC_PSR_REFRESH_REASON.SinkRequest", sink_request, 0x5, 0x1, true, 0xe40f30c9199017b5, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DIAGNOSTIC_PSR_REFRESH_REASON.Other", other, 0x6, 0x1, true, 0x5bd2a16f94964f11, 1, uint32_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAGNOSTIC_PSR_REFRESH_REASON.Value", value, 0x0, 0x20, true, 0x75ef834f0e496254)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif