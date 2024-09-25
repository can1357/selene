#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT.NoProtection", no_protection, 0x0, 0x1, true, 0x1446bb97fb6c40e7, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT.MacroVisionApsTrigger", macro_vision_aps_trigger, 0x1, 0x1, true, 0xa665f53c4a934f3c, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT.MacroVisionFull", macro_vision_full, 0x2, 0x1, true, 0x38a9af12a360799, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif