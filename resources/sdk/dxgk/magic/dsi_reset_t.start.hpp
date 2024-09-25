#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DSI_RESET.Flags", flags, 0x0, 0x20, true, 0x14a5976f1de15bc3)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_DXGK_DSI_RESET.MipiErrors", mipi_errors, 0x20, 0x10, true, 0xa175a3ce03012a81, 16, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DSI_RESET.ResetFailed", reset_failed, 0x30, 0x1, true, 0x35e2f0b509077940, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DSI_RESET.NeedModeSet", need_mode_set, 0x31, 0x1, true, 0xc5fa35e304e404ac, 1, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DSI_RESET.Results", results, 0x20, 0x20, true, 0xf444d7c69e33e2e9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif