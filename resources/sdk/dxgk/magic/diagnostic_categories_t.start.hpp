#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DIAGNOSTIC_CATEGORIES.Notifications", notifications, 0x0, 0x1, true, 0xab66bf9045112315, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DIAGNOSTIC_CATEGORIES.Progressions", progressions, 0x1, 0x1, true, 0x177566961cd3cc68, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAGNOSTIC_CATEGORIES.Value", value, 0x0, 0x20, true, 0xe4dfd005ec46b352)
#else
#define _m00
#define _m01
#define _m02
#endif